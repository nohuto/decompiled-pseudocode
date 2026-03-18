/*
 * XREFs of DxgkDisplayConfigDeviceInfo @ 0x1C01AD190
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00053F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0007158 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007174 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0007198 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ @ 0x1C00071EC (--1-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@QEAA@XZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0007284 (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0007620 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00082D8 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C00088CC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ??$?9V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x1C0008920 (--$-9V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@det.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0013C40 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C001FB80 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C002A240 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C003FFE4 (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016EA98 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C017BB68 (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C017BE14 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C017C31C (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ConvertDmmToDisplayConfigRotation @ 0x1C017CAF4 (ConvertDmmToDisplayConfigRotation.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C017F1B0 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0180F38 (-BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C0183734 (MonitorGetMonitorHandle.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C0193AA8 (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C019B9B4 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C019D0F4 (DxgkAcquireSessionModeChangeLock.c)
 *     ?IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEA_N@Z @ 0x1C019D520 (-IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C019D5FC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     MonitorGetIsAutoColorManagementSupported @ 0x1C019D900 (MonitorGetIsAutoColorManagementSupported.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C019DC10 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C019DCD0 (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C019DDF4 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C019DEB8 (MonitorReleaseMonitorHandle.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C019E244 (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AC420 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@@Z @ 0x1C01DA948 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     MonitorGetPseudoSpecializedState @ 0x1C01E1E18 (MonitorGetPseudoSpecializedState.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C01E7524 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     MonitorIsBoostRefreshRateEnabledByDefault @ 0x1C01E7660 (MonitorIsBoostRefreshRateEnabledByDefault.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C01E8270 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?GetCabcOptionFromRegistry@@YAJPEAK@Z @ 0x1C01FB300 (-GetCabcOptionFromRegistry@@YAJPEAK@Z.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C02B7B74 (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C02BCC10 (-DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02D0EF8 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?TriggerCabcV2Wnf@@YAJW4_CABC_OPTION_TYPE@@@Z @ 0x1C02FC908 (-TriggerCabcV2Wnf@@YAJW4_CABC_OPTION_TYPE@@@Z.c)
 *     TriggerSDRWhiteLevelChangedWnf @ 0x1C02FD4F0 (TriggerSDRWhiteLevelChangedWnf.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C0312E5C (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C03131C4 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1C034C774 (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFI.c)
 *     DxgkNotifyDisplayChange @ 0x1C0356BDC (DxgkNotifyDisplayChange.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C03C3E20 (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorEnableBoostRefreshRateEnabledByDefault @ 0x1C03C3FC4 (MonitorEnableBoostRefreshRateEnabledByDefault.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C03C40A4 (MonitorEnableDisableAdvancedColor.c)
 *     MonitorGetSDRWhiteLevel @ 0x1C03C4388 (MonitorGetSDRWhiteLevel.c)
 *     MonitorSetAdvancedColorParams @ 0x1C03C4A50 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetAppOverride @ 0x1C03C4C54 (MonitorSetAppOverride.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C03C5128 (MonitorSetSDRWhiteLevel.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfo(bool a1, unsigned int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 DeviceInterfaces; // r15
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int TargetBaseType; // eax
  struct DXGADAPTER *v23; // rbx
  struct DXGADAPTER *v24; // rbx
  struct _DEVICE_OBJECT *v25; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  PZZWSTR v27; // rcx
  unsigned int v28; // ebx
  unsigned int v29; // edx
  int v30; // eax
  struct DXGADAPTER *v31; // rbx
  int v32; // eax
  unsigned int v33; // edx
  unsigned int v34; // edx
  __int64 v35; // r8
  bool *v36; // rcx
  bool *v37; // rcx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  struct DXGADAPTER *v46; // rdi
  __int64 v47; // rdx
  int MonitorHandle; // eax
  __int64 v49; // rsi
  int PseudoSpecializedState; // eax
  __int64 v51; // r9
  struct DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v53; // rdi
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // r9
  __int64 v57; // rbx
  bool *v58; // rax
  struct _UNICODE_STRING *p_DestinationString; // r8
  __int64 v60; // r9
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v61; // rdx
  __int128 v62; // xmm0
  unsigned int v63; // r9d
  struct DXGGLOBAL *v64; // rax
  unsigned int v65; // edx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v66; // eax
  __int64 v67; // rax
  struct DXGADAPTER *v68; // rbx
  __int64 v69; // r9
  struct DXGADAPTER *v70; // rdx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  int IsBoostRefreshRateEnabledByDefault; // eax
  bool v77; // al
  __int64 v78; // rax
  int v79; // eax
  int v80; // eax
  __int64 v81; // r8
  unsigned int v82; // edx
  int SourceConnectedToTargetInClientVidPn; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v85; // rcx
  int v86; // eax
  const wchar_t *v87; // r9
  struct _LUID v88; // rbx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rax
  __int64 HighPart; // rcx
  __int64 LowPart; // rcx
  int v96; // eax
  __int64 v97; // rdi
  int v98; // eax
  ADAPTER_DISPLAY **v99; // rcx
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rbx
  __int64 v106; // rax
  unsigned int v107; // ecx
  MONITOR_MGR *v108; // rdi
  struct DXGADAPTER *v109; // rdi
  __int64 v110; // r13
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE MonitorInstance; // eax
  DXGMONITOR *v112; // rdi
  char v113; // bl
  PZZWSTR v114; // rdi
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE LinkInfo; // eax
  __int64 v116; // r13
  __int64 v117; // rbx
  const wchar_t *v118; // r9
  __int64 v119; // r9
  int IsMonitorAndDriverWCGCapable; // eax
  int v121; // eax
  __int64 v122; // rdx
  int v123; // eax
  int IsAutoColorManagementSupported; // eax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v125; // ecx
  unsigned int ColorDepthFromPickedWireFormat; // eax
  unsigned int Value; // ecx
  int v128; // eax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v129; // eax
  int SDRWhiteLevel; // eax
  int v131; // eax
  __int64 v132; // r13
  struct _LUID *v133; // rdx
  __int64 v134; // r8
  struct DXGGLOBAL *v135; // rax
  __int64 v136; // rax
  struct DXGGLOBAL *v137; // rax
  struct DXGADAPTER *v138; // rbx
  unsigned int v139; // edx
  struct DXGADAPTER *v140; // rbx
  struct DXGADAPTER *v141; // rdx
  int v142; // ecx
  int v143; // eax
  int v144; // ecx
  unsigned int v145; // edx
  struct _LUID v146; // rcx
  unsigned int v147; // edx
  int v148; // ecx
  struct DXGGLOBAL *v149; // rax
  char *v150; // rdi
  unsigned int v151; // ebx
  unsigned int v152; // ebx
  int v153; // esi
  unsigned int v154; // ecx
  unsigned int *v155; // rbx
  unsigned int *v156; // rsi
  __int64 v157; // rdi
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  int v162; // eax
  struct DXGADAPTER *v163; // r15
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // rcx
  __int64 v167; // r8
  int v169; // eax
  __int64 v170; // rcx
  int v171; // r9d
  int v172; // r8d
  int v173; // edx
  unsigned int v174; // eax
  __int64 v175; // r14
  int v176; // eax
  __int64 v177; // r9
  __int64 v178; // r9
  bool *v179; // [rsp+28h] [rbp-E0h]
  __int64 v180; // [rsp+28h] [rbp-E0h]
  int v181; // [rsp+30h] [rbp-D8h]
  __int64 v182; // [rsp+30h] [rbp-D8h]
  struct _UNICODE_STRING *v183; // [rsp+38h] [rbp-D0h]
  __int64 v184; // [rsp+38h] [rbp-D0h]
  unsigned int v185; // [rsp+38h] [rbp-D0h]
  unsigned int v186; // [rsp+40h] [rbp-C8h]
  bool v187[8]; // [rsp+58h] [rbp-B0h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v188; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v189[4]; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v190; // [rsp+68h] [rbp-A0h]
  PZZWSTR SymbolicLinkList_8[2]; // [rsp+78h] [rbp-90h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v192[2]; // [rsp+88h] [rbp-80h] BYREF
  struct DXGADAPTER *v193[3]; // [rsp+90h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v195; // [rsp+B8h] [rbp-50h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v196[4]; // [rsp+C8h] [rbp-40h] BYREF
  struct DXGADAPTER *v197; // [rsp+D8h] [rbp-30h]
  struct _LUID v198; // [rsp+E0h] [rbp-28h] BYREF
  int v199; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v200; // [rsp+F0h] [rbp-18h]
  char v201; // [rsp+F8h] [rbp-10h]
  _OWORD v202[2]; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v203[44]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v204[16]; // [rsp+288h] [rbp+180h] BYREF
  __int64 v205; // [rsp+298h] [rbp+190h]
  struct DXGADAPTER *v206; // [rsp+2A0h] [rbp+198h]
  char v207; // [rsp+2A8h] [rbp+1A0h]
  __int64 v208; // [rsp+2B0h] [rbp+1A8h]
  __int64 v209; // [rsp+2D8h] [rbp+1D0h]
  __int64 v210; // [rsp+2E0h] [rbp+1D8h]
  char v211; // [rsp+2E8h] [rbp+1E0h]
  __int64 v212; // [rsp+2F0h] [rbp+1E8h]
  _QWORD v213[10]; // [rsp+318h] [rbp+210h] BYREF

  v187[4] = a1;
  v193[0] = 0LL;
  memset(v213, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v213[1]);
  v6 = 1;
  v199 = -1;
  v213[8] = MEMORY[0xFFFFF78000000014];
  LOBYTE(v213[6]) = -1;
  LODWORD(v213[3]) = 39;
  v200 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v201 = 1;
    v199 = 2184;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 2184);
  }
  else
  {
    v201 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v199, 2184);
  LODWORD(v10) = -1073741811;
  if ( a2 )
  {
    v11 = *a2;
    LODWORD(DeviceInterfaces) = 0;
    if ( (unsigned int)v11 <= 0x64 )
    {
      if ( (_DWORD)v11 != 100 )
      {
        if ( (unsigned int)v11 <= 8 )
        {
          if ( (_DWORD)v11 == 8 )
          {
LABEL_16:
            DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v193, (const struct _LUID *)a2 + 1);
            if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v193) )
            {
              v21 = WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
              *(_QWORD *)(v21 + 24) = (int)a2[3];
              *(_QWORD *)(v21 + 32) = a2[2];
              goto LABEL_18;
            }
            v187[1] = 0;
            v30 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v187[1], 0);
            v10 = v30;
            if ( v30 < 0 )
              goto LABEL_50;
            v31 = v193[0];
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v203, v193[0], 0LL);
            if ( *a2 == 7 )
              v32 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v203, 0LL);
            else
              v32 = COREADAPTERACCESS::AcquireExclusive((__int64)v203, 1LL);
            if ( v32 < 0 )
            {
              WdLogSingleEntry3(3LL, v31, *((int *)v31 + 102), *((unsigned int *)v31 + 101));
              LODWORD(v10) = -1073741811;
LABEL_70:
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v203);
              goto LABEL_71;
            }
            if ( !DXGADAPTER::IsDisplayAdapter(v31) || !*(_BYTE *)(*((_QWORD *)v31 + 365) + 290LL) )
            {
              WdLogSingleEntry3(3LL, v31, *((int *)v31 + 102), *((unsigned int *)v31 + 101));
              LODWORD(v10) = -1073741637;
              goto LABEL_70;
            }
            if ( *a2 == 7 )
            {
              v187[0] = 0;
              if ( !a1 )
              {
                WdLogSingleEntry1(1LL, 5356LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5356LL, 0LL, 0LL, 0LL, 0LL);
              }
              v33 = a2[4];
              a2[5] = 0;
              LODWORD(DeviceInterfaces) = MonitorIsMonitorVirtualModeDisabled((__int64)v31, v33, v187);
              if ( (int)DeviceInterfaces >= 0 )
                a2[5] = v187[0] | a2[5] & 0xFFFFFFFE;
            }
            else
            {
              if ( a1 || *a2 != 8 )
              {
                WdLogSingleEntry1(1LL, 5373LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"(!i_bGetDeviceInfo)&& (io_pRequestPacket->type == DISPLAYCONFIG_DEVICE_INFO_SET_SUPPORT_VIRTUAL_RESOLUTION)",
                  5373LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v34 = a2[4];
              v187[0] = 0;
              if ( (int)CheckGivenTargetIsPartOfCloneGroup((ADAPTER_DISPLAY **)v31, v34, (unsigned __int8 *)v187) >= 0
                && v187[0] )
              {
                WdLogSingleEntry3(3LL, *((int *)v31 + 102), *((unsigned int *)v31 + 101), a2[4]);
                LODWORD(v10) = -1073741649;
                goto LABEL_70;
              }
              LOBYTE(v35) = a2[5] & 1;
              LODWORD(DeviceInterfaces) = MonitorDisableMonitorVirtualModeSupport(v31, a2[4], v35, v213);
            }
            goto LABEL_73;
          }
          v13 = v11 - 2;
          if ( !v13 )
          {
            if ( !a1 )
            {
              WdLogSingleEntry1(1LL, 5260LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5260LL, 0LL, 0LL, 0LL, 0LL);
            }
            TargetBaseType = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
            goto LABEL_48;
          }
          v14 = v13 - 1;
          if ( !v14 )
          {
            if ( !a1 )
            {
              WdLogSingleEntry1(1LL, 5190LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5190LL, 0LL, 0LL, 0LL, 0LL);
            }
            memset(v203, 0, sizeof(v203));
            v28 = 0;
            LODWORD(DeviceInterfaces) = -1071774970;
            do
            {
              if ( v28 >= 0x10 )
                break;
              if ( v203[38] )
              {
                WdLogSingleEntry1(1LL, 5202LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PathForTarget.Descriptors[0].pDevMode == NULL",
                  5202LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              memset(v203, 0, sizeof(v203));
              v29 = a2[4];
              v187[2] = 0;
              v187[1] = 0;
              v187[0] = 0;
              LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(
                                            *(struct _LUID *)(a2 + 2),
                                            v29,
                                            (__int64)v187,
                                            (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v203[18],
                                            (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v203[18] + 1,
                                            (__int64)&v203[33] + 4);
              if ( (int)DeviceInterfaces >= 0 )
              {
                v203[9] = *((_QWORD *)a2 + 1);
                HIDWORD(v203[10]) = a2[4];
                HIDWORD(v203[2]) = 65537;
                LODWORD(v203[10]) = v28;
                LODWORD(v203[30]) = -13434880;
                BYTE1(v203[23]) = (!v187[0] ? 4 : 0) | (!v187[1] ? 2 : 0) | !v187[2];
                v203[7] = 0xCF00000000000LL;
                LODWORD(DeviceInterfaces) = BmlGetPathModalityForAdapter(
                                              (__int64)v203,
                                              (const struct _LUID *)a2 + 1,
                                              0,
                                              1u,
                                              0);
                if ( (int)DeviceInterfaces >= 0 )
                {
                  DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((__int64)&v203[11], (__int64)(a2 + 8));
                  *(_QWORD *)(a2 + 5) = *((_QWORD *)a2 + 7);
                }
                BmlFreePathsModality((struct D3DKMT_GETPATHSMODALITY *)v203);
                ++v28;
              }
            }
            while ( (_DWORD)DeviceInterfaces == -1071774970 );
            goto LABEL_19;
          }
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 2;
            if ( v16 )
            {
              if ( v16 != 1 )
              {
LABEL_18:
                LODWORD(DeviceInterfaces) = -1073741811;
                goto LABEL_19;
              }
              goto LABEL_16;
            }
            if ( !a1 )
            {
              WdLogSingleEntry1(1LL, 5270LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5270LL, 0LL, 0LL, 0LL, 0LL);
            }
            TargetBaseType = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a2);
LABEL_48:
            LODWORD(DeviceInterfaces) = TargetBaseType;
            goto LABEL_19;
          }
          DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v193, (const struct _LUID *)a2 + 1);
          if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v193) )
          {
            WdLogSingleEntry3(3LL, a2[2], (int)a2[3], -1073741811LL);
            goto LABEL_335;
          }
          v23 = v193[0];
          DestinationString.Buffer = (wchar_t *)v193[0];
          LOBYTE(v195) = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&DestinationString);
          if ( *((_DWORD *)v23 + 50) == 1 )
          {
            v24 = v193[0];
            v25 = (struct _DEVICE_OBJECT *)*((_QWORD *)v193[0] + 27);
            if ( v25 )
            {
              SymbolicLinkList_8[0] = 0LL;
              DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v25);
              DeviceInterfaces = IoGetDeviceInterfaces(
                                   &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
                                   DeviceAttachmentBaseRef,
                                   0,
                                   SymbolicLinkList_8);
              ObfDereferenceObject(DeviceAttachmentBaseRef);
              if ( (int)DeviceInterfaces >= 0 )
              {
                wcsncpy_s((wchar_t *)a2 + 10, 0x80uLL, SymbolicLinkList_8[0], 0xFFFFFFFFFFFFFFFFuLL);
                v27 = SymbolicLinkList_8[0];
                *((_WORD *)a2 + 11) = 92;
                ExFreePoolWithTag(v27, 0);
              }
              else
              {
                WdLogSingleEntry2(3LL, DeviceAttachmentBaseRef, DeviceInterfaces);
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, v193[0]);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Adapter 0x%I64x had no FDO",
                (__int64)v24,
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(DeviceInterfaces) = -1073741275;
            }
          }
          else
          {
            WdLogSingleEntry2(3LL, v193[0], -1073741130LL);
            LODWORD(DeviceInterfaces) = -1073741130;
          }
LABEL_32:
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&DestinationString);
          goto LABEL_19;
        }
        v38 = v11 - 9;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            v40 = v39 - 1;
            if ( v40 )
            {
              v41 = v40 - 1;
              if ( v41 )
              {
                if ( v41 != 1 )
                  goto LABEL_18;
                goto LABEL_79;
              }
              DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v193, (const struct _LUID *)a2 + 1);
              if ( wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v193) )
              {
                v46 = v193[0];
                v47 = a2[4];
                SymbolicLinkList_8[0] = 0LL;
                MonitorHandle = MonitorGetMonitorHandle(
                                  (__int64)v193[0],
                                  v47,
                                  0LL,
                                  &DxgkDisplayConfigDeviceInfo,
                                  SymbolicLinkList_8);
                v10 = MonitorHandle;
                if ( MonitorHandle < 0 )
                {
                  WdLogSingleEntry4(2LL, *((int *)v46 + 102), *((unsigned int *)v46 + 101), a2[4], MonitorHandle);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
                    *((int *)v46 + 102),
                    *((unsigned int *)v46 + 101),
                    a2[4],
                    v10,
                    0LL);
                  goto LABEL_335;
                }
                v49 = (__int64)SymbolicLinkList_8[0];
                if ( !SymbolicLinkList_8[0] )
                {
                  WdLogSingleEntry1(1LL, 6406LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"MonitorHandle != NULL",
                    6406LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v187[0] = 0;
                v187[2] = 0;
                v187[1] = 0;
                PseudoSpecializedState = MonitorGetPseudoSpecializedState(v49, &v187[2], &v187[1], v187);
                DeviceInterfaces = PseudoSpecializedState;
                if ( PseudoSpecializedState >= 0 )
                {
                  v51 = v187[2] ? 2 : 0;
                  a2[5] = v51 | (v187[1] ? 4 : 0) | v187[0] | a2[5] & 0xFFFFFFF8;
                }
                else
                {
                  WdLogSingleEntry1(2LL, PseudoSpecializedState);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to call MonitorGetPseudoSpecializedState with status 0x%I64x",
                    DeviceInterfaces,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                MonitorReleaseMonitorHandle((__int64)v46, v49, &DxgkDisplayConfigDeviceInfo, v51);
                goto LABEL_19;
              }
LABEL_301:
              v93 = WdLogNewEntry5_WdTrace(v43, v42, v44, v45);
              *(_QWORD *)(v93 + 24) = (int)a2[3];
              LowPart = a2[2];
              goto LABEL_158;
            }
          }
        }
LABEL_155:
        v88 = (struct _LUID)*((_QWORD *)a2 + 1);
        DeviceInterfaces = a2[4];
        v198 = v88;
        v190 = DeviceInterfaces;
        DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v193, &v198);
        if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v193) )
        {
          v93 = WdLogNewEntry5_WdTrace(v90, v89, v91, v92);
          HighPart = v198.HighPart;
LABEL_157:
          *(_QWORD *)(v93 + 24) = HighPart;
          LowPart = v88.LowPart;
LABEL_158:
          *(_QWORD *)(v93 + 32) = LowPart;
          goto LABEL_335;
        }
        v96 = DxgkAcquireSessionModeChangeLock(0);
        v97 = v96;
        if ( v96 < 0 )
        {
          v189[0] = 0;
          WdLogSingleEntry1(2LL, v96);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
            v97,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v10) = v97;
          goto LABEL_259;
        }
        v10 = (__int64)v193[0];
        v189[0] = 1;
        v204[1] = 0;
        v197 = v193[0];
        v206 = v193[0];
        v207 = 0;
        v208 = 0LL;
        if ( v193[0] )
        {
          _InterlockedAdd64((volatile signed __int64 *)v193[0] + 3, 1uLL);
          v10 = (__int64)v193[0];
          v205 = -1LL;
          v197 = v193[0];
        }
        v210 = v10;
        v211 = 0;
        v212 = 0LL;
        if ( v10 )
        {
          _InterlockedAdd64((volatile signed __int64 *)(v10 + 24), 1uLL);
          v10 = (__int64)v193[0];
          v209 = -1LL;
          v197 = v193[0];
        }
        if ( *a2 == 10 || *a2 == -18 )
          v98 = COREADAPTERACCESS::AcquireExclusive((__int64)v204, 1LL);
        else
          v98 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v204, 0LL);
        if ( v98 < 0 )
        {
          WdLogSingleEntry3(2LL, v10, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Could not acquire adapter core access; adapter probably suspended. (pAdapter = 0x%I64x, pAdapter->G"
                      "etLuid() = <0x%I64x, 0x%I64x>)",
            v10,
            *(int *)(v10 + 408),
            *(unsigned int *)(v10 + 404),
            0LL,
            0LL);
          LODWORD(v10) = -1073741811;
LABEL_183:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v204);
LABEL_259:
          v36 = v189;
          goto LABEL_334;
        }
        if ( !DXGADAPTER::IsDisplayAdapter((DXGADAPTER *)v10) )
        {
          WdLogSingleEntry3(3LL, v10, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404));
          LODWORD(v10) = -1073741637;
          goto LABEL_183;
        }
        v187[0] = 0;
        v100 = CheckGivenTargetIsPartOfCloneGroup(v99, DeviceInterfaces, (unsigned __int8 *)v187);
        v105 = DeviceInterfaces;
        LODWORD(DeviceInterfaces) = -1073741275;
        if ( v100 == -1073741275 )
        {
          WdLogSingleEntry4(3LL, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404), v105, -1073741275LL);
          v187[1] = 0;
        }
        else
        {
          v187[1] = v187[0];
        }
        v106 = WdLogNewEntry5_WdTrace(v102, v101, v103, v104);
        *(_QWORD *)(v106 + 24) = v105;
        *(_QWORD *)(v106 + 32) = v10;
        if ( !v10 )
          goto LABEL_181;
        v107 = v105;
        if ( (_DWORD)v105 == -1 )
          goto LABEL_181;
        if ( !*(_QWORD *)(v10 + 2920) )
        {
          WdLogSingleEntry0(1LL);
          v107 = v105;
        }
        v108 = *(MONITOR_MGR **)(*(_QWORD *)(v10 + 2920) + 112LL);
        if ( !v108 )
        {
          WdLogSingleEntry1(2LL, v10);
LABEL_181:
          LODWORD(v10) = -1073741811;
LABEL_182:
          v109 = v197;
          v110 = v190;
          WdLogSingleEntry4(2LL, *((int *)v197 + 102), *((unsigned int *)v197 + 101), v190, (int)v10);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
            *((int *)v109 + 102),
            *((unsigned int *)v109 + 101),
            v110,
            (int)v10,
            0LL);
          goto LABEL_183;
        }
        *(_QWORD *)v196 = 0LL;
        MonitorInstance = (unsigned int)MONITOR_MGR::_GetMonitorInstance(v108, v107, 0, (struct DXGMONITOR **)v196);
        v192[0] = MonitorInstance;
        if ( MonitorInstance == -1073741275 )
        {
          WdLogSingleEntry2(7LL, v105, v108);
          LODWORD(v10) = -1073741275;
          goto LABEL_182;
        }
        if ( MonitorInstance < D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709 )
        {
          WdLogSingleEntry2(2LL, v105, v108);
          SLODWORD(v10) = v192[0];
          goto LABEL_182;
        }
        v112 = *(DXGMONITOR **)v196;
        v113 = 0;
        if ( !*(_QWORD *)v196 )
          WdLogSingleEntry0(1LL);
        DXGMONITOR::_AddReference(v112, &DxgkDisplayConfigDeviceInfo);
        if ( !v112 )
        {
          WdLogSingleEntry0(1LL);
          WdLogSingleEntry1(1LL, 6038LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 6038LL, 0LL, 0LL, 0LL, 0LL);
          v10 = (__int64)v197;
          LODWORD(DeviceInterfaces) = -1073741811;
LABEL_199:
          v116 = v190;
          v117 = (int)DeviceInterfaces;
          WdLogSingleEntry4(2LL, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404), v190, (int)DeviceInterfaces);
          v118 = L"MonitorIsMonitorAndLinkHDRCapable() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
          goto LABEL_200;
        }
        v188.Value = 0;
        MONITOR_MGR::AcquireMonitorShared(SymbolicLinkList_8, (__int64)v112);
        v114 = SymbolicLinkList_8[0];
        if ( !SymbolicLinkList_8[0] )
        {
          WdLogSingleEntry1(2LL, -1073741275LL);
          RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)SymbolicLinkList_8);
LABEL_198:
          v112 = *(DXGMONITOR **)v196;
          goto LABEL_199;
        }
        *(_QWORD *)&DestinationString.Length = 0LL;
        LODWORD(DestinationString.Buffer) = 0;
        LinkInfo = (unsigned int)DXGMONITOR::_GetLinkInfo(
                                   (DXGMONITOR *)SymbolicLinkList_8[0],
                                   (struct _DXGK_MONITORLINKINFO *)&DestinationString);
        v192[0] = LinkInfo;
        if ( LinkInfo == -1073741275 )
        {
          RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)SymbolicLinkList_8);
        }
        else
        {
          if ( LinkInfo < D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709 )
          {
            RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)SymbolicLinkList_8);
            SLODWORD(DeviceInterfaces) = v192[0];
            goto LABEL_198;
          }
          DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
            *((DxgMonitor::MonitorColorState **)v114 + 28),
            (const struct _DXGK_MONITORLINKINFO *)&DestinationString,
            (union MONITOR_AND_LINK_HDR_CAPS *)&v188);
          ExReleaseResourceLite((PERESOURCE)(v114 + 12));
          KeLeaveCriticalRegion();
          v113 = (char)v188.0;
        }
        v112 = *(DXGMONITOR **)v196;
        v187[0] = 0;
        IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(*(__int64 *)v196, v187);
        LODWORD(DeviceInterfaces) = IsMonitorAndDriverWCGCapable;
        if ( IsMonitorAndDriverWCGCapable >= 0 )
        {
          v188.Value = 0;
          v192[0] = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
          v187[2] = 0;
          v121 = IsCurrentModeAdvancedColor((struct DXGADAPTER *)v10, v190, &v188, v192, &v187[2]);
          LODWORD(DeviceInterfaces) = v121;
          if ( v121 >= 0 )
          {
            if ( v187[1] && v187[2] )
            {
              WdLogSingleEntry1(1LL, 6089LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"!bCurrentModeAdvancedColor",
                6089LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v123 = *a2;
            if ( *a2 == 9 )
            {
              if ( !v187[4] )
              {
                WdLogSingleEntry1(1LL, 6099LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 6099LL, 0LL, 0LL, 0LL, 0LL);
              }
              v187[3] = 0;
              IsAutoColorManagementSupported = MonitorGetIsAutoColorManagementSupported((__int64)v112, &v187[3]);
              LODWORD(DeviceInterfaces) = IsAutoColorManagementSupported;
              if ( IsAutoColorManagementSupported >= 0 )
              {
                if ( (v113 & 1) == 0 && !v187[0] || v187[1] )
                  v6 = 0;
                v125.0 = v188.0;
                a2[5] = (v187[3] ? 4 : 0) | (v187[2] ? 2 : 0) | v6 & 0xFFFFFFF9 | a2[5] & 0xFFFFFFF8;
                ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(v125);
                Value = v188.Value;
                a2[7] = ColorDepthFromPickedWireFormat;
                a2[6] = ConvertDmmToDisplayConfigColorEncoding(Value);
                a2[5] = a2[5] & 0xFFFFFFF7 | (*((_BYTE *)DXGGLOBAL::GetGlobal() + 304780) == 0 ? 8 : 0);
                goto LABEL_257;
              }
              v117 = IsAutoColorManagementSupported;
              v116 = v190;
              WdLogSingleEntry4(
                2LL,
                *(int *)(v10 + 408),
                *(unsigned int *)(v10 + 404),
                v190,
                IsAutoColorManagementSupported);
              v118 = L"MonitorGetIsAutoColorManagementSupported() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
            }
            else
            {
              if ( v123 != 10 )
              {
                if ( v123 == 11 )
                {
                  if ( !v187[4] )
                  {
                    WdLogSingleEntry1(1LL, 6175LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"i_bGetDeviceInfo",
                      6175LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  v129.Value = 1000;
                  v188.Value = 1000;
                  if ( v187[2] && (v113 & 1) != 0 )
                  {
                    SDRWhiteLevel = MonitorGetSDRWhiteLevel(v112, &v188);
                    LODWORD(DeviceInterfaces) = SDRWhiteLevel;
                    if ( SDRWhiteLevel >= 0 )
                    {
                      v129.0 = v188.0;
                    }
                    else
                    {
                      WdLogSingleEntry4(3LL, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404), v190, SDRWhiteLevel);
                      v129.Value = 3000;
                    }
                  }
                  a2[5] = v129.Value;
                  goto LABEL_257;
                }
                if ( v123 == -18 )
                {
                  if ( v187[4] )
                  {
                    WdLogSingleEntry1(1LL, 6204LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"!i_bGetDeviceInfo",
                      6204LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( a2[5] - 1000 > 0x1388 )
                  {
                    v10 = (__int64)v197;
                    LODWORD(DeviceInterfaces) = -1073741811;
                  }
                  else if ( v187[2] && (v113 & 1) != 0 )
                  {
                    v131 = MonitorSetSDRWhiteLevel(v112);
                    DeviceInterfaces = v131;
                    if ( v131 >= 0 )
                    {
                      if ( v131 )
                      {
                        if ( v131 == 255 )
                          LODWORD(DeviceInterfaces) = 0;
                      }
                      else
                      {
                        if ( !*((_BYTE *)a2 + 24) )
                          goto LABEL_257;
                        TriggerSDRWhiteLevelChangedWnf();
                        SymbolicLinkList_8[0] = 0LL;
                        memset(v202, 0, sizeof(v202));
                        LODWORD(v202[0]) = 13;
                        DXGADAPTER::IsAdapterSessionized(
                          (DXGADAPTER *)v10,
                          v133,
                          0LL,
                          (unsigned __int64 *)SymbolicLinkList_8);
                        SMgrGdiCallout(v202, SymbolicLinkList_8[0], v134, 0LL, 0LL, 0LL);
                      }
                    }
                    else
                    {
                      v132 = v190;
                      WdLogSingleEntry4(2LL, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404), v190, v131);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"MonitorSetSDRWhiteLevel() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
                        *(int *)(v10 + 408),
                        *(unsigned int *)(v10 + 404),
                        v132,
                        DeviceInterfaces,
                        0LL);
                    }
                  }
                  else
                  {
                    LODWORD(DeviceInterfaces) = -1073741637;
                  }
                  if ( *((_BYTE *)a2 + 24) )
                    DxgkNotifyDisplayChange(0LL);
                }
LABEL_257:
                MonitorReleaseMonitorHandle(v10, (__int64)v112, &DxgkDisplayConfigDeviceInfo, v119);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v204);
                v37 = v189;
                goto LABEL_348;
              }
              if ( v187[4] )
              {
                WdLogSingleEntry1(1LL, 6129LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!i_bGetDeviceInfo", 6129LL, 0LL, 0LL, 0LL, 0LL);
              }
              if ( (v113 & 1) == 0 && !v187[0] || v187[1] )
              {
                LODWORD(DeviceInterfaces) = -1073741637;
                goto LABEL_257;
              }
              LOBYTE(v122) = a2[5] & 1;
              v128 = MonitorEnableDisableAdvancedColor(v112, v122);
              LODWORD(DeviceInterfaces) = v128;
              if ( v128 >= 0 )
              {
                if ( v128 == 255 && (a2[5] & 1) != v187[2] )
                  LODWORD(DeviceInterfaces) = 0;
                goto LABEL_257;
              }
              v117 = v128;
              v116 = v190;
              WdLogSingleEntry4(2LL, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404), v190, v128);
              v118 = L"MonitorEnableDisableAdvancedColor() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
            }
          }
          else
          {
            v117 = v121;
            v116 = v190;
            WdLogSingleEntry4(2LL, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404), v190, v121);
            v118 = L"IsCurrentModeAdvancedColor() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
          }
        }
        else
        {
          v117 = IsMonitorAndDriverWCGCapable;
          v116 = v190;
          WdLogSingleEntry4(2LL, *(int *)(v10 + 408), *(unsigned int *)(v10 + 404), v190, IsMonitorAndDriverWCGCapable);
          v118 = L"MonitorIsMonitorAndDriverWCGCapable() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
        }
LABEL_200:
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)v118,
          *(int *)(v10 + 408),
          *(unsigned int *)(v10 + 404),
          v116,
          v117,
          0LL);
        goto LABEL_257;
      }
LABEL_287:
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v193, (const struct _LUID *)a2 + 1);
      if ( wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v193) )
      {
        v138 = v193[0];
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v203, v193[0], 0LL);
        if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v203, 0LL) >= 0 )
        {
          if ( (*((_DWORD *)v138 + 109) & 0x100) == 0 )
          {
            WdLogSingleEntry3(3LL, v138, *((int *)v138 + 102), *((unsigned int *)v138 + 101));
            LODWORD(v10) = -1073741637;
            goto LABEL_105;
          }
          if ( *a2 == -10 )
          {
            if ( (int)ADAPTER_DISPLAY::DodGetRenderAdapter(
                        *((ADAPTER_DISPLAY **)v138 + 365),
                        a2[4],
                        (struct _LUID *)(a2 + 5)) >= 0 )
              goto LABEL_297;
          }
          else
          {
            if ( *a2 != 100 )
            {
              WdLogSingleEntry1(1LL, 5662LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"DISPLAYCONFIG_DEVICE_INFO type not handled",
                5662LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_105;
            }
            v139 = a2[4];
            v195 = 0LL;
            DestinationString = 0LL;
            if ( (int)DXGADAPTER::GetVirtualMonitorInfo(
                        v138,
                        v139,
                        (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&DestinationString) >= 0 )
            {
              a2[5] = *(_DWORD *)(&DestinationString.MaximumLength + 1);
              goto LABEL_297;
            }
          }
        }
        WdLogSingleEntry3(3LL, v138, *((int *)v138 + 102), *((unsigned int *)v138 + 101));
        goto LABEL_105;
      }
      goto LABEL_301;
    }
    if ( (unsigned int)v11 <= 0xFFFFFFEE )
    {
      if ( (_DWORD)v11 == -18 )
        goto LABEL_155;
      if ( (unsigned int)(v11 + 31) > 1 )
      {
        if ( (unsigned int)(v11 + 27) > 1 )
        {
          if ( (_DWORD)v11 != -24 )
          {
            if ( (_DWORD)v11 != -23 )
            {
              if ( (_DWORD)v11 == -22 )
              {
                TargetBaseType = DxgkCreateLightweightDeviceAndContext((struct _LUID *)a2 + 1);
              }
              else
              {
                if ( (_DWORD)v11 != -19 )
                  goto LABEL_18;
                Global = DXGGLOBAL::GetGlobal();
                TargetBaseType = DXGGLOBAL::IterateAdaptersWithCallback(
                                   (__int64)Global,
                                   (__int64 (__fastcall *)(_QWORD *, __int64))SendColorimetricControlToDriverCallback,
                                   (__int64)a2,
                                   4);
              }
              goto LABEL_48;
            }
LABEL_79:
            if ( !IsCurrentProcessAdmin() )
            {
              LODWORD(v10) = -1073741790;
              goto LABEL_335;
            }
            DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v193, (const struct _LUID *)a2 + 1);
            if ( wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v193) )
            {
              v53 = v193[0];
              COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v203, v193[0], 0LL);
              if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v203, 1LL) < 0 )
              {
                WdLogSingleEntry3(2LL, v53, *((int *)v53 + 102), *((unsigned int *)v53 + 101));
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Could not acquire adapter core access; adapter probably suspended. (pAdapter = 0x%I64x, pAdap"
                            "ter->GetLuid() = <0x%I64x, 0x%I64x>)",
                  (__int64)v53,
                  *((int *)v53 + 102),
                  *((unsigned int *)v53 + 101),
                  0LL,
                  0LL);
LABEL_105:
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v203);
                goto LABEL_335;
              }
              v54 = a2[4];
              SymbolicLinkList_8[0] = 0LL;
              v55 = MonitorGetMonitorHandle((__int64)v53, v54, 0LL, &DxgkDisplayConfigDeviceInfo, SymbolicLinkList_8);
              DeviceInterfaces = v55;
              if ( v55 < 0 )
              {
                WdLogSingleEntry4(2LL, *((int *)v53 + 102), *((unsigned int *)v53 + 101), a2[4], v55);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
                  *((int *)v53 + 102),
                  *((unsigned int *)v53 + 101),
                  a2[4],
                  DeviceInterfaces,
                  0LL);
                LODWORD(v10) = DeviceInterfaces;
                goto LABEL_105;
              }
              v57 = (__int64)SymbolicLinkList_8[0];
              if ( !SymbolicLinkList_8[0] )
              {
                WdLogSingleEntry1(1LL, 6332LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"MonitorHandle != NULL",
                  6332LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( *a2 == -23 )
              {
                v58 = (bool *)*((_QWORD *)a2 + 5);
                p_DestinationString = &DestinationString;
                v60 = a2[9];
                v61 = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)SymbolicLinkList_8;
                v183 = 0LL;
                DestinationString = 0LL;
                v62 = *(_OWORD *)(a2 + 5);
                LOBYTE(v181) = 0;
                v179 = v58;
              }
              else
              {
                if ( *a2 != 13 )
                  goto LABEL_116;
                SymbolicLinkList_8[0] = 0LL;
                if ( (int)RtlStringCbLengthW(
                            (const unsigned __int16 *)a2 + 28,
                            0x100uLL,
                            (unsigned __int64 *)SymbolicLinkList_8) < 0
                  || !SymbolicLinkList_8[0] )
                {
                  WdLogSingleEntry1(2LL, 6355LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"DISPLAYCONFIG_DEVICE_INFO_SET_MONITOR_SPECIALIZATION was called with an invalid app name string.",
                    6355LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  LODWORD(DeviceInterfaces) = -1073741811;
                  goto LABEL_116;
                }
                DestinationString = 0LL;
                RtlInitUnicodeString(&DestinationString, (PCWSTR)a2 + 28);
                v63 = a2[5];
                v62 = *(_OWORD *)(a2 + 10);
                v183 = &DestinationString;
                p_DestinationString = (struct _UNICODE_STRING *)SymbolicLinkList_8;
                LOBYTE(v181) = 1;
                v61 = v196;
                *(_OWORD *)v196 = *(_OWORD *)(a2 + 6);
                v179 = 0LL;
                v60 = v63 & 1;
              }
              *(_OWORD *)SymbolicLinkList_8 = v62;
              LODWORD(DeviceInterfaces) = MonitorSetAppOverride(v57, v61, p_DestinationString, v60, v179, v181, v183);
LABEL_116:
              MonitorReleaseMonitorHandle((__int64)v53, v57, &DxgkDisplayConfigDeviceInfo, v56);
LABEL_297:
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v203);
              goto LABEL_19;
            }
            goto LABEL_301;
          }
          v64 = DXGGLOBAL::GetGlobal();
          v65 = a2[4];
          if ( !*((_BYTE *)v64 + 304880) )
          {
            *(_QWORD *)(a2 + 5) = *((_QWORD *)a2 + 1);
            a2[7] = v65;
            goto LABEL_19;
          }
          *(_QWORD *)&DestinationString.Length = *((_QWORD *)a2 + 1);
          DestinationString.Buffer = (wchar_t *)v65;
          SymbolicLinkList_8[0] = 0LL;
          LODWORD(SymbolicLinkList_8[1]) = 0;
          LODWORD(DeviceInterfaces) = REMOTEMONITORMAPPING::FindMappingFromGuestId(
                                        (struct DXGGLOBAL *)((char *)v64 + 304832),
                                        (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&DestinationString,
                                        (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)SymbolicLinkList_8);
          if ( (int)DeviceInterfaces < 0 )
            goto LABEL_19;
          *(PZZWSTR *)(a2 + 5) = SymbolicLinkList_8[0];
          v66 = (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE)SymbolicLinkList_8[1];
LABEL_121:
          a2[7] = v66;
          goto LABEL_19;
        }
        if ( a2[1] < 0x18 )
        {
LABEL_123:
          v67 = WdLogNewEntry5_WdTrace(v11, v7, v8, v9);
          LODWORD(v10) = -1073741789;
          *(_QWORD *)(v67 + 24) = a2[1];
          *(_QWORD *)(v67 + 32) = -1073741789LL;
          goto LABEL_335;
        }
        DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v193, (const struct _LUID *)a2 + 1);
        if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v193) )
          goto LABEL_301;
        v68 = v193[0];
        if ( !DXGADAPTER::IsDisplayAdapter(v193[0]) )
        {
          v69 = *((unsigned int *)v68 + 101);
          v70 = v68;
          v71 = *((int *)v68 + 102);
LABEL_150:
          WdLogSingleEntry3(3LL, v70, v71, v69);
          LODWORD(v10) = -1073741637;
          goto LABEL_335;
        }
        if ( *a2 != -26 )
        {
          v187[1] = 0;
          v79 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v187[1], 0);
          v10 = v79;
          if ( v79 < 0 )
          {
LABEL_50:
            WdLogSingleEntry1(3LL, v10);
LABEL_71:
            v36 = &v187[1];
LABEL_334:
            DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v36);
            goto LABEL_335;
          }
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v203, v68, 0LL);
          v80 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v203, 0LL);
          LODWORD(v10) = v80;
          if ( v80 < 0 )
          {
            WdLogSingleEntry4(3LL, v68, *((int *)v68 + 102), *((unsigned int *)v68 + 101), v80);
            goto LABEL_70;
          }
          LOBYTE(v81) = *((_BYTE *)a2 + 20) != 0;
          LODWORD(DeviceInterfaces) = MonitorEnableBoostRefreshRateEnabledByDefault(v68, a2[4], v81);
          if ( (_DWORD)DeviceInterfaces == -1073741802 )
          {
            v82 = a2[4];
            v188.Value = 0;
            SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(
                                                     v68,
                                                     v82,
                                                     (unsigned int *)&v188);
            LODWORD(DeviceInterfaces) = SourceConnectedToTargetInClientVidPn;
            if ( SourceConnectedToTargetInClientVidPn == -1071774884
              || SourceConnectedToTargetInClientVidPn == -1071774912 )
            {
              LODWORD(DeviceInterfaces) = 0;
            }
            else if ( SourceConnectedToTargetInClientVidPn >= 0 )
            {
              DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v68 + 365), v188.Value);
              if ( *((_BYTE *)a2 + 20) || *((_DWORD *)DisplayModeInfo + 18) >= 2u )
                LODWORD(DeviceInterfaces) = -1073741802;
            }
          }
LABEL_73:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v203);
          v37 = &v187[1];
LABEL_348:
          DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v37);
          goto LABEL_19;
        }
        v187[0] = 0;
        DestinationString.Buffer = (wchar_t *)v68;
        LOBYTE(v195) = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&DestinationString);
        if ( *((_DWORD *)v68 + 50) == 1 )
        {
          IsBoostRefreshRateEnabledByDefault = MonitorIsBoostRefreshRateEnabledByDefault(v193[0], a2[4], v187);
          LODWORD(DeviceInterfaces) = IsBoostRefreshRateEnabledByDefault;
          if ( IsBoostRefreshRateEnabledByDefault == -1073741632 )
          {
            LODWORD(DeviceInterfaces) = 0;
            v77 = 0;
          }
          else
          {
            if ( IsBoostRefreshRateEnabledByDefault < 0 )
              goto LABEL_32;
            v77 = v187[0];
          }
          *((_BYTE *)a2 + 20) = v77;
          goto LABEL_32;
        }
LABEL_134:
        v78 = WdLogNewEntry5_WdTrace(v73, v72, v74, v75);
        LODWORD(v10) = -1073741130;
        *(struct DXGADAPTER **)(v78 + 24) = v193[0];
        *(_QWORD *)(v78 + 32) = -1073741130LL;
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&DestinationString);
        goto LABEL_335;
      }
      if ( a2[1] < 0x18 )
        goto LABEL_123;
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v193, (const struct _LUID *)a2 + 1);
      if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v193) )
        goto LABEL_301;
      if ( !DXGADAPTER::IsDisplayAdapter(v193[0]) )
      {
        v69 = *(unsigned int *)(v85 + 404);
        v70 = (struct DXGADAPTER *)v85;
        v71 = *(int *)(v85 + 408);
        goto LABEL_150;
      }
      if ( *a2 != -30 )
      {
        v188.Value = 0;
        GetCabcOptionFromRegistry((unsigned int *)&v188);
        a2[5] = v188.Value;
        goto LABEL_19;
      }
      v86 = TriggerCabcV2Wnf(a2[5]);
      DeviceInterfaces = v86;
      if ( v86 >= 0 )
      {
LABEL_19:
        LODWORD(v10) = DeviceInterfaces;
        goto LABEL_335;
      }
      WdLogSingleEntry1(2LL, v86);
      v87 = L"TriggerCabcV2Wnf failed 0x%I64x";
      v184 = 0LL;
      v182 = 0LL;
      v180 = DeviceInterfaces;
LABEL_278:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v87, v180, v182, v184, 0LL, 0LL);
      goto LABEL_19;
    }
    if ( (_DWORD)v11 != -16 )
    {
      switch ( (_DWORD)v11 )
      {
        case 0xFFFFFFF2:
          v149 = DXGGLOBAL::GetGlobal();
          v150 = (char *)v149 + 1384;
          *(_QWORD *)&DestinationString.Length = (char *)v149 + 1384;
          LOBYTE(DestinationString.Buffer) = 0;
          if ( v149 == (struct DXGGLOBAL *)-1384LL )
          {
            WdLogSingleEntry1(1LL, 592LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( *(struct _KTHREAD **)(*(_QWORD *)&DestinationString.Length + 24LL) == KeGetCurrentThread() )
          {
            WdLogSingleEntry1(1LL, 599LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
          }
          DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)&DestinationString.Length);
          v151 = *((_DWORD *)v150 + 17);
          LOBYTE(DestinationString.Buffer) = 0;
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)&DestinationString.Length);
          a2[6] = v151;
          SymbolicLinkList_8[0] = (PZZWSTR)v150;
          LOBYTE(SymbolicLinkList_8[1]) = 0;
          if ( *((struct _KTHREAD **)v150 + 3) == KeGetCurrentThread() )
          {
            WdLogSingleEntry1(1LL, 599LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
          }
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)SymbolicLinkList_8[0]);
          LOBYTE(SymbolicLinkList_8[1]) = 0;
          v152 = 0xFFFFFFFF >> (32 - v150[68]) << (32 - v150[68]);
          DXGFASTMUTEX::Release((struct _KTHREAD **)SymbolicLinkList_8[0]);
          a2[8] = v152;
          LOBYTE(v196[2]) = 0;
          *(_QWORD *)v196 = v150;
          if ( *((struct _KTHREAD **)v150 + 3) == KeGetCurrentThread() )
          {
            WdLogSingleEntry1(1LL, 599LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( LOBYTE(v196[2]) )
            WdLogSingleEntry5(0LL, 275LL, 4LL, v196, 0LL, 0LL);
          DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)v196);
          v153 = 32 - *((_DWORD *)v150 + 17);
          LOBYTE(v196[2]) = 0;
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)v196);
          v154 = a2[9];
          a2[7] = v153;
          if ( (v154 & 2) != 0 )
            goto LABEL_19;
          v155 = a2 + 5;
          v156 = a2 + 4;
          if ( (v154 & 1) == 0 )
          {
            LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                          (DXGADAPTERSOURCEHASH *)v150,
                                          (const struct _LUID *)a2 + 1,
                                          *v156,
                                          a2 + 5);
            if ( (int)DeviceInterfaces >= 0 )
              goto LABEL_19;
            WdLogSingleEntry3(2LL, (int)a2[3], a2[2], *v156);
            v87 = L"Failed to find has for adapter <0x%I64x, 0x%I64x>, source:0x%I64x";
            v184 = *v156;
            v182 = a2[2];
            v180 = (int)a2[3];
            goto LABEL_278;
          }
          LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                                        (DXGADAPTERSOURCEHASH *)v150,
                                        *v155,
                                        (struct _LUID *)a2 + 1,
                                        a2 + 4);
          if ( (int)DeviceInterfaces >= 0 )
            goto LABEL_19;
          WdLogSingleEntry1(2LL, *v155);
          v136 = *v155;
          v87 = L"Failed to find source/adapter from hash 0x%I64x";
          v184 = 0LL;
          v182 = 0LL;
          break;
        case 0xFFFFFFF3:
          v145 = a2[4];
          v146 = (struct _LUID)*((_QWORD *)a2 + 1);
          v187[3] = 0;
          v187[0] = 0;
          v187[1] = 0;
          v188.Value = 0;
          v196[0] = D3DKMDT_VOT_HD15;
          v192[0] = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
          LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(
                                        v146,
                                        v145,
                                        (__int64)&v187[1],
                                        (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v188,
                                        v196,
                                        (__int64)v192);
          if ( (int)DeviceInterfaces >= 0 )
          {
            v147 = (v187[0] ? 2 : 0) | v187[3] | a2[8] & 0xFFFFFFFC;
            v148 = -v187[1];
            a2[5] = v188.Value;
            a2[6] = v196[0];
            v66 = v192[0];
            a2[8] = v148 & 4 | v147 & 0xFFFFFFFB;
            goto LABEL_121;
          }
          WdLogSingleEntry3(2LL, (int)a2[3], a2[2], a2[4]);
          v87 = L"Failed DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_INFO_INTERNAL for adapter <0x%I64x, 0x%I64x>, target:0x%I64x";
          v184 = a2[4];
          v182 = a2[2];
          v180 = (int)a2[3];
          goto LABEL_278;
        case 0xFFFFFFF4:
          a2[5] = 0;
          DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v193, (const struct _LUID *)a2 + 1);
          if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v193) )
            goto LABEL_301;
          v140 = v193[0];
          DestinationString.Buffer = (wchar_t *)v193[0];
          LOBYTE(v195) = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&DestinationString);
          if ( *((_DWORD *)v140 + 50) == 1 )
          {
            v141 = v193[0];
            a2[5] ^= (a2[5] ^ (*((_DWORD *)v193[0] + 566) >> 2)) & 1;
            v142 = a2[5] ^ ((unsigned __int8)a2[5] ^ (unsigned __int8)(*((_DWORD *)v141 + 566) >> 2)) & 2;
            a2[5] = v142;
            v143 = v142 ^ ((unsigned __int8)v142 ^ (unsigned __int8)(*((_DWORD *)v141 + 566) >> 2)) & 4;
            a2[5] = v143;
            v144 = v143 ^ ((unsigned __int8)v143 ^ (unsigned __int8)(32 * *((_DWORD *)v141 + 566))) & 0x20;
            a2[5] = v144;
            a2[5] = v144 ^ ((unsigned __int8)v144 ^ (unsigned __int8)(8 * *((_DWORD *)v141 + 566))) & 0x10;
            goto LABEL_32;
          }
          goto LABEL_134;
        case 0xFFFFFFF6:
          goto LABEL_287;
        case 0xFFFFFFFA:
          if ( a1 )
          {
            WdLogSingleEntry1(1LL, 5565LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!i_bGetDeviceInfo", 5565LL, 0LL, 0LL, 0LL, 0LL);
          }
          LODWORD(DeviceInterfaces) = 0;
          if ( g_OSTestSigningEnabled && !a2[5] )
          {
            *((_DWORD *)DXGGLOBAL::GetGlobal() + 339) = 0;
            goto LABEL_19;
          }
          if ( a2[5] - 1 <= 3 )
          {
            v137 = DXGGLOBAL::GetGlobal();
            if ( a2[5] != 1 )
            {
              switch ( a2[5] )
              {
                case 2u:
                  v6 = 2;
                  break;
                case 3u:
                  v6 = 3;
                  break;
                case 4u:
                  v6 = 4;
                  break;
              }
            }
            *((_DWORD *)v137 + 339) = v6;
            goto LABEL_19;
          }
          LODWORD(DeviceInterfaces) = -1073741811;
          WdLogSingleEntry2(2LL, (int)a2[5], -1073741811LL);
          v136 = (int)a2[5];
          v87 = L"Caller specified a wrong rotataion mode 0x%I64x, returning 0x%I64x.";
          v184 = 0LL;
          v182 = -1073741811LL;
          break;
        case 0xFFFFFFFB:
          if ( !a1 )
          {
            WdLogSingleEntry1(1LL, 5555LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5555LL, 0LL, 0LL, 0LL, 0LL);
          }
          v135 = DXGGLOBAL::GetGlobal();
          a2[5] = ConvertDmmToDisplayConfigRotation((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*((_DWORD *)v135 + 339));
          LODWORD(DeviceInterfaces) = 0;
          goto LABEL_19;
        default:
          goto LABEL_18;
      }
      v180 = v136;
      goto LABEL_278;
    }
    v88 = (struct _LUID)*((_QWORD *)a2 + 1);
    v157 = a2[4];
    SymbolicLinkList_8[0] = (PZZWSTR)v88;
    DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v193, (const struct _LUID *)SymbolicLinkList_8);
    if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(v193) )
    {
      v93 = WdLogNewEntry5_WdTrace(v159, v158, v160, v161);
      HighPart = SHIDWORD(SymbolicLinkList_8[0]);
      goto LABEL_157;
    }
    v187[0] = 0;
    v162 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v187, 0);
    v10 = v162;
    if ( v162 < 0 )
    {
      WdLogSingleEntry1(2LL, v162);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_333:
      v36 = v187;
      goto LABEL_334;
    }
    v163 = v193[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v203, v193[0], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v203, 1LL) >= 0 )
    {
      if ( DXGADAPTER::IsDisplayAdapter(v163) )
      {
        if ( *((int *)v163 + 638) >= 9216 && (*((_DWORD *)v163 + 566) & 8) != 0 )
        {
          SymbolicLinkList_8[0] = 0LL;
          LOBYTE(v165) = 1;
          v169 = MonitorGetMonitorHandle(
                   v164,
                   (unsigned int)v157,
                   v165,
                   &DxgkDisplayConfigDeviceInfo,
                   SymbolicLinkList_8);
          v10 = v169;
          if ( v169 >= 0 )
          {
            v170 = (__int64)(a2 + 11);
            v186 = a2[15];
            v171 = (_DWORD)a2 + 36;
            v172 = (_DWORD)a2 + 28;
            v185 = a2[14];
            v173 = (_DWORD)a2 + 20;
            v174 = a2[13];
            v175 = (__int64)SymbolicLinkList_8[0];
            v176 = MonitorSetAdvancedColorParams(SymbolicLinkList_8[0], v173, v172, v171, v170, v174, v185, v186);
            v10 = v176;
            if ( v176 >= 0 )
            {
              MonitorReleaseMonitorHandle((__int64)v163, v175, &DxgkDisplayConfigDeviceInfo, v177);
              if ( (_DWORD)v10 != 255 )
                LODWORD(v10) = 255;
              LODWORD(DeviceInterfaces) = v10;
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v203);
              v37 = v187;
              goto LABEL_348;
            }
            WdLogSingleEntry4(2LL, *((int *)v163 + 102), *((unsigned int *)v163 + 101), v157, v176);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"MonitorSetAdvancedColorParams() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
              *((int *)v163 + 102),
              *((unsigned int *)v163 + 101),
              v157,
              v10,
              0LL);
            MonitorReleaseMonitorHandle((__int64)v163, v175, &DxgkDisplayConfigDeviceInfo, v178);
          }
          else
          {
            WdLogSingleEntry4(2LL, *((int *)v163 + 102), *((unsigned int *)v163 + 101), v157, v169);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
              *((int *)v163 + 102),
              *((unsigned int *)v163 + 101),
              v157,
              v10,
              0LL);
          }
          goto LABEL_332;
        }
      }
      else
      {
        WdLogSingleEntry3(3LL, v163, *((int *)v163 + 102), *((unsigned int *)v163 + 101));
      }
      LODWORD(v10) = -1073741637;
    }
    else
    {
      WdLogSingleEntry3(2LL, v163, *((int *)v163 + 102), *((unsigned int *)v163 + 101));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Could not acquire adapter core access; adapter probably suspended. (pAdapter = 0x%I64x, pAdapter->GetLu"
                  "id() = <0x%I64x, 0x%I64x>)",
        (__int64)v163,
        *((int *)v163 + 102),
        *((unsigned int *)v163 + 101),
        0LL,
        0LL);
      LODWORD(v10) = -1073741811;
    }
LABEL_332:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v203);
    goto LABEL_333;
  }
  WdLogSingleEntry1(1LL, 5104LL);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"io_pRequestPacket != NULL", 5104LL, 0LL, 0LL, 0LL, 0LL);
LABEL_335:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v199);
  if ( v201 )
  {
    LOBYTE(v166) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v166, &EventProfilerExit, v167, v199);
  }
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v193);
  return (unsigned int)v10;
}
