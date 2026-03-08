/*
 * XREFs of DxgkCompleteTopologyTransition @ 0x1C01C3FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C000B150 (-ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z.c)
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000B1E0 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C01C24B0 (DxgkInvalidateMonitorConnections.c)
 */

__int64 DxgkCompleteTopologyTransition()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  int v2; // ebx
  DXGGLOBAL *Global; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGGLOBAL *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // [rsp+20h] [rbp-39h] BYREF
  __int64 v13; // [rsp+28h] [rbp-31h]
  char v14; // [rsp+30h] [rbp-29h]
  _QWORD v15[3]; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v16[10]; // [rsp+50h] [rbp-9h] BYREF

  memset(v16, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v16[1]);
  v12 = -1;
  v13 = 0LL;
  v16[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v16[3]) = 38;
  LOBYTE(v16[6]) = -1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2173;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v0, &EventProfilerEnter, v1, 2173);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v12, 2173);
  v2 = 0;
  Global = DXGGLOBAL::GetGlobal();
  if ( DXGGLOBAL::ToggleTopologyTransition(Global, 0) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4, v6, v7) + 24) = 8028LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4, v6, v7) + 24) = 8032LL;
    v15[0] = 0LL;
    v15[1] = v16;
    v8 = DXGGLOBAL::GetGlobal();
    v2 = DXGGLOBAL::IterateAdaptersWithCallback(
           (__int64)v8,
           (__int64 (__fastcall *)(_QWORD *, __int64))CompleteTopologyTransitionCallback,
           (__int64)v15,
           4);
    if ( v2 >= 0 )
      DxgkMiracastEnforceInactiveMonitorPolicy(v15);
  }
  DxgkInvalidateMonitorConnections(1LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v12);
  return (unsigned int)v2;
}
