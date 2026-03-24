/*
 * XREFs of xxxWindowHitTest @ 0x1C00D735C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowHitTest2 @ 0x1C00D7414 (xxxWindowHitTest2.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C02160E8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C0217014 (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     xxxHelpLoop @ 0x1C025019C (xxxHelpLoop.c)
 * Callees:
 *     ThreadLockExchangeAlways @ 0x1C00C135C (ThreadLockExchangeAlways.c)
 *     xxxWindowHitTest2 @ 0x1C00D7414 (xxxWindowHitTest2.c)
 */

__int64 __fastcall xxxWindowHitTest(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v4[2] = 0LL;
  v1 = 0LL;
  v2 = a1;
  v4[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v4;
  for ( v4[1] = 0LL; v2; v2 = *(_QWORD *)(v2 + 88) )
  {
    ThreadLockExchangeAlways(v2, (__int64)v4);
    v1 = xxxWindowHitTest2(v2);
    if ( v1 )
      break;
  }
  ThreadUnlock1(a1);
  return v1;
}
