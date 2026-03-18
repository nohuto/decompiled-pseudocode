/*
 * XREFs of LockCaptureWindow @ 0x1C00AAA80
 * Callers:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C00A898C (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     xxxCapture @ 0x1C00AA7F8 (xxxCapture.c)
 * Callees:
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C00AAB18 (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     UpdateRawMouseMode @ 0x1C00ABF48 (UpdateRawMouseMode.c)
 */

__int64 __fastcall LockCaptureWindow(struct tagQ *a1, struct tagWND *a2)
{
  __int64 v4; // rbx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)a1 + 13) )
    --*(_DWORD *)(gpsi + 6992LL);
  if ( a2 )
    ++*(_DWORD *)(gpsi + 6992LL);
  v6[0] = (char *)a1 + 104;
  v6[1] = a2;
  v4 = HMAssignmentLock(v6, 0LL);
  UpdateRawMouseMode(a1);
  InputTraceLogging::Mouse::SetCapture(a1, a2, 0);
  return v4;
}
