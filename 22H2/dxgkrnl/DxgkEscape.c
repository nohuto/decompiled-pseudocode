/*
 * XREFs of DxgkEscape @ 0x1C0102F00
 * Callers:
 *     ?VmBusEscapeCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D9180 (-VmBusEscapeCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0241310 (-VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00028F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C00034C8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0005010 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0008E28 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000907C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009D98 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A41C (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000B9F0 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000BAD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025B74 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0025BE4 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00261B0 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     Feature_HoldAdapterLockEscape__private_ReportDeviceUsage @ 0x1C002797C (Feature_HoldAdapterLockEscape__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C00378D0 (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C0037908 (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     DxgkGetAdapterBrightnessInfo @ 0x1C0052774 (DxgkGetAdapterBrightnessInfo.c)
 *     DxgkGetAdapterMiracastInfo @ 0x1C0055434 (DxgkGetAdapterMiracastInfo.c)
 *     ?DxgkpDriverKnownEscapeCblt@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1C00DC2B0 (-DxgkpDriverKnownEscapeCblt@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00EAD78 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0101D60 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C020D3AC (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C020E6EC (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C0211078 (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C0213A5C (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C0214B1C (-ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C021B700 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0221B50 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkWriteUserModeDiagEntry @ 0x1C022770C (DxgkWriteUserModeDiagEntry.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0248A54 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C02555BC (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C025AF08 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025FCF4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C0261DB8 (DxgkpIsDrtEnabled.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C0266068 (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C0267004 (_DxgkEscape_--_2_--ENSURE_DATA_DELETION--_ENSURE_DATA_DELETION.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0267038 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0267158 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C02671D8 (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C0267E58 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAXI@Z @ 0x1C0268028 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAXI@Z.c)
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C0268350 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C02685D8 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C0268728 (-IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C026B544 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C0276D68 (-GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     OutputDuplGetDebugInfo @ 0x1C029E378 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C029E468 (OutputDuplGetDiagnosticBuffer.c)
 *     DxgkHandleMiracastEscape @ 0x1C02CF778 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C02D05E4 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C02D5F90 (DxgkHandleIndirectEscape.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C02DCBB0 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C02F0D38 (DxgkPrepareCcdDatabaseForAccess.c)
 */

__int64 __fastcall DxgkEscape(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_ESCAPE *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v12; // r14
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v14; // r13
  int *v15; // r14
  bool v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  bool v25; // zf
  D3DKMT_ESCAPETYPE Type; // ecx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // rcx
  UINT PrivateDriverDataSize; // eax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  void *pPrivateDriverData; // rdx
  char *v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 hAdapter; // r8
  __int64 v45; // rax
  int v46; // eax
  size_t v47; // r8
  void *v48; // rcx
  char *v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r8
  char *v54; // r9
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  struct DXGPROCESS *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  DXGADAPTER *v66; // r13
  __int64 v67; // rdx
  __int64 v68; // rcx
  DXGGLOBAL *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  struct DXGPROCESS *v73; // r12
  struct DXGPROCESS *v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rdx
  D3DKMT_HANDLE v77; // r12d
  __int64 v78; // r13
  __int64 v79; // r8
  unsigned int v80; // ecx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // r9
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // r9
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rax
  __int64 v98; // rax
  DXGADAPTER *v99; // r12
  __int64 v100; // rdx
  __int64 v101; // r8
  unsigned __int64 v102; // rcx
  __int64 v103; // rdx
  size_t v104; // r8
  void *v105; // rcx
  char *v106; // r9
  struct DXGADAPTER *v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // r8
  void *v114; // r9
  void *v115; // r9
  __int64 v116; // rdx
  __int64 v117; // rcx
  int v118; // eax
  __int64 v119; // rcx
  struct DXGADAPTER *v120; // r10
  __int64 v121; // r9
  int v122; // eax
  int v123; // eax
  bool v124; // cf
  _QWORD *v125; // rax
  __int64 v126; // rcx
  __int64 v127; // r8
  DXGADAPTER *v128; // r8
  unsigned int v129; // r13d
  unsigned int v130; // ebx
  unsigned int HostProcess; // eax
  int v132; // eax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rax
  unsigned __int8 v136; // al
  int v137; // ebx
  void *v138; // rax
  void *v139; // rax
  bool v140; // r9
  char v141; // r13
  struct DXGGLOBAL *Global; // rax
  __int64 v143; // rax
  __int64 v144; // rbx
  __int64 v145; // rax
  _QWORD *v146; // rax
  __int64 v147; // rax
  unsigned __int64 v148; // r8
  _QWORD *v149; // r13
  _QWORD *v150; // r8
  unsigned int v151; // eax
  __int64 v152; // rcx
  __int64 v153; // rcx
  int v154; // r8d
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // rax
  DXGADAPTER *v158; // rcx
  void *v159; // r10
  __int64 v160; // rax
  int v161; // ebx
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // rax
  __int64 v168; // rcx
  __int64 v169; // rdx
  __int64 v170; // rcx
  EDIDCACHE *v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // rdx
  __int64 v176; // rcx
  bool v177; // zf
  __int64 v178; // rdx
  DXGADAPTER *v179; // rcx
  __int64 v180; // rdx
  char v181; // r11
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v183; // r8
  unsigned int v184; // r9d
  __int64 v185; // r8
  int v186; // eax
  unsigned int v187; // r10d
  __int64 v188; // rax
  bool v189; // zf
  int v190; // eax
  _OWORD *v191; // r9
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  __int64 v195; // rdx
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // r8
  size_t v199; // r8
  void *v200; // rcx
  char *v201; // r9
  __int64 v202; // rdx
  __int64 v203; // rax
  bool v204; // [rsp+50h] [rbp-528h]
  unsigned __int8 v205; // [rsp+51h] [rbp-527h]
  int v206; // [rsp+58h] [rbp-520h] BYREF
  __int64 v207; // [rsp+60h] [rbp-518h]
  char v208; // [rsp+68h] [rbp-510h]
  unsigned __int8 v209[8]; // [rsp+70h] [rbp-508h] BYREF
  unsigned __int64 v210; // [rsp+78h] [rbp-500h] BYREF
  char v211; // [rsp+80h] [rbp-4F8h]
  char v212; // [rsp+81h] [rbp-4F7h]
  _D3DKMT_ESCAPE v213; // [rsp+88h] [rbp-4F0h] BYREF
  void *v214[2]; // [rsp+A8h] [rbp-4D0h] BYREF
  unsigned __int64 v215; // [rsp+B8h] [rbp-4C0h] BYREF
  struct DXGPROCESS *v216; // [rsp+C0h] [rbp-4B8h]
  unsigned int v217; // [rsp+C8h] [rbp-4B0h]
  char v218[8]; // [rsp+D0h] [rbp-4A8h] BYREF
  DXGADAPTER *v219; // [rsp+D8h] [rbp-4A0h]
  unsigned __int8 v220; // [rsp+E0h] [rbp-498h]
  DXGADAPTER *v221; // [rsp+E8h] [rbp-490h] BYREF
  __int64 v222; // [rsp+F0h] [rbp-488h]
  D3DKMT_HANDLE v223; // [rsp+F8h] [rbp-480h]
  DXGADAPTER *v224; // [rsp+100h] [rbp-478h]
  DXGADAPTER *v225; // [rsp+108h] [rbp-470h]
  unsigned int v226[2]; // [rsp+110h] [rbp-468h]
  __int64 v227; // [rsp+118h] [rbp-460h]
  union _LARGE_INTEGER Interval; // [rsp+120h] [rbp-458h] BYREF
  _D3DKMT_DISPLAYMODELIST *v229; // [rsp+128h] [rbp-450h]
  int v230; // [rsp+130h] [rbp-448h] BYREF
  struct _DXGKARG_ESCAPE v231; // [rsp+138h] [rbp-440h] BYREF
  _BYTE v232[24]; // [rsp+168h] [rbp-410h] BYREF
  struct _DXGKARG_ESCAPE v233; // [rsp+180h] [rbp-3F8h] BYREF
  struct _DXGKARG_ESCAPE v234; // [rsp+1B0h] [rbp-3C8h] BYREF
  _BYTE v235[32]; // [rsp+1E0h] [rbp-398h] BYREF
  _BYTE v236[64]; // [rsp+200h] [rbp-378h] BYREF
  _BYTE v237[8]; // [rsp+240h] [rbp-338h] BYREF
  _BYTE v238[16]; // [rsp+248h] [rbp-330h] BYREF
  unsigned int *v239; // [rsp+258h] [rbp-320h]
  _BYTE v240[16]; // [rsp+288h] [rbp-2F0h] BYREF
  DXGADAPTER *v241; // [rsp+298h] [rbp-2E0h]
  char v242; // [rsp+2A0h] [rbp-2D8h]
  __int64 v243; // [rsp+2A8h] [rbp-2D0h]
  _DWORD v244[4]; // [rsp+2D0h] [rbp-2A8h] BYREF
  _DWORD v245[4]; // [rsp+2E0h] [rbp-298h] BYREF
  GUID ActivityId; // [rsp+2F0h] [rbp-288h] BYREF
  __int128 v247; // [rsp+300h] [rbp-278h]
  __int128 v248; // [rsp+310h] [rbp-268h]
  __int128 v249; // [rsp+320h] [rbp-258h]
  __int64 v250; // [rsp+330h] [rbp-248h]
  _D3DKMT_DISPLAYMODELIST v251; // [rsp+340h] [rbp-238h] BYREF

  v3 = (_D3DKMT_ESCAPE *)a1;
  v206 = -1;
  *(_QWORD *)v226 = 0LL;
  v207 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v208 = 1;
    v206 = 2016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2016);
  }
  else
  {
    v208 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v206, 2016LL);
  v4 = 0LL;
  v227 = 0LL;
  v5 = 0LL;
  v222 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v14 = (struct DXGPROCESS *)*((_QWORD *)Current + 1), (v216 = v14) == 0LL) )
  {
    v14 = v12;
    v216 = v12;
  }
  v212 = 0;
  v15 = (int *)&v251;
  v229 = &v251;
  v16 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v204 = v16;
  if ( !v14 )
  {
    v21 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v206, v22);
    v25 = v208 == 0;
LABEL_589:
    if ( !v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v206);
    return 3221225485LL;
  }
  if ( v16 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_ESCAPE *)MmUserProbeAddress;
    v213 = *v3;
  }
  else
  {
    v213 = *v3;
  }
  Type = v213.Type;
  if ( v213.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)v14 + 11) + 424LL))() )
      goto LABEL_225;
    Type = v213.Type;
  }
  else if ( v213.Type >= D3DKMT_ESCAPE_WIN32K_START )
  {
    LODWORD(v31) = (*(__int64 (__fastcall **)(_D3DKMT_ESCAPE *))(*((_QWORD *)v14 + 11) + 416LL))(&v213);
LABEL_28:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v206, v30);
    if ( v208 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v206);
    return (unsigned int)v31;
  }
  if ( (unsigned int)Type <= D3DKMT_ESCAPE_DRT_TEST && (v27 = 266, _bittest(&v27, Type))
    || (unsigned int)(Type - 28) <= 1 )
  {
    if ( !g_OSTestSigningEnabled )
    {
      if ( !(unsigned __int8)DxgkpIsDrtEnabled() )
      {
        v29 = WdLogNewEntry5_WdWarning(v28, v17, v19);
        *(_QWORD *)(v29 + 24) = v213.Type;
        WdLogEvent5_WdWarning(v29);
LABEL_225:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v206, v17);
        if ( v208 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v112, &EventProfilerExit, v113, v206);
        return 3221225506LL;
      }
      Type = v213.Type;
    }
  }
  v35 = (unsigned int)(Type - 1);
  PrivateDriverDataSize = v213.PrivateDriverDataSize;
  if ( (_DWORD)v35 )
  {
    if ( (_DWORD)v35 == 2 && v213.PrivateDriverDataSize < 0xC )
      goto LABEL_588;
  }
  else if ( v213.PrivateDriverDataSize < 0x440 )
  {
LABEL_588:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v206, v17);
    v25 = v208 == 0;
    goto LABEL_589;
  }
  *(_OWORD *)v214 = 0LL;
  if ( v213.PrivateDriverDataSize > 0x200 )
  {
    v15 = (int *)operator new[](v213.PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v229 = (_D3DKMT_DISPLAYMODELIST *)v15;
    v214[0] = v15;
    PrivateDriverDataSize = v213.PrivateDriverDataSize;
  }
  if ( !v15 )
  {
    v37 = WdLogNewEntry5_WdLowResource(v35, v17, v19, v20);
    *(_QWORD *)(v37 + 24) = v213.PrivateDriverDataSize;
    *(_QWORD *)(v37 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v37);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v214);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v206, v38);
    if ( v208 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v206);
    return 3221225495LL;
  }
  if ( v204 )
  {
    pPrivateDriverData = v213.pPrivateDriverData;
    v42 = (char *)v213.pPrivateDriverData + PrivateDriverDataSize;
    if ( v42 < v213.pPrivateDriverData || (unsigned __int64)v42 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, pPrivateDriverData, PrivateDriverDataSize);
  }
  else
  {
    memmove(v15, v213.pPrivateDriverData, PrivateDriverDataSize);
  }
  if ( (*(_BYTE *)&v213.Flags.0 & 0x40) != 0 )
  {
    if ( v213.Type || (hAdapter = v213.hAdapter) == 0 || (*(_BYTE *)&v213.Flags.0 & 1) != 0 )
    {
      v45 = WdLogNewEntry5_WdWarning((unsigned int)v213.Type, v43, hAdapter);
      *(_QWORD *)(v45 + 24) = 1418LL;
      WdLogEvent5_WdWarning(v45);
LABEL_587:
      DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v214);
      goto LABEL_588;
    }
  }
  else
  {
    LODWORD(hAdapter) = v213.hAdapter;
  }
  if ( v213.Type <= D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( v213.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
    {
      LODWORD(v31) = DxgkpProcessBddFallbackRequest();
      goto LABEL_71;
    }
    v43 = 0x1C0000000uLL;
    switch ( v213.Type )
    {
      case D3DKMT_ESCAPE_VIDMM:
        v55 = *v15;
        if ( *v15 == 5 )
        {
          LODWORD(v31) = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)v15);
          goto LABEL_71;
        }
        if ( v55 == 6 )
        {
          LODWORD(v31) = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)v15);
          goto LABEL_71;
        }
        if ( v55 == 13 )
        {
          LODWORD(v31) = DxgEscapeEvictByCriteria((struct _D3DKMT_VIDMM_ESCAPE *)v15);
          goto LABEL_71;
        }
        break;
      case D3DKMT_ESCAPE_DRT_TEST:
        if ( v213.PrivateDriverDataSize < 0xC || v213.PrivateDriverDataSize < v15[1] || *v15 != 1484026436 )
          break;
        v43 = v15[2];
        if ( !(_DWORD)v43 && !(_DWORD)hAdapter
          || (unsigned int)v43 <= 0x24 && (v53 = 0x1093482000LL, _bittest64(&v53, v43)) )
        {
          LODWORD(v31) = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v15, 0LL);
LABEL_71:
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v214);
          goto LABEL_72;
        }
        if ( (((_DWORD)v43 - 27) & 0xFFFFFFF7) == 0 )
        {
          LODWORD(v31) = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v15, 0LL);
          if ( (int)v31 >= 0 )
          {
            if ( v204 )
            {
              v47 = v213.PrivateDriverDataSize;
              v48 = v213.pPrivateDriverData;
              v54 = (char *)v213.pPrivateDriverData + v213.PrivateDriverDataSize;
              if ( (unsigned __int64)v54 > MmUserProbeAddress || v54 <= v213.pPrivateDriverData )
                *(_BYTE *)MmUserProbeAddress = 0;
LABEL_69:
              memmove(v48, v15, v47);
            }
            else
            {
LABEL_70:
              memmove(v213.pPrivateDriverData, v15, v213.PrivateDriverDataSize);
            }
          }
          goto LABEL_71;
        }
        break;
      case D3DKMT_ESCAPE_MIRACAST_DISPLAY_REQUEST:
      case D3DKMT_ESCAPE_IDD_REQUEST:
        if ( v213.Type == D3DKMT_ESCAPE_IDD_REQUEST )
          v46 = DxgkHandleIndirectEscape(v213.PrivateDriverDataSize, v15);
        else
          v46 = DxgkHandleMiracastEscape(v213.PrivateDriverDataSize, v15);
        LODWORD(v31) = v46;
        if ( (int)(v46 + 0x80000000) >= 0 && v46 != -2147483643 )
          goto LABEL_71;
        if ( !v204 )
          goto LABEL_70;
        v47 = v213.PrivateDriverDataSize;
        v48 = v213.pPrivateDriverData;
        v49 = (char *)v213.pPrivateDriverData + v213.PrivateDriverDataSize;
        if ( (unsigned __int64)v49 > MmUserProbeAddress || v49 <= v213.pPrivateDriverData )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_69;
      case D3DKMT_ESCAPE_FORCE_BDDFALLBACK_HEADLESS:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_224;
        if ( v213.PrivateDriverDataSize != 1 )
          goto LABEL_587;
        byte_1C00B2B1C = *(_BYTE *)v15;
LABEL_111:
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v214);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v206, v63);
        if ( v208 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v64, &EventProfilerExit, v65, v206);
        return 0LL;
      case D3DKMT_ESCAPE_REQUEST_MACHINE_CRASH:
        if ( v213.PrivateDriverDataSize != 24 )
          goto LABEL_587;
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v214);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v206, v56);
        if ( v208 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v57, &EventProfilerExit, v58, v206);
        return 3221225473LL;
      case D3DKMT_ESCAPE_SOFTGPU_ENABLE_DISABLE_HMD:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_224;
        if ( v213.PrivateDriverDataSize != 200 )
          goto LABEL_587;
        v59 = DXGPROCESS::GetCurrent();
        if ( !v59 )
        {
          v62 = WdLogNewEntry5_WdError(v61, v60);
          *(_QWORD *)(v62 + 24) = 1598LL;
          WdLogEvent5_WdError(v62);
          goto LABEL_587;
        }
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v235, v59);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v235, 1LL);
        ActivityId = 0LL;
        v247 = 0LL;
        v248 = 0LL;
        v249 = 0LL;
        v250 = 0LL;
        EtwActivityIdControl(3u, (LPGUID)ActivityId.Data4);
        v250 = MEMORY[0xFFFFF78000000014];
        DWORD2(v247) = 46;
        LOBYTE(v249) = -1;
        LODWORD(v31) = DxgkEnableDisableTargetAsHMD(
                         (struct _D3DKMT_SOFTGPU_LUID_TARGET *)v15,
                         v15[48],
                         *((_BYTE *)v15 + 196),
                         (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&ActivityId);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v235);
        goto LABEL_71;
      case D3DKMT_ESCAPE_LOG_CODEPOINT_PACKET:
        if ( v213.PrivateDriverDataSize != 16 )
          goto LABEL_587;
        v222 = 0LL;
        DxgkLogCodePointPacket(*v15, v15[1], v15[2], v15[3], 0LL);
        goto LABEL_111;
      case D3DKMT_ESCAPE_LOG_USERMODE_DAIG_PACKET:
        if ( v213.PrivateDriverDataSize < 0x30 || v213.PrivateDriverDataSize < v15[1] )
          goto LABEL_587;
        LODWORD(v31) = DxgkWriteUserModeDiagEntry((struct _DXGK_DIAG_HEADER *)v15);
        goto LABEL_71;
      case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS|D3DKMT_ESCAPE_TDRDBGCTRL:
        LODWORD(v31) = DxgkPrepareCcdDatabaseForAccess();
        goto LABEL_71;
      default:
        break;
    }
  }
  v66 = 0LL;
  v224 = 0LL;
  v221 = 0LL;
  if ( v213.Type != D3DKMT_ESCAPE_BDD_FALLBACK )
  {
    v73 = v216;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v232, (struct _KTHREAD **)v216);
    v76 = v213.hAdapter;
    if ( !v213.hAdapter )
      goto LABEL_149;
    v77 = (v213.hAdapter >> 6) & 0xFFFFFF;
    v76 = v213.hAdapter >> 30;
    v223 = v213.hAdapter >> 30;
    v74 = v216;
    if ( (*((_BYTE *)v216 + 347) & 0x20) == 0 )
    {
      if ( v77 >= *((_DWORD *)v216 + 64) )
      {
        v73 = v216;
      }
      else
      {
        v75 = v77;
        v73 = v216;
        v83 = *((_QWORD *)v216 + 30);
        v74 = (struct DXGPROCESS *)*(unsigned int *)(v83 + 16LL * (unsigned int)v75 + 8);
        if ( (_DWORD)v76 == ((*(_DWORD *)(v83 + 16LL * (unsigned int)v75 + 8) >> 5) & 3)
          && ((unsigned __int16)v74 & 0x2000) == 0
          && ((unsigned __int8)v74 & 0x1F) != 0 )
        {
          v75 *= 2LL;
          v74 = (struct DXGPROCESS *)((unsigned __int8)v74 & 0x1F);
          if ( (_BYTE)v74 == 1 )
          {
            v66 = *(DXGADAPTER **)(v83 + 8 * v75);
            goto LABEL_148;
          }
          v84 = WdLogNewEntry5_WdError(v74, v76);
          *(_QWORD *)(v84 + 24) = 316LL;
          WdLogEvent5_WdError(v84);
        }
      }
      v66 = 0LL;
      goto LABEL_148;
    }
    v78 = *((_QWORD *)v216 + 62);
    v225 = (DXGADAPTER *)(v78 + 208);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v78 + 208));
    if ( v77 < *(_DWORD *)(v78 + 256) )
    {
      v79 = *(_QWORD *)(v78 + 240);
      v80 = *(_DWORD *)(v79 + 16LL * v77 + 8);
      if ( v223 == ((v80 >> 5) & 3) && (v80 & 0x2000) == 0 && (v80 & 0x1F) != 0 )
      {
        v81 = v80 & 0x1F;
        if ( (_BYTE)v81 == 1 )
        {
          v66 = *(DXGADAPTER **)(v79 + 16LL * v77);
          goto LABEL_137;
        }
        v82 = WdLogNewEntry5_WdError(v81, 2LL * v77);
        *(_QWORD *)(v82 + 24) = 316LL;
        WdLogEvent5_WdError(v82);
      }
    }
    v66 = 0LL;
LABEL_137:
    ExReleasePushLockSharedEx(v225, 0LL);
    KeLeaveCriticalRegion();
    v73 = v216;
LABEL_148:
    v224 = v66;
LABEL_149:
    if ( !v66 )
    {
      v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v76, v75);
      v85[3] = v213.hAdapter;
      v85[4] = -1073741811LL;
LABEL_151:
      WdLogEvent5_WdWarning(v85);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v232);
      goto LABEL_587;
    }
    if ( !v213.hDevice )
    {
LABEL_165:
      if ( !v213.hContext )
        goto LABEL_178;
      v90 = (v213.hContext >> 6) & 0xFFFFFF;
      v91 = v213.hContext >> 30;
      if ( (unsigned int)v90 < *((_DWORD *)v73 + 64) )
      {
        v75 = (unsigned int)v90;
        v92 = *((_QWORD *)v73 + 30);
        v74 = (struct DXGPROCESS *)*(unsigned int *)(v92 + 16 * v90 + 8);
        if ( (_DWORD)v91 == ((*(_DWORD *)(v92 + 16 * v90 + 8) >> 5) & 3)
          && ((unsigned __int16)v74 & 0x2000) == 0
          && ((unsigned __int8)v74 & 0x1F) != 0 )
        {
          v75 = 2LL * (unsigned int)v90;
          v74 = (struct DXGPROCESS *)((unsigned __int8)v74 & 0x1F);
          if ( (_BYTE)v74 == 7 )
          {
            v5 = *(_QWORD *)(v92 + 16LL * (unsigned int)v90);
            goto LABEL_173;
          }
          v93 = WdLogNewEntry5_WdError(v74, v91);
          *(_QWORD *)(v93 + 24) = 316LL;
          WdLogEvent5_WdError(v93);
        }
      }
      v5 = 0LL;
LABEL_173:
      v222 = v5;
      if ( !v5 || !v4 || v4 != *(_QWORD *)(v5 + 16) )
      {
        v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v91, v75);
        v85[3] = v66;
        v85[4] = v4;
        v85[5] = v213.hContext;
        goto LABEL_151;
      }
LABEL_178:
      if ( v4 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + 64));
        v66 = *(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL);
        v224 = v66;
      }
      if ( v5 )
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 32));
      _InterlockedIncrement64((volatile signed __int64 *)v66 + 3);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v232);
      if ( *((_DWORD *)v66 + 468) >= 0x5023u )
      {
        if ( (*(_BYTE *)&v213.Flags.0 & 0x10) != 0 || (v213.Flags.Value & 0xFFFFFF00) != 0 )
        {
          v98 = WdLogNewEntry5_WdWarning(v95, v94, v96);
          *(_QWORD *)(v98 + 24) = v66;
          WdLogEvent5_WdWarning(v98);
          goto LABEL_587;
        }
        if ( (*(_BYTE *)&v213.Flags.0 & 0x20) != 0 )
        {
          v97 = WdLogNewEntry5_WdWarning(v95, v94, v96);
          *(_QWORD *)(v97 + 24) = v66;
          *(_QWORD *)(v97 + 32) = 1753LL;
          WdLogEvent5_WdWarning(v97);
          goto LABEL_587;
        }
      }
      v99 = v66;
      v225 = v66;
      v210 = 0LL;
      LODWORD(v31) = DxgkpGetPairingAdapters(v66, 0LL, &v221, &v210, 0LL, 0LL, 0);
      if ( (int)v31 >= 0 && _InterlockedExchangeAdd64((volatile signed __int64 *)v221 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v221 + 2), v221);
      if ( v213.Type == D3DKMT_ESCAPE_VIDMM )
      {
        v107 = v221;
        if ( !v221 )
        {
          v203 = WdLogNewEntry5_WdWarning((unsigned int)(v213.Type - 1), v100, v101);
          *(_QWORD *)(v203 + 24) = 1916LL;
          WdLogEvent5_WdWarning(v203);
          if ( v5 )
            DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
          if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
          v179 = v66;
LABEL_586:
          DXGADAPTER::ReleaseReference(v179);
          goto LABEL_587;
        }
        if ( *v15 == 9 )
        {
          if ( !v15[4] && !(unsigned __int8)DxgkpIsDrtEnabled() )
          {
            v111 = WdLogNewEntry5_WdWarning(v109, v108, v110);
            *(_QWORD *)(v111 + 24) = 1896LL;
            WdLogEvent5_WdWarning(v111);
            if ( v5 )
              DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
            if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
            DXGADAPTER::ReleaseReference(v66);
LABEL_224:
            DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v214);
            goto LABEL_225;
          }
          v114 = (void *)*((_QWORD *)v15 + 1);
          *((_QWORD *)v15 + 1) = 0LL;
          LODWORD(v31) = DxgEscapeSuspendResumeProcess(&v213, v15, v221, v114, 1, v15[4] != 0);
          if ( v5 )
            DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
          if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
          goto LABEL_241;
        }
        if ( *v15 == 10 )
        {
          v115 = (void *)*((_QWORD *)v15 + 1);
          *((_QWORD *)v15 + 1) = 0LL;
          LODWORD(v31) = DxgEscapeSuspendResumeProcess(&v213, v15, v107, v115, 0, 0);
          if ( v5 )
            DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
          if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
          goto LABEL_241;
        }
      }
      else if ( v213.Type == D3DKMT_ESCAPE_DRT_TEST
             && v213.PrivateDriverDataSize >= 0xC
             && v213.PrivateDriverDataSize >= v15[1]
             && *v15 == 1484026436 )
      {
        v102 = v15[2];
        if ( (unsigned int)v102 <= 0x25 )
        {
          v103 = 0x2744204000LL;
          if ( _bittest64(&v103, v102) )
          {
            if ( (_DWORD)v102 == 33 || (_DWORD)v102 == 32 )
            {
              Feature_HoldAdapterLockEscape__private_ReportDeviceUsage();
              LODWORD(v31) = -1073741823;
            }
            else
            {
              LODWORD(v31) = DxgkDrtTestEscape(v66, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v15, 0LL);
              if ( (int)v31 >= 0 )
              {
                if ( v204 )
                {
                  v104 = v213.PrivateDriverDataSize;
                  v105 = v213.pPrivateDriverData;
                  v106 = (char *)v213.pPrivateDriverData + v213.PrivateDriverDataSize;
                  if ( (unsigned __int64)v106 > MmUserProbeAddress || v106 <= v213.pPrivateDriverData )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  memmove(v105, v15, v104);
                }
                else
                {
                  memmove(v213.pPrivateDriverData, v15, v213.PrivateDriverDataSize);
                }
              }
            }
            if ( v5 )
              DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
            if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
LABEL_241:
            DXGADAPTER::ReleaseReference(v66);
            goto LABEL_71;
          }
        }
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v237, v66, 0LL);
      COREACCESS::COREACCESS((COREACCESS *)v236, 0LL);
      v217 = 0;
      v219 = v66;
      v205 = 0;
      v220 = 0;
      v117 = *((_QWORD *)v216 + 11);
      if ( v117 )
      {
        v118 = (*(__int64 (__fastcall **)(_QWORD))(v117 + 224))(0LL);
        v116 = v118 != 0;
        v223 = v118 != 0;
      }
      else
      {
        v223 = 0;
      }
      v119 = (unsigned int)v213.Type;
      if ( v213.Type == D3DKMT_ESCAPE_BDD_FALLBACK )
      {
        COREACCESS::AcquireShared((COREACCESS *)v236, 0LL);
LABEL_247:
        v120 = 0LL;
        v121 = 0LL;
LABEL_248:
        LOBYTE(v116) = 0;
        goto LABEL_249;
      }
      if ( (*(_BYTE *)&v213.Flags.0 & 1) != 0 )
      {
        LOBYTE(v122) = 0;
        if ( v213.Type == D3DKMT_ESCAPE_DRIVERPRIVATE || v213.Type == D3DKMT_ESCAPE_VIDSCH && *v15 == 3 )
          LOBYTE(v122) = 1;
        v122 = (unsigned __int8)v122;
        if ( *((_QWORD *)v66 + 338) )
          v122 = 1;
        v217 = v122;
        LODWORD(v31) = COREADAPTERACCESS::AcquireExclusive((__int64)v237, (unsigned int)(unsigned __int8)v122 + 2);
        if ( (int)v31 < 0 )
        {
          LOBYTE(v116) = 0;
          goto LABEL_568;
        }
        if ( !(_BYTE)v217 )
        {
          v119 = *((_QWORD *)v66 + 338);
          if ( v119 )
            ADAPTER_RENDER::FlushScheduler(v119, 2, 0xFFFFFFFF, 0);
        }
        v121 = 1LL;
        v120 = 0LL;
        goto LABEL_248;
      }
      if ( v213.Type != D3DKMT_ESCAPE_DRT_TEST
        || v15[2] != 23
        || (v123 = v15[3] - 2, v124 = v15[3] == 2, v211 = 1, !v124 && v123 != 1) )
      {
        v211 = 0;
      }
      if ( v213.Type == D3DKMT_ESCAPE_DRIVERPRIVATE )
      {
        v119 = (unsigned int)*DXGADAPTER::GetAdapterType(v66, &v230);
        if ( (v119 & 0x10) != 0 || *((_DWORD *)v66 + 468) >= 0x5023u && (*(_BYTE *)&v213.Flags.0 & 8) != 0 )
        {
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v218);
          v116 = v220;
          if ( *((_DWORD *)v66 + 50) != 1 )
          {
            LODWORD(v31) = -1073741130;
            goto LABEL_568;
          }
          v205 = v220;
          v120 = 0LL;
          v121 = 0LL;
LABEL_249:
          if ( v213.hDevice )
          {
            v116 = v220;
            if ( *(_DWORD *)(v4 + 576) != 1 )
            {
              LODWORD(v31) = -1073741130;
LABEL_568:
              if ( (_BYTE)v116 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v218);
              COREACCESS::~COREACCESS((COREACCESS *)v236);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v237, v202);
              if ( v5 )
                DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
              if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
              if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v99 + 2), v99);
              if ( v214[0] )
                operator delete[](v214[0]);
LABEL_72:
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v206, v50);
              if ( v208 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              {
                McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v206);
                return (unsigned int)v31;
              }
              return (unsigned int)v31;
            }
            v205 = v220;
          }
          v128 = v221;
          if ( v221
            && *((_BYTE *)v221 + 209)
            && ((v66 = v221, v224 = v221, v213.Type == D3DKMT_ESCAPE_DRIVERPRIVATE)
             && (*(_BYTE *)&v213.Flags.0 & 0x40) == 0
             || v213.Type <= (unsigned int)D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION
             && (v119 = 805306378LL, _bittest((const int *)&v119, v213.Type))) )
          {
            if ( v5 )
              v129 = *(_DWORD *)(v5 + 28);
            else
              v129 = 0;
            if ( v4 )
              *(_QWORD *)v226 = *(unsigned int *)(v4 + 440);
            v130 = *((_DWORD *)v221 + 1078);
            HostProcess = DXGPROCESS::GetHostProcess(v216);
            v132 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                     (DXGADAPTER *)((char *)v221 + 4240),
                     HostProcess,
                     v130,
                     v226[0],
                     v129,
                     v213.Type,
                     v213.Flags,
                     v213.PrivateDriverDataSize,
                     (unsigned __int8 *)v15);
            v31 = v132;
            if ( v132 < 0 )
            {
              v135 = WdLogNewEntry5_WdError(v134, v133);
LABEL_306:
              *(_QWORD *)(v135 + 24) = v31;
              WdLogEvent5_WdError(v135);
            }
          }
          else
          {
            switch ( v213.Type )
            {
              case D3DKMT_ESCAPE_DRIVERPRIVATE:
                memset(&v231, 0, sizeof(v231));
                v136 = 1;
                v209[0] = 1;
                if ( (*(_BYTE *)&v213.Flags.0 & 0x40) == 0 )
                  goto LABEL_314;
                v209[0] = 0;
                if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
                {
                  LODWORD(v31) = DxgkpDriverKnownEscapeCblt(
                                   v216,
                                   (struct ADAPTER_RENDER **)v221,
                                   v15,
                                   v213.PrivateDriverDataSize,
                                   v209);
                  v116 = v205;
                  if ( (int)v31 < 0 )
                    goto LABEL_556;
                }
                else
                {
                  LODWORD(v31) = DxgkpDriverKnownEscape(v216, v15, v213.PrivateDriverDataSize);
                  v116 = v205;
                }
                v136 = v209[0];
LABEL_314:
                if ( !v136 )
                  goto LABEL_556;
                if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))v66 + 62) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
                {
                  v147 = WdLogNewEntry5_WdWarning(v119, v116, v128);
                  *(_QWORD *)(v147 + 24) = v66;
                  LODWORD(v31) = -1073741637;
                  *(_QWORD *)(v147 + 32) = -1073741637LL;
                  WdLogEvent5_WdWarning(v147);
                  LOBYTE(v116) = v205;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                if ( !v213.PrivateDriverDataSize || !v213.pPrivateDriverData )
                {
                  v146 = (_QWORD *)WdLogNewEntry5_WdWarning(v119, v116, v128);
                  v146[3] = v213.PrivateDriverDataSize;
                  v146[4] = v213.pPrivateDriverData;
                  v146[5] = -1073741811LL;
                  WdLogEvent5_WdWarning(v146);
                  LODWORD(v31) = -1073741811;
                  LOBYTE(v116) = v205;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                v137 = 0;
                if ( v4 )
                  v138 = *(void **)(v4 + 584);
                else
                  v138 = 0LL;
                v231.hDevice = v138;
                if ( v5 )
                  v139 = *(void **)(v5 + 184);
                else
                  v139 = 0LL;
                v231.hContext = v139;
                v231.Flags.Value = v213.Flags.Value;
                if ( (*((_DWORD *)v66 + 87) & 8) == 0
                  && *((_DWORD *)v66 + 81) == 4098
                  && !(unsigned int)IsAMDDriverEscapeAllowed(v15, v213.PrivateDriverDataSize) )
                {
LABEL_327:
                  LODWORD(v31) = -1073741637;
                  LOBYTE(v116) = v205;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                if ( *(_BYTE *)&v213.Flags.0 < 0 )
                {
                  v135 = WdLogNewEntry5_WdError(v119, v116);
                  v31 = -1073741637LL;
                  goto LABEL_306;
                }
                if ( (*((_BYTE *)v216 + 347) & 0x20) != 0
                  || (Global = DXGGLOBAL::GetGlobal(v119, v116), *((_BYTE *)Global + 1555))
                  && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                       (struct DXGGLOBAL *)((char *)Global + 1548),
                       v66) )
                {
                  v137 = 32;
                }
                v231.Flags.Value = v137 | v231.Flags.Value & 0xFFFFFFDF;
                v231.PrivateDriverDataSize = v213.PrivateDriverDataSize;
                v231.pPrivateDriverData = v15;
                v143 = *((_QWORD *)v66 + 338);
                if ( v143 )
                {
                  v144 = v143 + 72;
                  KeEnterCriticalRegion();
                  ExAcquirePushLockSharedEx(v144, 0LL);
                  v145 = *(_QWORD *)(*((_QWORD *)v216 + 6) + 8LL * *((unsigned int *)v66 + 58));
                  if ( v145 )
                    v231.hKmdProcessHandle = *(HANDLE *)(v145 + 16);
                  ExReleasePushLockSharedEx(v144, 0LL);
                  KeLeaveCriticalRegion();
                }
                LODWORD(v31) = DXGADAPTER::DdiEscape(v66, &v231);
                break;
              case D3DKMT_ESCAPE_VIDMM:
                if ( !v221 )
                  goto LABEL_437;
                if ( v4 )
                  v120 = *(struct DXGADAPTER **)(v4 + 760);
                if ( *v15 == 16 )
                {
                  v149 = v15 + 6;
                  LODWORD(v31) = DxgkpEscapeVidMmDelayExecution(
                                   (struct DXGDEVICE *)v4,
                                   v15[3],
                                   v15[2],
                                   v15[4],
                                   (unsigned __int64 *)v15 + 3);
                  v140 = v204;
                  if ( (int)v31 >= 0 )
                  {
                    *(_QWORD *)v226 = v213.pPrivateDriverData;
                    if ( v204 )
                    {
                      v150 = (char *)v213.pPrivateDriverData + 24;
                      if ( (char *)v213.pPrivateDriverData + 24 >= (void *)MmUserProbeAddress )
                        v150 = (_QWORD *)MmUserProbeAddress;
                      *v150 = *v149;
                      LOBYTE(v116) = v205;
                      v141 = 0;
                      goto LABEL_558;
                    }
                    *((_QWORD *)v213.pPrivateDriverData + 3) = *v149;
                  }
                  LOBYTE(v116) = v205;
                  goto LABEL_557;
                }
                LODWORD(v31) = (*(__int64 (__fastcall **)(_QWORD, struct DXGADAPTER *, int *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v221 + 338) + 640LL) + 8LL) + 40LL))(
                                 *(_QWORD *)(*((_QWORD *)v221 + 338) + 648LL),
                                 v120,
                                 v15,
                                 v121);
                break;
              case D3DKMT_ESCAPE_TDRDBGCTRL:
                if ( !v213.pPrivateDriverData )
                {
LABEL_370:
                  LODWORD(v31) = TdrDbgCtrl(0LL, v116, v221, v121);
                  break;
                }
                if ( v213.PrivateDriverDataSize < 4 )
                {
LABEL_383:
                  LODWORD(v31) = -1073741811;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                switch ( *v15 )
                {
                  case 0:
                    goto LABEL_370;
                  case 1:
                    LODWORD(v31) = TdrDbgCtrl(2LL, v116, v221, v121);
                    goto LABEL_555;
                  case 2:
                    LODWORD(v31) = TdrDbgCtrl(1LL, v116, v221, v121);
                    goto LABEL_555;
                  case 3:
                    LODWORD(v31) = TdrDbgCtrl(3LL, v116, v221, v121);
                    goto LABEL_555;
                  case 4:
                  case 5:
                    if ( !v221 )
                    {
                      *(_QWORD *)(WdLogNewEntry5_WdTrace(v119, v116) + 24) = 0LL;
                      goto LABEL_327;
                    }
                    if ( *((_BYTE *)v221 + 209) )
                    {
                      LODWORD(v31) = -1073741637;
                      v140 = v204;
                      v141 = 0;
                      goto LABEL_559;
                    }
                    LODWORD(v31) = TdrDbgCtrl(4LL, v116, v221, v121);
                    if ( (int)v31 >= 0 )
                    {
                      v152 = *(_QWORD *)(*((_QWORD *)v221 + 338) + 624LL);
                      v244[2] = 0;
                      v244[0] = 2;
                      v244[1] = *v15;
                      LODWORD(v31) = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v221 + 338) + 616LL)
                                                                                              + 8LL)
                                                                                  + 64LL))(
                                       v152,
                                       v244);
                    }
                    goto LABEL_555;
                  case 6:
                    LODWORD(v31) = TdrDbgCtrl(5LL, v116, v221, v121);
                    goto LABEL_555;
                  case 7:
                    LODWORD(v31) = TdrDbgCtrl(6LL, v116, v221, v121);
                    goto LABEL_555;
                  case 8:
                    if ( v213.PrivateDriverDataSize < 8 )
                      goto LABEL_383;
                    if ( !v221 )
                    {
                      *(_QWORD *)(WdLogNewEntry5_WdTrace(v119, v116) + 24) = v66;
                      goto LABEL_327;
                    }
                    if ( *((_BYTE *)v221 + 209) )
                    {
                      LODWORD(v31) = -1073741637;
                      v140 = v204;
                      v141 = 0;
                      goto LABEL_559;
                    }
                    LODWORD(v31) = TdrDbgCtrl(4LL, v116, v221, v121);
                    if ( (int)v31 >= 0 )
                    {
                      v153 = *(_QWORD *)(*((_QWORD *)v221 + 338) + 624LL);
                      v245[0] = 2;
                      v245[1] = *v15;
                      v245[2] = v15[1];
                      LODWORD(v31) = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v221 + 338) + 616LL)
                                                                                              + 8LL)
                                                                                  + 64LL))(
                                       v153,
                                       v245);
                    }
                    break;
                  default:
                    goto LABEL_383;
                }
                break;
              case D3DKMT_ESCAPE_VIDSCH:
                if ( !v221 )
                  goto LABEL_437;
                if ( *((_BYTE *)v221 + 209) )
                  goto LABEL_538;
                if ( *v15 == 2 )
                  goto LABEL_362;
                if ( *v15 != 3 )
                {
                  LODWORD(v31) = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v221 + 338)
                                                                                                  + 616LL)
                                                                                      + 8LL)
                                                                          + 64LL))(
                                   *(_QWORD *)(*((_QWORD *)v221 + 338) + 624LL),
                                   v15);
                  break;
                }
                if ( !(_DWORD)v121 )
                {
LABEL_362:
                  LODWORD(v31) = -1073741811;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                v151 = 5000000;
                if ( (unsigned int)v15[1] < 0x4C4B40 )
                  v151 = v15[1];
                Interval.QuadPart = -(__int64)v151;
                KeDelayExecutionThread(0, 0, &Interval);
                LODWORD(v31) = 0;
                v140 = v204;
                goto LABEL_561;
              case D3DKMT_ESCAPE_DEVICE:
                if ( v213.PrivateDriverDataSize < 0xC || !v4 )
                  goto LABEL_383;
                LODWORD(v31) = DXGDEVICE::Escape((DXGDEVICE *)v4, (struct _D3DKMT_DEVICE_ESCAPE *)v15);
                break;
              case D3DKMT_ESCAPE_DMM:
                if ( !*((_QWORD *)v66 + 337) )
                  goto LABEL_437;
                if ( v213.PrivateDriverDataSize < 0x80 )
                  goto LABEL_362;
                v148 = *((_QWORD *)v15 + 1);
                if ( v148 > 0x19000 || v213.PrivateDriverDataSize != v148 + 127 && v148 )
                  goto LABEL_362;
                LODWORD(v31) = DmmEscape(v66, (struct _D3DKMT_DMM_ESCAPE_INTERNAL *const)v15);
                break;
              case D3DKMT_ESCAPE_DEBUG_SNAPSHOT:
                if ( v213.PrivateDriverDataSize < 8 )
                {
                  LODWORD(v31) = -1073741811;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                LODWORD(v31) = DxgDbgTakeSnapshot(v15 + 1, v213.PrivateDriverDataSize - 4, (unsigned int *)v15);
                break;
              case D3DKMT_ESCAPE_DRT_TEST:
                if ( v213.PrivateDriverDataSize < 0xC || v213.PrivateDriverDataSize < v15[1] || *v15 != 1484026436 )
                  goto LABEL_383;
                LODWORD(v31) = DxgkDrtTestEscape(
                                 v66,
                                 (struct _D3DKMT_DRT_ESCAPE_HEAD *)v15,
                                 (struct COREADAPTERACCESS *)v237);
                break;
              case D3DKMT_ESCAPE_DIAGNOSTICS:
                v154 = 1;
                goto LABEL_403;
              case D3DKMT_ESCAPE_OUTPUTDUPL_SNAPSHOT:
                if ( !*((_QWORD *)v66 + 337) )
                  goto LABEL_437;
                if ( v213.PrivateDriverDataSize < 0x18 )
                {
                  LODWORD(v31) = -1073741811;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                if ( v213.PrivateDriverDataSize != *v15 )
                {
                  LODWORD(v31) = -1073741811;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                if ( !v223 )
                  v120 = v66;
                LODWORD(v31) = OutputDuplGetDebugInfo(v120, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)v15);
                break;
              case D3DKMT_ESCAPE_OUTPUTDUPL_DIAGNOSTICS:
                if ( !*((_QWORD *)v66 + 337) )
                  goto LABEL_437;
                if ( v213.PrivateDriverDataSize < 8 )
                {
                  LODWORD(v31) = -1073741811;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                if ( v213.PrivateDriverDataSize != (unsigned int)v15[1] + 8LL )
                {
                  LODWORD(v31) = -1073741811;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                if ( !v223 )
                  v120 = v66;
                LODWORD(v31) = OutputDuplGetDiagnosticBuffer(v120, (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)v15);
                break;
              case D3DKMT_ESCAPE_BDD_PNP:
                if ( (*((_DWORD *)v66 + 87) & 0x20) != 0 && !DXGADAPTER::IsBddFallbackDriver(v66) )
                {
                  *((_DWORD *)&v234.Flags + 1) = (_DWORD)v159;
                  *(&v234.PrivateDriverDataSize + 1) = (unsigned int)v159;
                  v234.hKmdProcessHandle = v159;
                  v234.hDevice = v159;
                  v234.hContext = v159;
                  v234.Flags.Value = v213.Flags.Value;
                  v234.PrivateDriverDataSize = v213.PrivateDriverDataSize;
                  v234.pPrivateDriverData = v15;
                  LODWORD(v31) = DXGADAPTER::DdiEscape(v158, &v234);
                  break;
                }
                LODWORD(v31) = -1071775742;
                v140 = v204;
                v141 = 0;
                goto LABEL_559;
              case D3DKMT_ESCAPE_BDD_FALLBACK:
                if ( !DXGADAPTER::IsBddFallbackDriver(0LL) )
                {
                  v157 = WdLogNewEntry5_WdAssertion(v156, v155);
                  *(_QWORD *)(v157 + 24) = 2605LL;
                  WdLogEvent5_WdAssertion(v157);
                }
                *((_DWORD *)&v233.Flags + 1) = 0;
                memset(&v233.PrivateDriverDataSize + 1, 0, 20);
                v233.hDevice = 0LL;
                v233.Flags.Value = v213.Flags.Value;
                v233.PrivateDriverDataSize = v213.PrivateDriverDataSize;
                v233.pPrivateDriverData = v15;
                LODWORD(v31) = DXGADAPTER::DdiEscape(0LL, &v233);
                break;
              case D3DKMT_ESCAPE_ACTIVATE_SPECIFIC_DIAG:
                if ( v213.PrivateDriverDataSize != 8 )
                {
                  LODWORD(v31) = -1073741811;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                if ( !*v15 )
                {
                  v161 = v15[1];
                  *((_BYTE *)DXGGLOBAL::GetGlobal(v119, v116) + 1232) = v161 != 0;
                  LODWORD(v31) = 0;
                  v140 = v204;
                  goto LABEL_561;
                }
                if ( *v15 != 15 )
                {
                  v160 = WdLogNewEntry5_WdAssertion(v119, v116);
                  *(_QWORD *)(v160 + 24) = *v15;
                  WdLogEvent5_WdAssertion(v160);
                  LODWORD(v31) = -1073741811;
                  break;
                }
                v119 = *((_QWORD *)v66 + 337);
                if ( v119 )
                {
                  LODWORD(v31) = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(
                                   (ADAPTER_DISPLAY *)v119,
                                   v15[1]);
                  break;
                }
LABEL_437:
                v162 = WdLogNewEntry5_WdError(v119, v116);
                *(_QWORD *)(v162 + 24) = v66;
                LODWORD(v31) = -1073741637;
                *(_QWORD *)(v162 + 32) = -1073741637LL;
                WdLogEvent5_WdError(v162);
                if ( v205 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v218);
                COREACCESS::~COREACCESS((COREACCESS *)v236);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v237, v163);
                if ( v5 )
                  DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
                if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
                if ( v99 )
                  DXGADAPTER::ReleaseReference(v99);
                DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v214);
                goto LABEL_28;
              case D3DKMT_ESCAPE_MODES_PRUNED_OUT:
                if ( !*((_QWORD *)v66 + 337) )
                  goto LABEL_437;
                if ( v213.PrivateDriverDataSize < 8 )
                {
                  LODWORD(v31) = -1073741811;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                if ( v213.PrivateDriverDataSize < 44 * (unsigned __int64)(unsigned int)v15[1] + 8 )
                {
                  LODWORD(v31) = -1073741811;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                LODWORD(v31) = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
                                 *((ADAPTER_DISPLAY **)v66 + 337),
                                 (struct _D3DKMT_DISPLAYMODELIST *)v15);
                break;
              case D3DKMT_ESCAPE_WHQL_INFO:
                v140 = v204;
                if ( v213.PrivateDriverDataSize < 4 )
                {
                  LODWORD(v31) = -1073741811;
                  v141 = 0;
                  goto LABEL_559;
                }
                *v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v66 + 27) + 64LL) + 2720LL);
                LODWORD(v31) = 0;
                goto LABEL_561;
              case D3DKMT_ESCAPE_BRIGHTNESS:
                if ( (*(_BYTE *)&v213.Flags.0 & 1) == 0 )
                {
                  LODWORD(v31) = -1073741811;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                if ( v213.PrivateDriverDataSize < 0x60C )
                {
                  LODWORD(v31) = -1073741811;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                if ( DXGPROCESS::IsRemoteConnection(v216) )
                {
                  LODWORD(v31) = -1073741790;
                  v167 = WdLogNewEntry5_WdWarning(v165, v164, v166);
                  *(_QWORD *)(v167 + 24) = v66;
                  *(_QWORD *)(v167 + 32) = -1073741790LL;
LABEL_554:
                  WdLogEvent5_WdWarning(v167);
                }
                else
                {
                  LODWORD(v31) = DpiBrightnessEscape(
                                   *((struct _DEVICE_OBJECT **)v66 + 27),
                                   (struct _D3DKMT_BRIGHTNESS_INFO *)v15);
                }
                break;
              case D3DKMT_ESCAPE_EDID_CACHE:
                if ( v213.PrivateDriverDataSize < 4 )
                  goto LABEL_383;
                v168 = (unsigned int)*v15 + 4LL;
                if ( v213.PrivateDriverDataSize != v168 )
                  goto LABEL_383;
                if ( !IsCurrentConsoleSession(v168, v116) && !IsCurrentProcessAdmin() )
                {
                  memset(v15, 0, v213.PrivateDriverDataSize);
                  break;
                }
                v171 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v170, v169) + 126);
                if ( v171 )
                {
                  LODWORD(v31) = EDIDCACHE::GetEdids(v171, (struct _D3DKMT_DXGK_DIAGNOSTICS *)v15);
                  break;
                }
                LODWORD(v31) = -1073741801;
                LOBYTE(v116) = v205;
                v140 = v204;
                v141 = 0;
                goto LABEL_559;
              case D3DKMT_ESCAPE_GENERIC_ADAPTER_DIAG_INFO:
                if ( v213.PrivateDriverDataSize < 0x10 )
                {
                  LODWORD(v31) = -1073741811;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                if ( !DXGADAPTER::IsDiagnosticAllowed(v66) )
                  goto LABEL_474;
                v15[1] &= 7u;
                DxgkGetAdapterBrightnessInfo(*((_QWORD *)v66 + 27), v15);
                LODWORD(v31) = 0;
                v140 = v204;
                goto LABEL_561;
              case D3DKMT_ESCAPE_HISTORY_BUFFER_STATUS:
                if ( v213.PrivateDriverDataSize < 8 || !v221 )
                  goto LABEL_480;
                if ( v4 )
                {
                  v181 = 0;
                  if ( (qword_1C00B19B0 & 0x61C8ED7) != 0
                    && (qword_1C00B19B8 & 0xFFFFFFFFF9E37128uLL) == 0
                    && (qword_1C00B19B0 & 0x4000) != 0 )
                  {
                    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v221);
                    if ( NumDifferentPhysicalAdapters )
                    {
                      v185 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v183 + 2704) + 16LL) + 2584LL);
                      while ( !*(_QWORD *)(360LL * v184 + v185 + 40) )
                      {
                        if ( ++v184 >= NumDifferentPhysicalAdapters )
                          goto LABEL_505;
                      }
                      v181 = 1;
                    }
                  }
LABEL_505:
                  *(_BYTE *)(v4 + 1864) = v181;
                  *(_BYTE *)v15 = v181;
                  v15[1] = (int)v120;
                  LODWORD(v31) = (_DWORD)v120;
                  v140 = v204;
                  goto LABEL_561;
                }
                if ( (_BYTE)v116 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v218);
                COREACCESS::~COREACCESS((COREACCESS *)v236);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v237, v180);
                if ( v5 )
                  DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
LABEL_488:
                if ( !v99 )
                  goto LABEL_587;
                v179 = v99;
                goto LABEL_586;
              case D3DKMT_ESCAPE_MIRACAST_ADAPTER_DIAG_INFO:
                if ( v213.PrivateDriverDataSize != 32 )
                {
                  LODWORD(v31) = -1073741811;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                if ( !DXGADAPTER::IsDiagnosticAllowed(v66) )
                {
LABEL_474:
                  v31 = WdLogNewEntry5_WdWarning(v173, v172, v174);
                  *(_QWORD *)(v31 + 24) = v66;
                  *(_QWORD *)(v31 + 32) = (unsigned int)PsGetCurrentProcessSessionId(v176, v175);
                  WdLogEvent5_WdWarning(v31);
                  LODWORD(v31) = -1073741790;
                  LOBYTE(v116) = v205;
                  v140 = v204;
                  v141 = 0;
                  goto LABEL_559;
                }
                DxgkGetAdapterMiracastInfo(*((_QWORD *)v66 + 27), (__int64)v15);
                LODWORD(v31) = 0;
                v140 = v204;
                goto LABEL_561;
              case D3DKMT_ESCAPE_PROCESS_VERIFIER_OPTION:
                if ( v213.PrivateDriverDataSize < 0x20 )
                  goto LABEL_480;
                v186 = v15[3];
                if ( v186 > 1 || *(_QWORD *)v15 )
                  goto LABEL_480;
                if ( !v186 )
                  *((_OWORD *)v15 + 1) = 0LL;
                v187 = v15[2];
                if ( v187 - 1000 > 1 )
                  goto LABEL_480;
                if ( !v128 )
                {
                  v188 = WdLogNewEntry5_WdError(v119, v116);
                  *(_QWORD *)(v188 + 24) = 2922LL;
                  goto LABEL_514;
                }
                LODWORD(v31) = (*(__int64 (__fastcall **)(_QWORD, struct DXGPROCESS *, _QWORD, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v128 + 338) + 640LL) + 8LL) + 1104LL))(
                                 *(_QWORD *)(*((_QWORD *)v128 + 338) + 648LL),
                                 v216,
                                 (unsigned int)v15[3],
                                 v187,
                                 v15 + 4);
                break;
              case D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION:
                if ( v213.PrivateDriverDataSize < 0x20 )
                  goto LABEL_480;
                v190 = v15[1];
                if ( v190 > 1 )
                  goto LABEL_480;
                v191 = v15 + 2;
                if ( !v190 )
                {
                  *v191 = 0LL;
                  *((_QWORD *)v15 + 3) = 0LL;
                }
                if ( (unsigned int)(*v15 - 1000) > 1 )
                {
LABEL_480:
                  v177 = (_BYTE)v116 == 0;
                  goto LABEL_481;
                }
                if ( !v128 )
                {
                  v188 = WdLogNewEntry5_WdError(v119, v116);
                  *(_QWORD *)(v188 + 24) = 2972LL;
                  goto LABEL_514;
                }
                if ( *((_BYTE *)v128 + 209) )
                  goto LABEL_538;
                LODWORD(v31) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _OWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v128 + 338) + 640LL) + 8LL)
                                                                                           + 1112LL))(
                                 *(_QWORD *)(*((_QWORD *)v128 + 338) + 648LL),
                                 (unsigned int)v15[1],
                                 (unsigned int)*v15,
                                 v191);
                break;
              case D3DKMT_ESCAPE_DOD_SET_DIRTYRECT_MODE:
                if ( v213.PrivateDriverDataSize != 4 )
                  goto LABEL_526;
                if ( *((_QWORD *)v66 + 338) )
                {
LABEL_528:
                  v193 = WdLogNewEntry5_WdWarning(v119, v116, v128);
                  *(_QWORD *)(v193 + 24) = v66;
                  WdLogEvent5_WdWarning(v193);
                  v177 = v205 == 0;
                  goto LABEL_481;
                }
                v194 = *((_QWORD *)v66 + 337);
                v140 = v204;
                if ( !*(_QWORD *)(v194 + 384) )
                {
                  LODWORD(v31) = -1073741811;
                  v141 = 0;
                  goto LABEL_559;
                }
                *(_DWORD *)(v194 + 392) = *v15;
                LODWORD(v31) = 0;
                goto LABEL_561;
              case D3DKMT_ESCAPE_GET_EXTERNAL_DIAGNOSTICS:
                v154 = 0;
LABEL_403:
                v141 = 1;
                LODWORD(v31) = GetDiagnosticsBuffer(
                                 (struct _D3DKMT_DXGK_DIAGNOSTICS *)v15,
                                 v213.PrivateDriverDataSize,
                                 v154);
                LOBYTE(v116) = v205;
                v140 = v204;
                goto LABEL_558;
              case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS:
                if ( !DXGADAPTER::IsFullWDDMAdapter(v66) )
                  goto LABEL_528;
                LODWORD(v31) = ADAPTER_DISPLAY::ReportDisplayState(
                                 *((ADAPTER_DISPLAY **)v66 + 337),
                                 (struct _D3DKMT_DXGK_DIAGNOSTICS *)v15,
                                 v213.PrivateDriverDataSize);
                break;
              case D3DKMT_ESCAPE_QUERY_IOMMU_STATUS:
                if ( !v213.PrivateDriverDataSize )
                {
LABEL_526:
                  v192 = WdLogNewEntry5_WdError(v119, v116);
                  *(_QWORD *)(v192 + 24) = v213.PrivateDriverDataSize;
                  WdLogEvent5_WdError(v192);
                  v177 = v205 == 0;
LABEL_481:
                  if ( !v177 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v218);
                  COREACCESS::~COREACCESS((COREACCESS *)v236);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v237, v178);
                  if ( v5 )
                    DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
                  if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
                  goto LABEL_488;
                }
                if ( v221 )
                {
                  if ( !*((_BYTE *)v221 + 209) )
                  {
                    *(_BYTE *)v15 = *(_BYTE *)(*((_QWORD *)v221 + 338) + 1648LL);
                    LODWORD(v31) = 0;
                    v140 = v204;
                    goto LABEL_561;
                  }
LABEL_538:
                  v189 = (_BYTE)v116 == 0;
                }
                else
                {
                  v188 = WdLogNewEntry5_WdError(v119, v116);
                  *(_QWORD *)(v188 + 24) = 3043LL;
LABEL_514:
                  WdLogEvent5_WdError(v188);
                  v189 = v205 == 0;
                }
                if ( !v189 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v218);
                COREACCESS::~COREACCESS((COREACCESS *)v236);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v237, v195);
                if ( v5 )
                  DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
                if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
                if ( v99 )
                  DXGADAPTER::ReleaseReference(v99);
                DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v214);
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v206, v196);
                if ( v208 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v197, &EventProfilerExit, v198, v206);
                return 3221225659LL;
              default:
                LODWORD(v31) = -1073741811;
                v167 = WdLogNewEntry5_WdWarning(v119, v116, v221);
                *(_QWORD *)(v167 + 24) = v213.Type;
                goto LABEL_554;
            }
          }
LABEL_555:
          LOBYTE(v116) = v205;
LABEL_556:
          v140 = v204;
LABEL_557:
          v141 = 0;
LABEL_558:
          if ( (int)v31 < 0 )
          {
LABEL_559:
            if ( !v141 || (_DWORD)v31 != -2147483643 )
              goto LABEL_568;
          }
LABEL_561:
          if ( v140 )
          {
            v199 = v213.PrivateDriverDataSize;
            v200 = v213.pPrivateDriverData;
            v201 = (char *)v213.pPrivateDriverData + v213.PrivateDriverDataSize;
            if ( (unsigned __int64)v201 > MmUserProbeAddress || v201 <= v213.pPrivateDriverData )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v200, v15, v199);
            LOBYTE(v116) = v205;
          }
          else
          {
            memmove(v213.pPrivateDriverData, v15, v213.PrivateDriverDataSize);
            LOBYTE(v116) = v205;
          }
          goto LABEL_568;
        }
      }
      if ( v211 )
        goto LABEL_247;
      if ( v242 )
      {
        v125 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v119, v116);
        v125[3] = 275LL;
        v125[4] = 4LL;
        v125[5] = v240;
        v125[6] = 0LL;
        v125[7] = 0LL;
        WdLogEvent5_WdCriticalError(v125);
      }
      v119 = (__int64)v241;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v241 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v241 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v126, &EventBlockThread, v127, 72);
          KeWaitForSingleObject((char *)v241 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v241, 0LL);
        v119 = (__int64)v241;
      }
      v120 = 0LL;
      v243 = 0LL;
      v242 = 1;
      if ( *(_DWORD *)(v119 + 200) != 1 )
      {
LABEL_286:
        COREACCESS::Release((COREACCESS *)v240);
        LODWORD(v31) = -1073741130;
        LOBYTE(v116) = v220;
        goto LABEL_568;
      }
      if ( v239 != (unsigned int *)v241 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v238, 0LL);
        v119 = v239[50];
        if ( (_DWORD)v119 != 1 )
        {
          COREACCESS::Release((COREACCESS *)v238);
          goto LABEL_286;
        }
        v120 = 0LL;
      }
      v237[1] = 1;
      LODWORD(v31) = 0;
      v116 = v220;
      v205 = v220;
      v121 = v217;
      goto LABEL_249;
    }
    v86 = (v213.hDevice >> 6) & 0xFFFFFF;
    v87 = v213.hDevice >> 30;
    if ( (unsigned int)v86 < *((_DWORD *)v73 + 64) )
    {
      v75 = (unsigned int)v86;
      v88 = *((_QWORD *)v73 + 30);
      v74 = (struct DXGPROCESS *)*(unsigned int *)(v88 + 16 * v86 + 8);
      if ( (_DWORD)v87 == ((*(_DWORD *)(v88 + 16 * v86 + 8) >> 5) & 3)
        && ((unsigned __int16)v74 & 0x2000) == 0
        && ((unsigned __int8)v74 & 0x1F) != 0 )
      {
        v75 = 2LL * (unsigned int)v86;
        v74 = (struct DXGPROCESS *)((unsigned __int8)v74 & 0x1F);
        if ( (_BYTE)v74 == 3 )
        {
          v4 = *(_QWORD *)(v88 + 16LL * (unsigned int)v86);
          goto LABEL_160;
        }
        v89 = WdLogNewEntry5_WdError(v74, v87);
        *(_QWORD *)(v89 + 24) = 316LL;
        WdLogEvent5_WdError(v89);
      }
    }
    v4 = 0LL;
LABEL_160:
    v227 = v4;
    if ( !v4 || v66 != *(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL) && v66 != *(DXGADAPTER **)(v4 + 1848) )
    {
      v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v87, v75);
      v85[3] = v66;
      v85[4] = v213.hDevice;
      goto LABEL_151;
    }
    goto LABEL_165;
  }
  if ( IsCurrentConsoleSession(13LL, v43) || IsCurrentProcessAdmin() )
  {
    v69 = DXGGLOBAL::GetGlobal(v68, v67);
    DXGGLOBAL::ReferenceBddFallbackAdapter(v69, &v215);
  }
  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v214);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v206, v70);
  if ( v208 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v71, &EventProfilerExit, v72, v206);
  return 3221226021LL;
}
