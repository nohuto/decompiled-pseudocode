/*
 * XREFs of ?DxgkpProcessStatusChangeWork@@YAXPEAX@Z @ 0x1C0187080
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1C0188444 (-ProcessStatusChange@DXGPROCESS@@IEAAXXZ.c)
 */

void __fastcall DxgkpProcessStatusChangeWork(DXGPROCESS *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+30h] [rbp-18h]

  v6 = -1;
  v7 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v8 = 1;
    v6 = 2211;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 2211);
  }
  else
  {
    v8 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v6, 2211);
  DXGPROCESS::ProcessStatusChange(this);
  _InterlockedDecrement((volatile signed __int32 *)this + 110);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v6);
  if ( v8 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerExit, v5, v6);
  }
}
