/*
 * XREFs of ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1C00C475A
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0090840 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C0001A10 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0093288 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z @ 0x1C00933C0 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned int v9; // r8d
  int v10; // r9d
  int v11; // r10d
  struct VIDMM_GLOBAL *v12; // r11
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // esi
  unsigned int v16; // edi
  unsigned int v17; // edi
  int updated; // ebx
  __int64 v19; // rcx

  v5 = a4;
  if ( (a4 & 0xFFF) != 0 || (a4 >> 12) + a5 <= a4 >> 12 )
    return 3221225485LL;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident(this) )
    return 0LL;
  v13 = 1616LL * ((v9 >> 7) & 0x1F);
  v14 = *((_QWORD *)v12 + 5028);
  v15 = v10 & *(_DWORD *)(v13 + v14 + 80);
  v16 = *(_DWORD *)(v13 + v14 + 80) & (v11 - 1);
  if ( (v9 & 0x40) != 0 )
  {
    v15 >>= 4;
    v16 >>= 4;
    v5 &= 0xFFFFFFFFFFFF0000uLL;
  }
  v17 = v16 - v15;
  VIDMM_PAGE_TABLE::InvalidatePageTable(this, v12, v15, v17 + 1, (unsigned __int8 *)a3 + 69);
  if ( !*((_DWORD *)this + 1) && (*((_DWORD *)a2 + 36) & 4) == 0 )
    return 0LL;
  updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
              this,
              a2,
              v15,
              v17 + 1,
              v5 >> 12,
              (struct _DXGK_UPDATEPAGETABLEFLAGS)((*(_DWORD *)this >> 3) & 8));
  if ( updated >= 0 )
    return 0LL;
  WdLogSingleEntry1(1LL, 6541LL);
  DxgkLogInternalTriageEvent(v19, 0x40000LL);
  return (unsigned int)updated;
}
