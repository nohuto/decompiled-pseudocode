/*
 * XREFs of ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0041920
 * Callers:
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C004174C (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E5494 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C01E6378 (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     xxxHelpLoop @ 0x1C0239514 (xxxHelpLoop.c)
 * Callees:
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C004174C (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C00419D0 (ThreadLockExchangeAlways.c)
 */

HWND __fastcall xxxWindowHitTest(struct tagWND *a1, struct tagPOINT a2, int *a3, unsigned int a4)
{
  HWND v4; // rsi
  struct tagWND *v8; // rdi
  __int64 v9; // rdx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[2] = 0LL;
  v4 = 0LL;
  v8 = a1;
  v9 = gptiCurrent;
  v11[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v11;
  for ( v11[1] = 0LL; v8; v8 = (struct tagWND *)*((_QWORD *)v8 + 11) )
  {
    ThreadLockExchangeAlways(v8, v11);
    v4 = xxxWindowHitTest2(v8, a2, a3, a4);
    if ( v4 )
      break;
  }
  ThreadUnlock1(a1, v9, a3);
  return v4;
}
