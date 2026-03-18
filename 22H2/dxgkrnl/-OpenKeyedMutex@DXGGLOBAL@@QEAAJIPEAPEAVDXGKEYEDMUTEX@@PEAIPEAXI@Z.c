/*
 * XREFs of ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C03508AC
 * Callers:
 *     DxgkOpenKeyedMutex @ 0x1C0352DD0 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C0353100 (DxgkOpenKeyedMutex2.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000295C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C00029AC (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0054234 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0350488 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::OpenKeyedMutex(
        DXGGLOBAL *this,
        unsigned int a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        char *a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  volatile signed __int64 *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  int v15; // eax
  unsigned int v16; // edi
  _BYTE v17[8]; // [rsp+50h] [rbp-18h] BYREF
  char v18; // [rsp+58h] [rbp-10h]

  v6 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 4636LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppKeyedMutex", 4636LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 4637LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"phKeyedMutex", 4637LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a3 = 0LL;
  *a4 = 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v17);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  Global = DXGGLOBAL::GetGlobal();
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v6, 9);
  v11 = (volatile signed __int64 *)ObjectA;
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 24));
    v12 = *(_QWORD *)(ObjectA + 24);
    while ( v12 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64(v11 + 3, v12 + 1, v12);
      if ( v13 == v12 )
      {
        if ( v18 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
        v15 = DXGKEYEDMUTEX::Open((DXGKEYEDMUTEX *)v11, a4, a5, a6, 1);
        v16 = v15;
        if ( v15 < 0 )
          WdLogSingleEntry2(3LL, v6, v15);
        else
          *a3 = (struct DXGKEYEDMUTEX *)v11;
        DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v11);
        return v16;
      }
    }
  }
  WdLogSingleEntry2(3LL, v6, -1073741811LL);
  if ( v18 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  return 3221225485LL;
}
