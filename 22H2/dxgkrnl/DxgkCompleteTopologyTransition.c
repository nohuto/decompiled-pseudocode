/*
 * XREFs of DxgkCompleteTopologyTransition @ 0x1C0149760
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000C840 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C000C914 (-ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C013C28C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C01480C0 (DxgkInvalidateMonitorConnections.c)
 */

__int64 DxgkCompleteTopologyTransition()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+20h] [rbp-39h] BYREF
  __int64 v16; // [rsp+28h] [rbp-31h]
  char v17; // [rsp+30h] [rbp-29h]
  _QWORD v18[3]; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v19[10]; // [rsp+50h] [rbp-9h] BYREF

  memset(v19, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v19[1]);
  v15 = -1;
  v16 = 0LL;
  v19[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v19[3]) = 38;
  LOBYTE(v19[6]) = -1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2173;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v0, &EventProfilerEnter, v1, 2173);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 2173LL);
  v2 = 0;
  Global = DXGGLOBAL::GetGlobal(v4, v3);
  if ( DXGGLOBAL::ToggleTopologyTransition(Global, 0LL) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6) + 24) = 7626LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6) + 24) = 7630LL;
    v18[0] = 0LL;
    v18[1] = v19;
    v10 = DXGGLOBAL::GetGlobal(v9, v8);
    v2 = DXGGLOBAL::IterateAdaptersWithCallback(
           (__int64)v10,
           (__int64 (__fastcall *)(_QWORD *, __int64))CompleteTopologyTransitionCallback,
           (__int64)v18,
           4);
    if ( v2 >= 0 )
      DxgkMiracastEnforceInactiveMonitorPolicy(v18);
  }
  DxgkInvalidateMonitorConnections(1uLL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15, v11);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v15);
  return (unsigned int)v2;
}
