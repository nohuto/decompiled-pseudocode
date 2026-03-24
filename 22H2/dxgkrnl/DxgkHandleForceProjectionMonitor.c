/*
 * XREFs of DxgkHandleForceProjectionMonitor @ 0x1C0298280
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C0133530 (MonitorGetMonitorHandle.c)
 *     MonitorGetMonitorType @ 0x1C01356A8 (MonitorGetMonitorType.c)
 *     MonitorReleaseMonitorHandle @ 0x1C0139140 (MonitorReleaseMonitorHandle.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C01480C0 (DxgkInvalidateMonitorConnections.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02DE508 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C02F3754 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C02F3ABC (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall DxgkHandleForceProjectionMonitor(struct _LUID a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // r13
  __int64 v6; // r12
  __int64 v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // r12d
  __int64 v18; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  DXGADAPTER *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // r8d
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  signed int v36; // edi
  int MonitorHandle; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int MonitorType; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int SimulatedMonitor; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // r8
  int v59; // [rsp+20h] [rbp-E0h]
  int v60; // [rsp+30h] [rbp-D0h]
  char v61[4]; // [rsp+40h] [rbp-C0h] BYREF
  signed int v62; // [rsp+44h] [rbp-BCh] BYREF
  struct HDXGMONITOR__ *v63; // [rsp+48h] [rbp-B8h] BYREF
  struct _LUID v64; // [rsp+50h] [rbp-B0h]
  int v65; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+60h] [rbp-A0h]
  char v67; // [rsp+68h] [rbp-98h]
  unsigned __int64 v68; // [rsp+78h] [rbp-88h] BYREF
  __int64 v69[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v70[144]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = a2;
  v6 = a3;
  v64 = a1;
  v7 = a4;
  memset(v69, 0, 0x48uLL);
  v8 = 3;
  EtwActivityIdControl(3u, (LPGUID)&v69[1]);
  v65 = -1;
  v66 = 0LL;
  v69[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v69[3]) = 41;
  LOBYTE(v69[6]) = -1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v67 = 1;
    v65 = 2179;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerEnter, v10, 2179);
  }
  else
  {
    v67 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v65, 2179LL);
  v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
  v13[4] = v4;
  v13[6] = v64.HighPart;
  v13[7] = a1.LowPart;
  v13[3] = v6;
  v13[5] = v7;
  WdLogEvent5_WdEvent(v13);
  v16 = v6;
  v17 = v6 & 0x7FFFFFFF;
  v64.LowPart = v16 >> 31;
  if ( v17 > 2 )
  {
    v18 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v18 + 24) = v17;
LABEL_53:
    WdLogEvent5_WdError(v18);
    goto LABEL_54;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      if ( (_DWORD)v7 != 2 )
      {
        v18 = WdLogNewEntry5_WdError(v15, v14);
        *(_QWORD *)(v18 + 24) = v7;
        goto LABEL_53;
      }
      v8 = 4;
    }
  }
  else
  {
    v8 = 2;
  }
  Global = DXGGLOBAL::GetGlobal(v15, v14);
  v20 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v68);
  v24 = v20;
  if ( !v20 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = 1923LL;
    WdLogEvent5_WdWarning(v25);
LABEL_54:
    LODWORD(v28) = -1073741811;
    goto LABEL_55;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v70, v20, 0LL);
  v28 = (int)COREADAPTERACCESS::AcquireExclusive((__int64)v70, (unsigned int)(v27 + 1));
  DXGADAPTER::ReleaseReference(v24);
  if ( (int)v28 < 0 )
  {
    v32 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v32 + 24) = v24;
    *(_QWORD *)(v32 + 32) = v28;
    goto LABEL_50;
  }
  v61[0] = 0;
  LODWORD(v28) = DmmIsTargetForceable(v24, (unsigned int)v4, v61, 0LL);
  if ( (int)v28 >= 0 && !v61[0] )
  {
    v35 = WdLogNewEntry5_WdEvent(v34, v33);
    *(_QWORD *)(v35 + 24) = v4;
    *(_QWORD *)(v35 + 32) = v24;
    WdLogEvent5_WdEvent(v35);
    LODWORD(v28) = -1073741811;
  }
  v36 = 0;
  v62 = 0;
  if ( (int)v28 >= 0 )
  {
    v63 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle((__int64)v24, (unsigned int)v4, 0, DxgkHandleForceProjectionMonitor, &v63);
    LODWORD(v28) = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      if ( MonitorHandle == -1073741275 )
      {
        if ( v63 )
        {
          v46 = WdLogNewEntry5_WdAssertion(v39, v38);
          *(_QWORD *)(v46 + 24) = 1990LL;
          WdLogEvent5_WdAssertion(v46);
        }
        LODWORD(v28) = 0;
      }
    }
    else
    {
      MonitorType = MonitorGetMonitorType(v63, &v62);
      v36 = v62;
      LODWORD(v28) = MonitorType;
      if ( MonitorType >= 0 && !v62 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v43, v42);
        *(_QWORD *)(v44 + 24) = 1979LL;
        WdLogEvent5_WdAssertion(v44);
      }
      if ( (int)MonitorReleaseMonitorHandle((__int64)v24, (__int64)v63, DxgkHandleForceProjectionMonitor) < 0 )
      {
        v45 = WdLogNewEntry5_WdAssertion(v39, v38);
        *(_QWORD *)(v45 + 24) = 1984LL;
        WdLogEvent5_WdAssertion(v45);
      }
    }
    if ( (int)v28 >= 0 && v17 != 2 )
    {
      if ( !v17 )
      {
        if ( v36 && (v36 != 1 || v8 == 4) && v36 != 5 && (int)v8 >= v36 )
        {
          v47 = WdLogNewEntry5_WdError(v39, v38);
          *(_QWORD *)(v47 + 24) = v8;
          *(_QWORD *)(v47 + 32) = v36;
          WdLogEvent5_WdError(v47);
          goto LABEL_47;
        }
        SimulatedMonitor = MonitorCreateSimulatedMonitor(v24, v59, 0, v60, (__int64)v69);
        goto LABEL_46;
      }
      if ( v36 )
      {
        if ( v8 == v36 )
        {
          SimulatedMonitor = MonitorDestroySimulatedMonitor(v24, v4, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v69);
LABEL_46:
          LODWORD(v28) = SimulatedMonitor;
          goto LABEL_47;
        }
        v50 = WdLogNewEntry5_WdWarning(v39, v38, v40);
        *(_QWORD *)(v50 + 24) = v8;
        *(_QWORD *)(v50 + 32) = v36;
        WdLogEvent5_WdWarning(v50);
      }
      else
      {
        v49 = WdLogNewEntry5_WdError(v39, v38);
        *(_QWORD *)(v49 + 24) = v4;
        WdLogEvent5_WdError(v49);
      }
      LODWORD(v28) = -1073741811;
    }
  }
LABEL_47:
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v70);
  if ( !LOBYTE(v64.LowPart) )
    goto LABEL_51;
  v52 = DxgkInvalidateMonitorConnections(1uLL);
  v55 = v52;
  if ( v52 >= 0 )
    goto LABEL_51;
  v32 = WdLogNewEntry5_WdWarning(v53, v51, v54);
  *(_QWORD *)(v32 + 24) = v55;
LABEL_50:
  WdLogEvent5_WdWarning(v32);
LABEL_51:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v70, v51);
LABEL_55:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v26);
  if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v56, &EventProfilerExit, v57, v65);
  return (unsigned int)v28;
}
