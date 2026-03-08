/*
 * XREFs of ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4
 * Callers:
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0168044 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C40F4 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1C01DBD60 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E3544 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C03A9DBC (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C03AD2B4 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001414 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0001EBC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONIT.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0002C44 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C0002CAC (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0002CE8 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C0002E00 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C0002F5C (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0002FE0 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C00035C8 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0003B54 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0003C1C (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0009084 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1C000949C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000999C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C000EAB4 (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0015088 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0015AC0 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0015D5C (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x1C0016B00 (-SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z.c)
 *     ?SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0016B88 (-SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledDeviceUsage @ 0x1C0026958 (Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??1?$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ @ 0x1C0049A30 (--1-$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C006AE74 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     MonitorSendAdjustedColorimetryToDriver @ 0x1C0168CD8 (MonitorSendAdjustedColorimetryToDriver.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C01691C4 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C016BCC4 (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0172C2C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C0172E00 (DxgkStatusChangeNotify.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01738D4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C017586C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C017597C (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0176278 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0176558 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0176878 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C0176944 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C0176CA0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C0177820 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     LogSetTimingSourceMask @ 0x1C01778BC (LogSetTimingSourceMask.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C017ABB4 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C017CB3C (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C017E6B8 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0180040 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A1F18 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A23D0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C01B076C (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C01C6178 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01C62F8 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C01D2394 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01D767C (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C01D8F74 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01DAB74 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z @ 0x1C01DC27C (-CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01DCBBC (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C01DCDA0 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C01DD134 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C01DD8A0 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C01F8050 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02B7460 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03ABFB8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C03AF250 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03B2310 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
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
  ADAPTER_RENDER *v23; // rax
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  PERESOURCE v25; // rcx
  unsigned __int8 v26; // r11
  signed int v27; // r12d
  int v28; // ecx
  unsigned int v29; // r10d
  unsigned int v30; // r8d
  unsigned int v31; // r13d
  unsigned int v32; // r12d
  unsigned int v33; // ecx
  unsigned int SpinLock; // r9d
  int v35; // eax
  PERESOURCE v36; // r10
  unsigned int v37; // r12d
  int v38; // ebx
  signed int v39; // edi
  int v40; // r13d
  PERESOURCE v41; // rcx
  struct DXGDEVICE *v42; // rdx
  unsigned __int8 v43; // r9
  struct DMMVIDPN *v44; // r12
  VIDPN_MGR *v45; // r13
  unsigned int v46; // r13d
  unsigned int v47; // r12d
  _BYTE *v48; // rbx
  VIDPN_MGR *v49; // r15
  __int64 v50; // rdi
  bool v51; // zf
  char *v52; // rax
  char *v53; // rcx
  char v54; // al
  int v55; // eax
  char *v56; // r13
  ADAPTER_DISPLAY *v57; // rcx
  int v58; // eax
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  _OWORD *v60; // r8
  int v61; // edx
  char v62; // r12
  _OWORD *v63; // rax
  ADAPTER_DISPLAY *v64; // rcx
  int v65; // eax
  unsigned int v66; // eax
  _BYTE *v67; // rdi
  unsigned int v68; // r10d
  char *v69; // r15
  __int64 v70; // rax
  __int64 v71; // rdx
  char *v72; // rax
  unsigned int v73; // eax
  __int64 v74; // rdi
  unsigned int v75; // eax
  unsigned int v76; // r12d
  struct DMMVIDEOPRESENTTARGET *v77; // rax
  struct DMMVIDEOPRESENTTARGET *v78; // r13
  _BYTE *v79; // r10
  struct HDXGMONITOR__ *v80; // rdx
  int v81; // r12d
  int TargetLinkTrainingStatus; // eax
  __int64 v83; // r10
  __int64 v84; // rdx
  struct DXGGLOBAL *Global; // rax
  int v86; // eax
  int v87; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  ADAPTER_DISPLAY *v89; // rdi
  __int64 v90; // r12
  VIDPN_MGR *v91; // rbx
  int v92; // r13d
  const struct _DXGK_DISPLAYMODE_INFO *v93; // rax
  int v94; // ecx
  DMMVIDPNTOPOLOGY *v95; // rdi
  __int64 v96; // rdx
  __int64 v97; // r8
  int MostImportantVidPnPathTargetsFromSource; // eax
  bool v99; // di
  unsigned int v100; // r9d
  unsigned int v101; // r13d
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v103; // r8
  struct DXGADAPTERALLOCATION *v104; // r13
  void *v105; // rax
  ADAPTER_RENDER *v106; // rcx
  int v107; // eax
  unsigned int v108; // edx
  __int64 v109; // rcx
  int v110; // eax
  int v111; // r13d
  int v112; // eax
  int v113; // edi
  PERESOURCE v114; // rdi
  int v115; // r13d
  int v116; // edi
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  unsigned int v119; // eax
  __int64 v120; // r12
  __int64 v121; // rdi
  DMMVIDEOPRESENTTARGET *v122; // rax
  DMMVIDEOPRESENTTARGET *v123; // r13
  _BYTE *v124; // rdx
  unsigned int *v125; // r9
  int v126; // r8d
  int v127; // eax
  PERESOURCE v128; // rcx
  _QWORD *SharedWaiters; // r8
  ADAPTER_DISPLAY *v130; // r10
  unsigned int v131; // r12d
  struct DXGDEVICE *v132; // rdi
  int v133; // r13d
  ADAPTER_DISPLAY *v134; // rcx
  ADAPTER_DISPLAY *v135; // rdi
  const struct _D3DKMT_DISPLAYMODE *DisplayModeInfo; // rax
  int v137; // eax
  unsigned int v138; // r13d
  int v139; // eax
  DMMVIDPNTOPOLOGY *v140; // rdi
  char *v141; // r8
  int v142; // eax
  PERESOURCE v143; // r10
  unsigned int k; // r9d
  __int64 v145; // r8
  unsigned int v146; // ecx
  struct DXGGLOBAL *v147; // rax
  unsigned __int8 v148; // [rsp+70h] [rbp-90h]
  char v149; // [rsp+70h] [rbp-90h]
  char v150; // [rsp+71h] [rbp-8Fh]
  unsigned int v151; // [rsp+74h] [rbp-8Ch] BYREF
  void *Src; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v153; // [rsp+80h] [rbp-80h]
  int v154; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int j; // [rsp+88h] [rbp-78h]
  unsigned int i; // [rsp+8Ch] [rbp-74h]
  unsigned int *v157; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v158; // [rsp+98h] [rbp-68h]
  unsigned int v159; // [rsp+A0h] [rbp-60h] BYREF
  int v160; // [rsp+A4h] [rbp-5Ch] BYREF
  struct DXGDEVICE *v161; // [rsp+A8h] [rbp-58h]
  struct DMMVIDPN *v162; // [rsp+B0h] [rbp-50h] BYREF
  VIDPN_MGR *v163; // [rsp+B8h] [rbp-48h]
  void *v164; // [rsp+C0h] [rbp-40h]
  PERESOURCE *v165; // [rsp+C8h] [rbp-38h] BYREF
  DMMVIDPNTOPOLOGY *v166; // [rsp+D0h] [rbp-30h]
  __int64 v167; // [rsp+D8h] [rbp-28h]
  unsigned int v168; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v169; // [rsp+E8h] [rbp-18h]
  unsigned int *v170; // [rsp+F0h] [rbp-10h] BYREF
  ADAPTER_RENDER *v171[2]; // [rsp+F8h] [rbp-8h] BYREF
  struct DMMVIDPN *v172; // [rsp+108h] [rbp+8h]
  _DXGKARG_SETTIMINGSFROMVIDPN v173; // [rsp+110h] [rbp+10h] BYREF
  const struct DMMVIDPN *v174; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v175[2]; // [rsp+140h] [rbp+40h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v176; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v177[32]; // [rsp+180h] [rbp+80h] BYREF
  _OWORD v178[5]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v179; // [rsp+1F0h] [rbp+F0h] BYREF
  GUID ActivityId; // [rsp+200h] [rbp+100h] BYREF

  v9 = 0;
  v161 = a8;
  v169 = a9;
  v172 = a4;
  v153 = a3;
  i = a2;
  v163 = a1;
  v158 = a6;
  v154 = 0;
  if ( !*((_QWORD *)a1 + 1) )
    WdLogSingleEntry0(1LL);
  v165 = *(PERESOURCE **)(*((_QWORD *)a1 + 1) + 16LL);
  v13 = v165;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v165) )
    WdLogSingleEntry0(1LL);
  v168 = 0;
  *a6 = 0;
  v151 = 0;
  Src = 0LL;
  v157 = 0LL;
  v170 = 0LL;
  v14 = VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
          a1,
          a2,
          a4,
          &v168,
          &v151,
          (struct _DXGK_SET_TIMING_PATH_INFO **)&Src,
          &v157,
          a5,
          &v170);
  v15 = v14;
  v159 = v14;
  if ( v14 < 0 )
  {
    v16 = v14;
    v17 = a4;
    v18 = 2LL;
LABEL_7:
    WdLogSingleEntry2(v18, v17, v16);
    return (unsigned int)v15;
  }
  if ( !v151 )
  {
    v16 = *((unsigned int *)v13 + 101);
    v18 = 3LL;
    v17 = (struct DMMVIDPN *)*((int *)v13 + 102);
    goto LABEL_7;
  }
  if ( *((_DWORD *)a5 + 2) || *((_DWORD *)a5 + 3) || *((_DWORD *)a5 + 6) )
  {
    v150 = 1;
  }
  else
  {
    v150 = 0;
    if ( !*((_DWORD *)a5 + 10) && !*((_DWORD *)a5 + 8) && !*((_DWORD *)a5 + 13) )
    {
      DisplayScenarioJournalSetSetTimingPathInfo(0LL, 56 * v151, v151, Src);
      return 0LL;
    }
  }
  v160 = 0;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(a1);
  v174 = ClientCommittedVidPnRef;
  if ( a4 )
    ClientCommittedVidPnRef = a4;
  v162 = ClientCommittedVidPnRef;
  v166 = (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96);
  v21 = 56LL * v151;
  if ( !is_mul_ok(v151, 0x38uLL) )
    v21 = -1LL;
  v164 = (void *)operator new[](v21, 0x4E506456u, 256LL);
  if ( v164 )
  {
    memmove(v164, Src, 56LL * v151);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL));
    v22 = *((_QWORD *)a1 + 15);
    v23 = (ADAPTER_RENDER *)v13[366];
    v167 = v22;
    v171[1] = v23;
    LODWORD(v171[0]) = 0;
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v13);
    v25 = v13[366];
    v26 = IsLegacyDisplayStateSynchronization;
    v27 = *((_DWORD *)v13 + 705);
    v148 = IsLegacyDisplayStateSynchronization;
    j = v27;
    if ( !v25 )
      goto LABEL_42;
    v28 = *(_DWORD *)(&v25[7].26 + 1);
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
    v26 = v148;
LABEL_30:
    if ( v27 >= 2200 )
    {
      v29 = 0;
      v30 = 0;
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
            if ( !v26 )
              v31 |= v35;
          }
          else if ( (v35 & *(_DWORD *)a5) != 0 )
          {
            v30 |= v35;
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
        CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v171, v32);
    }
    else
    {
      ADAPTER_RENDER::FlushScheduler(v13[366], 8LL, 0xFFFFFFFFLL);
    }
LABEL_42:
    v36 = v13[365];
    v37 = 0;
    if ( LODWORD(v36->SpinLock) )
    {
      v38 = (int)v171[0];
      v39 = j;
      do
      {
        v40 = 1 << v37;
        if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3)) & (1 << v37)) != 0 )
        {
          v41 = v13[366];
          if ( v41 && v39 < 2200 )
          {
            ADAPTER_RENDER::FlushScheduler(v41, 8LL, v37);
            v36 = v13[365];
          }
          if ( v161 )
          {
            if ( v169 )
            {
              v42 = *(struct DXGDEVICE **)(4000LL * v37 + *(_QWORD *)&v36[1].ActiveCount + 728);
              if ( v42 )
              {
                if ( *((_QWORD *)v42 + 235) == *(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) )
                {
                  if ( v38 || (v43 = 0, a7) )
                    v43 = 1;
                  ADAPTER_DISPLAY::DisablePrimaryOnDevice((ADAPTER_DISPLAY *)v36, v42, v37, v43);
                }
              }
            }
          }
        }
        if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & v40) != 0
          && v13[366]
          && *((_BYTE *)v13 + 2866)
          && v148 )
        {
          ADAPTER_DISPLAY::DisableMPOPlanes((ADAPTER_DISPLAY *)v13[365], v37, 0);
          *((_DWORD *)a5 + 16) |= v40;
        }
        v36 = v13[365];
        ++v37;
      }
      while ( v37 < LODWORD(v36->SpinLock) );
      v22 = v167;
      v15 = v159;
    }
    v44 = v162;
    v45 = v163;
    if ( *((_DWORD *)a5 + 5) )
      VIDPN_MGR::RequestPowerStateForTargets(v163, v162);
    if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v13) )
    {
      v149 = 0;
      if ( v150 )
      {
        v179 = 0LL;
        *(_QWORD *)&v173.SetFlags.Reserved = 0LL;
        *(&v173.PathCount + 1) = 0;
        if ( v153 == 4 )
          DisplayLogSetMonitorPowerStage(0LL, 16LL, 0LL, &v179);
        v56 = (char *)v44 + 88;
        v173.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v154;
        v173.PathCount = v151;
        v173.hFunctionalVidPn = (D3DKMDT_HVIDPN)((unsigned __int64)v44 & -(__int64)((struct DMMVIDPN *)((char *)v44 + 88) != 0LL));
        v57 = (ADAPTER_DISPLAY *)v13[365];
        v173.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
        v58 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v57, &v173);
        v15 = v58;
        if ( v58 < 0 )
          WdLogSingleEntry3(2LL, *((int *)v13 + 102), *((unsigned int *)v13 + 101), v58);
        if ( v151 == 1
          && ((v153 - 1) & 0xFFFFFFFD) == 0
          && (v15 < 0 || (*((_DWORD *)Src + 8) & 0xF000000) == 0xD000000)
          && (*((_DWORD *)Src + 3) & 4) != 0
          && ((v154 & 1) != 0 || (*(_DWORD *)(*(_QWORD *)&v13[27]->ActiveEntries + 3532LL) & 3) != 0) )
        {
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v22, *(_DWORD *)Src);
          if ( TargetById )
          {
            if ( !DMMVIDEOPRESENTTARGET::IsTargetForceable(TargetById) )
            {
              DisplayScenarioJournalSetSetTimingPathInfo((unsigned int)v15, 56 * v151, v151, Src);
              v60 = v164;
              *((_DWORD *)v164 + 3) = *((_DWORD *)v164 + 3) & 0xFFFFFFF0 | 9;
              v61 = *((_DWORD *)a5 + 1);
              *((_DWORD *)a5 + 6) = v61 & (*((_DWORD *)a5 + 5) ^ *((_DWORD *)a5 + 6));
              *((_DWORD *)a5 + 5) = 0;
              *((_DWORD *)a5 + 20) = v61;
              if ( v15 < 0 )
                v62 = 0;
              else
                v62 = v154 & 1;
              v63 = Src;
              v154 = 0;
              *(_OWORD *)Src = *v60;
              v63[1] = v60[1];
              v63[2] = v60[2];
              *((_QWORD *)v63 + 6) = *((_QWORD *)v60 + 6);
              v64 = (ADAPTER_DISPLAY *)v13[365];
              v173.hFunctionalVidPn = (D3DKMDT_HVIDPN)((unsigned __int64)v162 & -(__int64)(v56 != 0LL));
              v173.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v154;
              v173.PathCount = v151;
              v173.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
              *(_QWORD *)&v173.SetFlags.Reserved = 0LL;
              *(&v173.PathCount + 1) = 0;
              v65 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v64, &v173);
              v15 = v65;
              if ( v65 < 0 )
                WdLogSingleEntry4(2LL, *(unsigned int *)Src, *((int *)v13 + 102), *((unsigned int *)v13 + 101), v65);
              DxgkLogCodePointPacket(
                0x68u,
                *(_DWORD *)Src,
                v15,
                *((_BYTE *)Src + 35) & 0xF,
                *(__int64 *)((char *)v13 + 404));
              v154 ^= ((unsigned __int8)v154 ^ (unsigned __int8)(v154 | v62)) & 1;
            }
          }
        }
        v46 = v153;
        if ( v153 == 4 )
          DisplayLogSetMonitorPowerStage(0LL, 2147483664LL, (unsigned int)v15, &v179);
        goto LABEL_70;
      }
    }
    else
    {
      v149 = 1;
      if ( v150 || *((_DWORD *)a5 + 10) )
      {
        v150 = 1;
        if ( a7 || (v54 = 0, LODWORD(v171[0])) )
          v54 = 1;
        v55 = VIDPN_MGR::CommitVidPnOnAdapter(
                v45,
                i,
                v153,
                v44,
                v151,
                Src,
                v157,
                a5,
                &v160,
                v170,
                &v154,
                v161,
                v169,
                v54);
        v15 = v55;
        if ( v55 < 0 )
          WdLogSingleEntry3(2LL, *((int *)v13 + 102), *((unsigned int *)v13 + 101), v55);
      }
      else
      {
        v150 = 0;
      }
    }
    v46 = v153;
LABEL_70:
    DisplayScenarioJournalSetSetTimingPathInfo((unsigned int)v15, 56 * v151, v151, Src);
    LogSetTimingSourceMask(v13, a5);
    if ( v150 )
    {
      if ( v15 < 0 )
      {
        *((_DWORD *)a5 + 21) = -1;
        FillFailedStatus(a5, v15);
        v68 = 0;
        if ( v151 )
        {
          v69 = (char *)v164;
          do
          {
            v70 = v68++;
            v71 = 56 * v70;
            v72 = (char *)Src;
            *(_OWORD *)((char *)Src + v71) = *(_OWORD *)&v69[v71];
            *(_OWORD *)&v72[v71 + 16] = *(_OWORD *)&v69[v71 + 16];
            *(_OWORD *)&v72[v71 + 32] = *(_OWORD *)&v69[v71 + 32];
            *(_QWORD *)&v72[v71 + 48] = *(_QWORD *)&v69[v71 + 48];
            *(_DWORD *)((char *)Src + v71 + 32) = *(_DWORD *)((_BYTE *)Src + v71 + 32) & 0xF0FFFFFF | 0xD000000;
            *(_DWORD *)((char *)Src + v71 + 16) |= 1u;
          }
          while ( v68 < v151 );
          v13 = v165;
        }
        v67 = v158;
        v66 = 1;
        v154 = 1;
        *v158 = (((v46 - 1) & 0xFFFFFFFD) != 0 ? 2 : 0) | *v158 & 0xFD;
      }
      else
      {
        v47 = 0;
        if ( v151 )
        {
          v48 = v158;
          v49 = v163;
          do
          {
            v50 = 56LL * v47;
            v51 = VIDPN_MGR::CheckDdiSetTimingsViolationOnPathInfo(
                    v49,
                    (struct _DXGK_SET_TIMING_PATH_INFO *)((char *)v164 + v50),
                    (struct _DXGK_SET_TIMING_PATH_INFO *)((char *)Src + v50)) == 0;
            v52 = (char *)Src;
            if ( v51 )
            {
              v53 = (char *)v164 + v50;
              *(_OWORD *)((char *)Src + v50) = *(_OWORD *)((char *)v164 + v50);
              *(_OWORD *)&v52[v50 + 16] = *((_OWORD *)v53 + 1);
              *(_OWORD *)&v52[v50 + 32] = *((_OWORD *)v53 + 2);
              *(_QWORD *)&v52[v50 + 48] = *((_QWORD *)v53 + 6);
              *(_DWORD *)((char *)Src + v50 + 32) = *(_DWORD *)((_BYTE *)Src + v50 + 32) & 0xF0FFFFFF | 0xD000000;
              *((_DWORD *)a5 + v157[v47] + 22) = -1073741437;
              *((_DWORD *)a5 + 21) |= 1 << v157[v47];
            }
            else if ( (*(_DWORD *)((_BYTE *)Src + v50 + 32) & 0xF000000) == 0xD000000 )
            {
              *((_DWORD *)a5 + v157[v47] + 22) = -1073741506;
              *((_DWORD *)a5 + 21) |= 1 << v157[v47];
              *v48 = (((v153 - 1) & 0xFFFFFFFD) != 0 ? 2 : 0) | *v48 & 0xFD;
            }
            ++v47;
          }
          while ( v47 < v151 );
          v22 = v167;
          v13 = v165;
        }
        v66 = v154;
        v67 = v158;
      }
      if ( (v66 & 0xFFFFFFFE) != 0 )
      {
        WdLogSingleEntry1(1LL, (unsigned __int64)v66 >> 1);
        LOBYTE(v66) = v154;
      }
      if ( (v66 & 1) != 0 )
        *v67 |= 1u;
    }
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    v73 = 0;
    for ( i = 0; v73 < v151; i = v73 )
    {
      v74 = 56LL * v73;
      v75 = v157[v73];
      v76 = 1 << v75;
      LODWORD(v158) = v75;
      j = 1 << v75;
      v77 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v22, *(_DWORD *)((char *)Src + v74));
      v78 = v77;
      if ( v77 )
      {
        if ( v150 )
        {
          v79 = Src;
          v80 = (struct HDXGMONITOR__ *)*((_QWORD *)v77 + 14);
          v81 = (*(_DWORD *)((char *)Src + v74 + 12) >> 2) & 1;
          if ( v80 )
          {
            MONITOR_MGR::AcquireMonitorExclusive(&v165, v80);
            if ( v165 )
            {
              DXGMONITOR::LogMonitorObjectOnOffState((__int64)v165, (__int64)&ActivityId, v81, 1);
            }
            else
            {
              WdLogSingleEntry1(2LL, 6091LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"LogMonitorOnOffState failed _GetMonitorFromHandle",
                6091LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v165);
            v79 = Src;
          }
          if ( !v149 )
          {
            DxgkLogCodePointPacket(
              0x58u,
              *(_DWORD *)&v79[v74],
              v79[v74 + 35] & 0xF | 0x80000000,
              *(_DWORD *)&v79[v74 + 24],
              *(__int64 *)((char *)v13 + 404));
            DxgkLogCodePointPacket(
              0x59u,
              *(_DWORD *)((char *)Src + v74),
              *(_DWORD *)((char *)Src + v74 + 48),
              0,
              *(__int64 *)((char *)v13 + 404));
          }
          TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v78, 0LL);
          v76 = j;
          if ( TargetLinkTrainingStatus != (*(_BYTE *)(v74 + v83 + 35) & 0xF) )
            *((_DWORD *)a5 + 9) |= j;
          v84 = *(_QWORD *)(v74 + v83 + 24);
          *(_BYTE *)(*((_QWORD *)v78 + 67) + 168LL) = *(_BYTE *)(v74 + v83 + 35) & 0xF;
          *(_QWORD *)(*((_QWORD *)v78 + 67) + 160LL) = v84;
          Global = DXGGLOBAL::GetGlobal();
          QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), 0);
          if ( (*(_DWORD *)((_BYTE *)Src + v74 + 32) & 0xF000000) == 0xC000000 )
            DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v78, 1u);
          else
            DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v78);
          *((_BYTE *)v78 + 414) = 0;
        }
        else
        {
          v86 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v77, 0LL);
          *(_DWORD *)((char *)Src + v74 + 32) ^= (*(_DWORD *)((char *)Src + v74 + 32) ^ (v86 << 24)) & 0xF000000;
        }
        if ( (*(_DWORD *)((_BYTE *)Src + v74 + 12) & 4) != 0 && (v76 & *((_DWORD *)a5 + 18)) == 0 )
        {
          v87 = *((_DWORD *)a5 + 21) | v160;
          if ( !_bittest(&v87, (unsigned int)v158) )
          {
            DMMVIDEOPRESENTTARGET::SetTargetActivated(v78, 1u, 1u);
            if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v76) != 0
              && (*(_DWORD *)((_BYTE *)Src + v74 + 32) & 0xF000000) == 0xE000000 )
            {
              PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v166, *(_DWORD *)((char *)Src + v74));
              DMMVIDPNPRESENTPATH::SetDriverGammaRamp(PathFromTarget, 0LL);
            }
          }
        }
        if ( (*(_DWORD *)((_BYTE *)Src + v74 + 32) & 0xF000000) != 0xD000000
          && ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 4)) & v76) != 0 )
        {
          MonitorSendAdjustedColorimetryToDriver(
            *((struct HDXGMONITOR__ **)v78 + 14),
            *(_DWORD *)((char *)Src + v74 + 4));
        }
      }
      else
      {
        Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledDeviceUsage();
      }
      v73 = i + 1;
    }
    CVidSchSuspendResume::Resume(v171);
    v89 = (ADAPTER_DISPLAY *)v13[365];
    LODWORD(v90) = 0;
    j = 0;
    if ( !*((_DWORD *)v89 + 24) )
    {
LABEL_213:
      v119 = 0;
      for ( j = 0; v119 < v151; j = v119 )
      {
        v120 = v119;
        v121 = 56LL * v119;
        v122 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v22, *(_DWORD *)((char *)Src + v121));
        v123 = v122;
        if ( v122 )
        {
          v124 = Src;
          if ( (*(_DWORD *)((_BYTE *)Src + v121 + 12) & 4) == 0
            || (v125 = v157, v126 = 1 << v157[v120], (v126 & *((_DWORD *)a5 + 18)) != 0)
            || (v126 & *((_DWORD *)a5 + 21)) != 0 )
          {
            DMMVIDEOPRESENTTARGET::SetTargetActivated(
              v122,
              0,
              (*(_DWORD *)((_BYTE *)Src + v121 + 32) & 0xF000000) == 201326592);
            v124 = Src;
            v125 = v157;
          }
          if ( !v149
            && *((_BYTE *)v123 + 416)
            && ((*(_DWORD *)&v124[v121 + 32] & 0xF000000) != 0xE000000 || v124[v121 + 48] != 0xFF) )
          {
            v127 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)v13[365], v125[v120], 0, 2048, a7);
            if ( v127 < 0 )
              WdLogSingleEntry3(2LL, v13, v157[v120], v127);
            if ( (*(_DWORD *)((_BYTE *)Src + v121 + 32) & 0xF000000) == 0xE000000 )
            {
              v128 = v13[366];
              if ( v128 )
              {
                ((void (__fastcall *)(POWNER_ENTRY, _QWORD))v128[7].SystemResourcesList.Blink->Blink[55].Blink)(
                  v128[7].OwnerTable,
                  v157[v120]);
              }
              else
              {
                SharedWaiters = v13[365][4].SharedWaiters;
                if ( SharedWaiters )
                  _InterlockedExchange((volatile __int32 *)(2920LL * v157[v120] + SharedWaiters[1] + 960), 1);
              }
            }
          }
          *((_BYTE *)v123 + 416) = 0;
        }
        else if ( (*(_DWORD *)((_BYTE *)Src + v121 + 12) & 4) != 0 )
        {
          WdLogSingleEntry0(1LL);
        }
        if ( (*(_DWORD *)((_BYTE *)Src + v121 + 16) & 1) != 0 )
          *((_DWORD *)a5 + 16) |= 1 << v157[v120];
        v119 = j + 1;
      }
      auto_rc<DMMVIDPN>::reset((__int64 *)v163 + 40, 0LL);
      CVidSchSuspendResume::Resume(v171);
      v130 = (ADAPTER_DISPLAY *)v13[365];
      v131 = 0;
      if ( *((_DWORD *)v130 + 24) )
      {
        v132 = v161;
        do
        {
          v133 = 1 << v131;
          if ( ((1 << v131) & *((_DWORD *)a5 + 15)) != 0 )
            ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(v130, v131);
          if ( (v133 & *((_DWORD *)a5 + 16)) != 0 )
            DXGADAPTER::NotifyMultiPlaneOverlayDisable((DXGADAPTER *)v13, v131);
          if ( v132 && !v149 )
          {
            if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)v13[365], v131, 0)
              && ADAPTER_DISPLAY::IsCddPrimaryStale((ADAPTER_DISPLAY *)v13[365], v131) )
            {
              ADAPTER_DISPLAY::DestroyCddAllocations(v134, v132, v131);
            }
            v135 = (ADAPTER_DISPLAY *)v13[365];
            DisplayModeInfo = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v135, v131);
            ADAPTER_DISPLAY::SetCddDisplayMode((DXGADAPTER **)v135, v131, DisplayModeInfo);
            v132 = v161;
          }
          if ( (v133 & *((_DWORD *)a5 + 21)) != 0 )
          {
            v137 = *((_DWORD *)a5 + v131 + 40);
            if ( (v137 & 7) != 0 )
            {
              *((_DWORD *)a5 + 4 * (v137 & 7) + 56) = 0;
              DxgkLogCodePointPacket(0x65u, v131, *((_DWORD *)a5 + v131 + 40) & 7, 2u, *(__int64 *)((char *)v13 + 404));
            }
            v138 = v153;
            v139 = ADAPTER_DISPLAY::SetVidPnSourceActive((ADAPTER_DISPLAY *)v13[365], v131, 0, 0LL, v153 == 4, a7 != 0);
            if ( v139 < 0 )
              WdLogSingleEntry3(2LL, v13, v131, v139);
            if ( v172 )
            {
              v140 = (struct DMMVIDPN *)((char *)v172 + 96);
              v141 = (char *)v172 + 152;
              LOBYTE(v141) = 2;
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                v177,
                ((unsigned __int64)v172 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v172 + 96) != 0LL),
                v141);
              v142 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v140, v131);
              if ( (int)(v142 + 0x80000000) >= 0 && v142 != -1071774919 )
                WdLogSingleEntry0(1LL);
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v177);
            }
            v132 = v161;
            if ( v161 )
              ADAPTER_DISPLAY::DestroyCddAllocations((ADAPTER_DISPLAY *)v13[365], v161, v131);
            if ( ((v138 - 1) & 0xFFFFFFFD) == 0 )
            {
              ADAPTER_DISPLAY::SetPartOfDesktop((ADAPTER_DISPLAY *)v13[365], v131, 0);
              ADAPTER_DISPLAY::SetContentRect((ADAPTER_DISPLAY *)v13[365], v131, &stru_1C013C050);
              ADAPTER_DISPLAY::SetCddInterface((DXGADAPTER **)v13[365], v131, 0LL);
            }
            ADAPTER_DISPLAY::SetVidPnPrimaryTarget((ADAPTER_DISPLAY *)v13[365], v131, -1);
            ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)v13[365], v131, 1);
            ADAPTER_DISPLAY::SetHdrEnabled((PERESOURCE **)v13[365], v131, 0);
          }
          v130 = (ADAPTER_DISPLAY *)v13[365];
          ++v131;
        }
        while ( v131 < *((_DWORD *)v130 + 24) );
        v22 = v167;
      }
      if ( v172 )
      {
        ADAPTER_DISPLAY::SetSyncLockGroup(
          (__int64)v130,
          1u,
          *((_DWORD *)a5 + 60),
          *((_DWORD *)a5 + 61),
          *((_DWORD *)a5 + 62),
          *((_DWORD *)a5 + 63));
        v143 = v13[365];
        for ( k = 0; k < LODWORD(v143->SpinLock); v143 = v13[365] )
        {
          v145 = k;
          v146 = *((_DWORD *)a5 + k++ + 40) & 7;
          *(_DWORD *)(*(_QWORD *)&v143[1].ActiveCount + 4000 * v145 + 3780) = *((_DWORD *)a5 + 4 * v146 + 56) != 0
                                                                            ? v146
                                                                            : 0;
        }
      }
      v147 = DXGGLOBAL::GetGlobal();
      QDC_CACHE::InvalidateCache(*((QDC_CACHE **)v147 + 187), 0);
      if ( Src )
        operator delete(Src);
      operator delete(v164);
      if ( v157 )
        operator delete(v157);
      if ( v170 )
        operator delete(v170);
      CVidSchSuspendResume::Resume(v171);
      if ( v22 )
        ReferenceCounted::Release((ReferenceCounted *)(v22 + 64));
      goto LABEL_276;
    }
    v91 = v163;
    while ( 1 )
    {
      i = 0;
      memset(v178, 0, sizeof(v178));
      v92 = 1 << v90;
      LODWORD(v158) = 1 << v90;
      if ( ((1 << v90) & *((_DWORD *)a5 + 3)) != 0 )
      {
        i = 2;
      }
      else if ( (v92 & *((_DWORD *)a5 + 10)) != 0 )
      {
        i = 4;
      }
      else if ( (*((_DWORD *)a5 + 2) & ~*((_DWORD *)a5 + 8) & v92) != 0 )
      {
        i = (*(_DWORD *)a5 & v92) != 0 ? 3 : 1;
      }
      v93 = ADAPTER_DISPLAY::GetDisplayModeInfo(v89, v90);
      v94 = *((_DWORD *)a5 + 10) | *((_DWORD *)a5 + 13) | *((_DWORD *)a5 + 2);
      v95 = v166;
      v178[0] = *(_OWORD *)v93;
      v178[1] = *((_OWORD *)v93 + 1);
      v178[2] = *((_OWORD *)v93 + 2);
      v178[3] = *((_OWORD *)v93 + 3);
      v178[4] = *((_OWORD *)v93 + 4);
      if ( (v94 & v92) != 0 )
        DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(
          v166,
          ((v153 - 1) & 0xFFFFFFFD) == 0,
          v90,
          (struct _DXGK_DISPLAYMODE_INFO *)v178);
      if ( (v92 & *((_DWORD *)a5 + 21)) != 0 )
        goto LABEL_209;
      if ( (v92 & v160) == 0 )
        break;
LABEL_211:
      v89 = (ADAPTER_DISPLAY *)v13[365];
      LODWORD(v90) = v90 + 1;
      j = v90;
      if ( (unsigned int)v90 >= *((_DWORD *)v89 + 24) )
      {
        v22 = v167;
        goto LABEL_213;
      }
    }
    if ( (v92 & *((_DWORD *)a5 + 10)) != 0 )
    {
      ADAPTER_DISPLAY::SetDisplayModeInfo(
        (PERESOURCE **)v13[365],
        v90,
        (const struct _DXGK_DISPLAYMODE_INFO *const)v178);
      OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(v13[365][1].OwnerTable, (unsigned int)v90, 0LL, 0LL, 0, 1);
      v175[0] = 11LL;
      v175[1] = 0LL;
      if ( (int)DxgkStatusChangeNotify((int *)v175, v96, v97) < 0 )
      {
        WdLogSingleEntry1(1LL, 3415LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"NT_SUCCESS(NotificationStatus)",
          3415LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    if ( ((*((_DWORD *)a5 + 13) | *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v92) == 0 )
    {
LABEL_209:
      v116 = i;
      if ( i )
      {
        CurrentProcess = PsGetCurrentProcess();
        ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
        VIDPN_MGR::CacheDisplayModeChangeRequest(
          (__int64)v91,
          v90,
          (__int64)v178,
          1u,
          *((_DWORD *)a5 + (unsigned int)v90 + 22),
          v116,
          (int)v13[365][4].SystemResourcesList.Flink,
          ProcessImageFileName);
      }
      goto LABEL_211;
    }
    v159 = 0;
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v95, v90, &v159);
    if ( (int)(MostImportantVidPnPathTargetsFromSource + 0x80000000) < 0
      || MostImportantVidPnPathTargetsFromSource == -1071774919 )
    {
      v99 = 0;
      if ( MostImportantVidPnPathTargetsFromSource >= 0 )
      {
        v100 = v159;
        if ( v159 != -1 )
        {
          v108 = 0;
          if ( v151 )
          {
            while ( 1 )
            {
              v99 = 0;
              if ( (_DWORD)v90 == v157[v108] )
              {
                v109 = 56LL * v108;
                if ( v159 == *(_DWORD *)((char *)Src + v109)
                  && (*(_DWORD *)((_BYTE *)Src + v109 + 32) & 0xF000000) == 0xE000000
                  && (*(_DWORD *)((_BYTE *)Src + v109 + 12) & 4) != 0
                  && (v92 & *((_DWORD *)a5 + 18)) == 0 )
                {
                  break;
                }
              }
              if ( ++v108 >= v151 )
                goto LABEL_164;
            }
            *((_DWORD *)a5 + 19) |= v92;
            v99 = 1;
            goto LABEL_165;
          }
        }
      }
    }
    else
    {
      WdLogSingleEntry0(1LL);
      v99 = 0;
    }
LABEL_164:
    v100 = -1;
LABEL_165:
    v101 = j;
    ADAPTER_DISPLAY::SetVidPnPrimaryTarget((ADAPTER_DISPLAY *)v13[365], j, v100);
    if ( (*((_DWORD *)a5 + 2) & (unsigned int)v158) != 0 )
    {
      HIDWORD(v178[2]) = 1;
      *(_QWORD *)&v178[3] = 1LL;
      if ( v13[366] )
      {
        DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((ADAPTER_DISPLAY *)v13[365], v101);
        v104 = DisplayedPrimaryAllocation;
        if ( DisplayedPrimaryAllocation )
        {
          if ( (*((_DWORD *)DisplayedPrimaryAllocation + 1) & 0x10) == 0 )
          {
            v105 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
            v106 = (ADAPTER_RENDER *)v13[366];
            memset(&v176.Width, 0, 40);
            v176.hAllocation = v105;
            v107 = ADAPTER_RENDER::DdiDescribeAllocation(v106, &v176, v103);
            if ( v107 < 0 )
            {
              WdLogSingleEntry3(3LL, v104, j, v107);
            }
            else if ( v176.Width == LODWORD(v178[0])
                   && *(_QWORD *)&v176.Height == *(_QWORD *)((char *)v178 + 4)
                   && *(_QWORD *)&v176.RefreshRate == *(_QWORD *)&v178[1]
                   && (((unsigned __int8)~(DWORD2(v178[2]) >> 4) ^ (unsigned __int8)~(*((_DWORD *)v104 + 1) >> 12)) & 1) == 0 )
            {
              *(D3DDDI_MULTISAMPLINGMETHOD *)((char *)&v178[2] + 12) = v176.MultisampleMethod;
              DWORD1(v178[3]) = v176.PrivateDriverFormatAttribute;
            }
            else if ( v149 || (*((_DWORD *)v104 + 1) & 2) == 0 )
            {
              WdLogSingleEntry0(1LL);
            }
          }
        }
      }
    }
    v90 = j;
    v110 = ADAPTER_DISPLAY::SetVidPnSourceActive(
             (ADAPTER_DISPLAY *)v13[365],
             j,
             v99,
             (const struct _DXGK_DISPLAYMODE_INFO *)v178,
             v153 == 4,
             a7 != 0);
    v111 = v110;
    if ( v110 >= 0 )
    {
      ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)v13[365], v90, 0);
      v113 = (int)v158;
      if ( ((unsigned int)v158 & *((_DWORD *)a5 + 3)) != 0 )
      {
        if ( ((v153 - 1) & 0xFFFFFFFD) != 0 )
          WdLogSingleEntry0(1LL);
        ADAPTER_DISPLAY::SetPartOfDesktop((ADAPTER_DISPLAY *)v13[365], v90, 0);
        ADAPTER_DISPLAY::SetContentRect((ADAPTER_DISPLAY *)v13[365], v90, &stru_1C013C050);
        ADAPTER_DISPLAY::SetCddInterface((DXGADAPTER **)v13[365], v90, 0LL);
        ADAPTER_DISPLAY::SetHdrEnabled((PERESOURCE **)v13[365], v90, 0);
      }
      else
      {
        v162 = 0LL;
        if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v166, v90, (unsigned __int64 *)&v162) < 0 || !v162 )
          WdLogSingleEntry0(1LL);
        if ( ((*((_DWORD *)a5 + 13) | *((_DWORD *)a5 + 2)) & v113) != 0 )
        {
          if ( ((v153 - 1) & 0xFFFFFFFD) == 0 )
            ADAPTER_DISPLAY::SetPartOfDesktop((ADAPTER_DISPLAY *)v13[365], v90, 1u);
          ADAPTER_DISPLAY::SetDisplayModeInfo(
            (PERESOURCE **)v13[365],
            v90,
            (const struct _DXGK_DISPLAYMODE_INFO *const)v178);
          v114 = v13[365];
          v115 = HIDWORD(v178[0]);
          if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v114->OwnerTable) )
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
          if ( (unsigned int)v90 >= LODWORD(v114->SpinLock) )
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
          *(_DWORD *)(4000 * v90 + *(_QWORD *)&v114[1].ActiveCount + 1092) = v115;
          ADAPTER_DISPLAY::DetermineScalingCapabilities((ADAPTER_DISPLAY *)v13[365], v90);
          ADAPTER_DISPLAY::SetHdrEnabled((PERESOURCE **)v13[365], v90, (*((_DWORD *)a5 + 64) & (unsigned int)v158) != 0);
          if ( v161 && v169 )
            ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
              (ADAPTER_DISPLAY *)v13[365],
              v90,
              *(struct DXGADAPTER **)(*((_QWORD *)v161 + 2) + 16LL));
        }
      }
    }
    else
    {
      WdLogSingleEntry3(2LL, v13, (unsigned int)v90, v110);
      v112 = (int)v158;
      *((_DWORD *)a5 + v90 + 22) = v111;
      *((_DWORD *)a5 + 21) |= v112;
    }
    goto LABEL_209;
  }
  WdLogSingleEntry1(6LL, v151);
  v9 = -1073741801;
LABEL_276:
  auto_rc<DMMVIDPN const>::~auto_rc<DMMVIDPN const>((__int64 *)&v174);
  return v9;
}
