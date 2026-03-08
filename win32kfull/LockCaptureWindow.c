/*
 * XREFs of LockCaptureWindow @ 0x1C0010C8C
 * Callers:
 *     xxxCapture @ 0x1C0010A5C (xxxCapture.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C00CD940 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 * Callees:
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C0010D24 (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     UpdateRawMouseMode @ 0x1C00CE364 (UpdateRawMouseMode.c)
 */

__int64 __fastcall LockCaptureWindow(struct tagQ *a1, struct tagWND *a2)
{
  __int64 v4; // rbx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)a1 + 14) )
    --*(_DWORD *)(gpsi + 6992LL);
  if ( a2 )
    ++*(_DWORD *)(gpsi + 6992LL);
  v6[0] = (char *)a1 + 112;
  v6[1] = a2;
  v4 = HMAssignmentLock(v6, 0LL);
  UpdateRawMouseMode(a1);
  InputTraceLogging::Mouse::SetCapture(a1, a2, 0);
  return v4;
}
