/*
 * XREFs of ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E767C
 * Callers:
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C00DDB84 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E0278 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C00E5A90 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E6FD8 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176804 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02DECF4 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0001B7C (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0002138 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00023AC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C0002468 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00024E8 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C0002580 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C00025F4 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C000264C (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00026B4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0002728 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C0002760 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C0005194 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000951C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000BAD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000C520 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C000E13C (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001AE90 (-SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x1C001AEEC (-SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C00287FC (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsRequestFromModeChange@@YA_NW4_DMM_CLIENT_TYPE@@@Z @ 0x1C0028840 (-IsRequestFromModeChange@@YA_NW4_DMM_CLIENT_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C0037CFC (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C003AFE8 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ??1?$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ @ 0x1C0049A10 (--1-$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ.c)
 *     McTemplateK0pqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x1C005CE44 (McTemplateK0pqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00E1FF0 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00E2ABC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00E3390 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00E4A50 (DxgkStatusChangeNotify.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E5C14 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C00E5C34 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00E5CCC (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E5FF8 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00E60A8 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E6D88 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00E90D0 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00EA8F4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00EAD78 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00EBAA8 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0101520 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011CDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011CEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C012FA3C (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0137DA0 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C013E2E0 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0143EE0 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C015095C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0151364 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0151C7C (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C015D0D4 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C015DD0C (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     LogMonitorHandleOnOffState @ 0x1C016B654 (LogMonitorHandleOnOffState.c)
 *     MonitorSendAdjustedColorimetryToDriver @ 0x1C016C1BC (MonitorSendAdjustedColorimetryToDriver.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C016D47C (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C016D554 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C016D5E8 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C02120F0 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0212318 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0216AD8 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C021F630 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02E6E3C (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::SetTimingsFromVidPn(
        VIDPN_MGR *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a5,
        _BYTE *a6,
        unsigned __int8 a7,
        struct DXGDEVICE *a8,
        __int64 a9)
{
  unsigned int v9; // esi
  __int64 v10; // r13
  __int64 v11; // r12
  unsigned int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  SIZE_T v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  ADAPTER_RENDER *v34; // r8
  ADAPTER_RENDER *v35; // rax
  __int64 v36; // rbx
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // edi
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // r11d
  unsigned int v44; // r10d
  unsigned int v45; // edi
  unsigned int v46; // r15d
  unsigned int v47; // ecx
  unsigned int v48; // r9d
  unsigned int v49; // r8d
  int v50; // eax
  ADAPTER_DISPLAY *v51; // r10
  unsigned int v52; // edi
  int v53; // ebx
  int v54; // r12d
  int v55; // r15d
  ADAPTER_DISPLAY *v56; // r9
  __int64 v57; // rcx
  struct DXGDEVICE *v58; // rdx
  unsigned __int8 v59; // r9
  VIDPN_MGR *v60; // rdi
  char v61; // al
  int v62; // eax
  __int64 v63; // rdx
  _DWORD *v64; // rcx
  __int64 v65; // rdi
  _QWORD *v66; // rax
  int v67; // r15d
  __int64 v68; // r12
  ADAPTER_DISPLAY *v69; // rcx
  unsigned int v70; // eax
  _QWORD *v71; // rax
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  _OWORD *v73; // r8
  int v74; // edx
  char v75; // r15
  _OWORD *v76; // rax
  ADAPTER_DISPLAY *v77; // rcx
  unsigned int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  _QWORD *v81; // rax
  unsigned int v82; // r12d
  _BYTE *v83; // rbx
  VIDPN_MGR *v84; // r13
  _BYTE *v85; // r15
  __int64 v86; // rdi
  DXGADAPTER *ContainingAdapter; // rax
  unsigned __int8 v88; // al
  __int64 v89; // rcx
  char v90; // al
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rcx
  bool v95; // zf
  char *v96; // rax
  bool v97; // al
  unsigned int v98; // r10d
  char *v99; // r13
  __int64 v100; // rax
  char *v101; // rax
  __int64 v102; // rax
  unsigned int v103; // eax
  __int64 v104; // rdi
  int v105; // r12d
  struct DMMVIDEOPRESENTTARGET *v106; // rax
  struct DMMVIDEOPRESENTTARGET *v107; // r15
  int TargetLinkTrainingStatus; // eax
  __int64 v109; // rdx
  unsigned int v110; // r9d
  __int64 v111; // r10
  __int64 v112; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v114; // rdx
  int v115; // eax
  int v116; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v118; // rdx
  __int64 v119; // r8
  ADAPTER_DISPLAY *v120; // r9
  unsigned int v121; // r15d
  VIDPN_MGR *v122; // rbx
  int v123; // r12d
  unsigned int v124; // ecx
  __int64 v125; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *v126; // rax
  DMMVIDPNTOPOLOGY *v127; // rdi
  __int128 v128; // xmm1
  __int128 v129; // xmm0
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rdx
  int MostImportantVidPnPathTargetsFromSource; // edi
  __int64 v136; // rcx
  __int64 v137; // rax
  unsigned int v138; // r9d
  unsigned int v139; // edx
  __int64 v140; // rcx
  int v141; // edi
  __int64 v142; // rdx
  __int64 v143; // rcx
  _QWORD *v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rax
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  struct DXGADAPTERALLOCATION *v150; // rdi
  void *v151; // rax
  ADAPTER_RENDER *v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  int v156; // eax
  __int64 v157; // rax
  _QWORD *v158; // rax
  __int64 v159; // rdi
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rax
  __int64 v163; // rax
  int v164; // r12d
  int v165; // edi
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  unsigned int v168; // eax
  __int64 v169; // r15
  __int64 v170; // rdi
  DMMVIDEOPRESENTTARGET *v171; // rax
  __int64 v172; // rdx
  DMMVIDEOPRESENTTARGET *v173; // r12
  _BYTE *v174; // rdx
  unsigned int *v175; // r10
  int v176; // r8d
  __int64 v177; // rdx
  __int64 v178; // rcx
  _QWORD *v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // rcx
  __int64 v184; // rax
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r10
  unsigned int v188; // r15d
  struct DXGDEVICE *v189; // rdi
  int v190; // r12d
  PERESOURCE **v191; // rcx
  ADAPTER_DISPLAY *v192; // rdi
  const struct _D3DKMT_DISPLAYMODE *DisplayModeInfo; // rax
  int v194; // eax
  int v195; // eax
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // r12
  _QWORD *v199; // rax
  DMMVIDPNTOPOLOGY *v200; // rdi
  __int64 v201; // r8
  int v202; // eax
  __int64 v203; // rcx
  __int64 v204; // rax
  __int64 v205; // r10
  unsigned int k; // r9d
  __int64 v207; // r8
  unsigned int v208; // ecx
  struct DXGGLOBAL *v209; // rax
  __int64 v210; // rdx
  unsigned int *v211; // [rsp+20h] [rbp-100h]
  struct _DXGK_SET_TIMING_PATH_INFO **v212; // [rsp+28h] [rbp-F8h]
  unsigned int **v213; // [rsp+30h] [rbp-F0h]
  struct D3DKMT_VIDPN_SOURCE_MASKS *v214; // [rsp+38h] [rbp-E8h]
  unsigned int **v215; // [rsp+40h] [rbp-E0h]
  int v216; // [rsp+68h] [rbp-B8h]
  unsigned __int8 v217; // [rsp+A0h] [rbp-80h]
  char v218; // [rsp+A0h] [rbp-80h]
  unsigned __int8 v219; // [rsp+A1h] [rbp-7Fh]
  char v220; // [rsp+A1h] [rbp-7Fh]
  unsigned int v221; // [rsp+A4h] [rbp-7Ch] BYREF
  void *Src; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v223; // [rsp+B0h] [rbp-70h] BYREF
  int i; // [rsp+B4h] [rbp-6Ch]
  signed int j; // [rsp+B8h] [rbp-68h]
  unsigned int v226; // [rsp+BCh] [rbp-64h]
  unsigned int *v227; // [rsp+C0h] [rbp-60h] BYREF
  void *v228; // [rsp+C8h] [rbp-58h]
  int v229; // [rsp+D0h] [rbp-50h] BYREF
  struct DXGDEVICE *v230; // [rsp+D8h] [rbp-48h]
  unsigned int v231; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v232; // [rsp+E8h] [rbp-38h]
  VIDPN_MGR *v233; // [rsp+F0h] [rbp-30h]
  DMMVIDPNTOPOLOGY *v234; // [rsp+F8h] [rbp-28h]
  unsigned int v235; // [rsp+100h] [rbp-20h] BYREF
  __int64 v236; // [rsp+108h] [rbp-18h]
  __int64 v237; // [rsp+110h] [rbp-10h]
  unsigned int *v238; // [rsp+118h] [rbp-8h] BYREF
  ADAPTER_RENDER *v239[2]; // [rsp+120h] [rbp+0h] BYREF
  __int128 v240; // [rsp+130h] [rbp+10h] BYREF
  __int128 v241; // [rsp+140h] [rbp+20h]
  _BYTE v242[24]; // [rsp+150h] [rbp+30h] BYREF
  _DXGKARG_SETTIMINGSFROMVIDPN v243; // [rsp+168h] [rbp+48h] BYREF
  __int64 v244; // [rsp+190h] [rbp+70h]
  __int64 v245; // [rsp+198h] [rbp+78h]
  _BYTE *v246; // [rsp+1A0h] [rbp+80h]
  unsigned __int64 v247; // [rsp+1A8h] [rbp+88h] BYREF
  __int64 v248; // [rsp+1B0h] [rbp+90h] BYREF
  _QWORD v249[2]; // [rsp+1B8h] [rbp+98h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v250; // [rsp+1C8h] [rbp+A8h] BYREF
  _BYTE v251[24]; // [rsp+1F8h] [rbp+D8h] BYREF
  __int128 v252; // [rsp+210h] [rbp+F0h] BYREF
  GUID ActivityId; // [rsp+220h] [rbp+100h] BYREF

  v9 = 0;
  v10 = *((_QWORD *)a1 + 1);
  v11 = a4;
  v12 = a2;
  v230 = a8;
  v236 = a9;
  v237 = a4;
  v226 = a3;
  i = a2;
  v233 = a1;
  v246 = a6;
  v223 = 0;
  if ( !v10 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v14);
    v10 = *((_QWORD *)a1 + 1);
  }
  v15 = *(_QWORD *)(v10 + 16);
  v245 = v15;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v15) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v18);
  }
  v235 = 0;
  *a6 = 0;
  v221 = 0;
  Src = 0LL;
  v227 = 0LL;
  v238 = 0LL;
  v19 = VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
          a1,
          v12,
          (struct DMMVIDPN *const)v11,
          &v235,
          &v221,
          (struct _DXGK_SET_TIMING_PATH_INFO **)&Src,
          &v227,
          a5,
          &v238);
  v23 = v19;
  if ( v19 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v24 + 24) = v11;
    *(_QWORD *)(v24 + 32) = v23;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v23;
  }
  if ( !v221 )
  {
    v26 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v26 + 24) = *(int *)(v15 + 320);
    *(_QWORD *)(v26 + 32) = *(unsigned int *)(v15 + 316);
    WdLogEvent5_WdWarning(v26);
    return (unsigned int)v23;
  }
  if ( *((_QWORD *)a5 + 1) || *((_DWORD *)a5 + 6) )
  {
    v217 = 1;
  }
  else
  {
    v217 = 0;
    if ( !*((_DWORD *)a5 + 10) && !*((_DWORD *)a5 + 8) )
      return 0LL;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v215) = *((_DWORD *)a5 + 5);
    LODWORD(v214) = *((_DWORD *)a5 + 3);
    LODWORD(v213) = *((_DWORD *)a5 + 2);
    LODWORD(v212) = *((_DWORD *)a5 + 1);
    LODWORD(v211) = *(_DWORD *)a5;
    McTemplateK0pqqqqqqqqqqqqqqqq_EtwWriteTransfer(
      (unsigned int)v213,
      v20,
      v22,
      v15,
      v211,
      v212,
      v213,
      v214,
      v215,
      *((_DWORD *)a5 + 6),
      *((_DWORD *)a5 + 7),
      *((_DWORD *)a5 + 8),
      *((_DWORD *)a5 + 10),
      *((_DWORD *)a5 + 12),
      *((_DWORD *)a5 + 13),
      *((_DWORD *)a5 + 14),
      *((_DWORD *)a5 + 16),
      *((_DWORD *)a5 + 17),
      *((_DWORD *)a5 + 37),
      *((_DWORD *)a5 + 38));
  }
  v27 = *((_QWORD *)a1 + 11);
  v229 = 0;
  if ( v27 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v27 + 32));
    v28 = *((_QWORD *)a1 + 11);
  }
  else
  {
    v28 = 0LL;
  }
  v248 = v28;
  if ( !v11 )
    v11 = v28;
  v244 = v11;
  v234 = (DMMVIDPNTOPOLOGY *)(v11 + 96);
  v29 = 56LL * v221;
  if ( !is_mul_ok(v221, 0x38uLL) )
    v29 = -1LL;
  v228 = operator new[](v29, 0x4E506456u, PagedPool);
  if ( v228 )
  {
    memmove(v228, Src, 56LL * v221);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 10) + 72LL));
    v34 = *(ADAPTER_RENDER **)(v15 + 2704);
    v35 = 0LL;
    v36 = *((_QWORD *)a1 + 10);
    v232 = v36;
    if ( v34 )
      v35 = v34;
    LODWORD(v239[0]) = 0;
    v239[1] = v35;
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v15);
    v40 = *(_DWORD *)(v15 + 2596);
    v219 = IsLegacyDisplayStateSynchronization;
    j = v40;
    if ( !v39 )
    {
LABEL_49:
      v51 = *(ADAPTER_DISPLAY **)(v15 + 2696);
      v52 = 0;
      if ( *((_DWORD *)v51 + 20) )
      {
        v53 = (int)v239[0];
        v54 = j;
        do
        {
          v55 = 1 << v52;
          v56 = v51;
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3)) & (1 << v52)) != 0 )
          {
            v57 = *(_QWORD *)(v15 + 2704);
            if ( v57 && v54 < 2200 )
            {
              ADAPTER_RENDER::FlushScheduler(v57, 8LL, v52, 0LL);
              v51 = *(ADAPTER_DISPLAY **)(v15 + 2696);
            }
            v56 = v51;
            if ( v230 )
            {
              if ( v236 )
              {
                v58 = *(struct DXGDEVICE **)(3968LL * v52 + *((_QWORD *)v51 + 14) + 688);
                if ( v58 )
                {
                  if ( *((_QWORD *)v58 + 231) == *(_QWORD *)(*((_QWORD *)v58 + 2) + 16LL) )
                  {
                    if ( v53 || (v59 = 0, a7) )
                      v59 = 1;
                    ADAPTER_DISPLAY::DisablePrimaryOnDevice(v51, v58, v52, v59);
                    v56 = *(ADAPTER_DISPLAY **)(v15 + 2696);
                  }
                }
              }
            }
          }
          v51 = v56;
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & v55) != 0
            && *(_QWORD *)(v15 + 2704)
            && *(_BYTE *)(v15 + 2642)
            && v219 )
          {
            ADAPTER_DISPLAY::DisableMPOPlanes(v56, v52, 0);
            *((_DWORD *)a5 + 15) |= v55;
            v51 = *(ADAPTER_DISPLAY **)(v15 + 2696);
          }
          ++v52;
        }
        while ( v52 < *((_DWORD *)v51 + 20) );
        v36 = v232;
        v11 = v244;
      }
      v60 = v233;
      if ( *((_DWORD *)a5 + 5) )
        VIDPN_MGR::RequestPowerStateForTargets(v233, (const struct DMMVIDPN *)v11);
      if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v15) )
      {
        v220 = 0;
        if ( !v217 )
          goto LABEL_146;
        v67 = v226;
        *(_QWORD *)&v243.SetFlags.Reserved = 0LL;
        *(&v243.PathCount + 1) = 0;
        v252 = 0LL;
        if ( v226 == 4 )
          DisplayLogSetMonitorPowerStage(0LL, 16LL, 0LL, &v252);
        v68 = v11 + 88;
        if ( v68 )
          v243.hFunctionalVidPn = (D3DKMDT_HVIDPN)(v68 - 88);
        else
          v243.hFunctionalVidPn = 0LL;
        v69 = *(ADAPTER_DISPLAY **)(v15 + 2696);
        v243.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v223;
        v243.PathCount = v221;
        v243.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
        v70 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v69, &v243);
        v65 = (int)v70;
        DisplayScenarioJournalSetSetTimingPathInfo(v70, 56 * v221, v221, Src);
        if ( (int)v65 < 0 )
        {
          v71 = (_QWORD *)WdLogNewEntry5_WdError(v64, v63);
          v71[3] = *(int *)(v15 + 320);
          v71[4] = *(unsigned int *)(v15 + 316);
          v71[5] = v65;
          WdLogEvent5_WdError(v71);
        }
        if ( v221 == 1 && IsRequestFromModeChange(v67) )
        {
          if ( (int)v65 < 0 || (v64 = (_DWORD *)(*((_DWORD *)Src + 8) & 0xF000000), (_DWORD)v64 == 218103808) )
          {
            v64 = (_DWORD *)*((unsigned int *)Src + 3);
            if ( ((unsigned __int8)v64 & 4) != 0 )
            {
              if ( (v223 & 1) != 0 || (v64 = *(_DWORD **)(*(_QWORD *)(v15 + 216) + 64LL), (v64[879] & 3) != 0) )
              {
                TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                               (DMMVIDEOPRESENTTARGETSET *)v36,
                               *(unsigned int *)Src);
                if ( !DMMVIDEOPRESENTTARGET::IsTargetForceable(TargetById) )
                {
                  v73 = v228;
                  *((_DWORD *)v228 + 3) = *((_DWORD *)v228 + 3) & 0xFFFFFFF0 | 9;
                  v74 = *((_DWORD *)a5 + 1);
                  *((_DWORD *)a5 + 6) = v74 & (*((_DWORD *)a5 + 5) ^ *((_DWORD *)a5 + 6));
                  *((_DWORD *)a5 + 5) = 0;
                  *((_DWORD *)a5 + 19) = v74;
                  if ( (int)v65 < 0 )
                    v75 = 0;
                  else
                    v75 = v223 & 1;
                  v76 = Src;
                  v223 = 0;
                  *(_OWORD *)Src = *v73;
                  v76[1] = v73[1];
                  v76[2] = v73[2];
                  *((_QWORD *)v76 + 6) = *((_QWORD *)v73 + 6);
                  *(_QWORD *)&v243.SetFlags.Reserved = 0LL;
                  *(&v243.PathCount + 1) = 0;
                  if ( v68 )
                    v243.hFunctionalVidPn = (D3DKMDT_HVIDPN)(v68 - 88);
                  else
                    v243.hFunctionalVidPn = 0LL;
                  v77 = *(ADAPTER_DISPLAY **)(v15 + 2696);
                  v243.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v223;
                  v243.PathCount = v221;
                  v243.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
                  v78 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v77, &v243);
                  v65 = (int)v78;
                  DisplayScenarioJournalSetSetTimingPathInfo(v78, 56 * v221, v221, Src);
                  if ( (int)v65 < 0 )
                  {
                    v81 = (_QWORD *)WdLogNewEntry5_WdError(v80, v79);
                    v81[3] = *(unsigned int *)Src;
                    v81[4] = *(int *)(v15 + 320);
                    v81[5] = *(unsigned int *)(v15 + 316);
                    v81[6] = v65;
                    WdLogEvent5_WdError(v81);
                  }
                  DxgkLogCodePointPacket(0x68u, *(_DWORD *)Src, v65, *((_BYTE *)Src + 35) & 0xF, *(_QWORD *)(v15 + 316));
                  v223 ^= ((unsigned __int8)v223 ^ (unsigned __int8)(v223 | v75)) & 1;
                  v67 = v226;
                }
              }
            }
          }
        }
        if ( v67 == 4 )
          DisplayLogSetMonitorPowerStage(0LL, 2147483664LL, (unsigned int)v65, &v252);
      }
      else
      {
        v220 = 1;
        if ( !v217 && !*((_DWORD *)a5 + 10) )
        {
          v217 = 0;
LABEL_146:
          ActivityId = 0LL;
          EtwActivityIdControl(3u, &ActivityId);
          v103 = 0;
          for ( i = 0; v103 < v221; i = v103 )
          {
            v104 = 56LL * v103;
            j = v227[v103];
            v105 = 1 << j;
            v106 = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                     (DMMVIDEOPRESENTTARGETSET *)v36,
                     *(unsigned int *)((char *)Src + v104));
            v107 = v106;
            if ( v106 )
            {
              if ( v217 )
              {
                LogMonitorHandleOnOffState(
                  *((_QWORD *)v106 + 14),
                  &ActivityId,
                  (*(_DWORD *)((char *)Src + v104 + 12) >> 2) & 1);
                if ( !v220 )
                {
                  DxgkLogCodePointPacket(
                    0x58u,
                    *(_DWORD *)((char *)Src + v104),
                    *((_BYTE *)Src + v104 + 35) & 0xF | 0x80000000,
                    *(_DWORD *)((char *)Src + v104 + 24),
                    *(_QWORD *)(v15 + 316));
                  DxgkLogCodePointPacket(
                    0x59u,
                    *(_DWORD *)((char *)Src + v104),
                    *(_DWORD *)((char *)Src + v104 + 48),
                    0,
                    *(_QWORD *)(v15 + 316));
                }
                TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v107, 0LL);
                if ( TargetLinkTrainingStatus != (HIBYTE(v110) & 0xF) )
                {
                  *((_DWORD *)a5 + 9) |= v105;
                  v110 = *(_DWORD *)(v104 + v111 + 32);
                }
                v112 = *(_QWORD *)(v104 + v111 + 24);
                *(_BYTE *)(*((_QWORD *)v107 + 67) + 168LL) = HIBYTE(v110) & 0xF;
                *(_QWORD *)(*((_QWORD *)v107 + 67) + 160LL) = v112;
                Global = DXGGLOBAL::GetGlobal(v112, v109);
                QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), 0LL);
                if ( (*(_DWORD *)((_BYTE *)Src + v104 + 32) & 0xF000000) == 0xC000000 )
                  DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v107, 1u);
                else
                  DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v107);
                *((_BYTE *)v107 + 414) = 0;
              }
              else
              {
                v115 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v106, 0LL);
                *(_DWORD *)((char *)Src + v104 + 32) ^= (*(_DWORD *)((char *)Src + v104 + 32) ^ (v115 << 24)) & 0xF000000;
              }
              if ( (*(_DWORD *)((_BYTE *)Src + v104 + 12) & 4) != 0 && (v105 & *((_DWORD *)a5 + 17)) == 0 )
              {
                v116 = v229 | *((_DWORD *)a5 + 20);
                if ( !_bittest(&v116, j) )
                {
                  LOBYTE(v114) = 1;
                  DMMVIDEOPRESENTTARGET::SetTargetActivated(v107, v114, 1u);
                  if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v105) != 0
                    && (*(_DWORD *)((_BYTE *)Src + v104 + 32) & 0xF000000) == 0xE000000 )
                  {
                    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v234, *(_DWORD *)((char *)Src + v104));
                    DMMVIDPNPRESENTPATH::SetDriverGammaRamp(PathFromTarget, 0LL);
                  }
                }
              }
              if ( (*(_DWORD *)((_BYTE *)Src + v104 + 32) & 0xF000000) != 0xD000000
                && ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 4)) & v105) != 0 )
              {
                MonitorSendAdjustedColorimetryToDriver(
                  *((_QWORD *)v107 + 14),
                  *(unsigned int *)((char *)Src + v104 + 4));
              }
            }
            v103 = i + 1;
          }
          CVidSchSuspendResume::Resume(v239);
          v120 = *(ADAPTER_DISPLAY **)(v15 + 2696);
          v121 = 0;
          if ( !*((_DWORD *)v120 + 20) )
          {
LABEL_237:
            v168 = 0;
            for ( j = 0; v168 < v221; j = v168 )
            {
              v169 = v168;
              v170 = 56LL * v168;
              v171 = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                       (DMMVIDEOPRESENTTARGETSET *)v36,
                       *(unsigned int *)((char *)Src + v170));
              v173 = v171;
              if ( v171 )
              {
                v174 = Src;
                if ( (*(_DWORD *)((_BYTE *)Src + v170 + 12) & 4) == 0
                  || (v175 = v227, v176 = 1 << v227[v169], (v176 & *((_DWORD *)a5 + 17)) != 0)
                  || (v176 & *((_DWORD *)a5 + 20)) != 0 )
                {
                  DMMVIDEOPRESENTTARGET::SetTargetActivated(
                    v171,
                    0LL,
                    (*(_DWORD *)((_BYTE *)Src + v170 + 32) & 0xF000000) == 201326592);
                  v174 = Src;
                  v175 = v227;
                }
                if ( !v220
                  && *((_BYTE *)v173 + 416)
                  && ((*(_DWORD *)&v174[v170 + 32] & 0xF000000) != 0xE000000 || v174[v170 + 48] != 0xFF) )
                {
                  i = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                        *(ADAPTER_DISPLAY **)(v15 + 2696),
                        v175[v169],
                        0,
                        0x800u,
                        a7);
                  if ( i < 0 )
                  {
                    v179 = (_QWORD *)WdLogNewEntry5_WdError(v178, v177);
                    v179[3] = v15;
                    v180 = v227[v169];
                    v179[5] = i;
                    v179[4] = v180;
                    WdLogEvent5_WdError(v179);
                  }
                  if ( (*(_DWORD *)((_BYTE *)Src + v170 + 32) & 0xF000000) == 0xE000000 )
                  {
                    v181 = *(_QWORD *)(v15 + 2704);
                    if ( v181 )
                    {
                      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v181 + 616) + 8LL) + 888LL))(
                        *(_QWORD *)(v181 + 624),
                        v227[v169]);
                    }
                    else
                    {
                      v182 = *(_QWORD *)(*(_QWORD *)(v15 + 2696) + 384LL);
                      if ( v182 )
                        _InterlockedExchange((volatile __int32 *)(2904LL * v227[v169] + *(_QWORD *)(v182 + 8) + 944), 1);
                    }
                  }
                }
                *((_BYTE *)v173 + 416) = 0;
              }
              else
              {
                v183 = *(unsigned int *)((char *)Src + v170 + 12);
                if ( (v183 & 4) != 0 )
                {
                  v184 = WdLogNewEntry5_WdAssertion(v183, v172);
                  WdLogEvent5_WdAssertion(v184);
                }
              }
              if ( (*(_DWORD *)((_BYTE *)Src + v170 + 16) & 1) != 0 )
                *((_DWORD *)a5 + 15) |= 1 << v227[v169];
              v168 = j + 1;
            }
            auto_rc<DMMVIDPN>::reset((__int64 *)v233 + 35, 0LL);
            CVidSchSuspendResume::Resume(v239);
            v187 = *(_QWORD *)(v15 + 2696);
            v188 = 0;
            if ( *(_DWORD *)(v187 + 80) )
            {
              v189 = v230;
              do
              {
                v186 = v188;
                v190 = 1 << v188;
                if ( ((1 << v188) & *((_DWORD *)a5 + 14)) != 0 )
                  ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource((PERESOURCE **)v187, v188);
                if ( (v190 & *((_DWORD *)a5 + 15)) != 0 )
                  DXGADAPTER::NotifyMultiPlaneOverlayDisable((DXGADAPTER *)v15, v188);
                if ( v189 && !v220 )
                {
                  if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v15 + 2696), v188, 0)
                    && ADAPTER_DISPLAY::IsCddPrimaryStale(*(ADAPTER_DISPLAY **)(v15 + 2696), v188) )
                  {
                    ADAPTER_DISPLAY::DestroyCddAllocations(v191, v189, v188);
                  }
                  v192 = *(ADAPTER_DISPLAY **)(v15 + 2696);
                  DisplayModeInfo = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v192, v188);
                  ADAPTER_DISPLAY::SetCddDisplayMode((PERESOURCE **)v192, v188, DisplayModeInfo);
                  v189 = v230;
                }
                if ( (v190 & *((_DWORD *)a5 + 20)) != 0 )
                {
                  v194 = *((_DWORD *)a5 + v188 + 39);
                  if ( (v194 & 7) != 0 )
                  {
                    *((_DWORD *)a5 + 4 * (v194 & 7) + 55) = 0;
                    DxgkLogCodePointPacket(0x65u, v188, *((_DWORD *)a5 + v188 + 39) & 7, 2u, *(_QWORD *)(v15 + 316));
                  }
                  v195 = ADAPTER_DISPLAY::SetVidPnSourceActive(*(PERESOURCE ***)(v15 + 2696), v188, 0, v226 == 4, a7);
                  v198 = v195;
                  if ( v195 < 0 )
                  {
                    v199 = (_QWORD *)WdLogNewEntry5_WdError(v197, v196);
                    v199[3] = v15;
                    v199[4] = v188;
                    v199[5] = v198;
                    WdLogEvent5_WdError(v199);
                  }
                  if ( v237 )
                  {
                    v200 = (DMMVIDPNTOPOLOGY *)(v237 + 96);
                    v201 = v237 + 152;
                    LOBYTE(v201) = 2;
                    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                      v251,
                      (v237 + 152) & -(__int64)(v237 != -96),
                      v201);
                    v202 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v200, v188);
                    v203 = v202 + 0x80000000;
                    if ( (int)v203 >= 0 && v202 != -1071774919 )
                    {
                      v204 = WdLogNewEntry5_WdAssertion(v203, 0x80000000LL);
                      WdLogEvent5_WdAssertion(v204);
                    }
                    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v251);
                  }
                  v189 = v230;
                  if ( v230 )
                    ADAPTER_DISPLAY::DestroyCddAllocations(*(PERESOURCE ***)(v15 + 2696), v230, v188);
                  if ( IsRequestFromModeChange(v226) )
                  {
                    ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v15 + 2696), v188, 0);
                    ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v15 + 2696), v188, &stru_1C00B3528);
                    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v15 + 2696), v188, 0LL);
                  }
                  ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v15 + 2696), v188, -1);
                  ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v15 + 2696), v188, 1);
                  ADAPTER_DISPLAY::SetHdrEnabled(*(PERESOURCE ***)(v15 + 2696), v188, 0);
                }
                v187 = *(_QWORD *)(v15 + 2696);
                ++v188;
              }
              while ( v188 < *(_DWORD *)(v187 + 80) );
              v36 = v232;
            }
            if ( v237 )
            {
              ADAPTER_DISPLAY::SetSyncLockGroup(
                v187,
                1u,
                *((_DWORD *)a5 + 59),
                *((_DWORD *)a5 + 60),
                *((_DWORD *)a5 + 61),
                *((_DWORD *)a5 + 62));
              v205 = *(_QWORD *)(v15 + 2696);
              for ( k = 0; k < *(_DWORD *)(v205 + 80); v205 = *(_QWORD *)(v15 + 2696) )
              {
                v207 = k;
                v208 = *((_DWORD *)a5 + k++ + 39) & 7;
                v185 = *((_DWORD *)a5 + 4 * v208 + 55) != 0 ? v208 : 0;
                v186 = 3968 * v207;
                *(_DWORD *)(3968 * v207 + *(_QWORD *)(v205 + 112) + 3756) = v185;
              }
            }
            v209 = DXGGLOBAL::GetGlobal(v186, v185);
            QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)v209 + 172), 0LL);
            if ( Src )
              operator delete[](Src);
            operator delete[](v228);
            if ( v227 )
              operator delete[](v227);
            if ( v238 )
              operator delete[](v238);
            CVidSchSuspendResume::Resume(v239);
            if ( v36 )
              ReferenceCounted::Release((ReferenceCounted *)(v36 + 64), v210);
            goto LABEL_300;
          }
          v122 = v233;
          while ( 1 )
          {
            i = 0;
            v240 = 0LL;
            v123 = 1 << v121;
            v124 = *((_DWORD *)a5 + 10);
            v241 = 0LL;
            memset(v242, 0, sizeof(v242));
            if ( ((1 << v121) & *((_DWORD *)a5 + 3)) != 0 )
            {
              i = 2;
            }
            else if ( (v124 & v123) != 0 )
            {
              i = 4;
            }
            else if ( (*((_DWORD *)a5 + 2) & ~*((_DWORD *)a5 + 8) & v123) != 0 )
            {
              v118 = (*(_DWORD *)a5 & v123) != 0 ? 3 : 1;
              i = (*(_DWORD *)a5 & v123) != 0 ? 3 : 1;
            }
            v125 = *((_DWORD *)a5 + 2) | v124;
            if ( ((unsigned int)v125 & v123) != 0 )
            {
              v126 = ADAPTER_DISPLAY::GetDisplayModeInfo(v120, v121);
              v127 = v234;
              v128 = *((_OWORD *)v126 + 1);
              v240 = *(_OWORD *)v126;
              v129 = *((_OWORD *)v126 + 2);
              v241 = v128;
              *(_QWORD *)&v128 = *((_QWORD *)v126 + 6);
              *(_OWORD *)v242 = v129;
              *(_QWORD *)&v242[16] = v128;
              DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(v234, v121, (struct _D3DKMT_DISPLAYMODE *)&v240);
              v120 = *(ADAPTER_DISPLAY **)(v15 + 2696);
            }
            else
            {
              v127 = v234;
            }
            if ( (v123 & *((_DWORD *)a5 + 20)) != 0 )
              goto LABEL_233;
            if ( (v123 & v229) == 0 )
              break;
LABEL_235:
            v120 = *(ADAPTER_DISPLAY **)(v15 + 2696);
            if ( ++v121 >= *((_DWORD *)v120 + 20) )
            {
              v36 = v232;
              goto LABEL_237;
            }
          }
          if ( (v123 & *((_DWORD *)a5 + 10)) != 0 )
          {
            ADAPTER_DISPLAY::SetDisplayModeInfo(
              (DXGADAPTER **)v120,
              v121,
              (const struct _DXGK_DISPLAYMODE_INFO *const)&v240);
            OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
              *(_QWORD *)(*(_QWORD *)(v15 + 2696) + 104LL),
              v121,
              0LL,
              0LL,
              0,
              1);
            v249[0] = 11LL;
            v249[1] = 0LL;
            if ( (int)DxgkStatusChangeNotify((int *)v249, v130, v131) < 0 )
            {
              v133 = WdLogNewEntry5_WdAssertion(v132, v118);
              *(_QWORD *)(v133 + 24) = 3311LL;
              WdLogEvent5_WdAssertion(v133);
            }
          }
          v125 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6) | (unsigned int)(*((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9));
          if ( ((unsigned int)v125 & v123) != 0 )
          {
            v231 = 0;
            MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v127, v121, &v231);
            v136 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
            if ( (int)v136 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
            {
              v137 = WdLogNewEntry5_WdAssertion(v136, v134);
              WdLogEvent5_WdAssertion(v137);
            }
            v218 = 0;
            if ( MostImportantVidPnPathTargetsFromSource < 0 || (v138 = v231, v231 == -1) || (v139 = 0, !v221) )
            {
LABEL_197:
              v138 = -1;
            }
            else
            {
              while ( 1 )
              {
                if ( v121 == v227[v139] )
                {
                  v140 = 56LL * v139;
                  if ( v231 == *(_DWORD *)((char *)Src + v140)
                    && (*(_DWORD *)((_BYTE *)Src + v140 + 32) & 0xF000000) == 0xE000000
                    && (*(_DWORD *)((_BYTE *)Src + v140 + 12) & 4) != 0
                    && (v123 & *((_DWORD *)a5 + 17)) == 0 )
                  {
                    break;
                  }
                }
                if ( ++v139 >= v221 )
                  goto LABEL_197;
              }
              *((_DWORD *)a5 + 18) |= v123;
              v218 = 1;
            }
            ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v15 + 2696), v121, v138);
            v141 = v226;
            j = ADAPTER_DISPLAY::SetVidPnSourceActive(*(PERESOURCE ***)(v15 + 2696), v121, v218, v226 == 4, a7);
            if ( j >= 0 )
            {
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v15 + 2696), v121, 0);
              if ( (v123 & *((_DWORD *)a5 + 3)) != 0 )
              {
                if ( !IsRequestFromModeChange(v141) )
                {
                  v147 = WdLogNewEntry5_WdAssertion(v146, v145);
                  WdLogEvent5_WdAssertion(v147);
                }
                ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v15 + 2696), v121, 0);
                ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v15 + 2696), v121, &stru_1C00B3528);
                ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v15 + 2696), v121, 0LL);
                ADAPTER_DISPLAY::SetHdrEnabled(*(PERESOURCE ***)(v15 + 2696), v121, 0);
              }
              else
              {
                v247 = 0LL;
                if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v234, v121, &v247) < 0 || !v247 )
                {
                  v148 = WdLogNewEntry5_WdAssertion(v125, v118);
                  WdLogEvent5_WdAssertion(v148);
                }
                if ( (v123 & *((_DWORD *)a5 + 2)) != 0 )
                {
                  *(_DWORD *)&v242[12] = 1;
                  *(_QWORD *)&v242[16] = 1LL;
                  if ( *(_QWORD *)(v15 + 2704) )
                  {
                    DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                                   *(DXGADAPTER ***)(v15 + 2696),
                                                   v121);
                    v150 = DisplayedPrimaryAllocation;
                    if ( DisplayedPrimaryAllocation )
                    {
                      if ( (*((_BYTE *)DisplayedPrimaryAllocation + 4) & 0x10) != 0 )
                        v150 = 0LL;
                      if ( v150 )
                      {
                        v151 = (void *)*((_QWORD *)v150 + 2);
                        v152 = *(ADAPTER_RENDER **)(v15 + 2704);
                        memset(&v250.Width, 0, 40);
                        v250.hAllocation = v151;
                        j = ADAPTER_RENDER::DdiDescribeAllocation(v152, &v250);
                        if ( j < 0 )
                        {
                          v158 = (_QWORD *)WdLogNewEntry5_WdWarning(v154, v153, v155);
                          v158[4] = v121;
                          v158[5] = j;
                          v158[3] = v150;
                          WdLogEvent5_WdWarning(v158);
                        }
                        else if ( v250.Width == (_DWORD)v240
                               && *(_QWORD *)&v250.Height == *(_QWORD *)((char *)&v240 + 4)
                               && *(_QWORD *)&v250.RefreshRate == (_QWORD)v241
                               && (v156 = ~(*(_DWORD *)&v242[8] >> 4),
                                   v154 = v156 ^ (unsigned int)~(*((_DWORD *)v150 + 1) >> 12),
                                   (((unsigned __int8)v156 ^ (unsigned __int8)~(*((_DWORD *)v150 + 1) >> 12)) & 1) == 0) )
                        {
                          *(D3DDDI_MULTISAMPLINGMETHOD *)&v242[12] = v250.MultisampleMethod;
                          *(_DWORD *)&v242[20] = v250.PrivateDriverFormatAttribute;
                        }
                        else if ( v220 || (*((_DWORD *)v150 + 1) & 2) == 0 )
                        {
                          v157 = WdLogNewEntry5_WdAssertion(v154, v153);
                          WdLogEvent5_WdAssertion(v157);
                        }
                      }
                    }
                  }
                  if ( IsRequestFromModeChange(v226) )
                    ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v15 + 2696), v121, 1);
                  ADAPTER_DISPLAY::SetDisplayModeInfo(
                    *(DXGADAPTER ***)(v15 + 2696),
                    v121,
                    (const struct _DXGK_DISPLAYMODE_INFO *const)&v240);
                  v159 = *(_QWORD *)(v15 + 2696);
                  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)v159) )
                  {
                    v162 = WdLogNewEntry5_WdAssertion(v161, v160);
                    *(_QWORD *)(v162 + 24) = 6215LL;
                    WdLogEvent5_WdAssertion(v162);
                  }
                  if ( v121 >= *(_DWORD *)(v159 + 80) )
                  {
                    v163 = WdLogNewEntry5_WdAssertion(v161, v160);
                    *(_QWORD *)(v163 + 24) = 6216LL;
                    WdLogEvent5_WdAssertion(v163);
                  }
                  *(_DWORD *)(3968LL * v121 + *(_QWORD *)(v159 + 112) + 1072) = HIDWORD(v240);
                  ADAPTER_DISPLAY::DetermineScalingCapabilities(*(ADAPTER_DISPLAY **)(v15 + 2696), v121);
                  ADAPTER_DISPLAY::SetHdrEnabled(
                    *(PERESOURCE ***)(v15 + 2696),
                    v121,
                    (v123 & *((_DWORD *)a5 + 63)) != 0);
                  if ( v230 && v236 )
                    ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
                      *(ADAPTER_DISPLAY **)(v15 + 2696),
                      v121,
                      *(struct DXGADAPTER **)(*((_QWORD *)v230 + 2) + 16LL));
                }
              }
            }
            else
            {
              v144 = (_QWORD *)WdLogNewEntry5_WdError(v143, v142);
              v144[5] = j;
              v144[3] = v15;
              v144[4] = v121;
              WdLogEvent5_WdError(v144);
              *((_DWORD *)a5 + v121 + 21) = j;
              *((_DWORD *)a5 + 20) |= v123;
            }
          }
LABEL_233:
          v164 = i;
          if ( i )
          {
            v165 = *(_DWORD *)(*(_QWORD *)(v15 + 2696) + 360LL);
            CurrentProcess = PsGetCurrentProcess(v125, v118, v119, v120);
            ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
            VIDPN_MGR::CacheDisplayModeChangeRequest(
              (__int64)v122,
              v121,
              (__int64)&v240,
              1u,
              *((_DWORD *)a5 + v121 + 21),
              v164,
              v165,
              ProcessImageFileName);
          }
          goto LABEL_235;
        }
        v217 = 1;
        if ( a7 || (v61 = 0, LODWORD(v239[0])) )
          v61 = 1;
        LOBYTE(v216) = v61;
        v62 = VIDPN_MGR::CommitVidPnOnAdapter(
                v60,
                (unsigned int)i,
                v226,
                v11,
                v221,
                Src,
                v227,
                a5,
                &v229,
                v238,
                &v223,
                v230,
                v236,
                v216);
        v65 = v62;
        if ( v62 >= 0 )
          goto LABEL_109;
        v66 = (_QWORD *)WdLogNewEntry5_WdError(v64, v63);
        v66[3] = *(int *)(v15 + 320);
        v66[4] = *(unsigned int *)(v15 + 316);
        v66[5] = v65;
        WdLogEvent5_WdError(v66);
      }
      if ( (int)v65 < 0 )
      {
        *((_DWORD *)a5 + 20) = -1;
        FillFailedStatus(a5, v65);
        v98 = 0;
        if ( v221 )
        {
          v99 = (char *)v228;
          do
          {
            v100 = v98++;
            v63 = 56 * v100;
            v101 = (char *)Src;
            *(_OWORD *)((char *)Src + v63) = *(_OWORD *)&v99[v63];
            *(_OWORD *)&v101[v63 + 16] = *(_OWORD *)&v99[v63 + 16];
            *(_OWORD *)&v101[v63 + 32] = *(_OWORD *)&v99[v63 + 32];
            *(_QWORD *)&v101[v63 + 48] = *(_QWORD *)&v99[v63 + 48];
            v64 = Src;
            *(_DWORD *)((char *)Src + v63 + 32) = *(_DWORD *)((_BYTE *)Src + v63 + 32) & 0xF0FFFFFF | 0xD000000;
            *(_DWORD *)((char *)Src + v63 + 16) |= 1u;
          }
          while ( v98 < v221 );
          v15 = v245;
        }
        v223 = 1;
LABEL_142:
        if ( (v223 & 0xFFFFFFFE) != 0 )
        {
          v102 = WdLogNewEntry5_WdAssertion(v64, v63);
          *(_QWORD *)(v102 + 24) = (unsigned __int64)v223 >> 1;
          WdLogEvent5_WdAssertion(v102);
        }
        if ( (v223 & 1) != 0 )
          *v246 |= 1u;
        goto LABEL_146;
      }
LABEL_109:
      v82 = 0;
      if ( !v221 )
        goto LABEL_142;
      v83 = v246;
      v84 = v233;
      while ( 1 )
      {
        v85 = Src;
        v86 = 56LL * v82;
        ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v84, v63);
        v88 = DXGADAPTER::UsingSetTimingsFromVidPn(ContainingAdapter);
        v63 = (__int64)v228;
        if ( v88 )
        {
          if ( *(_DWORD *)((char *)v228 + v86) != *(_DWORD *)&v85[v86]
            || *(_DWORD *)((char *)v228 + v86 + 4) != *(_DWORD *)&v85[v86 + 4]
            || *(_DWORD *)((char *)v228 + v86 + 8) != *(_DWORD *)&v85[v86 + 8]
            || *(_DWORD *)((char *)v228 + v86 + 12) != *(_DWORD *)&v85[v86 + 12] )
          {
            v92 = WdLogNewEntry5_WdAssertion(v89, v228);
            v93 = *(unsigned int *)((char *)v228 + v86);
LABEL_129:
            *(_QWORD *)(v92 + 24) = v93;
LABEL_130:
            WdLogEvent5_WdAssertion(v92);
            v63 = (__int64)v228;
            v90 = 0;
            goto LABEL_131;
          }
          if ( *(_DWORD *)&v85[v86 + 16] >= 2u || *(_DWORD *)&v85[v86 + 32] >= 0x10000000u || v85[v86 + 51] )
          {
            v91 = WdLogNewEntry5_WdAssertion(v89, v228);
            *(_QWORD *)(v91 + 24) = *(unsigned int *)&v85[v86];
            WdLogEvent5_WdAssertion(v91);
            v63 = (__int64)v228;
          }
          if ( !*(_QWORD *)&v85[v86 + 24] )
          {
            v92 = WdLogNewEntry5_WdAssertion(v89, v63);
            v93 = *(unsigned int *)&v85[v86];
            goto LABEL_129;
          }
          v94 = *(_DWORD *)&v85[v86 + 32] & 0xF000000;
          if ( (((_DWORD)v94 - 201326592) & 0xFCFFFFFF) != 0
            || (_DWORD)v94 == 251658240
            || (*(_BYTE *)(v86 + v63 + 12) & 3) == 3 && (_DWORD)v94 != 234881024 )
          {
            v92 = WdLogNewEntry5_WdAssertion(v94, v63);
            *(_QWORD *)(v92 + 24) = HIBYTE(*(_DWORD *)&v85[v86 + 32]) & 0xF;
            *(_QWORD *)(v92 + 32) = *(unsigned int *)&v85[v86];
            goto LABEL_130;
          }
        }
        v90 = 1;
LABEL_131:
        v95 = v90 == 0;
        v96 = (char *)Src;
        if ( v95 )
        {
          *(_OWORD *)((char *)Src + v86) = *(_OWORD *)(v86 + v63);
          *(_OWORD *)&v96[v86 + 16] = *(_OWORD *)(v86 + v63 + 16);
          *(_OWORD *)&v96[v86 + 32] = *(_OWORD *)(v86 + v63 + 32);
          *(_QWORD *)&v96[v86 + 48] = *(_QWORD *)(v86 + v63 + 48);
          v63 = v82;
          *(_DWORD *)((char *)Src + v86 + 32) = *(_DWORD *)((_BYTE *)Src + v86 + 32) & 0xF0FFFFFF | 0xD000000;
          *((_DWORD *)a5 + v227[v82] + 21) = -1073741437;
          v64 = (_DWORD *)v227[v82];
          *((_DWORD *)a5 + 20) |= 1 << (char)v64;
        }
        else
        {
          v64 = (_DWORD *)(*(_DWORD *)((_BYTE *)Src + v86 + 32) & 0xF000000);
          if ( (_DWORD)v64 == 218103808 )
          {
            *((_DWORD *)a5 + v227[v82] + 21) = -1073741506;
            *((_DWORD *)a5 + 20) |= 1 << v227[v82];
            v97 = IsRequestFromModeChange(v226);
            LOBYTE(v64) = *v83 & 0xFD;
            *v83 = (unsigned __int8)v64 | (2 * !v97);
          }
        }
        if ( ++v82 >= v221 )
        {
          v36 = v232;
          v15 = v245;
          goto LABEL_142;
        }
      }
    }
    v41 = *(unsigned int *)(v39 + 636);
    if ( a7 )
    {
      if ( (_DWORD)v41 )
        goto LABEL_35;
    }
    else if ( !(_DWORD)v41 )
    {
      goto LABEL_35;
    }
    v42 = WdLogNewEntry5_WdAssertion(v41, v38);
    *(_QWORD *)(v42 + 24) = 2652LL;
    WdLogEvent5_WdAssertion(v42);
LABEL_35:
    if ( v40 >= 2200 )
    {
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v48 = *(_DWORD *)(*(_QWORD *)(v15 + 2696) + 80LL);
      if ( v48 )
      {
        do
        {
          v49 = v45;
          v50 = 1 << v47;
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & (1 << v47)) != 0 )
          {
            v43 |= v50;
            v45 |= v50;
            if ( v219 )
              v45 = v49;
          }
          else if ( (v50 & *(_DWORD *)a5) != 0 )
          {
            v44 |= v50;
            if ( !a7 )
              v46 |= v50;
          }
          ++v47;
        }
        while ( v47 < v48 );
        v36 = v232;
        v11 = v244;
      }
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v15 + 2704), v43, v44, v45, v46);
      *((_DWORD *)a5 + 15) |= v45;
      if ( v46 )
        CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v239, v46);
    }
    else
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v15 + 2704), 8LL, 0xFFFFFFFFLL, 0LL);
    }
    goto LABEL_49;
  }
  v33 = WdLogNewEntry5_WdLowResource(0LL, v30, v31, v32);
  *(_QWORD *)(v33 + 24) = v221;
  WdLogEvent5_WdLowResource(v33);
  v9 = -1073741801;
LABEL_300:
  auto_rc<DMMVIDPN const>::~auto_rc<DMMVIDPN const>(&v248);
  return v9;
}
