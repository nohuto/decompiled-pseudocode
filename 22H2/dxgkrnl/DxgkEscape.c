/*
 * XREFs of DxgkEscape @ 0x1C01B43F0
 * Callers:
 *     ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037DE00 (-VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001560 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002F24 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00037DC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C00049B8 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0004A80 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0004F9C (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00053F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00073B4 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007894 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000A958 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000A9D0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C00165B0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSDDILOCK@@QEAA@XZ @ 0x1C0023F50 (--1DXGPROCESSDDILOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0024BAC (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0024EC4 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0024F28 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C003FFAC (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C003FFE4 (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     DxgkGetAdapterMiracastInfo @ 0x1C0061E60 (DxgkGetAdapterMiracastInfo.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0197D5C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C01B56FC (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C01B5728 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C01B625C (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01C71F0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB6E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1C01DA510 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02B7170 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C02B84D8 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C02BB100 (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C02BDA78 (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C02BF2E4 (-ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02CE4F4 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkWriteUserModeDiagEntry @ 0x1C02D662C (DxgkWriteUserModeDiagEntry.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C02EACB4 (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0307E5C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C030A784 (DxgkpIsDrtEnabled.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C030EFB4 (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C030FF48 (_DxgkEscape_--_2_--ENSURE_DATA_DELETION--_ENSURE_DATA_DELETION.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C030FF7C (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0310080 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0310150 (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C0310FBC (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1C0311188 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z.c)
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C03116CC (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C0311964 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?InternalEscapeEnabled@@YAEXZ @ 0x1C0311AF8 (-InternalEscapeEnabled@@YAEXZ.c)
 *     ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C0311B24 (-IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C031266C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C0314B44 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     OutputDuplGetDebugInfo @ 0x1C0330994 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C0330A90 (OutputDuplGetDiagnosticBuffer.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0344C50 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C0360648 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C038875C (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     DxgkHandleMiracastEscape @ 0x1C03A0098 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C03A0CA0 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C03A4C34 (DxgkHandleIndirectEscape.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C03ACB98 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C03C373C (DxgkPrepareCcdDatabaseForAccess.c)
 */

__int64 __fastcall DxgkEscape(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_ESCAPE *v3; // rbx
  __int64 v4; // rdi
  DXGDEVICE *v5; // rsi
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r14
  struct _D3DKMT_DISPLAYMODELIST *v8; // r15
  bool v9; // r13
  D3DKMT_ESCAPETYPE Type; // edx
  UINT PrivateDriverDataSize; // eax
  unsigned int v12; // ecx
  size_t v13; // rbx
  size_t v14; // r8
  void *pPrivateDriverData; // rdx
  char *v16; // rax
  D3DKMT_ESCAPETYPE v17; // ecx
  __int64 v18; // rbx
  __int64 hAdapter; // rdx
  __int64 v20; // rbx
  D3DKMT_HANDLE v21; // esi
  __int64 v22; // rbx
  unsigned int v23; // ecx
  int v24; // ecx
  D3DKMT_HANDLE hDevice; // edx
  D3DKMT_HANDLE hContext; // edx
  __int64 v27; // rax
  __int64 v28; // r14
  DXGADAPTER *v29; // r13
  char *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r9
  enum _D3DKMT_ESCAPETYPE v33; // r15d
  UINT Value; // esi
  bool v35; // r12
  unsigned int *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // edx
  unsigned __int8 v40; // al
  struct _D3DKMT_DISPLAYMODELIST *v41; // r11
  UINT v42; // ecx
  DXGDEVICE *v43; // r15
  struct _D3DKMT_DISPLAYMODELIST *v44; // r13
  DXGPROCESS *v45; // r14
  struct DXGGLOBAL *v46; // rax
  char v47; // al
  __int64 v48; // rdi
  __int64 v49; // rsi
  DXGGLOBAL *v50; // rax
  __int64 v51; // rax
  bool v52; // r9
  char v53; // bl
  size_t v54; // r8
  void *v55; // rcx
  char *v56; // rax
  DXGCONTEXT *v57; // rdi
  DXGGLOBAL **v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // r8
  D3DKMT_HANDLE v62; // eax
  __int64 v63; // r9
  unsigned int v64; // ecx
  int v65; // ecx
  unsigned int v66; // ebx
  __int64 v67; // r8
  D3DKMT_HANDLE v68; // eax
  __int64 v69; // r10
  unsigned int v70; // ecx
  int v71; // ecx
  char v72; // si
  __int64 v73; // rdx
  __int64 v74; // rcx
  bool v75; // sf
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r8
  unsigned int v81; // eax
  size_t v82; // r8
  void *v83; // rcx
  char *v84; // rdx
  unsigned __int64 Width; // rcx
  __int64 v86; // rdx
  __int64 v87; // rax
  char *v88; // rdx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rcx
  __int64 v93; // r8
  struct DXGPROCESS *v94; // rax
  unsigned int DiagnosticsBuffer; // eax
  char *v96; // rdx
  DXGGLOBAL *Global; // rax
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r14
  __int64 v101; // rbx
  unsigned int v102; // ecx
  int v103; // ecx
  unsigned __int64 v104; // rcx
  __int64 v105; // rdx
  unsigned int v106; // edi
  size_t v107; // r8
  void *v108; // rcx
  char *v109; // rax
  DXGCONTEXT *v110; // rax
  __int64 v111; // rcx
  __int64 v112; // r8
  void *v113; // r9
  __int64 v114; // rcx
  __int64 v115; // r8
  void *v116; // r9
  int v117; // r8d
  unsigned int v118; // r14d
  unsigned int v119; // esi
  unsigned int v120; // ebx
  unsigned int HostProcess; // eax
  int v122; // eax
  unsigned __int64 v123; // rdx
  DXGADAPTER *v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // r8
  ADAPTER_RENDER **v127; // rcx
  D3DDDI_RATIONAL *p_RefreshRate; // rbx
  _QWORD *v129; // r8
  __int64 v130; // rax
  DXGCONTEXT *v131; // rax
  __int64 v132; // rcx
  UINT ModeCount; // eax
  __int64 v134; // rcx
  int v135; // eax
  __int64 v136; // rcx
  __int64 v137; // rcx
  const wchar_t *v138; // r9
  DXGADAPTER *v139; // rcx
  ADAPTER_DISPLAY *v140; // rcx
  __int64 v141; // rcx
  unsigned int CurrentProcessSessionId; // eax
  ADAPTER_RENDER **v143; // rcx
  DXGCONTEXT *v144; // rax
  char v145; // r9
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned int v147; // r8d
  int Height; // eax
  __int64 v149; // rax
  int v150; // eax
  __int64 v151; // rax
  const wchar_t *v152; // r9
  __int64 v153; // rax
  char v154; // [rsp+50h] [rbp-568h]
  bool v155; // [rsp+51h] [rbp-567h]
  DXGDEVICE *v156; // [rsp+58h] [rbp-560h]
  DXGCONTEXT *v157; // [rsp+60h] [rbp-558h]
  int v158; // [rsp+68h] [rbp-550h] BYREF
  __int64 v159; // [rsp+70h] [rbp-548h]
  char v160; // [rsp+78h] [rbp-540h]
  struct _D3DKMT_DISPLAYMODELIST *v161; // [rsp+80h] [rbp-538h]
  volatile signed __int64 *v162; // [rsp+88h] [rbp-530h]
  struct DXGADAPTER *v163; // [rsp+90h] [rbp-528h]
  _D3DKMT_ESCAPE v164; // [rsp+98h] [rbp-520h] BYREF
  void *v165[2]; // [rsp+B8h] [rbp-500h] BYREF
  unsigned __int64 v166; // [rsp+C8h] [rbp-4F0h] BYREF
  unsigned __int8 v167[8]; // [rsp+D0h] [rbp-4E8h] BYREF
  char v168[8]; // [rsp+D8h] [rbp-4E0h] BYREF
  __int64 v169; // [rsp+E0h] [rbp-4D8h]
  char v170; // [rsp+E8h] [rbp-4D0h]
  DXGPROCESS *v171; // [rsp+F0h] [rbp-4C8h] BYREF
  __int64 v172; // [rsp+F8h] [rbp-4C0h]
  int v173; // [rsp+100h] [rbp-4B8h]
  DXGADAPTER *v174; // [rsp+108h] [rbp-4B0h] BYREF
  __int64 v175; // [rsp+110h] [rbp-4A8h]
  int v176; // [rsp+118h] [rbp-4A0h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+120h] [rbp-498h] BYREF
  DXGDEVICE *v178; // [rsp+128h] [rbp-490h]
  _DXGKARG_ESCAPE v179; // [rsp+130h] [rbp-488h] BYREF
  unsigned __int64 v180; // [rsp+168h] [rbp-450h] BYREF
  _BYTE v181[24]; // [rsp+170h] [rbp-448h] BYREF
  struct _DXGKARG_ESCAPE v182; // [rsp+188h] [rbp-430h] BYREF
  struct _DXGKARG_ESCAPE v183; // [rsp+1B8h] [rbp-400h] BYREF
  _BYTE v184[24]; // [rsp+1E8h] [rbp-3D0h] BYREF
  _BYTE v185[64]; // [rsp+200h] [rbp-3B8h] BYREF
  _BYTE v186[8]; // [rsp+240h] [rbp-378h] BYREF
  _BYTE v187[16]; // [rsp+248h] [rbp-370h] BYREF
  unsigned int *v188; // [rsp+258h] [rbp-360h]
  _BYTE v189[16]; // [rsp+288h] [rbp-330h] BYREF
  DXGADAPTER *v190; // [rsp+298h] [rbp-320h]
  char v191; // [rsp+2A0h] [rbp-318h]
  __int64 v192; // [rsp+2A8h] [rbp-310h]
  int v193; // [rsp+2D0h] [rbp-2E8h] BYREF
  struct _D3DKMT_DISPLAYMODELIST v194; // [rsp+2D4h] [rbp-2E4h]
  __int128 v195; // [rsp+2DCh] [rbp-2DCh]
  __int128 v196; // [rsp+2ECh] [rbp-2CCh]
  int v197; // [rsp+2FCh] [rbp-2BCh]
  _DWORD v198[2]; // [rsp+300h] [rbp-2B8h] BYREF
  __int128 v199; // [rsp+308h] [rbp-2B0h]
  __int128 v200; // [rsp+318h] [rbp-2A0h]
  __int64 v201; // [rsp+328h] [rbp-290h]
  _QWORD v202[10]; // [rsp+330h] [rbp-288h] BYREF
  _BYTE v203[512]; // [rsp+380h] [rbp-238h] BYREF

  v3 = (_D3DKMT_ESCAPE *)a1;
  v158 = -1;
  v4 = 0LL;
  v159 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v160 = 1;
    v158 = 2016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2016);
  }
  else
  {
    v160 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v158, 2016);
  v5 = 0LL;
  v156 = 0LL;
  v178 = 0LL;
  v157 = 0LL;
  v172 = 0LL;
  Current = DXGPROCESS::GetCurrent(v6);
  v171 = Current;
  v8 = (struct _D3DKMT_DISPLAYMODELIST *)v203;
  v161 = (struct _D3DKMT_DISPLAYMODELIST *)v203;
  memset(&v164, 0, sizeof(v164));
  v9 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v155 = v9;
  if ( !Current )
  {
    LODWORD(v28) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return (unsigned int)v28;
    goto LABEL_675;
  }
  if ( v9 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_ESCAPE *)MmUserProbeAddress;
    v164 = *v3;
  }
  else
  {
    v164 = *v3;
  }
  Type = v164.Type;
  if ( v164.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 424LL))() )
    {
LABEL_178:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
      if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225506LL;
      goto LABEL_337;
    }
    Type = v164.Type;
  }
  else if ( v164.Type >= D3DKMT_ESCAPE_WIN32K_START )
  {
    v66 = (*(__int64 (__fastcall **)(_D3DKMT_ESCAPE *))(*((_QWORD *)Current + 11) + 416LL))(&v164);
LABEL_137:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( !v160 )
      return v66;
    v74 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v75 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_171:
    if ( v75 )
      McTemplateK0q_EtwWriteTransfer(v74, &EventProfilerExit, v67, v158);
    return v66;
  }
  if ( Type < D3DKMT_ESCAPE_VIDMM )
  {
LABEL_11:
    PrivateDriverDataSize = v164.PrivateDriverDataSize;
    goto LABEL_12;
  }
  if ( Type == D3DKMT_ESCAPE_VIDMM || Type == D3DKMT_ESCAPE_VIDSCH || (unsigned int)(Type - 28) <= 1 )
  {
    if ( !InternalEscapeEnabled() )
    {
      WdLogSingleEntry1(3LL, v164.Type);
      goto LABEL_178;
    }
    Type = v164.Type;
  }
  if ( Type != D3DKMT_ESCAPE_VIDMM )
    goto LABEL_11;
  PrivateDriverDataSize = v164.PrivateDriverDataSize;
  if ( v164.PrivateDriverDataSize < 0x440 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      goto LABEL_684;
    goto LABEL_683;
  }
LABEL_12:
  *(_OWORD *)v165 = 0LL;
  if ( Type == D3DKMT_ESCAPE_VIDSCH && PrivateDriverDataSize <= 0x30 )
  {
    v12 = 48;
    goto LABEL_14;
  }
  v12 = PrivateDriverDataSize;
  if ( PrivateDriverDataSize <= 0x200 )
  {
LABEL_14:
    v13 = v12;
    goto LABEL_15;
  }
  v13 = PrivateDriverDataSize;
  v8 = (struct _D3DKMT_DISPLAYMODELIST *)operator new[](PrivateDriverDataSize, 0x4B677844u, 258LL);
  v161 = v8;
  v165[0] = v8;
  PrivateDriverDataSize = v164.PrivateDriverDataSize;
  Type = v164.Type;
LABEL_15:
  if ( !v8 )
  {
    WdLogSingleEntry2(6LL, v13, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating private driver data (size 0x%I64x), returning 0x%I64x",
      v13,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( v160 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v80, v158);
    return 3221225495LL;
  }
  if ( Type == D3DKMT_ESCAPE_VIDSCH )
  {
    memset(v8, 0, v13);
    PrivateDriverDataSize = v164.PrivateDriverDataSize;
  }
  if ( v9 )
  {
    v14 = PrivateDriverDataSize;
    pPrivateDriverData = v164.pPrivateDriverData;
    v16 = (char *)v164.pPrivateDriverData + PrivateDriverDataSize;
    if ( v16 < v164.pPrivateDriverData || (unsigned __int64)v16 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v8, pPrivateDriverData, v14);
  }
  else
  {
    memmove(v8, v164.pPrivateDriverData, PrivateDriverDataSize);
  }
  v17 = v164.Type;
  if ( (*(_BYTE *)&v164.Flags.0 & 0x40) != 0 && (v164.Type || !v164.hAdapter || (*(_BYTE *)&v164.Flags.0 & 1) != 0) )
  {
    WdLogSingleEntry1(3LL, 1372LL);
    goto LABEL_198;
  }
  if ( v164.Type >= D3DKMT_ESCAPE_VIDMM && v164.Type <= D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( v164.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
    {
      v66 = DxgkpProcessBddFallbackRequest();
      DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
      goto LABEL_137;
    }
    switch ( v164.Type )
    {
      case D3DKMT_ESCAPE_VIDMM:
        VidPnSourceId = v8->VidPnSourceId;
        if ( v8->VidPnSourceId == 5 )
        {
          v66 = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)v8);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
          goto LABEL_137;
        }
        if ( VidPnSourceId == 6 )
        {
          v66 = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)v8);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
          goto LABEL_137;
        }
        if ( VidPnSourceId == 13 )
        {
          v66 = DxgEscapeEvictByCriteria((struct _D3DKMT_VIDMM_ESCAPE *)v8);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
          goto LABEL_137;
        }
        break;
      case D3DKMT_ESCAPE_DRT_TEST:
        if ( v164.PrivateDriverDataSize < 0xC
          || v164.PrivateDriverDataSize < v8->ModeCount
          || v8->VidPnSourceId != 1484026436 )
        {
          WdLogSingleEntry1(3LL, v164.Type);
          goto LABEL_198;
        }
        if ( !InternalEscapeEnabled() )
        {
          WdLogSingleEntry1(3LL, v164.Type);
LABEL_209:
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
          if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
            return 3221225506LL;
LABEL_337:
          McTemplateK0q_EtwWriteTransfer(v76, &EventProfilerExit, v77, v158);
          return 3221225506LL;
        }
        Width = (int)v8->pModeList[0].Width;
        if ( !(_DWORD)Width && !v164.hAdapter
          || (unsigned int)Width <= 0x24 && (v86 = 0x1093482000LL, _bittest64(&v86, Width)) )
        {
          v66 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v8, 0LL);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
          goto LABEL_137;
        }
        if ( (unsigned int)Width <= 0x2F )
        {
          v87 = 0xA00800000000LL;
          if ( _bittest64(&v87, Width) )
          {
            v66 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v8, 0LL);
            if ( (v66 & 0x80000000) == 0 )
            {
              if ( v9 )
              {
                v82 = v164.PrivateDriverDataSize;
                v83 = v164.pPrivateDriverData;
                v88 = (char *)v164.pPrivateDriverData + v164.PrivateDriverDataSize;
                if ( (unsigned __int64)v88 > MmUserProbeAddress || v88 <= v164.pPrivateDriverData )
                  *(_BYTE *)MmUserProbeAddress = 0;
LABEL_276:
                memmove(v83, v8, v82);
              }
              else
              {
LABEL_222:
                memmove(v164.pPrivateDriverData, v8, v164.PrivateDriverDataSize);
              }
            }
LABEL_223:
            DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
            if ( !v160 )
              return v66;
            v75 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
            goto LABEL_171;
          }
        }
        v17 = v164.Type;
        break;
      case D3DKMT_ESCAPE_DIAGNOSTICS:
      case D3DKMT_ESCAPE_GET_EXTERNAL_DIAGNOSTICS:
        LOBYTE(v4) = v164.Type == D3DKMT_ESCAPE_DIAGNOSTICS;
        DiagnosticsBuffer = GetDiagnosticsBuffer((struct _D3DKMT_DXGK_DIAGNOSTICS *)v8, v164.PrivateDriverDataSize, v4);
        v66 = DiagnosticsBuffer;
        if ( (int)(DiagnosticsBuffer + 0x80000000) >= 0 && DiagnosticsBuffer != -2147483643 )
          goto LABEL_223;
        if ( !v9 )
          goto LABEL_222;
        v82 = v164.PrivateDriverDataSize;
        v83 = v164.pPrivateDriverData;
        v96 = (char *)v164.pPrivateDriverData + v164.PrivateDriverDataSize;
        if ( (unsigned __int64)v96 > MmUserProbeAddress || v96 <= v164.pPrivateDriverData )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_276;
      case D3DKMT_ESCAPE_MIRACAST_DISPLAY_REQUEST:
      case D3DKMT_ESCAPE_IDD_REQUEST:
        if ( v164.Type == D3DKMT_ESCAPE_IDD_REQUEST )
          v81 = DxgkHandleIndirectEscape(v164.PrivateDriverDataSize, v8);
        else
          v81 = DxgkHandleMiracastEscape(v164.PrivateDriverDataSize, v8);
        v66 = v81;
        if ( (int)(v81 + 0x80000000) >= 0 && v81 != -2147483643 )
          goto LABEL_223;
        if ( !v9 )
          goto LABEL_222;
        v82 = v164.PrivateDriverDataSize;
        v83 = v164.pPrivateDriverData;
        v84 = (char *)v164.pPrivateDriverData + v164.PrivateDriverDataSize;
        if ( (unsigned __int64)v84 > MmUserProbeAddress || v84 <= v164.pPrivateDriverData )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_276;
      case D3DKMT_ESCAPE_FORCE_BDDFALLBACK_HEADLESS:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_209;
        if ( v164.PrivateDriverDataSize != 1 )
          goto LABEL_198;
        byte_1C014049B = v8->VidPnSourceId;
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
        if ( v160 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
LABEL_264:
          McTemplateK0q_EtwWriteTransfer(v90, &EventProfilerExit, v91, v158);
        return 0LL;
      case D3DKMT_ESCAPE_REQUEST_MACHINE_CRASH:
        if ( v164.PrivateDriverDataSize != 24 )
          goto LABEL_198;
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
        if ( v160 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v92, &EventProfilerExit, v93, v158);
        return 3221225473LL;
      case D3DKMT_ESCAPE_SOFTGPU_ENABLE_DISABLE_HMD:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_209;
        if ( v164.PrivateDriverDataSize != 200 )
          goto LABEL_198;
        v94 = DXGPROCESS::GetCurrent((unsigned int)v164.Type);
        if ( !v94 )
        {
          WdLogSingleEntry1(2LL, 1566LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 1566LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_198;
        }
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v184, v94);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v184, 1u);
        memset(v202, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v202[1]);
        v202[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v202[3]) = 46;
        LOBYTE(v202[6]) = -1;
        v66 = DxgkEnableDisableTargetAsHMD(
                (struct _D3DKMT_SOFTGPU_LUID_TARGET *)v8,
                v8->pModeList[4].Format,
                v8->pModeList[4].IntegerRefreshRate,
                (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v202);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v184);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
        goto LABEL_137;
      case D3DKMT_ESCAPE_LOG_CODEPOINT_PACKET:
        if ( v164.PrivateDriverDataSize != 16 )
          goto LABEL_198;
        v172 = 0LL;
        DxgkLogCodePointPacket(v8->VidPnSourceId, v8->ModeCount, v8->pModeList[0].Width, v8->pModeList[0].Height, 0LL);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
        if ( v160 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          goto LABEL_264;
        return 0LL;
      case D3DKMT_ESCAPE_LOG_USERMODE_DAIG_PACKET:
        if ( v164.PrivateDriverDataSize < 0x30 || v164.PrivateDriverDataSize < v8->ModeCount )
          goto LABEL_198;
        v66 = DxgkWriteUserModeDiagEntry((struct _DXGK_DIAG_HEADER *)v8);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
        goto LABEL_137;
      case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS|D3DKMT_ESCAPE_TDRDBGCTRL:
        v66 = DxgkPrepareCcdDatabaseForAccess();
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
        goto LABEL_137;
      default:
        break;
    }
  }
  v18 = 0LL;
  v175 = 0LL;
  v174 = 0LL;
  if ( v17 == D3DKMT_ESCAPE_BDD_FALLBACK )
  {
    if ( IsCurrentConsoleSession() || IsCurrentProcessAdmin() )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::ReferenceBddFallbackAdapter(Global, &v166);
    }
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( v160 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v98, &EventProfilerExit, v99, v158);
    return 3221226021LL;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v181, Current);
  hAdapter = v164.hAdapter;
  if ( v164.hAdapter )
  {
    v20 = (v164.hAdapter >> 6) & 0xFFFFFF;
    v21 = v164.hAdapter >> 30;
    if ( (*((_DWORD *)Current + 106) & 0x100) == 0 )
    {
      if ( (unsigned int)v20 < *((_DWORD *)Current + 74) )
      {
        v22 = *((_QWORD *)Current + 35) + 16 * v20;
        v23 = *(_DWORD *)(v22 + 8);
        if ( v21 == ((v23 >> 5) & 3) && (v23 & 0x2000) == 0 )
        {
          v24 = v23 & 0x1F;
          if ( v24 )
          {
            if ( v24 == 1 )
            {
              v18 = *(_QWORD *)v22;
LABEL_36:
              v5 = 0LL;
              v175 = v18;
              goto LABEL_37;
            }
            WdLogSingleEntry1(2LL, 316LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
            hAdapter = v164.hAdapter;
          }
        }
      }
      v18 = 0LL;
      goto LABEL_36;
    }
    v100 = *((_QWORD *)Current + 76);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v100 + 248));
    if ( (unsigned int)v20 < *(_DWORD *)(v100 + 296) )
    {
      v101 = *(_QWORD *)(v100 + 280) + 16 * v20;
      v102 = *(_DWORD *)(v101 + 8);
      if ( v21 == ((v102 >> 5) & 3) && (v102 & 0x2000) == 0 )
      {
        v103 = v102 & 0x1F;
        if ( v103 )
        {
          if ( v103 == 1 )
          {
            v18 = *(_QWORD *)v101;
            goto LABEL_292;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v18 = 0LL;
LABEL_292:
    _InterlockedDecrement((volatile signed __int32 *)(v100 + 264));
    ExReleasePushLockSharedEx(v100 + 248, 0LL);
    KeLeaveCriticalRegion();
    hAdapter = v164.hAdapter;
    Current = v171;
    v8 = v161;
    goto LABEL_36;
  }
LABEL_37:
  if ( !v18 )
  {
    LODWORD(v28) = -1073741811;
    WdLogSingleEntry2(3LL, hAdapter, -1073741811LL);
    DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v181);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return (unsigned int)v28;
    goto LABEL_675;
  }
  hDevice = v164.hDevice;
  if ( v164.hDevice )
  {
    v62 = (v164.hDevice >> 6) & 0xFFFFFF;
    if ( v62 < *((_DWORD *)Current + 74) )
    {
      v63 = *((_QWORD *)Current + 35) + 16LL * v62;
      v64 = *(_DWORD *)(v63 + 8);
      if ( v164.hDevice >> 30 == ((v64 >> 5) & 3) && (v64 & 0x2000) == 0 )
      {
        v65 = v64 & 0x1F;
        if ( v65 )
        {
          if ( v65 == 3 )
          {
            v5 = *(DXGDEVICE **)v63;
            v156 = *(DXGDEVICE **)v63;
LABEL_133:
            v178 = v5;
            if ( !v5 || v18 != *(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) && v18 != *((_QWORD *)v5 + 235) )
            {
              WdLogSingleEntry2(3LL, v18, hDevice);
              DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v181);
              goto LABEL_198;
            }
            goto LABEL_39;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
          hDevice = v164.hDevice;
        }
      }
    }
    v156 = 0LL;
    v5 = 0LL;
    goto LABEL_133;
  }
LABEL_39:
  hContext = v164.hContext;
  if ( !v164.hContext )
  {
    v27 = 0LL;
    goto LABEL_41;
  }
  v68 = (v164.hContext >> 6) & 0xFFFFFF;
  if ( v68 >= *((_DWORD *)Current + 74) )
    goto LABEL_147;
  v69 = *((_QWORD *)Current + 35) + 16LL * v68;
  v70 = *(_DWORD *)(v69 + 8);
  if ( v164.hContext >> 30 != ((v70 >> 5) & 3) )
    goto LABEL_147;
  if ( (v70 & 0x2000) != 0 )
    goto LABEL_147;
  v71 = v70 & 0x1F;
  if ( !v71 )
    goto LABEL_147;
  if ( v71 != 7 )
  {
    WdLogSingleEntry1(2LL, 316LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
    hContext = v164.hContext;
LABEL_147:
    v27 = 0LL;
    goto LABEL_148;
  }
  v27 = *(_QWORD *)v69;
LABEL_148:
  v157 = (DXGCONTEXT *)v27;
  v172 = v27;
  if ( !v27 || !v5 || v5 != *(DXGDEVICE **)(v27 + 16) )
  {
    WdLogSingleEntry3(3LL, v18, v5, hContext);
    DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v181);
    goto LABEL_198;
  }
LABEL_41:
  if ( v5 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v5 + 8);
    v18 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL);
    v175 = v18;
  }
  if ( v27 )
    _InterlockedIncrement64((volatile signed __int64 *)(v27 + 32));
  v162 = (volatile signed __int64 *)(v18 + 24);
  _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24));
  DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v181);
  if ( *(_DWORD *)(v18 + 2096) >= 0x5023u )
  {
    if ( (*(_BYTE *)&v164.Flags.0 & 0x10) != 0 || (v164.Flags.Value & 0xFFFFFF00) != 0 )
    {
      WdLogSingleEntry1(3LL, v18);
      goto LABEL_198;
    }
    if ( (*(_BYTE *)&v164.Flags.0 & 0x20) != 0 )
    {
      WdLogSingleEntry2(3LL, v18, 1756LL);
      goto LABEL_198;
    }
  }
  v163 = (struct DXGADAPTER *)v18;
  v180 = 0LL;
  LODWORD(v28) = DxgkpGetPairingAdapters((struct DXGADAPTER *)v18, 0, &v174, &v180, 0LL, 0LL, 0);
  if ( (int)v28 >= 0 && _InterlockedExchangeAdd64((volatile signed __int64 *)v174 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v29 = v174;
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v174 + 2), v174);
  }
  else
  {
    v29 = v174;
  }
  if ( v164.Type != D3DKMT_ESCAPE_VIDMM )
  {
    if ( v164.Type == D3DKMT_ESCAPE_DRT_TEST )
    {
      v104 = (int)v8->pModeList[0].Width;
      if ( (unsigned int)v104 <= 0x2E )
      {
        v105 = 0x512744204000LL;
        if ( _bittest64(&v105, v104) )
        {
          if ( (_DWORD)v104 == 33 )
          {
            v106 = -1073741823;
          }
          else if ( (_DWORD)v104 == 32 )
          {
            v106 = -1073741823;
          }
          else
          {
            v106 = DxgkDrtTestEscape((struct DXGADAPTER *)v18, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v8, 0LL);
            if ( (v106 & 0x80000000) == 0 )
            {
              if ( v155 )
              {
                v107 = v164.PrivateDriverDataSize;
                v108 = v164.pPrivateDriverData;
                v109 = (char *)v164.pPrivateDriverData + v164.PrivateDriverDataSize;
                if ( (unsigned __int64)v109 > MmUserProbeAddress || v109 <= v164.pPrivateDriverData )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v108, v8, v107);
                v110 = v157;
                goto LABEL_317;
              }
              memmove(v164.pPrivateDriverData, v8, v164.PrivateDriverDataSize);
            }
          }
          v110 = v157;
LABEL_317:
          if ( v110 )
            DXGCONTEXT::ReleaseReference(v110);
          if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
          if ( v160 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v111, &EventProfilerExit, v112, v158);
          return v106;
        }
      }
    }
LABEL_54:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v186, (struct DXGADAPTER *const)v18, 0LL);
    COREACCESS::COREACCESS((COREACCESS *)v185, 0LL);
    v173 = 0;
    v169 = v18;
    v154 = 0;
    v170 = 0;
    v33 = v164.Type;
    if ( v164.Type == D3DKMT_ESCAPE_BDD_FALLBACK )
    {
      COREACCESS::AcquireShared((COREACCESS *)v185, v30);
      Value = v164.Flags.Value;
      v33 = v164.Type;
      goto LABEL_377;
    }
    Value = v164.Flags.Value;
    if ( (*(_BYTE *)&v164.Flags.0 & 1) == 0 )
    {
      v35 = v164.Type == D3DKMT_ESCAPE_DRT_TEST && v161->pModeList[0].Width == 23 && v161->pModeList[0].Height - 2 <= 1;
      if ( v164.Type == D3DKMT_ESCAPE_DRIVERPRIVATE
        && ((LODWORD(v36) = DXGADAPTER::GetAdapterType((DXGADAPTER *)v18), v31 = *v36, (v31 & 0x10) != 0)
         || (Value & 0x80u) != 0
         || *(_DWORD *)(v18 + 2096) >= 0x5023u && (Value & 8) != 0) )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v168);
        v31 = *(_DWORD *)(v18 + 200) == 1;
        if ( *(_DWORD *)(v18 + 200) != 1 )
        {
          LODWORD(v28) = -1073741130;
          v53 = v170;
          goto LABEL_673;
        }
        Value = v164.Flags.Value;
        v33 = v164.Type;
        v29 = v174;
        v154 = v170;
      }
      else if ( !v35 )
      {
        if ( v191 )
          WdLogSingleEntry5(0LL, 275LL, 4LL, v189, 0LL, 0LL);
        v31 = (__int64)v190;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v190 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v190 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v37, &EventBlockThread, v38, 72);
            KeWaitForSingleObject((char *)v190 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v190, 0LL);
          v31 = (__int64)v190;
        }
        v192 = 0LL;
        v191 = 1;
        if ( *(_DWORD *)(v31 + 200) == 1 )
        {
          if ( v188 != (unsigned int *)v190 )
          {
            COREACCESS::AcquireShared((COREACCESS *)v187, 0LL);
            v31 = v188[50];
            if ( (_DWORD)v31 != 1 )
            {
              COREACCESS::Release((COREACCESS *)v187);
              COREACCESS::Release((COREACCESS *)v189);
              LODWORD(v28) = -1073741130;
              v53 = v170;
              goto LABEL_673;
            }
          }
          v186[1] = 1;
          LODWORD(v28) = 0;
          Value = v164.Flags.Value;
          v33 = v164.Type;
          v29 = v174;
          v154 = v170;
          v39 = 0;
LABEL_72:
          if ( v164.hDevice )
          {
            v43 = v156;
            if ( *((_DWORD *)v156 + 152) != 1 )
            {
              LODWORD(v28) = -1073741130;
              v53 = v170;
              goto LABEL_152;
            }
            Value = v164.Flags.Value;
            v33 = v164.Type;
            v29 = v174;
            v154 = v170;
          }
          v40 = 1;
          v167[0] = 1;
          if ( v33 == D3DKMT_ESCAPE_DRIVERPRIVATE && (Value & 0x40) != 0 )
          {
            if ( !v29 )
            {
LABEL_382:
              LODWORD(v28) = -1073741811;
              v53 = v154;
              goto LABEL_673;
            }
            LODWORD(v28) = DxgkpDriverKnownEscape(v171, v29, v161, v164.PrivateDriverDataSize, v167);
            if ( (int)v28 < 0 )
              goto LABEL_401;
            Value = v164.Flags.Value;
            v33 = v164.Type;
            v40 = v167[0];
            v39 = v173;
          }
          if ( !v29 || !*((_BYTE *)v29 + 209) )
          {
            v41 = v161;
            goto LABEL_78;
          }
          v18 = (__int64)v29;
          v175 = (__int64)v29;
          LOBYTE(v31) = 0;
          if ( v33 == D3DKMT_ESCAPE_DRIVERPRIVATE && v40
            || (unsigned int)v33 <= D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION && (v117 = 805306378, _bittest(&v117, v33)) )
          {
            LOBYTE(v31) = 1;
          }
          v41 = v161;
          if ( v33 == D3DKMT_ESCAPE_DRT_TEST && v161->pModeList[0].Width == 49 )
          {
            LODWORD(v28) = DxgkDrtTestEscape(
                             v29,
                             (struct _D3DKMT_DRT_ESCAPE_HEAD *)v161,
                             (struct COREADAPTERACCESS *)v186);
            if ( (int)v28 < 0 )
            {
LABEL_401:
              v44 = v161;
LABEL_402:
              v43 = v156;
LABEL_100:
              v52 = v155;
LABEL_101:
              v53 = v154;
LABEL_102:
              if ( (int)v28 < 0 )
                goto LABEL_152;
              goto LABEL_103;
            }
            v33 = v164.Type;
          }
          else if ( !(_BYTE)v31 )
          {
LABEL_78:
            if ( v33 == D3DKMT_ESCAPE_DRIVERPRIVATE )
            {
              memset(&v179, 0, sizeof(v179));
              if ( v40 )
              {
                if ( *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v18 + 584) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
                {
                  WdLogSingleEntry2(3LL, v18, -1073741637LL);
                  LODWORD(v28) = -1073741637;
                  v53 = v154;
                  goto LABEL_673;
                }
                v42 = v164.PrivateDriverDataSize;
                if ( !v164.PrivateDriverDataSize || !v164.pPrivateDriverData )
                {
                  LODWORD(v28) = -1073741811;
                  WdLogSingleEntry3(3LL, v164.PrivateDriverDataSize, v164.pPrivateDriverData, -1073741811LL);
                  v53 = v154;
                  goto LABEL_673;
                }
                v43 = v156;
                if ( v156 )
                  v179.hDevice = (HANDLE)*((_QWORD *)v156 + 77);
                if ( v157 )
                  v179.hContext = (HANDLE)*((_QWORD *)v157 + 23);
                else
                  v179.hContext = 0LL;
                v179.Flags.Value = Value;
                v44 = v161;
                if ( (*(_DWORD *)(v18 + 436) & 8) == 0 && *(_DWORD *)(v18 + 412) == 4098 )
                {
                  if ( !(unsigned int)IsAMDDriverEscapeAllowed(v161, v164.PrivateDriverDataSize) )
                  {
                    LODWORD(v28) = -1073741637;
                    v53 = v154;
                    goto LABEL_152;
                  }
                  v42 = v164.PrivateDriverDataSize;
                  LOBYTE(Value) = v164.Flags.0;
                }
                if ( (Value & 0x80u) != 0 )
                {
                  LODWORD(v28) = -1073741637;
                  WdLogSingleEntry1(2LL, -1073741637LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Driver Common Escape is block for (0x%I64x)",
                    -1073741637LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                else
                {
                  v45 = v171;
                  if ( (*((_DWORD *)v171 + 106) & 0x100) != 0
                    || ((v46 = DXGGLOBAL::GetGlobal(), !*((_BYTE *)v46 + 1691))
                     || !DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                           (struct DXGGLOBAL *)((char *)v46 + 1684),
                           (struct DXGADAPTER *)v18)
                      ? (v47 = 0)
                      : (v47 = 1),
                        v42 = v164.PrivateDriverDataSize,
                        v47) )
                  {
                    LODWORD(v4) = 32;
                  }
                  v179.Flags.Value = v4 | v179.Flags.Value & 0xFFFFFFDF;
                  v179.PrivateDriverDataSize = v42;
                  v179.pPrivateDriverData = v44;
                  v48 = *(_QWORD *)(v18 + 2928);
                  if ( v48 )
                  {
                    KeEnterCriticalRegion();
                    ExAcquirePushLockSharedEx(v48 + 72, 0LL);
                    _InterlockedIncrement((volatile signed __int32 *)(v48 + 88));
                    v49 = *(unsigned int *)(v18 + 240);
                    v50 = DXGGLOBAL::GetGlobal();
                    if ( (unsigned int)v49 < DXGGLOBAL::GetMaximumGlobalAdapterCount(v50) )
                    {
                      _mm_lfence();
                      v51 = *(_QWORD *)(*((_QWORD *)v45 + 6) + 8 * v49);
                      if ( v51 )
                        v179.hKmdProcessHandle = *(HANDLE *)(v51 + 48);
                    }
                    _InterlockedDecrement((volatile signed __int32 *)(v48 + 88));
                    ExReleasePushLockSharedEx(v48 + 72, 0LL);
                    KeLeaveCriticalRegion();
                    v154 = v170;
                  }
                  LODWORD(v28) = DXGADAPTER::DdiEscape((DXGADAPTER *)v18, &v179);
                }
                goto LABEL_100;
              }
              LODWORD(v28) = 0;
              v53 = v154;
              v43 = v156;
              v44 = v161;
              v52 = v155;
LABEL_103:
              if ( v52 )
              {
                v54 = v164.PrivateDriverDataSize;
                v55 = v164.pPrivateDriverData;
                v56 = (char *)v164.pPrivateDriverData + v164.PrivateDriverDataSize;
                if ( (unsigned __int64)v56 > MmUserProbeAddress || v56 <= v164.pPrivateDriverData )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v55, v44, v54);
                v57 = v157;
LABEL_108:
                if ( v53 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v168);
                COREACCESS::~COREACCESS((COREACCESS *)v185);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v186);
                if ( v57 )
                  DXGCONTEXT::ReleaseReference(v57);
                if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
                v58 = (DXGGLOBAL **)v163;
                if ( v163 && _InterlockedExchangeAdd64(v162, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(v58[2], (struct DXGADAPTER *)v58);
                if ( v165[0] )
                  operator delete(v165[0]);
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
                if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
                  return (unsigned int)v28;
LABEL_675:
                McTemplateK0q_EtwWriteTransfer(v59, &EventProfilerExit, v60, v158);
                return (unsigned int)v28;
              }
              memmove(v164.pPrivateDriverData, v44, v164.PrivateDriverDataSize);
LABEL_152:
              v57 = v157;
              goto LABEL_108;
            }
            switch ( v33 )
            {
              case D3DKMT_ESCAPE_VIDMM:
                if ( v29 )
                {
                  v43 = v156;
                  if ( v156 )
                    v4 = *((_QWORD *)v156 + 99);
                  if ( v41->VidPnSourceId != 16 )
                  {
                    v130 = *((_QWORD *)v29 + 366);
                    v44 = v161;
                    LODWORD(v28) = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _D3DKMT_DISPLAYMODELIST *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v130 + 760) + 8LL) + 24LL))(
                                     *(_QWORD *)(v130 + 768),
                                     v4,
                                     v161,
                                     v39);
                    goto LABEL_100;
                  }
                  v44 = v161;
                  p_RefreshRate = &v161->pModeList[0].RefreshRate;
                  LODWORD(v28) = DxgkpEscapeVidMmDelayExecution(
                                   v156,
                                   v161->pModeList[0].Height,
                                   v161->pModeList[0].Width,
                                   v161->pModeList[0].Format,
                                   (unsigned __int64 *)&v161->pModeList[0].RefreshRate);
                  v52 = v155;
                  if ( (int)v28 < 0 )
                    goto LABEL_101;
                  if ( !v155 )
                  {
                    *((D3DDDI_RATIONAL *)v164.pPrivateDriverData + 3) = *p_RefreshRate;
                    goto LABEL_101;
                  }
                  v129 = (char *)v164.pPrivateDriverData + 24;
                  if ( (char *)v164.pPrivateDriverData + 24 >= (void *)MmUserProbeAddress )
                    v129 = (_QWORD *)MmUserProbeAddress;
                  *v129 = *p_RefreshRate;
                  v53 = v154;
                  goto LABEL_102;
                }
                WdLogSingleEntry2(2LL, v18, -1073741637LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Try to call D3DKMT_ESCAPE_VIDMM on a display only adapter 0x%I64x (Status = 0x%I64x)!",
                  v18,
                  -1073741637LL,
                  0LL,
                  0LL,
                  0LL);
                if ( v154 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v168);
                COREACCESS::~COREACCESS((COREACCESS *)v185);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v186);
                if ( v157 )
                  DXGCONTEXT::ReleaseReference(v157);
                v127 = (ADAPTER_RENDER **)v156;
                if ( !v156 || _InterlockedExchangeAdd64((volatile signed __int64 *)v156 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  goto LABEL_430;
                goto LABEL_429;
              case D3DKMT_ESCAPE_TDRDBGCTRL:
                if ( v164.pPrivateDriverData )
                {
                  if ( v164.PrivateDriverDataSize < 4 )
                    goto LABEL_382;
                  switch ( v41->VidPnSourceId )
                  {
                    case 0u:
                      goto LABEL_467;
                    case 1u:
                      v134 = 2LL;
                      goto LABEL_469;
                    case 2u:
                      v134 = 1LL;
                      goto LABEL_469;
                    case 3u:
                      v134 = 3LL;
                      goto LABEL_469;
                    case 4u:
                    case 5u:
                      if ( !v29 )
                      {
                        *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v164.PrivateDriverDataSize, 0x1C0000000uLL, v32) + 24) = 0LL;
                        LODWORD(v28) = -1073741637;
                        v53 = v154;
                        goto LABEL_673;
                      }
                      if ( *((_BYTE *)v29 + 209) )
                      {
                        LODWORD(v28) = -1073741637;
                        v53 = v154;
                        goto LABEL_673;
                      }
                      LODWORD(v28) = TdrDbgCtrl(4LL);
                      if ( (int)v28 >= 0 )
                      {
                        v137 = *(_QWORD *)(*((_QWORD *)v29 + 366) + 744LL);
                        v199 = 0LL;
                        v200 = 0LL;
                        v201 = 0LL;
                        v198[0] = 2;
                        v198[1] = v161->VidPnSourceId;
                        v135 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 366) + 736LL)
                                                                                        + 8LL)
                                                                            + 64LL))(
                                 v137,
                                 v198);
                        goto LABEL_470;
                      }
                      goto LABEL_401;
                    case 6u:
                      v134 = 5LL;
                      goto LABEL_469;
                    case 7u:
                      v134 = 6LL;
                      goto LABEL_469;
                    case 8u:
                      if ( v164.PrivateDriverDataSize < 8 )
                      {
                        LODWORD(v28) = -1073741811;
                        v53 = v154;
                        goto LABEL_673;
                      }
                      if ( !v29 )
                      {
                        *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v164.PrivateDriverDataSize, 0x1C0000000uLL, v32) + 24) = v18;
                        LODWORD(v28) = -1073741637;
                        v53 = v154;
                        goto LABEL_673;
                      }
                      if ( *((_BYTE *)v29 + 209) )
                      {
                        LODWORD(v28) = -1073741637;
                        v53 = v154;
                        goto LABEL_673;
                      }
                      LODWORD(v28) = TdrDbgCtrl(4LL);
                      if ( (int)v28 >= 0 )
                      {
                        v136 = *(_QWORD *)(*((_QWORD *)v29 + 366) + 744LL);
                        v195 = 0LL;
                        v196 = 0LL;
                        v197 = 0;
                        v193 = 2;
                        v194 = *v161;
                        v135 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 366)
                                                                                                 + 736LL)
                                                                                     + 8LL)
                                                                         + 64LL))(
                                 v136,
                                 &v193);
                        goto LABEL_470;
                      }
                      break;
                    default:
                      goto LABEL_382;
                  }
                }
                else
                {
LABEL_467:
                  v134 = 0LL;
LABEL_469:
                  v135 = TdrDbgCtrl(v134);
LABEL_470:
                  LODWORD(v28) = v135;
                }
                goto LABEL_401;
              case D3DKMT_ESCAPE_VIDSCH:
                if ( !v29 )
                {
                  WdLogSingleEntry2(2LL, v18, -1073741637LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Try to call D3DKMT_ESCAPE_VIDSCH on a display only adapter 0x%I64x (Status = 0x%I64x)!",
                    v18,
                    -1073741637LL,
                    0LL,
                    0LL,
                    0LL);
                  if ( v154 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v168);
                  COREACCESS::~COREACCESS((COREACCESS *)v185);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v186);
                  v131 = v157;
                  if ( !v157 )
                    goto LABEL_447;
                  goto LABEL_446;
                }
                if ( *((_BYTE *)v29 + 209) )
                {
                  if ( !v154 )
                    goto LABEL_453;
                  goto LABEL_452;
                }
                v132 = *((_QWORD *)v29 + 366);
                v44 = v161;
                if ( v161->VidPnSourceId == 2 )
                {
                  LODWORD(v28) = -1073741811;
                  v53 = v154;
                  goto LABEL_673;
                }
                if ( v161->VidPnSourceId != 3 )
                {
                  LODWORD(v28) = (*(__int64 (__fastcall **)(_QWORD, struct _D3DKMT_DISPLAYMODELIST *))(*(_QWORD *)(*(_QWORD *)(v132 + 736) + 8LL) + 64LL))(
                                   *(_QWORD *)(v132 + 744),
                                   v161);
                  goto LABEL_402;
                }
                if ( !v39 )
                  goto LABEL_382;
                ModeCount = 5000000;
                if ( v161->ModeCount < 0x4C4B40 )
                  ModeCount = v161->ModeCount;
                Interval.QuadPart = -(__int64)ModeCount;
                KeDelayExecutionThread(0, 0, &Interval);
                LODWORD(v28) = 0;
                v53 = v154;
                v43 = v156;
                v52 = v155;
                goto LABEL_103;
              case D3DKMT_ESCAPE_DEVICE:
                v43 = v156;
                if ( v164.PrivateDriverDataSize < 0xC || !v156 )
                  goto LABEL_538;
                v44 = v161;
                LODWORD(v28) = DXGDEVICE::Escape(v156, (struct _D3DKMT_DEVICE_ESCAPE *)v161);
                goto LABEL_100;
              case D3DKMT_ESCAPE_DMM:
                if ( *(_QWORD *)(v18 + 2920) )
                {
                  if ( v164.PrivateDriverDataSize >= 0x80 )
                  {
                    v44 = v161;
                    v123 = *(_QWORD *)&v161->pModeList[0].Width;
                    if ( v123 <= 0x19000 && (v164.PrivateDriverDataSize == v123 + 127 || !v123) )
                    {
                      LODWORD(v28) = DmmEscape(
                                       (struct DXGADAPTER *const)v18,
                                       (struct _D3DKMT_DMM_ESCAPE_INTERNAL *const)v161);
                      goto LABEL_402;
                    }
                  }
                  goto LABEL_382;
                }
                WdLogSingleEntry2(2LL, v18, -1073741637LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Try to call D3DKMT_ESCAPE_DMM on a render only adapter 0x%I64x (Status = 0x%I64x)!",
                  v18,
                  -1073741637LL,
                  0LL,
                  0LL,
                  0LL);
                if ( v154 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v168);
                COREACCESS::~COREACCESS((COREACCESS *)v185);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v186);
                if ( v157 )
                  DXGCONTEXT::ReleaseReference(v157);
                if ( v156 && _InterlockedExchangeAdd64((volatile signed __int64 *)v156 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v156 + 2), v156);
                v124 = v163;
                if ( !v163 )
                  goto LABEL_419;
                goto LABEL_418;
              case D3DKMT_ESCAPE_DEBUG_SNAPSHOT:
                if ( v164.PrivateDriverDataSize < 8 )
                {
                  LODWORD(v28) = -1073741811;
                  v53 = v154;
                  goto LABEL_673;
                }
                v44 = v161;
                LODWORD(v28) = DxgDbgTakeSnapshot(
                                 &v161->ModeCount,
                                 v164.PrivateDriverDataSize - 4,
                                 (unsigned int *)v161);
                goto LABEL_402;
              case D3DKMT_ESCAPE_DRT_TEST:
                v44 = v161;
                LODWORD(v28) = DxgkDrtTestEscape(
                                 (struct DXGADAPTER *)v18,
                                 (struct _D3DKMT_DRT_ESCAPE_HEAD *)v161,
                                 (struct COREADAPTERACCESS *)v186);
                goto LABEL_402;
              case D3DKMT_ESCAPE_OUTPUTDUPL_SNAPSHOT:
                if ( !*(_QWORD *)(v18 + 2920) )
                {
                  WdLogSingleEntry2(2LL, v18, -1073741637LL);
                  v138 = L"Try to call D3DKMT_ESCAPE_OUTPUTDUPL_SNAPSHOT on a render only adapter 0x%I64x (Status = 0x%I64x)!";
                  goto LABEL_503;
                }
                if ( v164.PrivateDriverDataSize < 0x18 )
                {
                  LODWORD(v28) = -1073741811;
                  v53 = v154;
                  goto LABEL_673;
                }
                v44 = v161;
                if ( v164.PrivateDriverDataSize != v161->VidPnSourceId )
                {
                  LODWORD(v28) = -1073741811;
                  v53 = v154;
                  goto LABEL_673;
                }
                LODWORD(v28) = OutputDuplGetDebugInfo(
                                 (struct DXGADAPTER *)v18,
                                 (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)v161);
                goto LABEL_402;
              case D3DKMT_ESCAPE_OUTPUTDUPL_DIAGNOSTICS:
                if ( !*(_QWORD *)(v18 + 2920) )
                {
                  WdLogSingleEntry2(2LL, v18, -1073741637LL);
                  v138 = L"Try to call D3DKMT_ESCAPE_OUTPUTDUPL_DIAGNOSTICS on a render only adapter 0x%I64x (Status = 0x%I64x)!";
                  goto LABEL_503;
                }
                if ( v164.PrivateDriverDataSize < 8 )
                {
                  LODWORD(v28) = -1073741811;
                  v53 = v154;
                  goto LABEL_673;
                }
                v44 = v161;
                if ( v164.PrivateDriverDataSize != v161->ModeCount + 8LL )
                {
                  LODWORD(v28) = -1073741811;
                  v53 = v154;
                  goto LABEL_673;
                }
                LODWORD(v28) = OutputDuplGetDiagnosticBuffer(
                                 (struct DXGADAPTER *)v18,
                                 (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)v161);
                goto LABEL_402;
              case D3DKMT_ESCAPE_BDD_PNP:
                if ( (*(_DWORD *)(v18 + 436) & 0x20) != 0 && !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)v18) )
                {
                  *((_DWORD *)&v183.Flags + 1) = 0;
                  memset(&v183.PrivateDriverDataSize + 1, 0, 20);
                  v183.hDevice = 0LL;
                  v183.Flags.Value = Value;
                  v183.PrivateDriverDataSize = v164.PrivateDriverDataSize;
                  v44 = v161;
                  v183.pPrivateDriverData = v161;
                  LODWORD(v28) = DXGADAPTER::DdiEscape(v139, &v183);
                  goto LABEL_402;
                }
                LODWORD(v28) = -1071775742;
                v53 = v154;
                goto LABEL_673;
              case D3DKMT_ESCAPE_BDD_FALLBACK:
                if ( !DXGADAPTER::IsBddFallbackDriver(0LL) )
                {
                  WdLogSingleEntry1(1LL, 2591LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pBddAdapter->IsBddFallbackDriver()",
                    2591LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  Value = v164.Flags.Value;
                }
                *((_DWORD *)&v182.Flags + 1) = 0;
                memset(&v182.PrivateDriverDataSize + 1, 0, 20);
                v182.hDevice = 0LL;
                v182.Flags.Value = Value;
                v182.PrivateDriverDataSize = v164.PrivateDriverDataSize;
                v44 = v161;
                v182.pPrivateDriverData = v161;
                LODWORD(v28) = DXGADAPTER::DdiEscape(0LL, &v182);
                goto LABEL_402;
              case D3DKMT_ESCAPE_ACTIVATE_SPECIFIC_DIAG:
                if ( v164.PrivateDriverDataSize != 8 )
                {
                  LODWORD(v28) = -1073741811;
                  v53 = v154;
                  goto LABEL_673;
                }
                v44 = v161;
                if ( !v161->VidPnSourceId )
                {
                  *((_BYTE *)DXGGLOBAL::GetGlobal() + 1344) = v44->ModeCount != 0;
                  LODWORD(v28) = 0;
                  v53 = v154;
                  v43 = v156;
                  v52 = v155;
                  goto LABEL_103;
                }
                if ( v161->VidPnSourceId != 15 )
                {
                  WdLogSingleEntry1(1LL, (int)v161->VidPnSourceId);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"%I64d is not an escape type that needs (de)activation",
                    (int)v44->VidPnSourceId,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  LODWORD(v28) = -1073741811;
                  goto LABEL_402;
                }
                v140 = *(ADAPTER_DISPLAY **)(v18 + 2920);
                if ( v140 )
                {
                  LODWORD(v28) = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(v140, v161->ModeCount);
                  goto LABEL_402;
                }
                WdLogSingleEntry2(2LL, v18, -1073741637LL);
                v138 = L"Try to activate D3DKMT_ESCAPE_MODES_PRUNED_OUT on a render only adapter 0x%I64x (Status = 0x%I64x)!";
                goto LABEL_503;
              case D3DKMT_ESCAPE_MODES_PRUNED_OUT:
                if ( !*(_QWORD *)(v18 + 2920) )
                {
                  WdLogSingleEntry2(2LL, v18, -1073741637LL);
                  v138 = L"Try to call D3DKMT_ESCAPE_MODES_PRUNED_OUT on a render only adapter 0x%I64x (Status = 0x%I64x)!";
LABEL_503:
                  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v138, v18, -1073741637LL, 0LL, 0LL, 0LL);
                  goto LABEL_505;
                }
                if ( v164.PrivateDriverDataSize < 8 )
                {
                  LODWORD(v28) = -1073741811;
                  v53 = v154;
                  goto LABEL_673;
                }
                v44 = v161;
                if ( v164.PrivateDriverDataSize < 44 * (unsigned __int64)v161->ModeCount + 8 )
                {
                  LODWORD(v28) = -1073741811;
                  v53 = v154;
                  goto LABEL_673;
                }
                LODWORD(v28) = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(*(ADAPTER_DISPLAY **)(v18 + 2920), v161);
                goto LABEL_402;
              case D3DKMT_ESCAPE_WHQL_INFO:
                v43 = v156;
                if ( v164.PrivateDriverDataSize >= 4 )
                {
                  v44 = v161;
                  v161->VidPnSourceId = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 216) + 64LL) + 2720LL);
                  LODWORD(v28) = 0;
                  v53 = v154;
                  v52 = v155;
                  goto LABEL_103;
                }
LABEL_538:
                LODWORD(v28) = -1073741811;
                v53 = v154;
                goto LABEL_152;
              case D3DKMT_ESCAPE_BRIGHTNESS:
                if ( (Value & 1) == 0 )
                {
                  LODWORD(v28) = -1073741811;
                  v53 = v154;
                  goto LABEL_673;
                }
                if ( v164.PrivateDriverDataSize < 0x60C )
                {
                  LODWORD(v28) = -1073741811;
                  v53 = v154;
                  goto LABEL_673;
                }
                if ( DXGPROCESS::IsRemoteConnection(v171) )
                {
                  LODWORD(v28) = -1073741790;
                  WdLogSingleEntry2(3LL, v18, -1073741790LL);
                  goto LABEL_401;
                }
                v44 = v161;
                LODWORD(v28) = DpiBrightnessEscape(
                                 *(struct _DEVICE_OBJECT **)(v18 + 216),
                                 (struct _D3DKMT_BRIGHTNESS_INFO *)v161);
                goto LABEL_402;
              case D3DKMT_ESCAPE_EDID_CACHE:
                if ( v164.PrivateDriverDataSize < 4 )
                  goto LABEL_382;
                v44 = v161;
                if ( v164.PrivateDriverDataSize != v161->VidPnSourceId + 4LL )
                  goto LABEL_382;
                if ( IsCurrentConsoleSession() || IsCurrentProcessAdmin() )
                  LODWORD(v28) = (*(__int64 (__fastcall **)(PVOID, struct _D3DKMT_DISPLAYMODELIST *))(*(_QWORD *)DxgMonitor::EDIDCACHE::s_pEdidCache + 16LL))(
                                   DxgMonitor::EDIDCACHE::s_pEdidCache,
                                   v44);
                else
                  memset(v44, 0, v164.PrivateDriverDataSize);
                goto LABEL_402;
              case D3DKMT_ESCAPE_HISTORY_BUFFER_STATUS:
                if ( v164.PrivateDriverDataSize < 8 )
                {
                  if ( v154 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v168);
                  COREACCESS::~COREACCESS((COREACCESS *)v185);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v186);
                  if ( v157 )
                    DXGCONTEXT::ReleaseReference(v157);
                  v143 = (ADAPTER_RENDER **)v156;
                  if ( !v156
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)v156 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_565;
                  }
                  goto LABEL_564;
                }
                if ( v29 )
                {
                  v43 = v156;
                  if ( v156 )
                  {
                    v145 = 0;
                    if ( (qword_1C013F870 & 0x461C8ED7) != 0
                      && (qword_1C013F878 & 0xFFFFFFFFB9E37128uLL) == 0
                      && (qword_1C013F870 & 0x4000) != 0 )
                    {
                      do
                      {
                        NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v29);
                        if ( v147 >= NumDifferentPhysicalAdapters )
                          goto LABEL_586;
                      }
                      while ( !*(_QWORD *)(344LL * v147
                                         + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 366) + 16LL) + 2808LL)
                                         + 40) );
                      v145 = 1;
                    }
LABEL_586:
                    *((_BYTE *)v156 + 1896) = v145;
                    v44 = v161;
                    LOBYTE(v161->VidPnSourceId) = v145;
                    v44->ModeCount = 0;
                    LODWORD(v28) = 0;
                    v53 = v154;
                    v52 = v155;
                    goto LABEL_103;
                  }
                  if ( v154 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v168);
                  COREACCESS::~COREACCESS((COREACCESS *)v185);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v186);
                  if ( v157 )
                    DXGCONTEXT::ReleaseReference(v157);
                  goto LABEL_565;
                }
                if ( v154 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v168);
                COREACCESS::~COREACCESS((COREACCESS *)v185);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v186);
                v144 = v157;
                if ( !v157 )
                  goto LABEL_572;
                goto LABEL_571;
              case D3DKMT_ESCAPE_MIRACAST_ADAPTER_DIAG_INFO:
                if ( v164.PrivateDriverDataSize != 32 )
                {
                  LODWORD(v28) = -1073741811;
                  v53 = v154;
                  goto LABEL_673;
                }
                if ( DXGADAPTER::IsDiagnosticAllowed((DXGADAPTER *)v18) )
                {
                  v44 = v161;
                  DxgkGetAdapterMiracastInfo(*(_QWORD *)(v18 + 216), (__int64)v161);
                  LODWORD(v28) = 0;
                  v53 = v154;
                  v43 = v156;
                  v52 = v155;
                  goto LABEL_103;
                }
                CurrentProcessSessionId = PsGetCurrentProcessSessionId(v141);
                WdLogSingleEntry2(3LL, v18, CurrentProcessSessionId);
                LODWORD(v28) = -1073741790;
                v53 = v154;
                goto LABEL_673;
              case D3DKMT_ESCAPE_PROCESS_VERIFIER_OPTION:
                if ( v164.PrivateDriverDataSize < 0x20 )
                {
                  if ( !v154 )
                    goto LABEL_590;
                  goto LABEL_589;
                }
                Height = v41->pModeList[0].Height;
                if ( Height > 1 )
                {
                  if ( !v154 )
                    goto LABEL_590;
                  goto LABEL_589;
                }
                if ( *v41 )
                {
                  if ( !v154 )
                    goto LABEL_590;
                  goto LABEL_589;
                }
                if ( !Height )
                  *(_OWORD *)&v41->pModeList[0].Format = 0LL;
                if ( v41->pModeList[0].Width != 1000 && v41->pModeList[0].Width != 1001 )
                {
                  if ( !v154 )
                    goto LABEL_590;
                  goto LABEL_589;
                }
                if ( !v29 )
                {
                  WdLogSingleEntry1(2LL, 2881LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"D3DKMT_ESCAPE_PROCESS_VERIFIER_OPTION for VidMm option must supply a render adapter",
                    2881LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_505;
                }
                v149 = *((_QWORD *)v29 + 366);
                v44 = v161;
                LODWORD(v28) = (*(__int64 (__fastcall **)(_QWORD, DXGPROCESS *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v149 + 760) + 8LL)
                                                                                       + 1096LL))(
                                 *(_QWORD *)(v149 + 768),
                                 v171,
                                 v161->pModeList[0].Height);
                goto LABEL_402;
              case D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION:
                if ( v164.PrivateDriverDataSize < 0x20 )
                {
                  if ( !v154 )
                    goto LABEL_590;
                  goto LABEL_589;
                }
                v150 = v41->ModeCount;
                if ( v150 > 1 )
                {
                  if ( !v154 )
                    goto LABEL_590;
                  goto LABEL_589;
                }
                if ( !v150 )
                {
                  *(_OWORD *)&v41->pModeList[0].Width = 0LL;
                  v41->pModeList[0].RefreshRate = 0LL;
                }
                if ( v41->VidPnSourceId != 1000 && v41->VidPnSourceId != 1001 )
                {
                  if ( !v154 )
                    goto LABEL_590;
                  goto LABEL_589;
                }
                if ( !v29 )
                {
                  WdLogSingleEntry1(2LL, 2931LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION for VidMm option must supply a render adapter",
                    2931LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_505;
                }
                if ( !*((_BYTE *)v29 + 209) )
                {
                  v151 = *((_QWORD *)v29 + 366);
                  v44 = v161;
                  LODWORD(v28) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v151 + 760) + 8LL)
                                                                           + 1104LL))(
                                   *(_QWORD *)(v151 + 768),
                                   v161->ModeCount);
                  goto LABEL_402;
                }
                goto LABEL_505;
              case D3DKMT_ESCAPE_DOD_SET_DIRTYRECT_MODE:
                if ( v164.PrivateDriverDataSize != 4 )
                {
                  WdLogSingleEntry1(2LL, v164.PrivateDriverDataSize);
                  v152 = L"Supplied Buffer size for D3DKMT_ESCAPE_DOD_SET_DIRTYRECT_MODE (0x%I64x) was not the correct size";
                  goto LABEL_626;
                }
                if ( *(_QWORD *)(v18 + 2928) )
                {
                  WdLogSingleEntry1(3LL, v18);
                  if ( !v154 )
                    goto LABEL_590;
                  goto LABEL_589;
                }
                v153 = *(_QWORD *)(v18 + 2920);
                v44 = v161;
                v53 = v154;
                v43 = v156;
                if ( !*(_QWORD *)(v153 + 448) )
                {
                  LODWORD(v28) = -1073741811;
                  goto LABEL_152;
                }
                *(_DWORD *)(v153 + 456) = v161->VidPnSourceId;
                LODWORD(v28) = 0;
                v52 = v155;
                goto LABEL_103;
              case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS:
                if ( DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v18) )
                {
                  v44 = v161;
                  LODWORD(v28) = ADAPTER_DISPLAY::ReportDisplayState(
                                   *(ADAPTER_DISPLAY **)(v18 + 2920),
                                   (struct _D3DKMT_DXGK_DIAGNOSTICS *)v161,
                                   v164.PrivateDriverDataSize);
                  goto LABEL_402;
                }
                WdLogSingleEntry1(3LL, v18);
                if ( !v154 )
                  goto LABEL_590;
                goto LABEL_589;
              case D3DKMT_ESCAPE_QUERY_IOMMU_STATUS:
                if ( !v164.PrivateDriverDataSize )
                {
                  WdLogSingleEntry1(2LL, 0LL);
                  v152 = L"Supplied Buffer size for D3DKMT_ESCAPE_QUERY_IOMMU_STATUS (0x%I64x) was to small";
                  goto LABEL_626;
                }
                if ( !v29 )
                {
                  WdLogSingleEntry1(2LL, 3002LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"D3DKMT_ESCAPE_QUERY_IOMMU_STATUS must supply a render adapter",
                    3002LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_505;
                }
                if ( *((_BYTE *)v29 + 209) )
                  goto LABEL_505;
                v176 = 0;
                SysMmQueryIommuState(*((const struct SYSMM_ADAPTER **)v29 + 28), (union SYSMM_IOMMU_STATE *)&v176);
                v44 = v161;
                LOBYTE(v161->VidPnSourceId) = v176 & 1;
                LODWORD(v28) = 0;
                v53 = v154;
                v43 = v156;
                v52 = v155;
                goto LABEL_103;
              case D3DKMT_ESCAPE_QUERY_IOMMU_STATUS|D3DKMT_ESCAPE_TDRDBGCTRL:
                if ( !v164.PrivateDriverDataSize )
                {
                  WdLogSingleEntry1(2LL, 0LL);
                  v152 = L"Supplied Buffer size for D3DKMT_ESCAPE_QUERY_DMA_REMAPPING_STATUS (0x%I64x) was to small";
LABEL_626:
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)v152,
                    v164.PrivateDriverDataSize,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  if ( v154 )
LABEL_589:
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v168);
LABEL_590:
                  COREACCESS::~COREACCESS((COREACCESS *)v185);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v186);
                  v144 = v157;
                  if ( v157 )
LABEL_571:
                    DXGCONTEXT::ReleaseReference(v144);
LABEL_572:
                  v143 = (ADAPTER_RENDER **)v156;
                  if ( v156
                    && _InterlockedExchangeAdd64((volatile signed __int64 *)v156 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  {
LABEL_564:
                    ADAPTER_RENDER::DestroyDeviceNoLocks(v143[2], (struct DXGDEVICE *)v143);
                  }
LABEL_565:
                  if ( v163 )
                    DXGADAPTER::ReleaseReference(v163);
LABEL_198:
                  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
                  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
                  if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
                    goto LABEL_684;
                  goto LABEL_683;
                }
                if ( v29 )
                {
                  if ( !*((_BYTE *)v29 + 209) )
                  {
                    LODWORD(v171) = 0;
                    SysMmQueryIommuState(*((const struct SYSMM_ADAPTER **)v29 + 28), (union SYSMM_IOMMU_STATE *)&v171);
                    v44 = v161;
                    LOBYTE(v161->VidPnSourceId) = ((unsigned __int8)v171 & 2) != 0;
                    LODWORD(v28) = 0;
                    v53 = v154;
                    v43 = v156;
                    v52 = v155;
                    goto LABEL_103;
                  }
                  if ( v154 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v168);
                  COREACCESS::~COREACCESS((COREACCESS *)v185);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v186);
                  if ( v157 )
                    DXGCONTEXT::ReleaseReference(v157);
                  if ( v156
                    && _InterlockedExchangeAdd64((volatile signed __int64 *)v156 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  {
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v156 + 2), v156);
                  }
                  if ( v163 )
                    DXGADAPTER::ReleaseReference(v163);
                  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
                  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
                  if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
                    return 3221225659LL;
                }
                else
                {
                  WdLogSingleEntry1(2LL, 3033LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"D3DKMT_ESCAPE_QUERY_DMA_REMAPPING_STATUS must supply a render adapter",
                    3033LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
LABEL_505:
                  if ( v154 )
LABEL_452:
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v168);
LABEL_453:
                  COREACCESS::~COREACCESS((COREACCESS *)v185);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v186);
                  v131 = v157;
                  if ( v157 )
LABEL_446:
                    DXGCONTEXT::ReleaseReference(v131);
LABEL_447:
                  v127 = (ADAPTER_RENDER **)v156;
                  if ( v156
                    && _InterlockedExchangeAdd64((volatile signed __int64 *)v156 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  {
LABEL_429:
                    ADAPTER_RENDER::DestroyDeviceNoLocks(v127[2], (struct DXGDEVICE *)v127);
                  }
LABEL_430:
                  v124 = v163;
                  if ( v163 )
LABEL_418:
                    DXGADAPTER::ReleaseReference(v124);
LABEL_419:
                  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
                  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
                  if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
                    return 3221225659LL;
                }
                McTemplateK0q_EtwWriteTransfer(v125, &EventProfilerExit, v126, v158);
                return 3221225659LL;
              default:
                LODWORD(v28) = -1073741811;
                WdLogSingleEntry1(3LL, v33);
                goto LABEL_401;
            }
          }
          if ( v157 )
            v118 = *((_DWORD *)v157 + 7);
          else
            v118 = 0;
          if ( v156 )
            v119 = *((_DWORD *)v156 + 118);
          else
            v119 = 0;
          v120 = *((_DWORD *)v29 + 1140);
          HostProcess = DXGPROCESS::GetHostProcess(v171);
          v122 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                   (DXGADAPTER *)((char *)v29 + 4472),
                   HostProcess,
                   v120,
                   v119,
                   v118,
                   v33,
                   v164.Flags,
                   v164.PrivateDriverDataSize,
                   (unsigned __int8 *)v161);
          v28 = v122;
          if ( v122 < 0 )
          {
            WdLogSingleEntry1(2LL, v122);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Paravirtualized escape failed: 0x%I64x",
              v28,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          goto LABEL_401;
        }
        COREACCESS::Release((COREACCESS *)v189);
        LODWORD(v28) = -1073741130;
        v53 = v170;
        goto LABEL_673;
      }
LABEL_377:
      v39 = v173;
      goto LABEL_72;
    }
    v72 = 0;
    if ( v164.Type == D3DKMT_ESCAPE_DRIVERPRIVATE || v164.Type == D3DKMT_ESCAPE_VIDSCH && v161->VidPnSourceId == 3 )
      v72 = 1;
    if ( *(char **)(v18 + 2928) == v30 )
    {
      if ( !v72 )
      {
        v73 = 2LL;
        goto LABEL_158;
      }
    }
    else
    {
      v72 = 1;
    }
    v73 = 3LL;
LABEL_158:
    LODWORD(v28) = COREADAPTERACCESS::AcquireExclusive((__int64)v186, v73);
    if ( (int)v28 >= 0 )
    {
      if ( !v72 )
      {
        v31 = *(_QWORD *)(v18 + 2928);
        if ( v31 )
          ADAPTER_RENDER::FlushScheduler(v31, 2u, 0xFFFFFFFF, 0);
      }
      v39 = 1;
      v173 = 1;
      Value = v164.Flags.Value;
      v33 = v164.Type;
      goto LABEL_72;
    }
    v53 = 0;
LABEL_673:
    v43 = v156;
    goto LABEL_152;
  }
  if ( !v29 )
  {
    WdLogSingleEntry1(3LL, 1922LL);
    if ( v157 )
      DXGCONTEXT::ReleaseReference(v157);
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      goto LABEL_684;
LABEL_683:
    McTemplateK0q_EtwWriteTransfer(v78, &EventProfilerExit, v79, v158);
LABEL_684:
    LODWORD(v28) = -1073741811;
    return (unsigned int)v28;
  }
  if ( v8->VidPnSourceId == 9 )
  {
    if ( v8->pModeList[0].Format == D3DDDIFMT_UNKNOWN
      && !(unsigned __int8)DxgkpIsDrtEnabled((unsigned int)(v164.Type - 1)) )
    {
      WdLogSingleEntry1(3LL, 1902LL);
      if ( v157 )
        DXGCONTEXT::ReleaseReference(v157);
      if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
      DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
      if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225506LL;
      goto LABEL_337;
    }
    v113 = *(void **)&v8->pModeList[0].Width;
    *(_QWORD *)&v8->pModeList[0].Width = 0LL;
    v106 = DxgEscapeSuspendResumeProcess(&v164, v8, v29, v113, 1, v8->pModeList[0].Format != D3DDDIFMT_UNKNOWN);
    if ( v157 )
      DXGCONTEXT::ReleaseReference(v157);
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return v106;
  }
  else
  {
    if ( v8->VidPnSourceId != 10 )
      goto LABEL_54;
    v116 = *(void **)&v8->pModeList[0].Width;
    *(_QWORD *)&v8->pModeList[0].Width = 0LL;
    v106 = DxgEscapeSuspendResumeProcess(&v164, v8, v29, v116, 0, 0);
    if ( v157 )
      DXGCONTEXT::ReleaseReference(v157);
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v165);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v158);
    if ( !v160 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return v106;
  }
  McTemplateK0q_EtwWriteTransfer(v114, &EventProfilerExit, v115, v158);
  return v106;
}
