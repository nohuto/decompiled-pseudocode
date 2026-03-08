/*
 * XREFs of ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008A878
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0090840 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A7CA8 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C0001A10 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU3@@Z @ 0x1C008A990 (-PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitPageDirectory(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_ALLOC **a3)
{
  __int64 v5; // rcx
  struct VIDMM_ALLOC **v6; // r8
  __int64 v7; // r9
  VIDMM_GLOBAL *v8; // rcx
  unsigned __int64 v9; // rcx
  bool v11; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) && *(_QWORD *)(v5 + 16) != v7 )
  {
    v8 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
    v11 = v7;
    LODWORD(v7) = VIDMM_GLOBAL::PageInPageTableOrDirectory(
                    v8,
                    (struct VIDMM_PAGE_TABLE_BASE *)this,
                    this[3],
                    (*((_DWORD *)a2 + 36) & 4) != 0,
                    &v11,
                    v6);
    if ( (int)v7 >= 0 )
    {
      v9 = *(unsigned int *)this;
      if ( (v9 & 0x10) != 0 )
        ++*(_QWORD *)(32 * ((v9 >> 7) & 0x1F) + *((_QWORD *)a2 + 15) + 8);
    }
  }
  return (unsigned int)v7;
}
