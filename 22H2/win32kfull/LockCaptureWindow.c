/*
 * XREFs of LockCaptureWindow @ 0x1C00C0664
 * Callers:
 *     zzzAttachToQueue @ 0x1C0011EF4 (zzzAttachToQueue.c)
 *     xxxCapture @ 0x1C00C02CC (xxxCapture.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C0052508 (UpdateRawMouseMode.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C00C0724 (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 */

__int64 __fastcall LockCaptureWindow(struct tagQ *a1, struct tagWND *a2)
{
  __int64 v3; // xmm1_8
  bool v5; // zf
  __int64 v6; // xmm1_8
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v3 = *((_QWORD *)a1 + 2);
  v5 = *((_QWORD *)a1 + 13) == 0LL;
  v10 = *(_OWORD *)a1;
  v11 = v3;
  v6 = *((_QWORD *)&gpsiLock + 2);
  v10 = gpsiLock;
  v11 = v6;
  if ( !v5 )
    --*(_DWORD *)(gpsi + 6992LL);
  if ( a2 )
    ++*(_DWORD *)(gpsi + 6992LL);
  *(_QWORD *)&v10 = (char *)a1 + 104;
  *((_QWORD *)&v10 + 1) = a2;
  v7 = HMAssignmentLock(&v10);
  UpdateRawMouseMode((__int64)a1, v8);
  InputTraceLogging::Mouse::SetCapture(a1, a2, 0);
  return v7;
}
