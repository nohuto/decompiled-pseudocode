/*
 * XREFs of ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C020F03C
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01E8700 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C02FA220 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C0020A28 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C0020B80 (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

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
