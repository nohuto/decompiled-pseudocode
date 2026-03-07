__int64 __fastcall VIDMM_GLOBAL::CreateCrossAdapterAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_CROSSADAPTER_ALLOC **a2,
        void *a3,
        SIZE_T a4,
        unsigned __int8 a5)
{
  unsigned int v5; // ebp
  HANDLE v6; // rdi
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rcx

  v5 = 0;
  v6 = 0LL;
  if ( !a3 || a5 || (v6 = MmSecureVirtualMemory(a3, a4, 4u)) != 0LL )
  {
    v11 = operator new(72LL, 0x64356956u, 64LL);
    v12 = v11;
    if ( v11 )
    {
      v13 = (_QWORD *)(v11 + 16);
      v13[1] = v13;
      *v13 = v13;
      KeInitializeSpinLock((PKSPIN_LOCK)(v12 + 32));
      *a2 = (struct _VIDMM_CROSSADAPTER_ALLOC *)v12;
      *(_QWORD *)(v12 + 8) = v6;
    }
    else
    {
      *a2 = 0LL;
      _InterlockedIncrement(&dword_1C00768DC);
      WdLogSingleEntry1(6LL, 2138LL);
      DxgkLogInternalTriageEvent(v14, 262145LL);
      v5 = -1073741801;
      if ( v6 )
        MmUnsecureVirtualMemory(v6);
      if ( *a2 )
        operator delete(*a2);
    }
    return v5;
  }
  else
  {
    WdLogSingleEntry2(1LL, a3, -1073741811LL);
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 3221225485LL;
  }
}
