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
