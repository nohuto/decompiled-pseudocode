__int64 __fastcall VIDMM_GLOBAL::SetExistingSysMemStore(
        VIDMM_GLOBAL *this,
        struct _KTHREAD ****a2,
        struct _KTHREAD *a3)
{
  struct _KTHREAD **v5; // rsi
  __int64 v6; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rcx

  v5 = **a2;
  if ( ((_DWORD)v5[9] & 0x8000) != 0 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v5 + 37));
    v8 = 0;
    if ( *((_DWORD *)v5 + 146) )
    {
      WdLogSingleEntry1(1LL, 2513LL);
      DxgkLogInternalTriageEvent(v9, 0x40000LL);
      v8 = -1073741811;
    }
    else
    {
      (**a2)[72] = a3;
    }
    DXGFASTMUTEX::Release(v5 + 37);
    return v8;
  }
  else
  {
    WdLogSingleEntry1(1LL, a2);
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221225485LL;
  }
}
