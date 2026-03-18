/*
 * XREFs of ThreadLockExchangeAlways @ 0x1C010150C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C005F954 (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     xxxTrackMouseMove @ 0x1C007E59C (xxxTrackMouseMove.c)
 *     xxxScrollWindowEx @ 0x1C00BFE8C (xxxScrollWindowEx.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0101270 (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     xxxPrintWindow @ 0x1C01E297C (xxxPrintWindow.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02068EC (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0210104 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C02105B8 (xxxUpdateThreadsWindows.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadLockExchangeAlways(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  HMLockObject(a1);
  if ( v2 )
    return HMUnlockObject(v2);
  return v2;
}
