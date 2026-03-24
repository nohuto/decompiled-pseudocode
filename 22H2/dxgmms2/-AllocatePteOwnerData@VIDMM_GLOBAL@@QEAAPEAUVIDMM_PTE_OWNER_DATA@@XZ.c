/*
 * XREFs of ?AllocatePteOwnerData@VIDMM_GLOBAL@@QEAAPEAUVIDMM_PTE_OWNER_DATA@@XZ @ 0x1C0025FB4
 * Callers:
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1C006011C (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1C0026034 (ExAllocateFromPagedLookasideList.c)
 */

struct VIDMM_PTE_OWNER_DATA *__fastcall VIDMM_GLOBAL::AllocatePteOwnerData(VIDMM_GLOBAL *this)
{
  return (struct VIDMM_PTE_OWNER_DATA *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 40256));
}
