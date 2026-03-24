/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x1C0128030
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0008E28 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0009C0C (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009DB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C0027EFC (Feature_OemPanelDriverSupport__private_ReportDeviceUsage.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C013374C (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 *     MonitorGetAdvancedColorParams @ 0x1C01338A8 (MonitorGetAdvancedColorParams.c)
 *     MonitorGetNativeFlags @ 0x1C0133A54 (MonitorGetNativeFlags.c)
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C0133B1C (MonitorGetMonitorOrientationsFromMonitor.c)
 *     MonitorGetCCDMonitorID @ 0x1C0133BCC (MonitorGetCCDMonitorID.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C01355E8 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C0137450 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorReleaseMonitorHandle @ 0x1C0139140 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetPseudoSpecializedState @ 0x1C0142A10 (MonitorGetPseudoSpecializedState.c)
 *     MonitorGetPreferredMonitorSourceMode @ 0x1C014A710 (MonitorGetPreferredMonitorSourceMode.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C014D558 (MonitorGetDpiInfoFromDescriptor.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C01636C4 (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorIsMonitorEdidless @ 0x1C0164F20 (MonitorIsMonitorEdidless.c)
 */

__int64 __fastcall DxgkGetMonitorInternalInfo(
        struct DXGMONITOR *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5)
{
  unsigned int v6; // edi
  __int64 v7; // r12
  struct HDXGMONITOR__ *MonitorHandle; // r15
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // rax
  DXGGLOBAL *Global; // rax
  DWORD LowPart; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGADAPTER *v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  struct DXGADAPTER *const v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  bool v33; // zf
  __int64 v34; // rbx
  __int64 v35; // rax
  MONITOR_MGR *v36; // rbx
  __int64 v37; // rax
  int MonitorInstance; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  DXGMONITOR *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  int CCDMonitorID; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rbx
  _QWORD *v52; // rax
  int AdvancedColorParams; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r12
  int v57; // edx
  char v58; // al
  int IsMonitorAndLinkHDRCapable; // eax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  int DisplayIDFromMonitor; // eax
  unsigned int v63; // edx
  int v64; // eax
  char v65; // cl
  int v66; // eax
  _DWORD *v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r8
  unsigned __int8 v73; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v74[7]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int64 v75; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v76; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v77; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGMONITOR *v78; // [rsp+60h] [rbp-A0h] BYREF
  int v79; // [rsp+68h] [rbp-98h]
  int v80; // [rsp+70h] [rbp-90h] BYREF
  __int64 v81; // [rsp+78h] [rbp-88h]
  char v82; // [rsp+80h] [rbp-80h]
  __int128 v83; // [rsp+88h] [rbp-78h] BYREF
  __int128 v84; // [rsp+98h] [rbp-68h]
  __int64 v85; // [rsp+A8h] [rbp-58h]
  int v86; // [rsp+B0h] [rbp-50h]
  unsigned int *v87; // [rsp+B8h] [rbp-48h]
  __int64 v88; // [rsp+C0h] [rbp-40h]
  _DWORD v89[24]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v90[8]; // [rsp+130h] [rbp+30h] BYREF
  char v91[64]; // [rsp+138h] [rbp+38h] BYREF
  char v92[72]; // [rsp+178h] [rbp+78h] BYREF

  v80 = -1;
  v6 = (unsigned int)a1;
  v87 = a4;
  v7 = a2;
  v78 = a1;
  v88 = a5;
  v81 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v82 = 1;
    v80 = 2186;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2186);
  }
  else
  {
    v82 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v80, 2186LL);
  v77 = 0LL;
  v76 = 0;
  MonitorHandle = 0LL;
  v9 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v78, (unsigned int)v7, &v77, &v76);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v13[3] = SHIDWORD(v78);
    v14 = v6;
    v13[5] = v7;
    v13[6] = v12;
LABEL_11:
    v13[4] = v14;
    goto LABEL_12;
  }
  Global = DXGGLOBAL::GetGlobal(v11, v10);
  LowPart = v77.LowPart;
  v19 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v77, &v75);
  if ( v19 )
  {
    if ( !*((_QWORD *)v19 + 337) )
    {
      DXGADAPTER::ReleaseReference(v19);
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
      LODWORD(v12) = -1073741811;
      v13[3] = v77.HighPart;
      v14 = LowPart;
      v13[5] = -1073741811LL;
      v13[6] = 1LL;
      goto LABEL_11;
    }
    v90[1] = 0;
    COREACCESS::COREACCESS((COREACCESS *)v91, v19);
    COREACCESS::COREACCESS((COREACCESS *)v92, v23);
    DXGADAPTER::ReleaseReference(v19);
    v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v90, 0LL);
    v12 = v24;
    if ( v24 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
      v28[3] = v77.HighPart;
      v28[4] = LowPart;
      v28[5] = v12;
      WdLogEvent5_WdWarning(v28);
LABEL_61:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v90, v29);
      goto LABEL_62;
    }
    v30 = WdLogNewEntry5_WdTrace(v26, v25);
    v33 = v76 == -1;
    v12 = v76;
    *(_QWORD *)(v30 + 24) = v76;
    *(_QWORD *)(v30 + 32) = v19;
    if ( v33 )
    {
      LODWORD(v12) = -1073741811;
    }
    else
    {
      v34 = *((_QWORD *)v19 + 337);
      if ( !v34 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v32, v31);
        WdLogEvent5_WdAssertion(v35);
        v34 = *((_QWORD *)v19 + 337);
      }
      v36 = *(MONITOR_MGR **)(v34 + 96);
      if ( !v36 )
      {
        v37 = WdLogNewEntry5_WdError(v32, v31);
        *(_QWORD *)(v37 + 24) = v19;
        WdLogEvent5_WdError(v37);
        LODWORD(v12) = -1073741811;
LABEL_36:
        v61 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
        v61[3] = SHIDWORD(v78);
        v61[4] = v6;
        v61[5] = v7;
        v61[6] = (int)v12;
        v61[7] = 0LL;
        WdLogEvent5_WdError(v61);
        goto LABEL_61;
      }
      v77 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v36, v76, 0, (struct DXGMONITOR **)&v77);
      LODWORD(v75) = MonitorInstance;
      if ( MonitorInstance == -1073741275 )
      {
        v41 = WdLogNewEntry5_WdDmmEvent(v40);
        *(_QWORD *)(v41 + 24) = v12;
        *(_QWORD *)(v41 + 32) = v36;
        WdLogEvent5_WdDmmEvent(v41);
        LODWORD(v12) = -1073741275;
        goto LABEL_36;
      }
      if ( MonitorInstance >= 0 )
      {
        v43 = (DXGMONITOR *)v77;
        if ( !*(_QWORD *)&v77 )
        {
          v44 = WdLogNewEntry5_WdAssertion(v40, v39);
          WdLogEvent5_WdAssertion(v44);
        }
        DXGMONITOR::_AddReference(v43, DxgkGetMonitorInternalInfo);
        MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v43, v45);
        if ( MonitorHandle )
        {
LABEL_28:
          if ( !a3 )
            goto LABEL_53;
          CCDMonitorID = MonitorGetCCDMonitorID(MonitorHandle, 260LL, a3 + 20);
          v50 = SHIDWORD(v78);
          v51 = v7;
          LODWORD(v75) = CCDMonitorID;
          if ( CCDMonitorID < 0 )
          {
            v52 = (_QWORD *)WdLogNewEntry5_WdError(v49, v48);
            v52[4] = v6;
            v52[6] = (int)v75;
            v52[3] = v50;
            v52[5] = v7;
            WdLogEvent5_WdError(v52);
          }
          LOWORD(v75) = 0;
          v85 = 0LL;
          v86 = 0;
          v77.LowPart = 0;
          LOWORD(v77.HighPart) = 0;
          v83 = 0LL;
          v84 = 0LL;
          AdvancedColorParams = MonitorGetAdvancedColorParams(MonitorHandle, &v75, &v83, &v77);
          v56 = AdvancedColorParams;
          if ( AdvancedColorParams < 0 )
            goto LABEL_33;
          v33 = LOBYTE(v77.LowPart) == 0;
          v57 = *(_DWORD *)(a3 + 588);
          *(_OWORD *)(a3 + 540) = v83;
          *(_OWORD *)(a3 + 556) = v84;
          *(_QWORD *)(a3 + 572) = v85;
          *(_DWORD *)(a3 + 580) = v86;
          LODWORD(v75) = 0;
          v58 = BYTE2(v77.LowPart);
          *(_DWORD *)(a3 + 588) = (LOBYTE(v77.HighPart) != 0 ? 2 : 0) | !v33 | v57 & 0xFFFFFFFC;
          *(_DWORD *)(a3 + 584) = (HIBYTE(v77.LowPart) != 0 ? 4 : 0) | (v58 != 0 ? 2 : 0) | *(_DWORD *)(a3 + 584) & 0xFFFFFFF9;
          IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(MonitorHandle);
          v56 = IsMonitorAndLinkHDRCapable;
          if ( IsMonitorAndLinkHDRCapable >= 0 )
          {
            *(_DWORD *)(a3 + 588) ^= (*(_DWORD *)(a3 + 588) ^ (2 * v75)) & 4 ^ (*(_BYTE *)(a3 + 588) ^ (*(_BYTE *)(a3 + 588) ^ (unsigned __int8)(2 * v75)) & 4 ^ (unsigned __int8)(16 * v75)) & 0x40;
          }
          else
          {
LABEL_33:
            v60 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54);
            v60[3] = v50;
            v60[4] = v6;
            v60[5] = v51;
            v60[6] = v56;
            WdLogEvent5_WdError(v60);
          }
          Feature_OemPanelDriverSupport__private_ReportDeviceUsage();
          if ( MonitorHandle && (v78 = 0LL, (int)MONITOR_MGR::_GetMonitorFromHandle(MonitorHandle, &v78) >= 0) )
            *(_DWORD *)(a3 + 936) = *((_DWORD *)v78 + 191);
          else
            *(_DWORD *)(a3 + 936) = 0;
          v73 = 0;
          LOBYTE(v75) = 0;
          v74[0] = 0;
          if ( (int)MonitorGetNativeFlags(MonitorHandle, &v73, &v75, v74) >= 0 )
            *(_DWORD *)(a3 + 588) = (v73 != 0 ? 8 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFF7;
          v73 = 1;
          if ( (int)MonitorIsMonitorEdidless(MonitorHandle, &v73) >= 0 )
            *(_DWORD *)(a3 + 588) = (v73 == 0 ? 0x10 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFEF;
          DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(MonitorHandle, 0LL, &v75, 0LL);
          v63 = v76;
          LOBYTE(v75) = 0;
          *(_DWORD *)(a3 + 588) = (DisplayIDFromMonitor != -1071841279 ? 0x20 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFDF;
          v78 = 0LL;
          v79 = 0;
          if ( (int)MonitorGetDpiInfoFromDescriptor(
                      v19,
                      v63,
                      (struct DISPLAY_PREFERRED_MODE_INFO *)&v78,
                      (unsigned int *)(a3 + 924),
                      (unsigned int *)(a3 + 928),
                      (__int64)&v75,
                      0) < 0 )
          {
            *(_DWORD *)(a3 + 924) = 0;
            *(_DWORD *)(a3 + 928) = 0;
            memset(v89, 0, sizeof(v89));
            if ( (int)MonitorGetPreferredMonitorSourceMode(MonitorHandle, v89) < 0 )
            {
              *(_QWORD *)(a3 + 916) = 0LL;
              goto LABEL_52;
            }
            *(_DWORD *)(a3 + 916) = v89[5];
            v64 = v89[6];
          }
          else
          {
            *(_DWORD *)(a3 + 916) = (_DWORD)v78;
            v64 = HIDWORD(v78);
          }
          *(_DWORD *)(a3 + 920) = v64;
LABEL_52:
          v74[0] = 0;
          v73 = 0;
          MonitorGetPseudoSpecializedState(MonitorHandle, &v73, v74);
          *(_DWORD *)(a3 + 588) ^= (*(_DWORD *)(a3 + 588) ^ (v73 << 7)) & 0x80 ^ (*(_WORD *)(a3 + 588) ^ (*(_WORD *)(a3 + 588) ^ (v73 << 7)) & 0x80 ^ (unsigned __int16)(v74[0] << 8)) & 0x100;
LABEL_53:
          v76 = 0;
          LODWORD(v75) = 0;
          MonitorGetMonitorOrientationsFromMonitor(MonitorHandle, &v76, &v75);
          v65 = v76;
          v66 = v75;
          if ( v87 )
          {
            v67 = (_DWORD *)v88;
            if ( v88 )
            {
              *v87 = v76;
              *v67 = v66;
            }
          }
          if ( a3 )
            *(_DWORD *)(a3 + 932) = (((_BYTE)v66 - v65) & 3) + 1;
          if ( (int)MonitorReleaseMonitorHandle(v19, MonitorHandle, DxgkGetMonitorInternalInfo) < 0 )
          {
            v69 = WdLogNewEntry5_WdAssertion(v68, v29);
            *(_QWORD *)(v69 + 24) = 7248LL;
            WdLogEvent5_WdAssertion(v69);
          }
          LODWORD(v12) = 0;
          goto LABEL_61;
        }
LABEL_27:
        v46 = WdLogNewEntry5_WdAssertion(v32, v31);
        *(_QWORD *)(v46 + 24) = 7080LL;
        WdLogEvent5_WdAssertion(v46);
        goto LABEL_28;
      }
      v42 = WdLogNewEntry5_WdError(v40, v39);
      *(_QWORD *)(v42 + 24) = v12;
      *(_QWORD *)(v42 + 32) = v36;
      WdLogEvent5_WdError(v42);
      LODWORD(v12) = v75;
    }
    if ( (int)v12 < 0 )
      goto LABEL_36;
    goto LABEL_27;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
  LODWORD(v12) = -1073741811;
  v13[3] = v77.HighPart;
  v13[4] = LowPart;
  v13[6] = 0LL;
  v13[5] = -1073741811LL;
LABEL_12:
  WdLogEvent5_WdError(v13);
LABEL_62:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v80, v22);
  if ( v82 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v70, &EventProfilerExit, v71, v80);
  return (unsigned int)v12;
}
