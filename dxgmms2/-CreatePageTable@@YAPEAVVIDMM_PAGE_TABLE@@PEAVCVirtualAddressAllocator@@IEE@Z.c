/*
 * XREFs of ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0092E28
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0090840 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00F21E4 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00F2438 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0092F4C (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C009375C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

struct VIDMM_PAGE_TABLE *__fastcall CreatePageTable(
        struct CVirtualAddressAllocator *a1,
        unsigned int a2,
        unsigned __int8 a3,
        char a4)
{
  __int64 v5; // rbp
  VIDMM_PAGE_TABLE *v8; // rax
  VIDMM_PAGE_TABLE *v9; // rbx
  unsigned int v10; // r8d
  __int64 v12; // rcx
  __int64 v13; // rcx

  v5 = a2;
  v8 = (VIDMM_PAGE_TABLE *)operator new(48LL, 0x33356956u, 256LL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *((_OWORD *)v8 + 1) = 0LL;
    *((_OWORD *)v8 + 2) = 0LL;
    *(_DWORD *)v8 = (v5 & 0x1F) << 7;
    v10 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 40224LL) + 1616 * v5 + 84) >> 4;
    if ( !a3 )
      v10 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 40224LL) + 1616 * v5 + 84);
    if ( (int)VIDMM_PAGE_TABLE::InitializePageTable(v8, a1, v10, a3, a4) >= 0 )
      return v9;
    WdLogSingleEntry1(1LL, 4303LL);
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    VIDMM_PAGE_TABLE::DestroyPageTable(v9, a1, 0LL);
  }
  else
  {
    WdLogSingleEntry1(1LL, 4288LL);
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
  }
  return 0LL;
}
