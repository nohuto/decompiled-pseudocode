/*
 * XREFs of ?ReleaseSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAXK@Z @ 0x1C0350DCC
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02B1790 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGSESSIONDATA::ReleaseSessionAdapterOrdinal(DXGSESSIONDATA *this, ULONG a2)
{
  _BYTE v4[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( a2 >= 2 )
  {
    WdLogSingleEntry1(1LL, 4870LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"SessionAdapterOrdinal < MAX_SESSIONIZED_ADAPTERS_PER_SESSION",
      4870LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGSESSIONDATA *)((char *)this + 19160), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  RtlClearBits((PRTL_BITMAP)((char *)this + 19208), a2, 1u);
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
