struct VIDMM_ALLOC **__fastcall CreatePageDirectory(
        struct CVirtualAddressAllocator *a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  VIDMM_PAGE_DIRECTORY *v7; // rax
  VIDMM_PAGE_DIRECTORY *v8; // rax
  struct VIDMM_ALLOC **v9; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v6 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 40224LL) + 1616LL * a2;
  v7 = (VIDMM_PAGE_DIRECTORY *)operator new(56LL, 0x36356956u, 256LL);
  if ( v7
    && (v8 = VIDMM_PAGE_DIRECTORY::VIDMM_PAGE_DIRECTORY(v7, a2, *(_DWORD *)(v6 + 436), a3),
        (v9 = (struct VIDMM_ALLOC **)v8) != 0LL) )
  {
    if ( (int)VIDMM_PAGE_DIRECTORY::InitializePageDirectory(v8, a1) >= 0 )
      return v9;
    WdLogSingleEntry1(1LL, 4431LL);
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
    VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v9, a1, 0LL);
  }
  else
  {
    WdLogSingleEntry1(1LL, 4425LL);
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
  }
  return 0LL;
}
