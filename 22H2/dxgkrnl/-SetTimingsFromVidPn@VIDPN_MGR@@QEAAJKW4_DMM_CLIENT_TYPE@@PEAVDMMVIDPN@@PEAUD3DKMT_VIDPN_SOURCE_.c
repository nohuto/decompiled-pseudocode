/*
 * XREFs of ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173F88
 * Callers:
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1C0170334 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01E1860 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E7138 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F1E64 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C03AE68C (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C03B1B84 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001414 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0001F1C (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C00021E8 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00026A4 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C0002738 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C0002904 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C0002930 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0002B28 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002F24 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C00040B0 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00050E0 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C0005150 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00052BC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0005320 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00070E4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007124 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1C0007298 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00082D8 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000A4DC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C000B9F4 (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0014E7C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONIT.c)
 *     ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x1C0016D48 (-SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z.c)
 *     ?SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0016DD0 (-SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     Feature_Servicing_CleanUpDisplayedPrimary__private_IsEnabledDeviceUsage @ 0x1C0024CD8 (Feature_Servicing_CleanUpDisplayedPrimary__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ??1?$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ @ 0x1C004AA90 (--1-$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ.c)
 *     ?IsSuspended@CVidSchSuspendResume@@QEAAEXZ @ 0x1C0069F34 (-IsSuspended@CVidSchSuspendResume@@QEAAEXZ.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C006BAA4 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C016DFD4 (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z @ 0x1C017024C (-CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0171518 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C01716F0 (DxgkStatusChangeNotify.c)
 *     LogSetTimingSourceMask @ 0x1C0171E74 (LogSetTimingSourceMask.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C0171F8C (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C0172110 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C0172140 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C017249C (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01727C4 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0173348 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C0173DFC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01768D8 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C017758C (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01868E4 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0194C28 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0195CBC (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0197D5C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0198E9C (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C019E1AC (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C01A1EB0 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01B0208 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01B06C0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     MonitorSendAdjustedColorimetryToDriver @ 0x1C01DCE24 (MonitorSendAdjustedColorimetryToDriver.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C01DD314 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01DE470 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C01E5EA4 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C01E7324 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01E76F8 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01E9A00 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C01E9D30 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C01EA1CC (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C01EABC0 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0206F8C (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BC360 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03B0888 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C03B3B10 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03B6BD0 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::SetTimingsFromVidPn(
        VIDPN_MGR *a1,
        unsigned int a2,
        unsigned int a3,
        struct DMMVIDPN *a4,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a5,
        _BYTE *a6,
        unsigned __int8 a7,
        struct DXGDEVICE *a8,
        __int64 a9)
{
  unsigned int v9; // esi
  PERESOURCE *v13; // r15
  signed int v14; // eax
  int v15; // edi
  __int64 v16; // r8
  struct DMMVIDPN *v17; // rdx
  __int64 v18; // rcx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rbx
  ADAPTER_RENDER *v23; // r8
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  __int64 v25; // r8
  signed int v26; // r12d
  unsigned __int8 v27; // r11
  int v28; // ecx
  unsigned int v29; // r10d
  __int64 v30; // r8
  unsigned int v31; // r13d
  unsigned int v32; // r12d
  unsigned int v33; // ecx
  unsigned int SpinLock; // r9d
  int v35; // eax
  int v36; // eax
  PERESOURCE v37; // rdx
  unsigned int v38; // r12d
  signed int v39; // ebx
  int v40; // ecx
  PERESOURCE v41; // rcx
  struct DXGDEVICE *v42; // r13
  ADAPTER_DISPLAY *v43; // r10
  unsigned __int8 v44; // r9
  unsigned int v45; // r13d
  struct DMMVIDPN *v46; // r12
  VIDPN_MGR *v47; // r13
  unsigned int v48; // r13d
  unsigned int v49; // r12d
  _BYTE *v50; // rbx
  VIDPN_MGR *v51; // r15
  __int64 v52; // rdi
  bool v53; // zf
  char *v54; // rax
  char *v55; // rcx
  char v56; // al
  int v57; // eax
  char *v58; // r13
  ADAPTER_DISPLAY *v59; // rcx
  int v60; // eax
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  _OWORD *v62; // r8
  int v63; // edx
  char v64; // r12
  _OWORD *v65; // rax
  ADAPTER_DISPLAY *v66; // rcx
  int v67; // eax
  unsigned int v68; // eax
  _BYTE *v69; // rdi
  unsigned int v70; // r10d
  char *v71; // r15
  __int64 v72; // rax
  __int64 v73; // rdx
  char *v74; // rax
  unsigned int v75; // eax
  __int64 v76; // rdi
  unsigned int v77; // eax
  unsigned int v78; // r12d
  struct DMMVIDEOPRESENTTARGET *v79; // rax
  struct DMMVIDEOPRESENTTARGET *v80; // r13
  _BYTE *v81; // r10
  struct HDXGMONITOR__ *v82; // rdx
  unsigned int v83; // r12d
  __int64 v84; // r9
  int TargetLinkTrainingStatus; // eax
  __int64 v86; // r10
  __int64 v87; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v89; // r8
  __int64 v90; // r9
  int v91; // eax
  int v92; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  ADAPTER_DISPLAY *v94; // rdi
  __int64 v95; // r12
  VIDPN_MGR *v96; // rbx
  int v97; // r13d
  const struct _DXGK_DISPLAYMODE_INFO *v98; // rax
  int v99; // ecx
  DMMVIDPNTOPOLOGY *v100; // rdi
  __int64 v101; // rdx
  __int64 v102; // r8
  int MostImportantVidPnPathTargetsFromSource; // eax
  unsigned __int8 v104; // di
  unsigned int v105; // r9d
  unsigned int v106; // r13d
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v108; // r8
  struct DXGADAPTERALLOCATION *v109; // r13
  void *v110; // rax
  ADAPTER_RENDER *v111; // rcx
  int v112; // eax
  unsigned int v113; // edx
  __int64 v114; // rcx
  int v115; // eax
  int v116; // r13d
  int v117; // eax
  int v118; // edi
  PERESOURCE v119; // rdi
  int v120; // r13d
  int v121; // edi
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  unsigned int v124; // eax
  __int64 v125; // r12
  __int64 v126; // rdi
  DMMVIDEOPRESENTTARGET *v127; // rax
  DMMVIDEOPRESENTTARGET *v128; // r13
  _BYTE *v129; // rdx
  unsigned int *v130; // r9
  int v131; // r8d
  int v132; // eax
  PERESOURCE v133; // rcx
  _QWORD *SharedWaiters; // r8
  ADAPTER_DISPLAY *v135; // r10
  unsigned int v136; // r12d
  struct DXGDEVICE *v137; // rdi
  int v138; // r13d
  ADAPTER_DISPLAY *v139; // rcx
  ADAPTER_DISPLAY *v140; // rdi
  const struct _D3DKMT_DISPLAYMODE *DisplayModeInfo; // rax
  int v142; // eax
  unsigned int v143; // r13d
  int v144; // eax
  DMMVIDPNTOPOLOGY *v145; // rdi
  char *v146; // r8
  int v147; // eax
  PERESOURCE v148; // r10
  unsigned int k; // r9d
  __int64 v150; // r8
  unsigned int v151; // ecx
  struct DXGGLOBAL *v152; // rax
  __int64 v153; // r8
  __int64 v154; // r9
  unsigned __int8 v155; // [rsp+70h] [rbp-90h]
  char v156; // [rsp+70h] [rbp-90h]
  char v157; // [rsp+71h] [rbp-8Fh]
  unsigned int v158; // [rsp+74h] [rbp-8Ch] BYREF
  void *Src; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v160; // [rsp+80h] [rbp-80h]
  unsigned int j; // [rsp+84h] [rbp-7Ch]
  int v162; // [rsp+88h] [rbp-78h] BYREF
  unsigned int i; // [rsp+8Ch] [rbp-74h]
  unsigned int *v164; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v165; // [rsp+98h] [rbp-68h]
  unsigned int v166; // [rsp+A0h] [rbp-60h] BYREF
  int v167; // [rsp+A4h] [rbp-5Ch] BYREF
  struct DXGDEVICE *v168; // [rsp+A8h] [rbp-58h]
  struct DMMVIDPN *v169; // [rsp+B0h] [rbp-50h] BYREF
  VIDPN_MGR *v170; // [rsp+B8h] [rbp-48h]
  void *v171; // [rsp+C0h] [rbp-40h]
  PERESOURCE *v172; // [rsp+C8h] [rbp-38h] BYREF
  DMMVIDPNTOPOLOGY *v173; // [rsp+D0h] [rbp-30h]
  __int64 v174; // [rsp+D8h] [rbp-28h]
  ADAPTER_RENDER *v175[2]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v176; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v177; // [rsp+F8h] [rbp-8h]
  unsigned int *v178; // [rsp+100h] [rbp+0h] BYREF
  struct DMMVIDPN *v179; // [rsp+108h] [rbp+8h]
  _DXGKARG_SETTIMINGSFROMVIDPN v180; // [rsp+110h] [rbp+10h] BYREF
  const struct DMMVIDPN *v181; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v182[2]; // [rsp+140h] [rbp+40h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v183; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v184[32]; // [rsp+180h] [rbp+80h] BYREF
  _OWORD v185[5]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v186; // [rsp+1F0h] [rbp+F0h] BYREF
  GUID ActivityId; // [rsp+200h] [rbp+100h] BYREF

  v9 = 0;
  v168 = a8;
  v177 = a9;
  v179 = a4;
  v160 = a3;
  i = a2;
  v170 = a1;
  v165 = a6;
  v162 = 0;
  if ( !*((_QWORD *)a1 + 1) )
    WdLogSingleEntry0(1LL);
  v172 = *(PERESOURCE **)(*((_QWORD *)a1 + 1) + 16LL);
  v13 = v172;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v172) )
    WdLogSingleEntry0(1LL);
  v176 = 0;
  *a6 = 0;
  v158 = 0;
  Src = 0LL;
  v164 = 0LL;
  v178 = 0LL;
  v14 = VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
          a1,
          a2,
          a4,
          &v176,
          &v158,
          (struct _DXGK_SET_TIMING_PATH_INFO **)&Src,
          &v164,
          a5,
          &v178);
  v15 = v14;
  v166 = v14;
  if ( v14 < 0 )
  {
    v16 = v14;
    v17 = a4;
    v18 = 2LL;
LABEL_7:
    WdLogSingleEntry2(v18, v17, v16);
    return (unsigned int)v15;
  }
  if ( !v158 )
  {
    v16 = *((unsigned int *)v13 + 101);
    v18 = 3LL;
    v17 = (struct DMMVIDPN *)*((int *)v13 + 102);
    goto LABEL_7;
  }
  if ( *((_DWORD *)a5 + 2) || *((_DWORD *)a5 + 3) || *((_DWORD *)a5 + 6) )
  {
    v157 = 1;
  }
  else
  {
    v157 = 0;
    if ( !*((_DWORD *)a5 + 10) && !*((_DWORD *)a5 + 8) && !*((_DWORD *)a5 + 13) )
    {
      DisplayScenarioJournalSetSetTimingPathInfo(0LL, 56 * v158, v158, Src);
      return 0LL;
    }
  }
  v167 = 0;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(a1);
  v181 = ClientCommittedVidPnRef;
  if ( a4 )
    ClientCommittedVidPnRef = a4;
  v169 = ClientCommittedVidPnRef;
  v173 = (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96);
  v21 = 56LL * v158;
  if ( !is_mul_ok(v158, 0x38uLL) )
    v21 = -1LL;
  v171 = (void *)operator new[](v21, 0x4E506456u, 256LL);
  if ( v171 )
  {
    memmove(v171, Src, 56LL * v158);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL));
    v22 = *((_QWORD *)a1 + 15);
    v23 = (ADAPTER_RENDER *)v13[366];
    v174 = v22;
    v175[1] = v23;
    LODWORD(v175[0]) = 0;
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v13);
    v26 = *((_DWORD *)v13 + 705);
    v27 = IsLegacyDisplayStateSynchronization;
    v155 = IsLegacyDisplayStateSynchronization;
    j = v26;
    if ( !v25 )
    {
LABEL_43:
      v37 = v13[365];
      v38 = 0;
      if ( !LODWORD(v37->SpinLock) )
        goto LABEL_67;
      v39 = j;
      while ( 1 )
      {
        v40 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3);
        j = 1 << v38;
        if ( (v40 & (1 << v38)) == 0 )
          goto LABEL_60;
        v41 = v13[366];
        if ( v41 && v39 < 2200 )
        {
          ADAPTER_RENDER::FlushScheduler(v41, 8LL, v38);
          v37 = v13[365];
        }
        if ( !v168 || !v177 )
          goto LABEL_60;
        v42 = *(struct DXGDEVICE **)(4000LL * v38 + *(_QWORD *)&v37[1].ActiveCount + 728);
        if ( (unsigned int)Feature_Servicing_CleanUpDisplayedPrimary__private_IsEnabledDeviceUsage() )
        {
          if ( v42 )
            goto LABEL_56;
        }
        else if ( v42 && *((_QWORD *)v42 + 235) == *(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) )
        {
LABEL_56:
          if ( CVidSchSuspendResume::IsSuspended((CVidSchSuspendResume *)v175) || (v44 = 0, a7) )
            v44 = 1;
          ADAPTER_DISPLAY::DisablePrimaryOnDevice(v43, v42, v38, v44);
        }
LABEL_60:
        v45 = j;
        if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & j) != 0
          && v13[366]
          && *((_BYTE *)v13 + 2866)
          && v155 )
        {
          ADAPTER_DISPLAY::DisableMPOPlanes((ADAPTER_DISPLAY *)v13[365], v38, 0);
          *((_DWORD *)a5 + 16) |= v45;
        }
        v37 = v13[365];
        if ( ++v38 >= LODWORD(v37->SpinLock) )
        {
          v22 = v174;
          v15 = v166;
LABEL_67:
          v46 = v169;
          v47 = v170;
          if ( *((_DWORD *)a5 + 5) )
            VIDPN_MGR::RequestPowerStateForTargets(v170, v169);
          if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v13) )
          {
            v156 = 0;
            if ( !v157 )
              goto LABEL_73;
            v186 = 0LL;
            *(_QWORD *)&v180.SetFlags.Reserved = 0LL;
            *(&v180.PathCount + 1) = 0;
            if ( v160 == 4 )
              DisplayLogSetMonitorPowerStage(0LL, 16LL, 0LL, &v186);
            v58 = (char *)v46 + 88;
            v180.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v162;
            v180.PathCount = v158;
            v180.hFunctionalVidPn = (D3DKMDT_HVIDPN)((unsigned __int64)v46 & -(__int64)((struct DMMVIDPN *)((char *)v46 + 88) != 0LL));
            v59 = (ADAPTER_DISPLAY *)v13[365];
            v180.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
            v60 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v59, &v180);
            v15 = v60;
            if ( v60 < 0 )
              WdLogSingleEntry3(2LL, *((int *)v13 + 102), *((unsigned int *)v13 + 101), v60);
            if ( v158 == 1
              && ((v160 - 1) & 0xFFFFFFFD) == 0
              && (v15 < 0 || (*((_DWORD *)Src + 8) & 0xF000000) == 0xD000000)
              && (*((_DWORD *)Src + 3) & 4) != 0
              && ((v162 & 1) != 0 || (*(_DWORD *)(*(_QWORD *)&v13[27]->ActiveEntries + 3532LL) & 3) != 0) )
            {
              TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v22, *(_DWORD *)Src);
              if ( TargetById )
              {
                if ( !DMMVIDEOPRESENTTARGET::IsTargetForceable(TargetById) )
                {
                  DisplayScenarioJournalSetSetTimingPathInfo((unsigned int)v15, 56 * v158, v158, Src);
                  v62 = v171;
                  *((_DWORD *)v171 + 3) = *((_DWORD *)v171 + 3) & 0xFFFFFFF0 | 9;
                  v63 = *((_DWORD *)a5 + 1);
                  *((_DWORD *)a5 + 6) = v63 & (*((_DWORD *)a5 + 5) ^ *((_DWORD *)a5 + 6));
                  *((_DWORD *)a5 + 5) = 0;
                  *((_DWORD *)a5 + 20) = v63;
                  if ( v15 < 0 )
                    v64 = 0;
                  else
                    v64 = v162 & 1;
                  v65 = Src;
                  v162 = 0;
                  *(_OWORD *)Src = *v62;
                  v65[1] = v62[1];
                  v65[2] = v62[2];
                  *((_QWORD *)v65 + 6) = *((_QWORD *)v62 + 6);
                  v66 = (ADAPTER_DISPLAY *)v13[365];
                  v180.hFunctionalVidPn = (D3DKMDT_HVIDPN)((unsigned __int64)v169 & -(__int64)(v58 != 0LL));
                  v180.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v162;
                  v180.PathCount = v158;
                  v180.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
                  *(_QWORD *)&v180.SetFlags.Reserved = 0LL;
                  *(&v180.PathCount + 1) = 0;
                  v67 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v66, &v180);
                  v15 = v67;
                  if ( v67 < 0 )
                    WdLogSingleEntry4(2LL, *(unsigned int *)Src, *((int *)v13 + 102), *((unsigned int *)v13 + 101), v67);
                  DxgkLogCodePointPacket(
                    0x68u,
                    *(_DWORD *)Src,
                    v15,
                    *((_BYTE *)Src + 35) & 0xF,
                    *(__int64 *)((char *)v13 + 404));
                  v162 ^= ((unsigned __int8)v162 ^ (unsigned __int8)(v162 | v64)) & 1;
                }
              }
            }
            v48 = v160;
            if ( v160 == 4 )
              DisplayLogSetMonitorPowerStage(0LL, 2147483664LL, (unsigned int)v15, &v186);
          }
          else
          {
            v156 = 1;
            if ( v157 || *((_DWORD *)a5 + 10) )
            {
              v157 = 1;
              if ( a7 || (v53 = !CVidSchSuspendResume::IsSuspended((CVidSchSuspendResume *)v175), v56 = 0, !v53) )
                v56 = 1;
              v57 = VIDPN_MGR::CommitVidPnOnAdapter(
                      v47,
                      i,
                      v160,
                      v46,
                      v158,
                      Src,
                      v164,
                      a5,
                      &v167,
                      v178,
                      &v162,
                      v168,
                      v177,
                      v56);
              v15 = v57;
              if ( v57 < 0 )
                WdLogSingleEntry3(2LL, *((int *)v13 + 102), *((unsigned int *)v13 + 101), v57);
            }
            else
            {
              v157 = 0;
            }
LABEL_73:
            v48 = v160;
          }
          DisplayScenarioJournalSetSetTimingPathInfo((unsigned int)v15, 56 * v158, v158, Src);
          LogSetTimingSourceMask((__int64)v13, a5);
          if ( v157 )
          {
            if ( v15 < 0 )
            {
              *((_DWORD *)a5 + 21) = -1;
              FillFailedStatus(a5, v15);
              v70 = 0;
              if ( v158 )
              {
                v71 = (char *)v171;
                do
                {
                  v72 = v70++;
                  v73 = 56 * v72;
                  v74 = (char *)Src;
                  *(_OWORD *)((char *)Src + v73) = *(_OWORD *)&v71[v73];
                  *(_OWORD *)&v74[v73 + 16] = *(_OWORD *)&v71[v73 + 16];
                  *(_OWORD *)&v74[v73 + 32] = *(_OWORD *)&v71[v73 + 32];
                  *(_QWORD *)&v74[v73 + 48] = *(_QWORD *)&v71[v73 + 48];
                  *(_DWORD *)((char *)Src + v73 + 32) = *(_DWORD *)((_BYTE *)Src + v73 + 32) & 0xF0FFFFFF | 0xD000000;
                  *(_DWORD *)((char *)Src + v73 + 16) |= 1u;
                }
                while ( v70 < v158 );
                v13 = v172;
              }
              v69 = v165;
              v68 = 1;
              v162 = 1;
              *v165 = (((v48 - 1) & 0xFFFFFFFD) != 0 ? 2 : 0) | *v165 & 0xFD;
            }
            else
            {
              v49 = 0;
              if ( v158 )
              {
                v50 = v165;
                v51 = v170;
                do
                {
                  v52 = 56LL * v49;
                  v53 = VIDPN_MGR::CheckDdiSetTimingsViolationOnPathInfo(
                          v51,
                          (struct _DXGK_SET_TIMING_PATH_INFO *)((char *)v171 + v52),
                          (struct _DXGK_SET_TIMING_PATH_INFO *)((char *)Src + v52)) == 0;
                  v54 = (char *)Src;
                  if ( v53 )
                  {
                    v55 = (char *)v171 + v52;
                    *(_OWORD *)((char *)Src + v52) = *(_OWORD *)((char *)v171 + v52);
                    *(_OWORD *)&v54[v52 + 16] = *((_OWORD *)v55 + 1);
                    *(_OWORD *)&v54[v52 + 32] = *((_OWORD *)v55 + 2);
                    *(_QWORD *)&v54[v52 + 48] = *((_QWORD *)v55 + 6);
                    *(_DWORD *)((char *)Src + v52 + 32) = *(_DWORD *)((_BYTE *)Src + v52 + 32) & 0xF0FFFFFF | 0xD000000;
                    *((_DWORD *)a5 + v164[v49] + 22) = -1073741437;
                    *((_DWORD *)a5 + 21) |= 1 << v164[v49];
                  }
                  else if ( (*(_DWORD *)((_BYTE *)Src + v52 + 32) & 0xF000000) == 0xD000000 )
                  {
                    *((_DWORD *)a5 + v164[v49] + 22) = -1073741506;
                    *((_DWORD *)a5 + 21) |= 1 << v164[v49];
                    *v50 = (((v160 - 1) & 0xFFFFFFFD) != 0 ? 2 : 0) | *v50 & 0xFD;
                  }
                  ++v49;
                }
                while ( v49 < v158 );
                v22 = v174;
                v13 = v172;
              }
              v68 = v162;
              v69 = v165;
            }
            if ( (v68 & 0xFFFFFFFE) != 0 )
            {
              WdLogSingleEntry1(1LL, (unsigned __int64)v68 >> 1);
              LOBYTE(v68) = v162;
            }
            if ( (v68 & 1) != 0 )
              *v69 |= 1u;
          }
          ActivityId = 0LL;
          EtwActivityIdControl(3u, &ActivityId);
          v75 = 0;
          for ( i = 0; v75 < v158; i = v75 )
          {
            v76 = 56LL * v75;
            v77 = v164[v75];
            v78 = 1 << v77;
            LODWORD(v165) = v77;
            j = 1 << v77;
            v79 = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                    (DMMVIDEOPRESENTTARGETSET *)v22,
                    *(_DWORD *)((char *)Src + v76));
            v80 = v79;
            if ( v79 )
            {
              if ( v157 )
              {
                v81 = Src;
                v82 = (struct HDXGMONITOR__ *)*((_QWORD *)v79 + 14);
                v83 = (*(_DWORD *)((char *)Src + v76 + 12) >> 2) & 1;
                if ( v82 )
                {
                  MONITOR_MGR::AcquireMonitorExclusive(&v172, v82);
                  if ( v172 )
                  {
                    LOBYTE(v84) = 1;
                    DXGMONITOR::LogMonitorObjectOnOffState(v172, &ActivityId, v83, v84);
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL, 6061LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"LogMonitorOnOffState failed _GetMonitorFromHandle",
                      6061LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v172);
                  v81 = Src;
                }
                if ( !v156 )
                {
                  DxgkLogCodePointPacket(
                    0x58u,
                    *(_DWORD *)&v81[v76],
                    v81[v76 + 35] & 0xF | 0x80000000,
                    *(_DWORD *)&v81[v76 + 24],
                    *(__int64 *)((char *)v13 + 404));
                  DxgkLogCodePointPacket(
                    0x59u,
                    *(_DWORD *)((char *)Src + v76),
                    *(_DWORD *)((char *)Src + v76 + 48),
                    0,
                    *(__int64 *)((char *)v13 + 404));
                }
                TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v80, 0LL);
                v78 = j;
                if ( TargetLinkTrainingStatus != (*(_BYTE *)(v76 + v86 + 35) & 0xF) )
                  *((_DWORD *)a5 + 9) |= j;
                v87 = *(_QWORD *)(v76 + v86 + 24);
                *(_BYTE *)(*((_QWORD *)v80 + 67) + 168LL) = *(_BYTE *)(v76 + v86 + 35) & 0xF;
                *(_QWORD *)(*((_QWORD *)v80 + 67) + 160LL) = v87;
                Global = DXGGLOBAL::GetGlobal();
                QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), 0LL, v89, v90);
                if ( (*(_DWORD *)((_BYTE *)Src + v76 + 32) & 0xF000000) == 0xC000000 )
                  DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v80, 1u);
                else
                  DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v80);
                *((_BYTE *)v80 + 414) = 0;
              }
              else
              {
                v91 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v79, 0LL);
                *(_DWORD *)((char *)Src + v76 + 32) ^= (*(_DWORD *)((char *)Src + v76 + 32) ^ (v91 << 24)) & 0xF000000;
              }
              if ( (*(_DWORD *)((_BYTE *)Src + v76 + 12) & 4) != 0 && (v78 & *((_DWORD *)a5 + 18)) == 0 )
              {
                v92 = *((_DWORD *)a5 + 21) | v167;
                if ( !_bittest(&v92, (unsigned int)v165) )
                {
                  DMMVIDEOPRESENTTARGET::SetTargetActivated(v80, 1, 1u);
                  if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v78) != 0
                    && (*(_DWORD *)((_BYTE *)Src + v76 + 32) & 0xF000000) == 0xE000000 )
                  {
                    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v173, *(_DWORD *)((char *)Src + v76));
                    DMMVIDPNPRESENTPATH::SetDriverGammaRamp(PathFromTarget, 0LL);
                  }
                }
              }
              if ( (*(_DWORD *)((_BYTE *)Src + v76 + 32) & 0xF000000) != 0xD000000
                && ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 4)) & v78) != 0 )
              {
                MonitorSendAdjustedColorimetryToDriver(*((_QWORD *)v80 + 14), *(unsigned int *)((char *)Src + v76 + 4));
              }
            }
            v75 = i + 1;
          }
          CVidSchSuspendResume::Resume(v175);
          v94 = (ADAPTER_DISPLAY *)v13[365];
          LODWORD(v95) = 0;
          j = 0;
          if ( !*((_DWORD *)v94 + 24) )
          {
LABEL_216:
            v124 = 0;
            for ( j = 0; v124 < v158; j = v124 )
            {
              v125 = v124;
              v126 = 56LL * v124;
              v127 = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                       (DMMVIDEOPRESENTTARGETSET *)v22,
                       *(_DWORD *)((char *)Src + v126));
              v128 = v127;
              if ( v127 )
              {
                v129 = Src;
                if ( (*(_DWORD *)((_BYTE *)Src + v126 + 12) & 4) == 0
                  || (v130 = v164, v131 = 1 << v164[v125], (v131 & *((_DWORD *)a5 + 18)) != 0)
                  || (v131 & *((_DWORD *)a5 + 21)) != 0 )
                {
                  DMMVIDEOPRESENTTARGET::SetTargetActivated(
                    v127,
                    0,
                    (*(_DWORD *)((_BYTE *)Src + v126 + 32) & 0xF000000) == 201326592);
                  v129 = Src;
                  v130 = v164;
                }
                if ( !v156
                  && *((_BYTE *)v128 + 416)
                  && ((*(_DWORD *)&v129[v126 + 32] & 0xF000000) != 0xE000000 || v129[v126 + 48] != 0xFF) )
                {
                  v132 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                           (ADAPTER_DISPLAY *)v13[365],
                           v130[v125],
                           0,
                           0x800u,
                           a7);
                  if ( v132 < 0 )
                    WdLogSingleEntry3(2LL, v13, v164[v125], v132);
                  if ( (*(_DWORD *)((_BYTE *)Src + v126 + 32) & 0xF000000) == 0xE000000 )
                  {
                    v133 = v13[366];
                    if ( v133 )
                    {
                      ((void (__fastcall *)(POWNER_ENTRY, _QWORD))v133[7].SystemResourcesList.Blink->Blink[55].Blink)(
                        v133[7].OwnerTable,
                        v164[v125]);
                    }
                    else
                    {
                      SharedWaiters = v13[365][4].SharedWaiters;
                      if ( SharedWaiters )
                        _InterlockedExchange((volatile __int32 *)(2920LL * v164[v125] + SharedWaiters[1] + 960), 1);
                    }
                  }
                }
                *((_BYTE *)v128 + 416) = 0;
              }
              else if ( (*(_DWORD *)((_BYTE *)Src + v126 + 12) & 4) != 0 )
              {
                WdLogSingleEntry0(1LL);
              }
              if ( (*(_DWORD *)((_BYTE *)Src + v126 + 16) & 1) != 0 )
                *((_DWORD *)a5 + 16) |= 1 << v164[v125];
              v124 = j + 1;
            }
            auto_rc<DMMVIDPN>::reset((__int64 *)v170 + 40, 0LL);
            CVidSchSuspendResume::Resume(v175);
            v135 = (ADAPTER_DISPLAY *)v13[365];
            v136 = 0;
            if ( *((_DWORD *)v135 + 24) )
            {
              v137 = v168;
              do
              {
                v138 = 1 << v136;
                if ( ((1 << v136) & *((_DWORD *)a5 + 15)) != 0 )
                  ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(v135, v136);
                if ( (v138 & *((_DWORD *)a5 + 16)) != 0 )
                  DXGADAPTER::NotifyMultiPlaneOverlayDisable((DXGADAPTER *)v13, v136);
                if ( v137 && !v156 )
                {
                  if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)v13[365], v136, 0)
                    && ADAPTER_DISPLAY::IsCddPrimaryStale((ADAPTER_DISPLAY *)v13[365], v136) )
                  {
                    ADAPTER_DISPLAY::DestroyCddAllocations(v139, v137, v136);
                  }
                  v140 = (ADAPTER_DISPLAY *)v13[365];
                  DisplayModeInfo = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v140, v136);
                  ADAPTER_DISPLAY::SetCddDisplayMode((DXGADAPTER **)v140, v136, DisplayModeInfo);
                  v137 = v168;
                }
                if ( (v138 & *((_DWORD *)a5 + 21)) != 0 )
                {
                  v142 = *((_DWORD *)a5 + v136 + 40);
                  if ( (v142 & 7) != 0 )
                  {
                    *((_DWORD *)a5 + 4 * (v142 & 7) + 56) = 0;
                    DxgkLogCodePointPacket(
                      0x65u,
                      v136,
                      *((_DWORD *)a5 + v136 + 40) & 7,
                      2u,
                      *(__int64 *)((char *)v13 + 404));
                  }
                  v143 = v160;
                  v144 = ADAPTER_DISPLAY::SetVidPnSourceActive(
                           (PERESOURCE **)v13[365],
                           v136,
                           0,
                           0LL,
                           v160 == 4,
                           a7 != 0);
                  if ( v144 < 0 )
                    WdLogSingleEntry3(2LL, v13, v136, v144);
                  if ( v179 )
                  {
                    v145 = (struct DMMVIDPN *)((char *)v179 + 96);
                    v146 = (char *)v179 + 152;
                    LOBYTE(v146) = 2;
                    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                      v184,
                      ((unsigned __int64)v179 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v179 + 96) != 0LL),
                      v146);
                    v147 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v145, v136);
                    if ( (int)(v147 + 0x80000000) >= 0 && v147 != -1071774919 )
                      WdLogSingleEntry0(1LL);
                    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v184);
                  }
                  v137 = v168;
                  if ( v168 )
                    ADAPTER_DISPLAY::DestroyCddAllocations((ADAPTER_DISPLAY *)v13[365], v168, v136);
                  if ( ((v143 - 1) & 0xFFFFFFFD) == 0 )
                  {
                    ADAPTER_DISPLAY::SetPartOfDesktop((ADAPTER_DISPLAY *)v13[365], v136, 0);
                    ADAPTER_DISPLAY::SetContentRect((ADAPTER_DISPLAY *)v13[365], v136, &stru_1C01411D0);
                    ADAPTER_DISPLAY::SetCddInterface((DXGADAPTER **)v13[365], v136, 0LL);
                  }
                  ADAPTER_DISPLAY::SetVidPnPrimaryTarget((ADAPTER_DISPLAY *)v13[365], v136, -1);
                  ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)v13[365], v136, 1);
                  ADAPTER_DISPLAY::SetHdrEnabled((PERESOURCE **)v13[365], v136, 0);
                }
                v135 = (ADAPTER_DISPLAY *)v13[365];
                ++v136;
              }
              while ( v136 < *((_DWORD *)v135 + 24) );
              v22 = v174;
            }
            if ( v179 )
            {
              ADAPTER_DISPLAY::SetSyncLockGroup(
                (__int64)v135,
                1u,
                *((_DWORD *)a5 + 60),
                *((_DWORD *)a5 + 61),
                *((_DWORD *)a5 + 62),
                *((_DWORD *)a5 + 63));
              v148 = v13[365];
              for ( k = 0; k < LODWORD(v148->SpinLock); v148 = v13[365] )
              {
                v150 = k;
                v151 = *((_DWORD *)a5 + k++ + 40) & 7;
                *(_DWORD *)(*(_QWORD *)&v148[1].ActiveCount + 4000 * v150 + 3780) = *((_DWORD *)a5 + 4 * v151 + 56) != 0
                                                                                  ? v151
                                                                                  : 0;
              }
            }
            v152 = DXGGLOBAL::GetGlobal();
            QDC_CACHE::InvalidateCache(*((QDC_CACHE **)v152 + 187), 0LL, v153, v154);
            if ( Src )
              operator delete(Src);
            operator delete(v171);
            if ( v164 )
              operator delete(v164);
            if ( v178 )
              operator delete(v178);
            CVidSchSuspendResume::Resume(v175);
            if ( v22 )
              ReferenceCounted::Release((ReferenceCounted *)(v22 + 64));
            goto LABEL_279;
          }
          v96 = v170;
          while ( 2 )
          {
            i = 0;
            memset(v185, 0, sizeof(v185));
            v97 = 1 << v95;
            LODWORD(v165) = 1 << v95;
            if ( ((1 << v95) & *((_DWORD *)a5 + 3)) != 0 )
            {
              i = 2;
            }
            else if ( (v97 & *((_DWORD *)a5 + 10)) != 0 )
            {
              i = 4;
            }
            else if ( (*((_DWORD *)a5 + 2) & ~*((_DWORD *)a5 + 8) & v97) != 0 )
            {
              i = (*(_DWORD *)a5 & v97) != 0 ? 3 : 1;
            }
            v98 = ADAPTER_DISPLAY::GetDisplayModeInfo(v94, v95);
            v99 = *((_DWORD *)a5 + 10) | *((_DWORD *)a5 + 13) | *((_DWORD *)a5 + 2);
            v100 = v173;
            v185[0] = *(_OWORD *)v98;
            v185[1] = *((_OWORD *)v98 + 1);
            v185[2] = *((_OWORD *)v98 + 2);
            v185[3] = *((_OWORD *)v98 + 3);
            v185[4] = *((_OWORD *)v98 + 4);
            if ( (v99 & v97) != 0 )
              DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(
                v173,
                ((v160 - 1) & 0xFFFFFFFD) == 0,
                v95,
                (struct _DXGK_DISPLAYMODE_INFO *)v185);
            if ( (v97 & *((_DWORD *)a5 + 21)) != 0 )
              goto LABEL_212;
            if ( (v97 & v167) == 0 )
            {
              if ( (v97 & *((_DWORD *)a5 + 10)) != 0 )
              {
                ADAPTER_DISPLAY::SetDisplayModeInfo(
                  (DXGADAPTER **)v13[365],
                  v95,
                  (const struct _DXGK_DISPLAYMODE_INFO *const)v185);
                OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
                  v13[365][1].OwnerTable,
                  (unsigned int)v95,
                  0LL,
                  0LL,
                  0,
                  1);
                v182[0] = 11LL;
                v182[1] = 0LL;
                if ( (int)DxgkStatusChangeNotify((int *)v182, v101, v102) < 0 )
                {
                  WdLogSingleEntry1(1LL, 3417LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"NT_SUCCESS(NotificationStatus)",
                    3417LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
              }
              if ( ((*((_DWORD *)a5 + 13) | *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v97) != 0 )
              {
                v166 = 0;
                MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v100, v95, &v166);
                if ( (int)(MostImportantVidPnPathTargetsFromSource + 0x80000000) >= 0
                  && MostImportantVidPnPathTargetsFromSource != -1071774919 )
                {
                  WdLogSingleEntry0(1LL);
                  v104 = 0;
                  goto LABEL_167;
                }
                v104 = 0;
                if ( MostImportantVidPnPathTargetsFromSource < 0 || (v105 = v166, v166 == -1) || (v113 = 0, !v158) )
                {
LABEL_167:
                  v105 = -1;
                }
                else
                {
                  while ( 1 )
                  {
                    v104 = 0;
                    if ( (_DWORD)v95 == v164[v113] )
                    {
                      v114 = 56LL * v113;
                      if ( v166 == *(_DWORD *)((char *)Src + v114)
                        && (*(_DWORD *)((_BYTE *)Src + v114 + 32) & 0xF000000) == 0xE000000
                        && (*(_DWORD *)((_BYTE *)Src + v114 + 12) & 4) != 0
                        && (v97 & *((_DWORD *)a5 + 18)) == 0 )
                      {
                        break;
                      }
                    }
                    if ( ++v113 >= v158 )
                      goto LABEL_167;
                  }
                  *((_DWORD *)a5 + 19) |= v97;
                  v104 = 1;
                }
                v106 = j;
                ADAPTER_DISPLAY::SetVidPnPrimaryTarget((ADAPTER_DISPLAY *)v13[365], j, v105);
                if ( (*((_DWORD *)a5 + 2) & (unsigned int)v165) != 0 )
                {
                  HIDWORD(v185[2]) = 1;
                  *(_QWORD *)&v185[3] = 1LL;
                  if ( v13[366] )
                  {
                    DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                                   (ADAPTER_DISPLAY *)v13[365],
                                                   v106);
                    v109 = DisplayedPrimaryAllocation;
                    if ( DisplayedPrimaryAllocation )
                    {
                      if ( (*((_DWORD *)DisplayedPrimaryAllocation + 1) & 0x10) == 0 )
                      {
                        v110 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
                        v111 = (ADAPTER_RENDER *)v13[366];
                        memset(&v183.Width, 0, 40);
                        v183.hAllocation = v110;
                        v112 = ADAPTER_RENDER::DdiDescribeAllocation(v111, &v183, v108);
                        if ( v112 < 0 )
                        {
                          WdLogSingleEntry3(3LL, v109, j, v112);
                        }
                        else if ( v183.Width == LODWORD(v185[0])
                               && *(_QWORD *)&v183.Height == *(_QWORD *)((char *)v185 + 4)
                               && *(_QWORD *)&v183.RefreshRate == *(_QWORD *)&v185[1]
                               && (((unsigned __int8)~(DWORD2(v185[2]) >> 4) ^ (unsigned __int8)~(*((_DWORD *)v109 + 1) >> 12)) & 1) == 0 )
                        {
                          *(D3DDDI_MULTISAMPLINGMETHOD *)((char *)&v185[2] + 12) = v183.MultisampleMethod;
                          DWORD1(v185[3]) = v183.PrivateDriverFormatAttribute;
                        }
                        else if ( v156 || (*((_DWORD *)v109 + 1) & 2) == 0 )
                        {
                          WdLogSingleEntry0(1LL);
                        }
                      }
                    }
                  }
                }
                v95 = j;
                v115 = ADAPTER_DISPLAY::SetVidPnSourceActive(
                         (PERESOURCE **)v13[365],
                         j,
                         v104,
                         (const struct _DXGK_DISPLAYMODE_INFO *)v185,
                         v160 == 4,
                         a7 != 0);
                v116 = v115;
                if ( v115 >= 0 )
                {
                  ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)v13[365], v95, 0);
                  v118 = (int)v165;
                  if ( ((unsigned int)v165 & *((_DWORD *)a5 + 3)) != 0 )
                  {
                    if ( ((v160 - 1) & 0xFFFFFFFD) != 0 )
                      WdLogSingleEntry0(1LL);
                    ADAPTER_DISPLAY::SetPartOfDesktop((ADAPTER_DISPLAY *)v13[365], v95, 0);
                    ADAPTER_DISPLAY::SetContentRect((ADAPTER_DISPLAY *)v13[365], v95, &stru_1C01411D0);
                    ADAPTER_DISPLAY::SetCddInterface((DXGADAPTER **)v13[365], v95, 0LL);
                    ADAPTER_DISPLAY::SetHdrEnabled((PERESOURCE **)v13[365], v95, 0);
                  }
                  else
                  {
                    v169 = 0LL;
                    if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v173, v95, (unsigned __int64 *)&v169) < 0 || !v169 )
                      WdLogSingleEntry0(1LL);
                    if ( ((*((_DWORD *)a5 + 13) | *((_DWORD *)a5 + 2)) & v118) != 0 )
                    {
                      if ( ((v160 - 1) & 0xFFFFFFFD) == 0 )
                        ADAPTER_DISPLAY::SetPartOfDesktop((ADAPTER_DISPLAY *)v13[365], v95, 1u);
                      ADAPTER_DISPLAY::SetDisplayModeInfo(
                        (DXGADAPTER **)v13[365],
                        v95,
                        (const struct _DXGK_DISPLAYMODE_INFO *const)v185);
                      v119 = v13[365];
                      v120 = HIDWORD(v185[0]);
                      if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v119->OwnerTable) )
                      {
                        WdLogSingleEntry1(1LL, 6375LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"IsCoreResourceSharedOwner()",
                          6375LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      if ( (unsigned int)v95 >= LODWORD(v119->SpinLock) )
                      {
                        WdLogSingleEntry1(1LL, 6376LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"VidPnSourceId < m_NumVidPnSources",
                          6376LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      *(_DWORD *)(4000 * v95 + *(_QWORD *)&v119[1].ActiveCount + 1092) = v120;
                      ADAPTER_DISPLAY::DetermineScalingCapabilities((ADAPTER_DISPLAY *)v13[365], v95);
                      ADAPTER_DISPLAY::SetHdrEnabled(
                        (PERESOURCE **)v13[365],
                        v95,
                        (*((_DWORD *)a5 + 64) & (unsigned int)v165) != 0);
                      if ( v168 && v177 )
                        ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
                          (ADAPTER_DISPLAY *)v13[365],
                          v95,
                          *(struct DXGADAPTER **)(*((_QWORD *)v168 + 2) + 16LL));
                    }
                  }
                }
                else
                {
                  WdLogSingleEntry3(2LL, v13, (unsigned int)v95, v115);
                  v117 = (int)v165;
                  *((_DWORD *)a5 + v95 + 22) = v116;
                  *((_DWORD *)a5 + 21) |= v117;
                }
              }
LABEL_212:
              v121 = i;
              if ( i )
              {
                CurrentProcess = PsGetCurrentProcess();
                ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
                VIDPN_MGR::CacheDisplayModeChangeRequest(
                  (__int64)v96,
                  v95,
                  (__int64)v185,
                  1u,
                  *((_DWORD *)a5 + (unsigned int)v95 + 22),
                  v121,
                  (int)v13[365][4].SystemResourcesList.Flink,
                  ProcessImageFileName);
              }
            }
            v94 = (ADAPTER_DISPLAY *)v13[365];
            LODWORD(v95) = v95 + 1;
            j = v95;
            if ( (unsigned int)v95 >= *((_DWORD *)v94 + 24) )
            {
              v22 = v174;
              goto LABEL_216;
            }
            continue;
          }
        }
      }
    }
    v28 = *(_DWORD *)(v25 + 756);
    if ( a7 )
    {
      if ( v28 )
        goto LABEL_30;
    }
    else if ( !v28 )
    {
      goto LABEL_30;
    }
    WdLogSingleEntry1(1LL, 2715LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(i_DoNotSuspend && pDisplayAdapter->GetRenderCore()->GetSchedulerSuspendSourceMask()) || (!i_DoNotSuspend"
                " && !pDisplayAdapter->GetRenderCore()->GetSchedulerSuspendSourceMask())",
      2715LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v27 = v155;
LABEL_30:
    if ( v26 >= 2200 )
    {
      v29 = 0;
      v30 = 0LL;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      SpinLock = v13[365]->SpinLock;
      if ( SpinLock )
      {
        do
        {
          v35 = 1 << v33;
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & (1 << v33)) != 0 )
          {
            v29 |= v35;
            v36 = v31 | v35;
            if ( v27 )
              v36 = v31;
            v31 = v36;
          }
          else if ( (v35 & *(_DWORD *)a5) != 0 )
          {
            v30 = v35 | (unsigned int)v30;
            if ( !a7 )
              v32 |= v35;
          }
          ++v33;
        }
        while ( v33 < SpinLock );
      }
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays((ADAPTER_RENDER *)v13[366], v29, v30, v31, v32);
      *((_DWORD *)a5 + 16) |= v31;
      if ( v32 )
        CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v175, v32);
    }
    else
    {
      ADAPTER_RENDER::FlushScheduler(v13[366], 8LL, 0xFFFFFFFFLL);
    }
    goto LABEL_43;
  }
  WdLogSingleEntry1(6LL, v158);
  v9 = -1073741801;
LABEL_279:
  auto_rc<DMMVIDPN const>::~auto_rc<DMMVIDPN const>((__int64 *)&v181);
  return v9;
}
