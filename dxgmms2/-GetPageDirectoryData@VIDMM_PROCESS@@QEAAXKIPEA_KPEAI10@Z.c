/*
 * XREFs of ?GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z @ 0x1C00C440A
 * Callers:
 *     VidSchiEnsureRootPageTableUpdated @ 0x1C00C4DE4 (VidSchiEnsureRootPageTableUpdated.c)
 * Callees:
 *     ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C00C3138 (-GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z.c)
 */

void __fastcall VIDMM_PROCESS::GetPageDirectoryData(
        VIDMM_PROCESS *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 *a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned __int64 *a7)
{
  __int64 v7; // rcx
  CVirtualAddressAllocator *v8; // rcx

  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( v7 )
  {
    v8 = *(CVirtualAddressAllocator **)(v7 + 504);
    if ( v8 )
      CVirtualAddressAllocator::GetPageDirectoryData(v8, a3, a4, a5, a6, a7);
  }
}
