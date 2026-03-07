__int64 __fastcall MODE_UNION_LIST::GetUniqueModes(
        const void **this,
        unsigned __int64 a2,
        struct _D3DKMT_DISPLAYMODE *a3,
        unsigned int *a4)
{
  union _LARGE_INTEGER *Global; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  _BYTE v12[16]; // [rsp+50h] [rbp-18h] BYREF

  Global = (union _LARGE_INTEGER *)DXGGLOBAL::GetGlobal();
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v12, Global + 18);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v12);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 21);
  v9 = *((unsigned int *)this + 4);
  if ( a2 < v9 )
    LODWORD(v9) = a2;
  v10 = (unsigned int)v9;
  memmove(a3, this[1], 44LL * (unsigned int)v9);
  if ( a2 < *((unsigned int *)this + 4) )
  {
    WdLogSingleEntry1(2LL, 2382LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DDI-VIOLATION: Miniport reported more functional VidPN modalities than in the previous mode enumeration p"
                "erformed under the same shared adapter access!",
      2382LL,
      0LL,
      0LL,
      0LL,
      0LL);
    WdLogSingleEntry1(3LL, a2);
    return 3221225507LL;
  }
  else
  {
    *a4 = v10;
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal() + 9, v10);
    return 0LL;
  }
}
