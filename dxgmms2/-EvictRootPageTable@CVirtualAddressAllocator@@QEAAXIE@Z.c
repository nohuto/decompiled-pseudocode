/*
 * XREFs of ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C002DE60
 * Callers:
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00B5720 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00C26EC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0095AF0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 */

void __fastcall CVirtualAddressAllocator::EvictRootPageTable(CVirtualAddressAllocator *this, unsigned int a2, char a3)
{
  VIDMM_PAGE_DIRECTORY *v3; // r10

  v3 = *(VIDMM_PAGE_DIRECTORY **)(32LL * a2 + *((_QWORD *)this + 15));
  if ( v3 )
    VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v3, this, 0LL, 1u, a3);
}
