/*
 * XREFs of DxgkGetAdapterDeviceDesc @ 0x1C011EB60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00026B4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0002B70 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C0007C40 (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0009BA0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00DE194 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C011746C (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C0120190 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120374 (DxgkReleaseSessionModeChangeLock.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C012E86C (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C012E928 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C012F214 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C012F978 (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C01330D0 (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C0133530 (MonitorGetMonitorHandle.c)
 *     MonitorGetAdvancedColorParams @ 0x1C01338A8 (MonitorGetAdvancedColorParams.c)
 *     MonitorGetNativeFlags @ 0x1C0133A54 (MonitorGetNativeFlags.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C01355E8 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorReleaseMonitorHandle @ 0x1C0139140 (MonitorReleaseMonitorHandle.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C013E304 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C014799C (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C015FD44 (-SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C02221A0 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetAdapterDeviceDesc(struct _LUID a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // r12
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // bl
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v28; // r12d
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rcx
  struct DXGADAPTER *v33; // r10
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rcx
  _QWORD *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  PEPROCESS v47; // rax
  unsigned __int64 *v48; // rcx
  struct DXGADAPTER **v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  DXGADAPTER *v53; // r9
  _BOOL8 v54; // rcx
  __int64 v55; // rax
  bool v56; // zf
  DXGGLOBAL **v57; // rcx
  signed __int64 v58; // rcx
  DXGADAPTER *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  _QWORD *v62; // rax
  __int64 v63; // rdx
  DXGADAPTERSTOPRESETLOCKSHARED *v64; // rcx
  DXGADAPTER *v65; // rcx
  __int64 v66; // r11
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // r8
  _QWORD *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  DXGADAPTER *v74; // r15
  __int64 v75; // rax
  __int64 v76; // rdx
  int TargetUsage; // eax
  int DisplayId; // eax
  DXGSESSIONMGR *v79; // rcx
  int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // eax
  struct DXGADAPTER *v84; // rcx
  char v85; // al
  int AdvancedColorParams; // eax
  char v87; // r8
  int v88; // edx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v93; // eax
  int v94; // eax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  int v98; // eax
  __int64 v99; // rax
  int v100; // edx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rdx
  unsigned int v104; // eax
  __int64 v105; // r8
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rdx
  _QWORD *v109; // rax
  int v110; // eax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rbx
  __int64 v115; // rax
  unsigned __int8 v116; // [rsp+40h] [rbp-C0h] BYREF
  char v117; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int8 v118[6]; // [rsp+42h] [rbp-BEh] BYREF
  DXGSESSIONMGR *DisplayModeInfo; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v120; // [rsp+50h] [rbp-B0h] BYREF
  char v121; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE v122[3]; // [rsp+55h] [rbp-ABh] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v123; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v124; // [rsp+5Ch] [rbp-A4h] BYREF
  __int16 v125; // [rsp+60h] [rbp-A0h] BYREF
  DXGADAPTER *v126; // [rsp+68h] [rbp-98h] BYREF
  int MonitorHandle; // [rsp+70h] [rbp-90h]
  struct HDXGMONITOR__ *v128; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *SessionViewOwner; // [rsp+80h] [rbp-80h]
  DXGADAPTER *v130; // [rsp+88h] [rbp-78h] BYREF
  int v131; // [rsp+90h] [rbp-70h] BYREF
  __int16 v132; // [rsp+94h] [rbp-6Ch]
  int v133; // [rsp+98h] [rbp-68h] BYREF
  __int16 v134; // [rsp+9Ch] [rbp-64h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v135; // [rsp+A0h] [rbp-60h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v136; // [rsp+A4h] [rbp-5Ch] BYREF
  int v137; // [rsp+A8h] [rbp-58h]
  struct _LUID v138; // [rsp+B0h] [rbp-50h]
  __int64 v139; // [rsp+B8h] [rbp-48h]
  _BYTE v140[8]; // [rsp+C0h] [rbp-40h] BYREF
  DXGADAPTER *v141; // [rsp+C8h] [rbp-38h]
  char v142; // [rsp+D0h] [rbp-30h]
  int v143; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v144; // [rsp+E0h] [rbp-20h]
  char v145; // [rsp+E8h] [rbp-18h]
  __int128 v146; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v147; // [rsp+100h] [rbp+0h]
  __int64 v148; // [rsp+110h] [rbp+10h]
  int v149; // [rsp+118h] [rbp+18h]
  __int128 v150; // [rsp+120h] [rbp+20h] BYREF
  __int128 v151; // [rsp+130h] [rbp+30h]
  __int64 v152; // [rsp+140h] [rbp+40h]
  int v153; // [rsp+148h] [rbp+48h]
  _BYTE v154[8]; // [rsp+150h] [rbp+50h] BYREF
  DXGADAPTER *v155; // [rsp+158h] [rbp+58h]
  char v156; // [rsp+160h] [rbp+60h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v157; // [rsp+168h] [rbp+68h] BYREF
  DXGADAPTER *v158[2]; // [rsp+178h] [rbp+78h] BYREF
  unsigned __int64 v159; // [rsp+188h] [rbp+88h] BYREF
  char v160; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v161; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v162[144]; // [rsp+1A0h] [rbp+A0h] BYREF

  v143 = -1;
  v5 = a2;
  v138 = a1;
  v144 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v145 = 1;
    v143 = 2185;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2185);
  }
  else
  {
    v145 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v143, 2185LL);
  v126 = 0LL;
  v9 = 0LL;
  v130 = 0LL;
  LODWORD(v139) = 0;
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v10 + 24) = 6304LL;
    WdLogEvent5_WdAssertion(v10);
  }
  Global = DXGGLOBAL::GetGlobal(v8, v7);
  SessionViewOwner = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v159);
  if ( !SessionViewOwner )
  {
    v14 = 1144079361;
    LODWORD(v15) = -1073741811;
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v16[3] = v138.HighPart;
    v16[4] = a1.LowPart;
    v16[5] = 1144079361LL;
    WdLogEvent5_WdError(v16);
    goto LABEL_9;
  }
  v21 = DxgkAcquireSessionModeChangeLock(0LL);
  v15 = v21;
  v24 = v21 >= 0;
  if ( v21 < 0 )
  {
    v14 = 1144079362;
    v25 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v25 + 24) = v15;
    *(_QWORD *)(v25 + 32) = 1144079362LL;
    WdLogEvent5_WdError(v25);
    if ( v24 )
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_159;
  }
  MonitorHandle = -1;
  if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
  {
    v33 = SessionViewOwner;
  }
  else
  {
    v28 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
    v123 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
    DisplayModeInfo = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v27, v26) + 102);
    if ( DisplayModeInfo )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v30, v29);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         DisplayModeInfo,
                                         CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      LODWORD(v15) = -1073741811;
      v14 = 1144079369;
      v37 = (_QWORD *)WdLogNewEntry5_WdError(0LL, v29);
      CurrentProcess = PsGetCurrentProcess(v39, v38, v40, v41);
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      v37[3] = ProcessSessionId;
      v47 = (PEPROCESS)PsGetCurrentProcess(ProcessSessionId, v44, v45, v46);
      v36 = v37;
      v37[5] = 1144079369LL;
      v37[4] = v47 != PsInitialSystemProcess;
      goto LABEL_30;
    }
    v33 = SessionViewOwner;
    if ( *((_DWORD *)SessionDataForSpecifiedSession + 4625) == *((_DWORD *)SessionViewOwner + 79)
      && *((_DWORD *)SessionDataForSpecifiedSession + 4626) == *((_DWORD *)SessionViewOwner + 80) )
    {
      v28 = *((_DWORD *)SessionDataForSpecifiedSession + 4627);
      v123 = v28;
    }
    if ( (_DWORD)v5 != -1 && (unsigned int)v5 >= v28 )
    {
      LODWORD(v15) = -1073741811;
      v14 = 1144079363;
      v34 = (_QWORD *)WdLogNewEntry5_WdError(SessionDataForSpecifiedSession, v29);
      v35 = (unsigned int)v123;
      v34[3] = v5;
      v34[4] = v35;
      v34[5] = 1144079363LL;
LABEL_29:
      v36 = v34;
LABEL_30:
      WdLogEvent5_WdError(v36);
      goto LABEL_31;
    }
    LODWORD(v5) = -1;
  }
  v48 = (unsigned __int64 *)&v160;
  v49 = &v126;
  v50 = 0LL;
  if ( (_DWORD)v5 == -1 )
  {
    v48 = 0LL;
    v49 = 0LL;
  }
  else
  {
    v50 = (unsigned int)v5;
  }
  LODWORD(v15) = DxgkpGetPairingAdapters(v33, v50, &v130, &v161, v49, v48, 0);
  if ( (int)v15 < 0 )
  {
    LODWORD(v15) = -1073741811;
    v14 = 1144079364;
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v51, 0LL);
    v34[3] = v138.HighPart;
    v34[4] = a1.LowPart;
    v34[5] = (unsigned int)v5;
    v34[6] = 1144079364LL;
    goto LABEL_29;
  }
  if ( !v130 )
  {
    v52 = WdLogNewEntry5_WdAssertion(v51, 0LL);
    *(_QWORD *)(v52 + 24) = 6421LL;
    WdLogEvent5_WdAssertion(v52);
  }
  v53 = v126;
  v54 = (_DWORD)v5 == -1;
  if ( v54 != (v126 == 0LL) )
  {
    v55 = WdLogNewEntry5_WdAssertion(v54, 0LL);
    *(_QWORD *)(v55 + 24) = 6422LL;
    WdLogEvent5_WdAssertion(v55);
    v53 = v126;
  }
  v56 = v53 == 0LL;
  if ( v53 )
  {
    if ( (*((_DWORD *)v53 + 87) & 0x100) != 0 )
    {
      v158[0] = 0LL;
      if ( DxgkpGetIndirectDisplayPairedAdapter(v53, 0, (struct DXGADAPTER_REFERENCE *)v158) >= 0 )
        v9 = *(_QWORD *)((char *)v158[0] + 316);
      DXGADAPTER_REFERENCE::Assign(v158, 0LL);
      v53 = v126;
    }
    v56 = v53 == 0LL;
  }
  if ( v56 )
    v53 = v130;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v162, v130, v53);
  v57 = (DXGGLOBAL **)SessionViewOwner;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)SessionViewOwner + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(v57[2], (struct DXGADAPTER *)v57);
  v58 = _InterlockedExchangeAdd64((volatile signed __int64 *)v130 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v59 = v130;
  DisplayModeInfo = v130;
  if ( v58 == 1 )
  {
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v130 + 2), v130);
    v59 = DisplayModeInfo;
  }
  if ( v126 )
  {
    DXGADAPTER::ReleaseReference(v126);
    v59 = DisplayModeInfo;
  }
  else
  {
    v126 = v59;
  }
  v155 = v59;
  v156 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v154);
  if ( *((_DWORD *)DisplayModeInfo + 50) != 1 )
  {
    LODWORD(v15) = -1073741130;
    v14 = 1144079365;
    v62 = (_QWORD *)WdLogNewEntry5_WdWarning(DisplayModeInfo, v60, v61);
    v62[3] = v138.HighPart;
    v62[4] = a1.LowPart;
    v62[5] = (unsigned int)v5;
    v62[6] = 1144079365LL;
    WdLogEvent5_WdWarning(v62);
    if ( !v156 )
    {
LABEL_64:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v162, v63);
LABEL_31:
      if ( v24 )
        DxgkReleaseSessionModeChangeLock();
      goto LABEL_9;
    }
    v64 = (DXGADAPTERSTOPRESETLOCKSHARED *)v154;
LABEL_63:
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v64);
    goto LABEL_64;
  }
  v65 = v130;
  *(_DWORD *)(a4 + 832) = *((_DWORD *)v130 + 86);
  *(_DWORD *)(a4 + 836) = *((_DWORD *)v65 + 81);
  *(_DWORD *)(a4 + 840) = *((_DWORD *)v65 + 82);
  *(_DWORD *)(a4 + 844) = *((_DWORD *)v65 + 83);
  *(_DWORD *)(a4 + 848) = *((_DWORD *)v65 + 84);
  *(_DWORD *)(a4 + 852) = *((_DWORD *)v65 + 85);
  *(_DWORD *)(a4 + 1636) = (*((_DWORD *)v65 + 87) >> 7) & 1;
  *(_DWORD *)(a4 + 1640) = *((_DWORD *)v65 + 70) > 1u;
  *(_DWORD *)(a4 + 856) = *((_DWORD *)v65 + 649);
  DXGADAPTER::GetDeviceDescriptor(v65, 0x100u, (unsigned __int16 *)(a4 + 860));
  RtlStringCbCopyNW(
    (char *)(a4 + 1116),
    v67,
    *(char **)(*(_QWORD *)(v66 + 1520) + 8LL),
    **(unsigned __int16 **)(v66 + 1520));
  if ( v156 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v154);
  DisplayModeInfo = v126;
  if ( v126 )
  {
    v142 = 0;
    v141 = v126;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v140);
    if ( *((_DWORD *)DisplayModeInfo + 50) != 1 )
    {
      LODWORD(v15) = -1073741130;
      v14 = 1144079366;
      v71 = (_QWORD *)WdLogNewEntry5_WdWarning(DisplayModeInfo, v69, v70);
      v71[3] = v138.HighPart;
      v71[4] = a1.LowPart;
      v71[5] = (unsigned int)v5;
      v71[6] = 1144079366LL;
      WdLogEvent5_WdWarning(v71);
LABEL_70:
      if ( !v142 )
        goto LABEL_64;
      v64 = (DXGADAPTERSTOPRESETLOCKSHARED *)v140;
      goto LABEL_63;
    }
    if ( (_DWORD)v5 == -1 || !(unsigned int)DxgIsSessionUsingWddmMonitors() )
    {
LABEL_144:
      v74 = v126;
      goto LABEL_145;
    }
    v74 = v126;
    v75 = *((_QWORD *)v126 + 337);
    if ( !v75 || (unsigned int)v5 >= *(_DWORD *)(v75 + 80) )
    {
      v14 = 1144079367;
      LODWORD(v15) = -1073741811;
      if ( v75 )
        MonitorHandle = *(_DWORD *)(v75 + 80);
      v109 = (_QWORD *)WdLogNewEntry5_WdError(v73, v72);
      v109[3] = (unsigned int)v5;
      v109[4] = (unsigned int)MonitorHandle;
      v109[5] = v138.HighPart;
      v109[6] = a1.LowPart;
      v109[7] = 1144079367LL;
      WdLogEvent5_WdError(v109);
      goto LABEL_70;
    }
    SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)SessionViewOwner + 337), v5);
    if ( !SessionViewOwner )
    {
      *(_DWORD *)(a4 + 1916) = -1;
      DisplayModeInfo = 0LL;
      *(_OWORD *)(a4 + 1644) = 0LL;
      *(_OWORD *)(a4 + 1952) = 0LL;
      *(_DWORD *)(a4 + 1940) = 1;
      *(_QWORD *)(a4 + 1944) = 1LL;
      *(_QWORD *)(a4 + 1924) = 0LL;
      *(_QWORD *)(a4 + 1968) = 0LL;
      *(_QWORD *)(a4 + 1932) = 5LL;
      SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
LABEL_145:
      *(_DWORD *)(a4 + 20) = *((_DWORD *)v74 + 86);
      *(_DWORD *)(a4 + 24) = *((_DWORD *)v74 + 81);
      *(_DWORD *)(a4 + 28) = *((_DWORD *)v74 + 82);
      *(_DWORD *)(a4 + 32) = *((_DWORD *)v74 + 83);
      *(_DWORD *)(a4 + 36) = *((_DWORD *)v74 + 84);
      *(_DWORD *)(a4 + 40) = *((_DWORD *)v74 + 85);
      *(_DWORD *)(a4 + 824) = (*((_DWORD *)v74 + 87) >> 7) & 1;
      *(_DWORD *)(a4 + 828) = *((_DWORD *)v74 + 70) > 1u;
      *(_DWORD *)(a4 + 44) = *((_DWORD *)v74 + 649);
      DXGADAPTER::GetDeviceDescriptor(v74, 0x100u, (unsigned __int16 *)(a4 + 48));
      RtlStringCbCopyNW(
        (char *)(a4 + 304),
        v108,
        *(char **)(*((_QWORD *)v74 + 190) + 8LL),
        **((unsigned __int16 **)v74 + 190));
      *(_QWORD *)(a4 + 2044) = v9 & -(__int64)((*((_DWORD *)v74 + 87) & 0x100) != 0);
      if ( v142 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v140);
      goto LABEL_152;
    }
    v120 = -1;
    DmmGetMostImportantClientVidPnPathTargetsFromSource(v74, v5, &v120);
    v76 = v120;
    *(_DWORD *)(a4 + 2052) ^= (*(_DWORD *)(a4 + 2052) ^ (*((_DWORD *)v74 + 87) >> 3)) & 0x8000;
    if ( (_DWORD)v76 == -1 )
      TargetUsage = 0;
    else
      TargetUsage = DmmGetTargetUsage(v74, v76, 0LL);
    *(_DWORD *)(a4 + 2028) = TargetUsage;
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v74 + 337), v5);
    if ( *(_DWORD *)(a4 + 2028) )
    {
      *(_OWORD *)(a4 + 1644) = 0LL;
      *(_OWORD *)(a4 + 1952) = 0LL;
    }
    else
    {
      *(_OWORD *)(a4 + 1644) = *(_OWORD *)((char *)SessionViewOwner + 24);
      *(_OWORD *)(a4 + 1952) = *(_OWORD *)(3968LL * (unsigned int)v5 + *(_QWORD *)(*((_QWORD *)v74 + 337) + 112LL) + 652);
    }
    *(_DWORD *)(a4 + 1916) = v120;
    DisplayId = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v74 + 337), v5);
    v79 = DisplayModeInfo;
    *(_DWORD *)(a4 + 1920) = DisplayId;
    *(_DWORD *)(a4 + 1924) = *(_DWORD *)v79;
    *(_DWORD *)(a4 + 1928) = *((_DWORD *)v79 + 1);
    v80 = *((_DWORD *)v79 + 2);
    if ( v80 == 20 )
    {
      v81 = 3;
    }
    else
    {
      if ( v80 > 20 )
      {
        if ( v80 <= 22 )
        {
          v81 = 4;
          goto LABEL_93;
        }
        if ( v80 == 23 )
        {
          v81 = 2;
          goto LABEL_93;
        }
        if ( v80 == 41 )
        {
          v81 = 1;
          goto LABEL_93;
        }
      }
      v81 = 5;
    }
LABEL_93:
    *(_DWORD *)(a4 + 1932) = v81;
    v82 = *((_DWORD *)v79 + 4);
    if ( v82 == -2 && *((_DWORD *)v79 + 5) == -2 )
    {
      *(_DWORD *)(a4 + 1936) = 64;
      v83 = 1;
    }
    else
    {
      *(_DWORD *)(a4 + 1936) = v82;
      v83 = *((_DWORD *)v79 + 5);
    }
    *(_DWORD *)(a4 + 1940) = v83;
    *(_DWORD *)(a4 + 1944) = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v74 + 337), (unsigned int)v5, 2LL);
    *(_DWORD *)(a4 + 1948) = *((_DWORD *)DisplayModeInfo + 6);
    DxgkpCopyMonitorLinkInfoToFlags(v74, (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
    v84 = SessionViewOwner;
    *(_QWORD *)(a4 + 1968) = *((_QWORD *)SessionViewOwner + 8);
    if ( *((_DWORD *)v84 + 10) != 1 )
      goto LABEL_140;
    v128 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(v74, v120, 0LL, DxgkGetAdapterDeviceDesc, &v128);
    v124 = 0;
    v148 = 0LL;
    v149 = 0;
    v131 = 0;
    v132 = 0;
    v123 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
    v146 = 0LL;
    v147 = 0LL;
    if ( DmmGetCurrentWireFormatAndColorSpace(v74, v5, v120, &v157, &v123) < 0 )
    {
      v85 = 0;
    }
    else if ( v123 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020
           || (v85 = 0, v123 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL) )
    {
      v85 = 1;
    }
    LOBYTE(v124) = v85;
    if ( MonitorHandle < 0
      || (AdvancedColorParams = MonitorGetAdvancedColorParams(v128, &v124, &v146, &v131),
          v87 = 0,
          AdvancedColorParams < 0) )
    {
      SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
    }
    else
    {
      *(_OWORD *)(a4 + 1984) = v146;
      *(_OWORD *)(a4 + 2000) = v147;
      v88 = *(_DWORD *)(a4 + 2052);
      *(_QWORD *)(a4 + 2016) = v148;
      *(_DWORD *)(a4 + 2024) = v149;
      *(_DWORD *)(a4 + 2052) = (BYTE1(v131) != 0 ? 0x1000 : 0) | ((_BYTE)v131 != 0 ? 0x200 : 0) | v88 & 0xFFFFEDFF;
    }
    v117 = v87;
    v122[0] = v87;
    v121 = v87;
    if ( (int)MonitorGetNativeFlags(v128, &v117, v122, &v121) < 0 )
      *(_DWORD *)(a4 + 2052) &= ~0x2000u;
    else
      *(_DWORD *)(a4 + 2052) = (v117 != 0 ? 0x2000 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFDFFF;
    if ( v128 && (int)MonitorReleaseMonitorHandle(v74, v128, DxgkGetAdapterDeviceDesc) < 0 )
    {
      v91 = WdLogNewEntry5_WdAssertion(v90, v89);
      *(_QWORD *)(v91 + 24) = 6673LL;
      WdLogEvent5_WdAssertion(v91);
    }
    v135.Value = 0;
    v136 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
    if ( DmmGetCurrentWireFormatAndColorSpace(v74, v5, v120, &v135, &v136) < 0 )
    {
LABEL_140:
      SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
      goto LABEL_141;
    }
    *(_DWORD *)(a4 + 1976) = GetColorDepthFromPickedWireFormat(v135);
    v93 = v136;
    *(_DWORD *)(a4 + 1980) = v136;
    *(_DWORD *)(a4 + 2040) = 0;
    switch ( v93 )
    {
      case D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020:
        if ( (int)MonitorGetMonitorHandle(v74, v120, 0LL, DxgkGetAdapterDeviceDesc, &v128) >= 0 )
        {
          v137 = 0;
          if ( (int)MonitorIsMonitorAndLinkHDRCapable(v128) >= 0 && (v137 & 1) != 0 )
          {
            if ( *((int *)v74 + 649) < 2500 )
            {
              *(_DWORD *)(a4 + 2040) = (*((_DWORD *)v74 + 81) != 32902) + 1;
            }
            else
            {
              v94 = *((_DWORD *)v74 + 644);
              if ( (v94 & 4) != 0 )
              {
                *(_DWORD *)(a4 + 2040) = 2;
              }
              else if ( (v94 & 8) != 0 )
              {
                *(_DWORD *)(a4 + 2040) = 1;
              }
            }
          }
        }
        if ( !v128 || (int)MonitorReleaseMonitorHandle(v74, v128, DxgkGetAdapterDeviceDesc) >= 0 )
          goto LABEL_141;
        v97 = WdLogNewEntry5_WdAssertion(v96, v95);
        *(_QWORD *)(v97 + 24) = 6739LL;
        break;
      case D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709_WCG:
        *(_DWORD *)(a4 + 2040) = 3;
LABEL_141:
        *(_DWORD *)(a4 + 2052) &= ~0x400u;
        v103 = 3968LL * (unsigned int)v5;
        v104 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v74 + 337) + 112LL) + v103 + 3756);
        *(_QWORD *)(a4 + 2032) = v104;
        if ( !v104 )
          goto LABEL_145;
        _mm_lfence();
        v105 = *((_QWORD *)v74 + 337);
        v106 = *(unsigned int *)(*(_QWORD *)(v105 + 112) + v103 + 3756);
        if ( *(_DWORD *)(v105 + 80 * v106 + 768) == 1 )
        {
          *(_DWORD *)(a4 + 2036) = 1;
        }
        else
        {
          v107 = WdLogNewEntry5_WdAssertion(v106, 10 * v106);
          *(_QWORD *)(v107 + 24) = 6827LL;
          WdLogEvent5_WdAssertion(v107);
          *(_DWORD *)(a4 + 2032) = 0;
        }
        goto LABEL_144;
      case D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL:
        v98 = *((_DWORD *)v74 + 87);
        if ( (v98 & 0x200) == 0 && (v98 & 8) == 0 )
        {
          v99 = WdLogNewEntry5_WdAssertion(0LL, v92);
          *(_QWORD *)(v99 + 24) = 6749LL;
          WdLogEvent5_WdAssertion(v99);
        }
        v125 = 256;
        DisplayModeInfo = 0LL;
        v152 = 0LL;
        v153 = 0;
        v133 = 0;
        v134 = 0;
        v150 = 0LL;
        v151 = 0LL;
        if ( (int)MonitorGetMonitorHandle(v74, v120, 0LL, DxgkGetAdapterDeviceDesc, &DisplayModeInfo) >= 0
          && (int)MonitorGetAdvancedColorParams(DisplayModeInfo, &v125, &v150, &v133) >= 0 )
        {
          *(_OWORD *)(a4 + 1984) = v150;
          *(_OWORD *)(a4 + 2000) = v151;
          v100 = *(_DWORD *)(a4 + 2052);
          *(_QWORD *)(a4 + 2016) = v152;
          *(_DWORD *)(a4 + 2024) = v153;
          *(_DWORD *)(a4 + 2052) = (BYTE1(v133) != 0 ? 0x1000 : 0) | ((_BYTE)v133 != 0 ? 0x200 : 0) | v100 & 0xFFFFEDFF;
        }
        if ( !DisplayModeInfo || (int)MonitorReleaseMonitorHandle(v74, DisplayModeInfo, DxgkGetAdapterDeviceDesc) >= 0 )
          goto LABEL_141;
        v97 = WdLogNewEntry5_WdAssertion(v102, v101);
        *(_QWORD *)(v97 + 24) = 6791LL;
        break;
      default:
        goto LABEL_141;
    }
    WdLogEvent5_WdAssertion(v97);
    goto LABEL_141;
  }
LABEL_152:
  *(_WORD *)(a4 + 306) = 92;
  *(_WORD *)(a4 + 1118) = 92;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v162, v68);
  if ( v24 )
    DxgkReleaseSessionModeChangeLock();
  *(_DWORD *)(a4 + 2052) &= 0xFFFFFFE7;
  if ( *(_DWORD *)a4 == -11 )
  {
    v116 = 0;
    v118[0] = 0;
    v110 = DxgkpAdapterCheckStereoMode(a1, (unsigned int)v5, v118, &v116);
    v114 = v110;
    if ( v110 < 0 )
    {
      v115 = WdLogNewEntry5_WdWarning(v112, v111, v113);
      *(_QWORD *)(v115 + 24) = v114;
      WdLogEvent5_WdWarning(v115);
    }
    else
    {
      v17 = (v116 != 0 ? 8 : 0) | (v118[0] != 0 ? 0x10 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFFFE7;
      *(_DWORD *)(a4 + 2052) = v17;
    }
  }
  v14 = v139;
LABEL_159:
  if ( (int)v15 >= 0 )
  {
    LODWORD(v15) = 0;
    goto LABEL_11;
  }
LABEL_9:
  if ( *(_DWORD *)a4 == -21 )
    *(_DWORD *)(a4 + 2024) = v14;
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v143, v17);
  if ( v145 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v143);
  return (unsigned int)v15;
}
