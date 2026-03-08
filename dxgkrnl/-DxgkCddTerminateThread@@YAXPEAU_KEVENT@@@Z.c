/*
 * XREFs of ?DxgkCddTerminateThread@@YAXPEAU_KEVENT@@@Z @ 0x1C01DD4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall DxgkCddTerminateThread(PRKEVENT Event, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // [rsp+50h] [rbp-28h] BYREF
  __int64 v7; // [rsp+58h] [rbp-20h]
  char v8; // [rsp+60h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v6 = -1;
  v7 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v8 = 1;
    v6 = 3013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Event, &EventProfilerEnter, a3, 3013);
  }
  else
  {
    v8 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v6, 3013);
  retaddr = 0LL;
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry1(1LL, 2703LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PASSIVE_LEVEL == KeGetCurrentIrql()",
      2703LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeSetEvent(Event, 0, 0);
  PsTerminateSystemThread(0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v6);
  if ( v8 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerExit, v5, v6);
  }
}
