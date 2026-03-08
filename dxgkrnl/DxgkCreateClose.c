/*
 * XREFs of DxgkCreateClose @ 0x1C01DA5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkCreateClose(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+30h] [rbp-18h]

  v7 = -1;
  v8 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v9 = 1;
    v7 = 1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 1);
  }
  else
  {
    v9 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v7, 1);
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
  if ( v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerExit, v5, v7);
  return 0LL;
}
