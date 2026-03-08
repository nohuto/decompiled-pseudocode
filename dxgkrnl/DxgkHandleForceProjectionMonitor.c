/*
 * XREFs of DxgkHandleForceProjectionMonitor @ 0x1C02F7E30
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     MonitorGetMonitorHandle @ 0x1C0171B54 (MonitorGetMonitorHandle.c)
 *     MonitorGetMonitorType @ 0x1C017A15C (MonitorGetMonitorType.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01AE14C (MonitorReleaseMonitorHandle.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C01C24B0 (DxgkInvalidateMonitorConnections.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01F83FC (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C03BF180 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C03BF480 (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall DxgkHandleForceProjectionMonitor(struct _LUID a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // r13
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  unsigned int v11; // eax
  unsigned int v12; // r12d
  const wchar_t *v13; // r9
  __int64 v14; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v16; // rax
  DXGADAPTER *v17; // r14
  int v18; // r8d
  __int64 v19; // rsi
  int IsTargetForceable; // eax
  DXGADAPTER *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // ebx
  int MonitorHandle; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  int MonitorType; // eax
  __int64 v29; // r9
  int SimulatedMonitor; // eax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  int v35; // [rsp+20h] [rbp-E0h]
  int v36; // [rsp+30h] [rbp-D0h]
  bool v37; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+54h] [rbp-ACh] BYREF
  struct HDXGMONITOR__ *v39; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v40; // [rsp+60h] [rbp-A0h]
  int v41; // [rsp+68h] [rbp-98h] BYREF
  __int64 v42; // [rsp+70h] [rbp-90h]
  char v43; // [rsp+78h] [rbp-88h]
  __int64 v44[10]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v45[144]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = a2;
  v6 = a3;
  v39 = (struct HDXGMONITOR__ *)a1;
  v7 = a4;
  memset(v44, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v44[1]);
  v41 = -1;
  v44[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v44[3]) = 41;
  LOBYTE(v44[6]) = -1;
  v42 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2179;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerEnter, v9, 2179);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2179);
  v10 = v7;
  WdLogSingleEntry5(4LL, v6, v4, v7, SHIDWORD(v39), a1.LowPart);
  v11 = v6;
  v12 = v6 & 0x7FFFFFFF;
  v40 = v11 >> 31;
  if ( v12 > 2 )
  {
    v10 = v12;
    WdLogSingleEntry1(2LL, v12);
    v13 = L"Caller specified an invalid force projection monitor action %I64u.";
LABEL_55:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v10, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_56;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 1 )
    {
      v14 = 3LL;
    }
    else
    {
      if ( (_DWORD)v7 != 2 )
      {
        WdLogSingleEntry1(2LL, v7);
        v13 = L"Caller specified an invalid force projection monitor type %I64u.";
        goto LABEL_55;
      }
      v14 = 4LL;
    }
  }
  else
  {
    v14 = 2LL;
  }
  Global = DXGGLOBAL::GetGlobal();
  v16 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, (unsigned __int64 *)&v39);
  v17 = v16;
  if ( !v16 )
  {
    WdLogSingleEntry1(3LL, 1940LL);
LABEL_56:
    LODWORD(v19) = -1073741811;
    goto LABEL_57;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, v16, 0LL);
  v19 = (int)COREADAPTERACCESS::AcquireExclusive((__int64)v45, (unsigned int)(v18 + 1));
  DXGADAPTER::ReleaseReference(v17);
  if ( (int)v19 >= 0 )
  {
    v37 = 0;
    IsTargetForceable = DmmIsTargetForceable(v17, v4, &v37, 0);
    LODWORD(v19) = IsTargetForceable;
    if ( IsTargetForceable >= 0 && !v37 )
    {
      v21 = v17;
      v22 = v4;
      v23 = 4LL;
LABEL_46:
      WdLogSingleEntry2(v23, v22, v21);
      goto LABEL_47;
    }
    v24 = 0;
    v38 = 0;
    if ( IsTargetForceable >= 0 )
    {
      v39 = 0LL;
      MonitorHandle = MonitorGetMonitorHandle(
                        (__int64)v17,
                        (unsigned int)v4,
                        0LL,
                        DxgkHandleForceProjectionMonitor,
                        &v39);
      LODWORD(v19) = MonitorHandle;
      if ( MonitorHandle < 0 )
      {
        if ( MonitorHandle != -1073741275 )
          goto LABEL_50;
        if ( v39 )
        {
          WdLogSingleEntry1(1LL, 2007LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"hOldMonitor == NULL", 2007LL, 0LL, 0LL, 0LL, 0LL);
        }
        LODWORD(v19) = 0;
      }
      else
      {
        MonitorType = MonitorGetMonitorType(v39, &v38, v26, v27);
        v24 = v38;
        LODWORD(v19) = MonitorType;
        if ( MonitorType >= 0 && !v38 )
        {
          WdLogSingleEntry1(1LL, 1996LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(!NT_SUCCESS(ntStatus)) || (OldMonitorType != DMM_VMT_UNINITIALIZED)",
            1996LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)MonitorReleaseMonitorHandle((__int64)v17, (__int64)v39, DxgkHandleForceProjectionMonitor, v29) < 0 )
        {
          WdLogSingleEntry1(1LL, 2001LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_ntStatus)", 2001LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( (int)v19 < 0 )
          goto LABEL_50;
      }
      if ( v12 != 2 )
      {
        if ( v12 )
        {
          if ( !v24 )
          {
            WdLogSingleEntry1(2LL, v4);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Caller specified traget %I64u does not have any monitor connected.\n",
              v4,
              0LL,
              0LL,
              0LL,
              0LL);
LABEL_47:
            LODWORD(v19) = -1073741811;
            goto LABEL_50;
          }
          if ( (_DWORD)v14 != v24 )
          {
            v21 = (DXGADAPTER *)v24;
            v23 = 3LL;
            v22 = (unsigned int)v14;
            goto LABEL_46;
          }
          SimulatedMonitor = MonitorDestroySimulatedMonitor(v17, v4, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v44);
        }
        else
        {
          if ( v24 && (v24 != 1 || (_DWORD)v14 == 4) && v24 != 5 && (int)v14 >= v24 )
          {
            WdLogSingleEntry2(2LL, v14, v24);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"The new force porjection monitor type %I64u has lower priority than old one %I64u.\n",
              v14,
              v24,
              0LL,
              0LL,
              0LL);
            goto LABEL_50;
          }
          SimulatedMonitor = MonitorCreateSimulatedMonitor(v17, v35, 0, v36, (__int64)v44);
        }
        LODWORD(v19) = SimulatedMonitor;
      }
    }
LABEL_50:
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v45);
    if ( (_BYTE)v40 )
    {
      v31 = DxgkInvalidateMonitorConnections(1LL);
      if ( v31 < 0 )
        WdLogSingleEntry1(3LL, v31);
    }
    goto LABEL_53;
  }
  WdLogSingleEntry2(3LL, v17, v19);
LABEL_53:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
LABEL_57:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 )
  {
    LOBYTE(v32) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v41);
  }
  return (unsigned int)v19;
}
