#ifndef _K_PMM_H_
#define _K_PMM_H_

#include "k_avl_tree.h"
#include "k_linked_list.h"
#include "g_abi.h"
#include "s_pmm.h"
#include "k_atomic.h"

//#define PMM_PAGE_ATTR_FREE_BIT 0
//#define PMM_PAGE_ATTR_PAGED_BIT 1
//
//typedef struct
//{
//    uint32_t attr;
//} k_physical_page_attr_t;

k_status_t KAPI sx_pmm_init(k_pmm_info_t *info);

k_status_t KAPI k_alloc_page(k_physical_addr_t *out);

k_status_t KAPI k_free_page(k_physical_addr_t base);

// TODO: implement these somehow, i might just reserve the first 16MB for these
int32_t KAPI k_alloc_contiguous_pages(uint64_t num_of_page,
                                      k_physical_addr_t highest_p_addr,
                                      k_physical_addr_t *out);

int32_t KAPI k_free_contiguous_pages(k_physical_addr_t base);

#endif