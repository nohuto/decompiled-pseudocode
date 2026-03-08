/*
 * XREFs of DxgkEscape @ 0x1C01A3EE0
 * Callers:
 *     ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0379510 (-VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001560 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0003484 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00073CC (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0007444 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0008714 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0009580 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0009F04 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000AB38 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0016460 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0024424 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00250DC (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00252B8 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C00252CC (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C003EFBC (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C003EFF4 (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     DxgkGetAdapterMiracastInfo @ 0x1C0061240 (DxgkGetAdapterMiracastInfo.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0180040 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01957D0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C01A5238 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C01A5B6C (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C01A5DA4 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1C01B9800 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02B22B0 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C02B3618 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C02B6200 (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C02B8B58 (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C02BA3C4 (-ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C9774 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkWriteUserModeDiagEntry @ 0x1C02D18AC (DxgkWriteUserModeDiagEntry.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C02E5F24 (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C030302C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C0305954 (DxgkpIsDrtEnabled.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C030A184 (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C030B118 (_DxgkEscape_--_2_--ENSURE_DATA_DELETION--_ENSURE_DATA_DELETION.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C030B14C (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C030B250 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C030B320 (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C030C18C (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1C030C358 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z.c)
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C030C89C (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C030CB34 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?InternalEscapeEnabled@@YAEXZ @ 0x1C030CCC8 (-InternalEscapeEnabled@@YAEXZ.c)
 *     ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C030CCF4 (-IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C030FD14 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     OutputDuplGetDebugInfo @ 0x1C032BF54 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C032C050 (OutputDuplGetDiagnosticBuffer.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C035BBB8 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0383EEC (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     DxgkHandleMiracastEscape @ 0x1C039B7B8 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C039C3C0 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C03A0354 (DxgkHandleIndirectEscape.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C03A82C8 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C03BEE7C (DxgkPrepareCcdDatabaseForAccess.c)
 */

__int64 __fastcall DxgkEscape(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_ESCAPE *v3; // rbx
  __int64 v4; // rdi
  DXGDEVICE *v5; // rsi
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r15
  struct _D3DKMT_DISPLAYMODELIST *v8; // r14
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
  _DWORD *v33; // r10
  enum _D3DKMT_ESCAPETYPE v34; // esi
  bool v35; // r15
  unsigned int *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // edx
  unsigned __int8 v40; // al
  struct _D3DKMT_DISPLAYMODELIST *v41; // r11
  UINT v42; // ecx
  DXGDEVICE *v43; // rsi
  struct _D3DKMT_DISPLAYMODELIST *v44; // r13
  struct DXGGLOBAL *v45; // rax
  char v46; // al
  __int64 v47; // rdi
  __int64 v48; // rsi
  DXGGLOBAL *v49; // rax
  __int64 v50; // rax
  bool v51; // r9
  char v52; // bl
  size_t v53; // r8
  void *v54; // rcx
  char *v55; // rax
  DXGCONTEXT *v56; // rdi
  DXGGLOBAL **v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // r8
  D3DKMT_HANDLE v61; // eax
  __int64 v62; // r9
  unsigned int v63; // ecx
  int v64; // ecx
  unsigned int v65; // ebx
  __int64 v66; // r8
  D3DKMT_HANDLE v67; // eax
  __int64 v68; // r10
  unsigned int v69; // ecx
  int v70; // ecx
  char v71; // r15
  __int64 v72; // rdx
  __int64 v73; // rcx
  bool v74; // sf
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r8
  unsigned int v80; // eax
  size_t v81; // r8
  void *v82; // rcx
  char *v83; // rdx
  unsigned __int64 Width; // rcx
  __int64 v85; // rdx
  __int64 v86; // rax
  char *v87; // rdx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rcx
  __int64 v92; // r8
  struct DXGPROCESS *v93; // rax
  unsigned int DiagnosticsBuffer; // eax
  char *v95; // rdx
  DXGGLOBAL *Global; // rax
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r14
  __int64 v100; // rbx
  unsigned int v101; // ecx
  int v102; // ecx
  unsigned __int64 v103; // rcx
  __int64 v104; // rdx
  unsigned int v105; // edi
  size_t v106; // r8
  void *v107; // rcx
  char *v108; // rax
  DXGCONTEXT *v109; // rax
  __int64 v110; // rcx
  __int64 v111; // r8
  struct _D3DKMT_DISPLAYMODELIST *v112; // r10
  void *v113; // r9
  __int64 v114; // rcx
  __int64 v115; // r8
  void *v116; // r9
  int v117; // r8d
  unsigned int v118; // r15d
  unsigned int v119; // r14d
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
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  unsigned int CurrentProcessSessionId; // eax
  ADAPTER_RENDER **v146; // rcx
  DXGCONTEXT *v147; // rax
  char v148; // r9
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned int v150; // r8d
  int Height; // eax
  __int64 v152; // rax
  int v153; // eax
  __int64 v154; // rax
  const wchar_t *v155; // r9
  __int64 v156; // rax
  char v157; // [rsp+50h] [rbp-568h]
  bool v158; // [rsp+51h] [rbp-567h]
  DXGDEVICE *v159; // [rsp+58h] [rbp-560h]
  DXGCONTEXT *v160; // [rsp+60h] [rbp-558h]
  int v161; // [rsp+68h] [rbp-550h] BYREF
  __int64 v162; // [rsp+70h] [rbp-548h]
  char v163; // [rsp+78h] [rbp-540h]
  struct _D3DKMT_DISPLAYMODELIST *v164; // [rsp+80h] [rbp-538h]
  volatile signed __int64 *v165; // [rsp+88h] [rbp-530h]
  struct DXGADAPTER *v166; // [rsp+90h] [rbp-528h]
  _D3DKMT_ESCAPE v167; // [rsp+98h] [rbp-520h] BYREF
  void *v168[2]; // [rsp+B8h] [rbp-500h] BYREF
  unsigned __int64 v169; // [rsp+C8h] [rbp-4F0h] BYREF
  unsigned __int8 v170[8]; // [rsp+D0h] [rbp-4E8h] BYREF
  char v171[8]; // [rsp+D8h] [rbp-4E0h] BYREF
  __int64 v172; // [rsp+E0h] [rbp-4D8h]
  char v173; // [rsp+E8h] [rbp-4D0h]
  DXGPROCESS *v174; // [rsp+F0h] [rbp-4C8h] BYREF
  __int64 v175; // [rsp+F8h] [rbp-4C0h]
  int v176; // [rsp+100h] [rbp-4B8h]
  DXGADAPTER *v177; // [rsp+108h] [rbp-4B0h] BYREF
  __int64 v178; // [rsp+110h] [rbp-4A8h]
  int v179; // [rsp+118h] [rbp-4A0h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+120h] [rbp-498h] BYREF
  DXGDEVICE *v181; // [rsp+128h] [rbp-490h]
  _DXGKARG_ESCAPE v182; // [rsp+130h] [rbp-488h] BYREF
  unsigned __int64 v183; // [rsp+168h] [rbp-450h] BYREF
  _BYTE v184[24]; // [rsp+170h] [rbp-448h] BYREF
  struct _DXGKARG_ESCAPE v185; // [rsp+188h] [rbp-430h] BYREF
  struct _DXGKARG_ESCAPE v186; // [rsp+1B8h] [rbp-400h] BYREF
  _BYTE v187[24]; // [rsp+1E8h] [rbp-3D0h] BYREF
  _BYTE v188[64]; // [rsp+200h] [rbp-3B8h] BYREF
  _BYTE v189[8]; // [rsp+240h] [rbp-378h] BYREF
  _BYTE v190[16]; // [rsp+248h] [rbp-370h] BYREF
  unsigned int *v191; // [rsp+258h] [rbp-360h]
  _BYTE v192[16]; // [rsp+288h] [rbp-330h] BYREF
  DXGADAPTER *v193; // [rsp+298h] [rbp-320h]
  char v194; // [rsp+2A0h] [rbp-318h]
  __int64 v195; // [rsp+2A8h] [rbp-310h]
  int v196; // [rsp+2D0h] [rbp-2E8h] BYREF
  struct _D3DKMT_DISPLAYMODELIST v197; // [rsp+2D4h] [rbp-2E4h]
  __int128 v198; // [rsp+2DCh] [rbp-2DCh]
  __int128 v199; // [rsp+2ECh] [rbp-2CCh]
  int v200; // [rsp+2FCh] [rbp-2BCh]
  _DWORD v201[2]; // [rsp+300h] [rbp-2B8h] BYREF
  __int128 v202; // [rsp+308h] [rbp-2B0h]
  __int128 v203; // [rsp+318h] [rbp-2A0h]
  __int64 v204; // [rsp+328h] [rbp-290h]
  _QWORD v205[10]; // [rsp+330h] [rbp-288h] BYREF
  _BYTE v206[512]; // [rsp+380h] [rbp-238h] BYREF

  v3 = (_D3DKMT_ESCAPE *)a1;
  v161 = -1;
  v4 = 0LL;
  v162 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v163 = 1;
    v161 = 2016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2016);
  }
  else
  {
    v163 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v161, 2016);
  v5 = 0LL;
  v159 = 0LL;
  v181 = 0LL;
  v160 = 0LL;
  v175 = 0LL;
  Current = DXGPROCESS::GetCurrent(v6);
  v174 = Current;
  v8 = (struct _D3DKMT_DISPLAYMODELIST *)v206;
  v164 = (struct _D3DKMT_DISPLAYMODELIST *)v206;
  memset(&v167, 0, sizeof(v167));
  v9 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v158 = v9;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
    if ( !v163 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return (unsigned int)v28;
    goto LABEL_678;
  }
  if ( v9 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_ESCAPE *)MmUserProbeAddress;
    v167 = *v3;
  }
  else
  {
    v167 = *v3;
  }
  Type = v167.Type;
  if ( v167.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 424LL))() )
    {
LABEL_179:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
      if ( !v163 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225506LL;
      goto LABEL_338;
    }
    Type = v167.Type;
  }
  else if ( v167.Type >= D3DKMT_ESCAPE_WIN32K_START )
  {
    v65 = (*(__int64 (__fastcall **)(_D3DKMT_ESCAPE *))(*((_QWORD *)Current + 11) + 416LL))(&v167);
LABEL_138:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
    if ( !v163 )
      return v65;
    v73 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v74 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_172:
    if ( v74 )
      McTemplateK0q_EtwWriteTransfer(v73, &EventProfilerExit, v66, v161);
    return v65;
  }
  if ( Type < D3DKMT_ESCAPE_VIDMM )
  {
LABEL_11:
    PrivateDriverDataSize = v167.PrivateDriverDataSize;
    goto LABEL_12;
  }
  if ( Type == D3DKMT_ESCAPE_VIDMM || Type == D3DKMT_ESCAPE_VIDSCH || (unsigned int)(Type - 28) <= 1 )
  {
    if ( !InternalEscapeEnabled() )
    {
      WdLogSingleEntry1(3LL, v167.Type);
      goto LABEL_179;
    }
    Type = v167.Type;
  }
  if ( Type != D3DKMT_ESCAPE_VIDMM )
    goto LABEL_11;
  PrivateDriverDataSize = v167.PrivateDriverDataSize;
  if ( v167.PrivateDriverDataSize < 0x440 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
    if ( !v163 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      goto LABEL_687;
    goto LABEL_686;
  }
LABEL_12:
  *(_OWORD *)v168 = 0LL;
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
  v164 = v8;
  v168[0] = v8;
  PrivateDriverDataSize = v167.PrivateDriverDataSize;
  Type = v167.Type;
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
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
    if ( v163 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v79, v161);
    return 3221225495LL;
  }
  if ( Type == D3DKMT_ESCAPE_VIDSCH )
  {
    memset(v8, 0, v13);
    PrivateDriverDataSize = v167.PrivateDriverDataSize;
  }
  if ( v9 )
  {
    v14 = PrivateDriverDataSize;
    pPrivateDriverData = v167.pPrivateDriverData;
    v16 = (char *)v167.pPrivateDriverData + PrivateDriverDataSize;
    if ( v16 < v167.pPrivateDriverData || (unsigned __int64)v16 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v8, pPrivateDriverData, v14);
  }
  else
  {
    memmove(v8, v167.pPrivateDriverData, PrivateDriverDataSize);
  }
  v17 = v167.Type;
  if ( (*(_BYTE *)&v167.Flags.0 & 0x40) != 0 && (v167.Type || !v167.hAdapter || (*(_BYTE *)&v167.Flags.0 & 1) != 0) )
  {
    WdLogSingleEntry1(3LL, 1372LL);
    goto LABEL_199;
  }
  if ( v167.Type >= D3DKMT_ESCAPE_VIDMM && v167.Type <= D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( v167.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
    {
      v65 = DxgkpProcessBddFallbackRequest();
      DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
      goto LABEL_138;
    }
    switch ( v167.Type )
    {
      case D3DKMT_ESCAPE_VIDMM:
        VidPnSourceId = v8->VidPnSourceId;
        if ( v8->VidPnSourceId == 5 )
        {
          v65 = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)v8);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
          goto LABEL_138;
        }
        if ( VidPnSourceId == 6 )
        {
          v65 = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)v8);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
          goto LABEL_138;
        }
        if ( VidPnSourceId == 13 )
        {
          v65 = DxgEscapeEvictByCriteria((struct _D3DKMT_VIDMM_ESCAPE *)v8);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
          goto LABEL_138;
        }
        break;
      case D3DKMT_ESCAPE_DRT_TEST:
        if ( v167.PrivateDriverDataSize < 0xC
          || v167.PrivateDriverDataSize < v8->ModeCount
          || v8->VidPnSourceId != 1484026436 )
        {
          WdLogSingleEntry1(3LL, v167.Type);
          goto LABEL_199;
        }
        if ( !InternalEscapeEnabled() )
        {
          WdLogSingleEntry1(3LL, v167.Type);
LABEL_210:
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
          if ( !v163 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
            return 3221225506LL;
LABEL_338:
          McTemplateK0q_EtwWriteTransfer(v75, &EventProfilerExit, v76, v161);
          return 3221225506LL;
        }
        Width = (int)v8->pModeList[0].Width;
        if ( !(_DWORD)Width && !v167.hAdapter
          || (unsigned int)Width <= 0x24 && (v85 = 0x1093482000LL, _bittest64(&v85, Width)) )
        {
          v65 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v8, 0LL);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
          goto LABEL_138;
        }
        if ( (unsigned int)Width <= 0x2F )
        {
          v86 = 0xA00800000000LL;
          if ( _bittest64(&v86, Width) )
          {
            v65 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v8, 0LL);
            if ( (v65 & 0x80000000) == 0 )
            {
              if ( v9 )
              {
                v81 = v167.PrivateDriverDataSize;
                v82 = v167.pPrivateDriverData;
                v87 = (char *)v167.pPrivateDriverData + v167.PrivateDriverDataSize;
                if ( (unsigned __int64)v87 > MmUserProbeAddress || v87 <= v167.pPrivateDriverData )
                  *(_BYTE *)MmUserProbeAddress = 0;
LABEL_277:
                memmove(v82, v8, v81);
              }
              else
              {
LABEL_223:
                memmove(v167.pPrivateDriverData, v8, v167.PrivateDriverDataSize);
              }
            }
LABEL_224:
            DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
            if ( !v163 )
              return v65;
            v74 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
            goto LABEL_172;
          }
        }
        v17 = v167.Type;
        break;
      case D3DKMT_ESCAPE_DIAGNOSTICS:
      case D3DKMT_ESCAPE_GET_EXTERNAL_DIAGNOSTICS:
        LOBYTE(v4) = v167.Type == D3DKMT_ESCAPE_DIAGNOSTICS;
        DiagnosticsBuffer = GetDiagnosticsBuffer((struct _D3DKMT_DXGK_DIAGNOSTICS *)v8, v167.PrivateDriverDataSize, v4);
        v65 = DiagnosticsBuffer;
        if ( (int)(DiagnosticsBuffer + 0x80000000) >= 0 && DiagnosticsBuffer != -2147483643 )
          goto LABEL_224;
        if ( !v9 )
          goto LABEL_223;
        v81 = v167.PrivateDriverDataSize;
        v82 = v167.pPrivateDriverData;
        v95 = (char *)v167.pPrivateDriverData + v167.PrivateDriverDataSize;
        if ( (unsigned __int64)v95 > MmUserProbeAddress || v95 <= v167.pPrivateDriverData )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_277;
      case D3DKMT_ESCAPE_MIRACAST_DISPLAY_REQUEST:
      case D3DKMT_ESCAPE_IDD_REQUEST:
        if ( v167.Type == D3DKMT_ESCAPE_IDD_REQUEST )
          v80 = DxgkHandleIndirectEscape(v167.PrivateDriverDataSize, v8);
        else
          v80 = DxgkHandleMiracastEscape(v167.PrivateDriverDataSize, v8);
        v65 = v80;
        if ( (int)(v80 + 0x80000000) >= 0 && v80 != -2147483643 )
          goto LABEL_224;
        if ( !v9 )
          goto LABEL_223;
        v81 = v167.PrivateDriverDataSize;
        v82 = v167.pPrivateDriverData;
        v83 = (char *)v167.pPrivateDriverData + v167.PrivateDriverDataSize;
        if ( (unsigned __int64)v83 > MmUserProbeAddress || v83 <= v167.pPrivateDriverData )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_277;
      case D3DKMT_ESCAPE_FORCE_BDDFALLBACK_HEADLESS:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_210;
        if ( v167.PrivateDriverDataSize != 1 )
          goto LABEL_199;
        byte_1C013B49B = v8->VidPnSourceId;
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
        if ( v163 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
LABEL_265:
          McTemplateK0q_EtwWriteTransfer(v89, &EventProfilerExit, v90, v161);
        return 0LL;
      case D3DKMT_ESCAPE_REQUEST_MACHINE_CRASH:
        if ( v167.PrivateDriverDataSize != 24 )
          goto LABEL_199;
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
        if ( v163 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v91, &EventProfilerExit, v92, v161);
        return 3221225473LL;
      case D3DKMT_ESCAPE_SOFTGPU_ENABLE_DISABLE_HMD:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_210;
        if ( v167.PrivateDriverDataSize != 200 )
          goto LABEL_199;
        v93 = DXGPROCESS::GetCurrent((unsigned int)v167.Type);
        if ( !v93 )
        {
          WdLogSingleEntry1(2LL, 1566LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 1566LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_199;
        }
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v187, v93);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v187, 1u);
        memset(v205, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v205[1]);
        v205[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v205[3]) = 46;
        LOBYTE(v205[6]) = -1;
        v65 = DxgkEnableDisableTargetAsHMD(
                (struct _D3DKMT_SOFTGPU_LUID_TARGET *)v8,
                v8->pModeList[4].Format,
                v8->pModeList[4].IntegerRefreshRate,
                (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v205);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v187);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
        goto LABEL_138;
      case D3DKMT_ESCAPE_LOG_CODEPOINT_PACKET:
        if ( v167.PrivateDriverDataSize != 16 )
          goto LABEL_199;
        v175 = 0LL;
        DxgkLogCodePointPacket(v8->VidPnSourceId, v8->ModeCount, v8->pModeList[0].Width, v8->pModeList[0].Height, 0LL);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
        if ( v163 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          goto LABEL_265;
        return 0LL;
      case D3DKMT_ESCAPE_LOG_USERMODE_DAIG_PACKET:
        if ( v167.PrivateDriverDataSize < 0x30 || v167.PrivateDriverDataSize < v8->ModeCount )
          goto LABEL_199;
        v65 = DxgkWriteUserModeDiagEntry((struct _DXGK_DIAG_HEADER *)v8);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
        goto LABEL_138;
      case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS|D3DKMT_ESCAPE_TDRDBGCTRL:
        v65 = DxgkPrepareCcdDatabaseForAccess();
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
        goto LABEL_138;
      default:
        break;
    }
  }
  v18 = 0LL;
  v178 = 0LL;
  v177 = 0LL;
  if ( v17 == D3DKMT_ESCAPE_BDD_FALLBACK )
  {
    if ( IsCurrentConsoleSession() || IsCurrentProcessAdmin() )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::ReferenceBddFallbackAdapter(Global, &v169);
    }
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
    if ( v163 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v97, &EventProfilerExit, v98, v161);
    return 3221226021LL;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v184, Current);
  hAdapter = v167.hAdapter;
  if ( v167.hAdapter )
  {
    v20 = (v167.hAdapter >> 6) & 0xFFFFFF;
    v21 = v167.hAdapter >> 30;
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
              v178 = v18;
              goto LABEL_37;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
            hAdapter = v167.hAdapter;
          }
        }
      }
      v18 = 0LL;
      goto LABEL_36;
    }
    v99 = *((_QWORD *)Current + 76);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v99 + 248));
    if ( (unsigned int)v20 < *(_DWORD *)(v99 + 296) )
    {
      v100 = *(_QWORD *)(v99 + 280) + 16 * v20;
      v101 = *(_DWORD *)(v100 + 8);
      if ( v21 == ((v101 >> 5) & 3) && (v101 & 0x2000) == 0 )
      {
        v102 = v101 & 0x1F;
        if ( v102 )
        {
          if ( v102 == 1 )
          {
            v18 = *(_QWORD *)v100;
            goto LABEL_293;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v18 = 0LL;
LABEL_293:
    _InterlockedDecrement((volatile signed __int32 *)(v99 + 264));
    ExReleasePushLockSharedEx(v99 + 248, 0LL);
    KeLeaveCriticalRegion();
    hAdapter = v167.hAdapter;
    Current = v174;
    goto LABEL_36;
  }
LABEL_37:
  if ( !v18 )
  {
    LODWORD(v28) = -1073741811;
    WdLogSingleEntry2(3LL, hAdapter, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v184);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
    if ( !v163 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return (unsigned int)v28;
    goto LABEL_678;
  }
  hDevice = v167.hDevice;
  if ( v167.hDevice )
  {
    v61 = (v167.hDevice >> 6) & 0xFFFFFF;
    if ( v61 < *((_DWORD *)Current + 74) )
    {
      v62 = *((_QWORD *)Current + 35) + 16LL * v61;
      v63 = *(_DWORD *)(v62 + 8);
      if ( v167.hDevice >> 30 == ((v63 >> 5) & 3) && (v63 & 0x2000) == 0 )
      {
        v64 = v63 & 0x1F;
        if ( v64 )
        {
          if ( v64 == 3 )
          {
            v5 = *(DXGDEVICE **)v62;
            v159 = *(DXGDEVICE **)v62;
LABEL_134:
            v181 = v5;
            if ( !v5 || v18 != *(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) && v18 != *((_QWORD *)v5 + 235) )
            {
              WdLogSingleEntry2(3LL, v18, hDevice);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v184);
              goto LABEL_199;
            }
            goto LABEL_39;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          hDevice = v167.hDevice;
        }
      }
    }
    v159 = 0LL;
    v5 = 0LL;
    goto LABEL_134;
  }
LABEL_39:
  hContext = v167.hContext;
  if ( !v167.hContext )
  {
    v27 = 0LL;
    goto LABEL_41;
  }
  v67 = (v167.hContext >> 6) & 0xFFFFFF;
  if ( v67 >= *((_DWORD *)Current + 74) )
    goto LABEL_148;
  v68 = *((_QWORD *)Current + 35) + 16LL * v67;
  v69 = *(_DWORD *)(v68 + 8);
  if ( v167.hContext >> 30 != ((v69 >> 5) & 3) )
    goto LABEL_148;
  if ( (v69 & 0x2000) != 0 )
    goto LABEL_148;
  v70 = v69 & 0x1F;
  if ( !v70 )
    goto LABEL_148;
  if ( v70 != 7 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    hContext = v167.hContext;
LABEL_148:
    v27 = 0LL;
    goto LABEL_149;
  }
  v27 = *(_QWORD *)v68;
LABEL_149:
  v160 = (DXGCONTEXT *)v27;
  v175 = v27;
  if ( !v27 || !v5 || v5 != *(DXGDEVICE **)(v27 + 16) )
  {
    WdLogSingleEntry3(3LL, v18, v5, hContext);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v184);
    goto LABEL_199;
  }
LABEL_41:
  if ( v5 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v5 + 8);
    v18 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL);
    v178 = v18;
  }
  if ( v27 )
    _InterlockedIncrement64((volatile signed __int64 *)(v27 + 32));
  v165 = (volatile signed __int64 *)(v18 + 24);
  _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v184);
  if ( *(_DWORD *)(v18 + 2096) >= 0x5023u )
  {
    if ( (*(_BYTE *)&v167.Flags.0 & 0x10) != 0 || (v167.Flags.Value & 0xFFFFFF00) != 0 )
    {
      WdLogSingleEntry1(3LL, v18);
      goto LABEL_199;
    }
    if ( (*(_BYTE *)&v167.Flags.0 & 0x20) != 0 )
    {
      WdLogSingleEntry2(3LL, v18, 1756LL);
      goto LABEL_199;
    }
  }
  v166 = (struct DXGADAPTER *)v18;
  v183 = 0LL;
  LODWORD(v28) = DxgkpGetPairingAdapters((struct DXGADAPTER *)v18, 0, &v177, &v183, 0LL, 0LL, 0);
  if ( (int)v28 >= 0 && _InterlockedExchangeAdd64((volatile signed __int64 *)v177 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v29 = v177;
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v177 + 2), v177);
  }
  else
  {
    v29 = v177;
  }
  if ( v167.Type != D3DKMT_ESCAPE_VIDMM )
  {
    if ( v167.Type == D3DKMT_ESCAPE_DRT_TEST )
    {
      v103 = (int)v164->pModeList[0].Width;
      if ( (unsigned int)v103 <= 0x2E )
      {
        v104 = 0x512744204000LL;
        if ( _bittest64(&v104, v103) )
        {
          if ( (_DWORD)v103 == 33 )
          {
            v105 = -1073741823;
          }
          else if ( (_DWORD)v103 == 32 )
          {
            v105 = -1073741823;
          }
          else
          {
            v105 = DxgkDrtTestEscape((struct DXGADAPTER *)v18, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v164, 0LL);
            if ( (v105 & 0x80000000) == 0 )
            {
              if ( v158 )
              {
                v106 = v167.PrivateDriverDataSize;
                v107 = v167.pPrivateDriverData;
                v108 = (char *)v167.pPrivateDriverData + v167.PrivateDriverDataSize;
                if ( (unsigned __int64)v108 > MmUserProbeAddress || v108 <= v167.pPrivateDriverData )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v107, v164, v106);
                v109 = v160;
                goto LABEL_318;
              }
              memmove(v167.pPrivateDriverData, v164, v167.PrivateDriverDataSize);
            }
          }
          v109 = v160;
LABEL_318:
          if ( v109 )
            DXGCONTEXT::ReleaseReference(v109);
          if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
          if ( v163 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v110, &EventProfilerExit, v111, v161);
          return v105;
        }
      }
    }
LABEL_54:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v189, (struct DXGADAPTER *const)v18, 0LL);
    COREACCESS::COREACCESS((COREACCESS *)v188, 0LL);
    v176 = 0;
    v172 = v18;
    v157 = 0;
    v173 = 0;
    v34 = v167.Type;
    if ( v167.Type == D3DKMT_ESCAPE_BDD_FALLBACK )
    {
      COREACCESS::AcquireShared((COREACCESS *)v188, v30);
      v34 = v167.Type;
LABEL_373:
      v39 = v176;
      goto LABEL_73;
    }
    if ( (*(_BYTE *)&v167.Flags.0 & 1) == 0 )
    {
      v35 = v167.Type == D3DKMT_ESCAPE_DRT_TEST && v33[2] == 23 && (unsigned int)(v33[3] - 2) <= 1;
      if ( v167.Type == D3DKMT_ESCAPE_DRIVERPRIVATE )
      {
        LODWORD(v36) = DXGADAPTER::GetAdapterType((DXGADAPTER *)v18);
        v31 = *v36;
        if ( (v31 & 0x10) != 0
          || *(_BYTE *)&v167.Flags.0 < 0
          || *(_DWORD *)(v18 + 2096) >= 0x5023u && (*(_BYTE *)&v167.Flags.0 & 8) != 0 )
        {
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v171);
          v31 = *(_DWORD *)(v18 + 200) == 1;
          if ( *(_DWORD *)(v18 + 200) != 1 )
          {
            LODWORD(v28) = -1073741130;
            v52 = v173;
            goto LABEL_676;
          }
          v34 = v167.Type;
          v29 = v177;
          v157 = v173;
LABEL_372:
          Current = v174;
          goto LABEL_373;
        }
        v34 = v167.Type;
      }
      if ( !v35 )
      {
        if ( v194 )
          WdLogSingleEntry5(0LL, 275LL, 4LL, v192, 0LL, 0LL);
        v31 = (__int64)v193;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v193 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v193 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v37, (const EVENT_DESCRIPTOR *)"g", v38, 72);
            KeWaitForSingleObject((char *)v193 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v193, 0LL);
          v31 = (__int64)v193;
        }
        v195 = 0LL;
        v194 = 1;
        if ( *(_DWORD *)(v31 + 200) == 1 )
        {
          if ( v191 != (unsigned int *)v193 )
          {
            COREACCESS::AcquireShared((COREACCESS *)v190, 0LL);
            v31 = v191[50];
            if ( (_DWORD)v31 != 1 )
            {
              COREACCESS::Release((COREACCESS *)v190);
              COREACCESS::Release((COREACCESS *)v192);
              LODWORD(v28) = -1073741130;
              v52 = v173;
              goto LABEL_676;
            }
          }
          v189[1] = 1;
          LODWORD(v28) = 0;
          v34 = v167.Type;
          v29 = v177;
          v157 = v173;
          Current = v174;
          v39 = 0;
LABEL_73:
          if ( v167.hDevice )
          {
            v43 = v159;
            if ( *((_DWORD *)v159 + 152) != 1 )
            {
              LODWORD(v28) = -1073741130;
              v52 = v173;
              goto LABEL_153;
            }
            v34 = v167.Type;
            v29 = v177;
            v157 = v173;
          }
          v40 = 1;
          v170[0] = 1;
          if ( v34 == D3DKMT_ESCAPE_DRIVERPRIVATE && (*(_BYTE *)&v167.Flags.0 & 0x40) != 0 )
          {
            if ( !v29 )
            {
LABEL_385:
              LODWORD(v28) = -1073741811;
              v52 = v157;
              goto LABEL_676;
            }
            LODWORD(v28) = DxgkpDriverKnownEscape(Current, v29, v164, v167.PrivateDriverDataSize, v170);
            if ( (int)v28 < 0 )
              goto LABEL_404;
            v34 = v167.Type;
            v40 = v170[0];
            v39 = v176;
          }
          if ( !v29 || !*((_BYTE *)v29 + 209) )
          {
            v41 = v164;
            goto LABEL_79;
          }
          v18 = (__int64)v29;
          v178 = (__int64)v29;
          LOBYTE(v31) = 0;
          if ( v34 == D3DKMT_ESCAPE_DRIVERPRIVATE && v40
            || (unsigned int)v34 <= D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION && (v117 = 805306378, _bittest(&v117, v34)) )
          {
            LOBYTE(v31) = 1;
          }
          v41 = v164;
          if ( v34 == D3DKMT_ESCAPE_DRT_TEST && v164->pModeList[0].Width == 49 )
          {
            LODWORD(v28) = DxgkDrtTestEscape(
                             v29,
                             (struct _D3DKMT_DRT_ESCAPE_HEAD *)v164,
                             (struct COREADAPTERACCESS *)v189);
            if ( (int)v28 < 0 )
            {
LABEL_404:
              v44 = v164;
LABEL_405:
              v43 = v159;
LABEL_101:
              v51 = v158;
LABEL_102:
              v52 = v157;
LABEL_103:
              if ( (int)v28 < 0 )
                goto LABEL_153;
              goto LABEL_104;
            }
            v34 = v167.Type;
          }
          else if ( !(_BYTE)v31 )
          {
LABEL_79:
            if ( v34 == D3DKMT_ESCAPE_DRIVERPRIVATE )
            {
              memset(&v182, 0, sizeof(v182));
              if ( v40 )
              {
                if ( *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v18 + 584) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
                {
                  WdLogSingleEntry2(3LL, v18, -1073741637LL);
                  LODWORD(v28) = -1073741637;
                  v52 = v157;
                  goto LABEL_676;
                }
                v42 = v167.PrivateDriverDataSize;
                if ( !v167.PrivateDriverDataSize || !v167.pPrivateDriverData )
                {
                  LODWORD(v28) = -1073741811;
                  WdLogSingleEntry3(3LL, v167.PrivateDriverDataSize, v167.pPrivateDriverData, -1073741811LL);
                  v52 = v157;
                  goto LABEL_676;
                }
                v43 = v159;
                if ( v159 )
                  v182.hDevice = (HANDLE)*((_QWORD *)v159 + 77);
                if ( v160 )
                  v182.hContext = (HANDLE)*((_QWORD *)v160 + 23);
                else
                  v182.hContext = 0LL;
                v182.Flags.Value = v167.Flags.Value;
                v44 = v164;
                if ( (*(_DWORD *)(v18 + 436) & 8) == 0 && *(_DWORD *)(v18 + 412) == 4098 )
                {
                  if ( !(unsigned int)IsAMDDriverEscapeAllowed(v164, v167.PrivateDriverDataSize) )
                  {
                    LODWORD(v28) = -1073741637;
                    v52 = v157;
                    goto LABEL_153;
                  }
                  v42 = v167.PrivateDriverDataSize;
                }
                if ( *(_BYTE *)&v167.Flags.0 < 0 )
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
                  if ( (*((_DWORD *)Current + 106) & 0x100) != 0
                    || ((v45 = DXGGLOBAL::GetGlobal(), !*((_BYTE *)v45 + 1691))
                     || !DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                           (struct DXGGLOBAL *)((char *)v45 + 1684),
                           (struct DXGADAPTER *)v18)
                      ? (v46 = 0)
                      : (v46 = 1),
                        v42 = v167.PrivateDriverDataSize,
                        v46) )
                  {
                    LODWORD(v4) = 32;
                  }
                  v182.Flags.Value = v4 | v182.Flags.Value & 0xFFFFFFDF;
                  v182.PrivateDriverDataSize = v42;
                  v182.pPrivateDriverData = v44;
                  v47 = *(_QWORD *)(v18 + 2928);
                  if ( v47 )
                  {
                    KeEnterCriticalRegion();
                    ExAcquirePushLockSharedEx(v47 + 72, 0LL);
                    _InterlockedIncrement((volatile signed __int32 *)(v47 + 88));
                    v48 = *(unsigned int *)(v18 + 240);
                    v49 = DXGGLOBAL::GetGlobal();
                    if ( (unsigned int)v48 < DXGGLOBAL::GetMaximumGlobalAdapterCount(v49) )
                    {
                      _mm_lfence();
                      v50 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8 * v48);
                      if ( v50 )
                        v182.hKmdProcessHandle = *(HANDLE *)(v50 + 48);
                    }
                    _InterlockedDecrement((volatile signed __int32 *)(v47 + 88));
                    ExReleasePushLockSharedEx(v47 + 72, 0LL);
                    KeLeaveCriticalRegion();
                    v157 = v173;
                    v43 = v159;
                  }
                  LODWORD(v28) = DXGADAPTER::DdiEscape((DXGADAPTER *)v18, &v182);
                }
                goto LABEL_101;
              }
              LODWORD(v28) = 0;
              v52 = v157;
              v43 = v159;
              v44 = v164;
              v51 = v158;
LABEL_104:
              if ( v51 )
              {
                v53 = v167.PrivateDriverDataSize;
                v54 = v167.pPrivateDriverData;
                v55 = (char *)v167.pPrivateDriverData + v167.PrivateDriverDataSize;
                if ( (unsigned __int64)v55 > MmUserProbeAddress || v55 <= v167.pPrivateDriverData )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v54, v44, v53);
                v56 = v160;
LABEL_109:
                if ( v52 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v171);
                COREACCESS::~COREACCESS((COREACCESS *)v188);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v189);
                if ( v56 )
                  DXGCONTEXT::ReleaseReference(v56);
                if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
                v57 = (DXGGLOBAL **)v166;
                if ( v166 && _InterlockedExchangeAdd64(v165, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(v57[2], (struct DXGADAPTER *)v57);
                if ( v168[0] )
                  operator delete(v168[0]);
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
                if ( !v163 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
                  return (unsigned int)v28;
LABEL_678:
                McTemplateK0q_EtwWriteTransfer(v58, &EventProfilerExit, v59, v161);
                return (unsigned int)v28;
              }
              memmove(v167.pPrivateDriverData, v44, v167.PrivateDriverDataSize);
LABEL_153:
              v56 = v160;
              goto LABEL_109;
            }
            switch ( v34 )
            {
              case D3DKMT_ESCAPE_VIDMM:
                if ( v29 )
                {
                  v43 = v159;
                  if ( v159 )
                    v4 = *((_QWORD *)v159 + 99);
                  if ( v41->VidPnSourceId != 16 )
                  {
                    v130 = *((_QWORD *)v29 + 366);
                    v44 = v164;
                    LODWORD(v28) = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _D3DKMT_DISPLAYMODELIST *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v130 + 760) + 8LL) + 24LL))(
                                     *(_QWORD *)(v130 + 768),
                                     v4,
                                     v164,
                                     v39);
                    goto LABEL_101;
                  }
                  v44 = v164;
                  p_RefreshRate = &v164->pModeList[0].RefreshRate;
                  LODWORD(v28) = DxgkpEscapeVidMmDelayExecution(
                                   v159,
                                   v164->pModeList[0].Height,
                                   v164->pModeList[0].Width,
                                   v164->pModeList[0].Format,
                                   (unsigned __int64 *)&v164->pModeList[0].RefreshRate);
                  v51 = v158;
                  if ( (int)v28 < 0 )
                    goto LABEL_102;
                  if ( !v158 )
                  {
                    *((D3DDDI_RATIONAL *)v167.pPrivateDriverData + 3) = *p_RefreshRate;
                    goto LABEL_102;
                  }
                  v129 = (char *)v167.pPrivateDriverData + 24;
                  if ( (char *)v167.pPrivateDriverData + 24 >= (void *)MmUserProbeAddress )
                    v129 = (_QWORD *)MmUserProbeAddress;
                  *v129 = *p_RefreshRate;
                  v52 = v157;
                  goto LABEL_103;
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
                if ( v157 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v171);
                COREACCESS::~COREACCESS((COREACCESS *)v188);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v189);
                if ( v160 )
                  DXGCONTEXT::ReleaseReference(v160);
                v127 = (ADAPTER_RENDER **)v159;
                if ( !v159 || _InterlockedExchangeAdd64((volatile signed __int64 *)v159 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  goto LABEL_433;
                goto LABEL_432;
              case D3DKMT_ESCAPE_TDRDBGCTRL:
                if ( v167.pPrivateDriverData )
                {
                  if ( v167.PrivateDriverDataSize < 4 )
                    goto LABEL_385;
                  switch ( v41->VidPnSourceId )
                  {
                    case 0u:
                      goto LABEL_470;
                    case 1u:
                      v134 = 2LL;
                      goto LABEL_472;
                    case 2u:
                      v134 = 1LL;
                      goto LABEL_472;
                    case 3u:
                      v134 = 3LL;
                      goto LABEL_472;
                    case 4u:
                    case 5u:
                      if ( !v29 )
                      {
                        *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v167.PrivateDriverDataSize, 0x1C0000000uLL, v32) + 24) = 0LL;
                        LODWORD(v28) = -1073741637;
                        v52 = v157;
                        goto LABEL_676;
                      }
                      if ( *((_BYTE *)v29 + 209) )
                      {
                        LODWORD(v28) = -1073741637;
                        v52 = v157;
                        goto LABEL_676;
                      }
                      LODWORD(v28) = TdrDbgCtrl(4LL);
                      if ( (int)v28 >= 0 )
                      {
                        v137 = *(_QWORD *)(*((_QWORD *)v29 + 366) + 744LL);
                        v202 = 0LL;
                        v203 = 0LL;
                        v204 = 0LL;
                        v201[0] = 2;
                        v201[1] = v164->VidPnSourceId;
                        v135 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 366) + 736LL)
                                                                                        + 8LL)
                                                                            + 64LL))(
                                 v137,
                                 v201);
                        goto LABEL_473;
                      }
                      goto LABEL_404;
                    case 6u:
                      v134 = 5LL;
                      goto LABEL_472;
                    case 7u:
                      v134 = 6LL;
                      goto LABEL_472;
                    case 8u:
                      if ( v167.PrivateDriverDataSize < 8 )
                      {
                        LODWORD(v28) = -1073741811;
                        v52 = v157;
                        goto LABEL_676;
                      }
                      if ( !v29 )
                      {
                        *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v167.PrivateDriverDataSize, 0x1C0000000uLL, v32) + 24) = v18;
                        LODWORD(v28) = -1073741637;
                        v52 = v157;
                        goto LABEL_676;
                      }
                      if ( *((_BYTE *)v29 + 209) )
                      {
                        LODWORD(v28) = -1073741637;
                        v52 = v157;
                        goto LABEL_676;
                      }
                      LODWORD(v28) = TdrDbgCtrl(4LL);
                      if ( (int)v28 >= 0 )
                      {
                        v136 = *(_QWORD *)(*((_QWORD *)v29 + 366) + 744LL);
                        v198 = 0LL;
                        v199 = 0LL;
                        v200 = 0;
                        v196 = 2;
                        v197 = *v164;
                        v135 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 366)
                                                                                                 + 736LL)
                                                                                     + 8LL)
                                                                         + 64LL))(
                                 v136,
                                 &v196);
                        goto LABEL_473;
                      }
                      break;
                    default:
                      goto LABEL_385;
                  }
                }
                else
                {
LABEL_470:
                  v134 = 0LL;
LABEL_472:
                  v135 = TdrDbgCtrl(v134);
LABEL_473:
                  LODWORD(v28) = v135;
                }
                goto LABEL_404;
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
                  if ( v157 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v171);
                  COREACCESS::~COREACCESS((COREACCESS *)v188);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v189);
                  v131 = v160;
                  if ( !v160 )
                    goto LABEL_450;
                  goto LABEL_449;
                }
                if ( *((_BYTE *)v29 + 209) )
                {
                  if ( !v157 )
                    goto LABEL_456;
                  goto LABEL_455;
                }
                v132 = *((_QWORD *)v29 + 366);
                v44 = v164;
                if ( v164->VidPnSourceId == 2 )
                {
                  LODWORD(v28) = -1073741811;
                  v52 = v157;
                  goto LABEL_676;
                }
                if ( v164->VidPnSourceId != 3 )
                {
                  LODWORD(v28) = (*(__int64 (__fastcall **)(_QWORD, struct _D3DKMT_DISPLAYMODELIST *))(*(_QWORD *)(*(_QWORD *)(v132 + 736) + 8LL) + 64LL))(
                                   *(_QWORD *)(v132 + 744),
                                   v164);
                  goto LABEL_405;
                }
                if ( !v39 )
                  goto LABEL_385;
                ModeCount = 5000000;
                if ( v164->ModeCount < 0x4C4B40 )
                  ModeCount = v164->ModeCount;
                Interval.QuadPart = -(__int64)ModeCount;
                KeDelayExecutionThread(0, 0, &Interval);
                LODWORD(v28) = 0;
                v52 = v157;
                v43 = v159;
                v51 = v158;
                goto LABEL_104;
              case D3DKMT_ESCAPE_DEVICE:
                v43 = v159;
                if ( v167.PrivateDriverDataSize < 0xC || !v159 )
                  goto LABEL_541;
                v44 = v164;
                LODWORD(v28) = DXGDEVICE::Escape(v159, (struct _D3DKMT_DEVICE_ESCAPE *)v164);
                goto LABEL_101;
              case D3DKMT_ESCAPE_DMM:
                if ( *(_QWORD *)(v18 + 2920) )
                {
                  if ( v167.PrivateDriverDataSize >= 0x80 )
                  {
                    v44 = v164;
                    v123 = *(_QWORD *)&v164->pModeList[0].Width;
                    if ( v123 <= 0x19000 && (v167.PrivateDriverDataSize == v123 + 127 || !v123) )
                    {
                      LODWORD(v28) = DmmEscape(
                                       (struct DXGADAPTER *const)v18,
                                       (struct _D3DKMT_DMM_ESCAPE_INTERNAL *const)v164);
                      goto LABEL_405;
                    }
                  }
                  goto LABEL_385;
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
                if ( v157 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v171);
                COREACCESS::~COREACCESS((COREACCESS *)v188);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v189);
                if ( v160 )
                  DXGCONTEXT::ReleaseReference(v160);
                if ( v159 && _InterlockedExchangeAdd64((volatile signed __int64 *)v159 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v159 + 2), v159);
                v124 = v166;
                if ( !v166 )
                  goto LABEL_422;
                goto LABEL_421;
              case D3DKMT_ESCAPE_DEBUG_SNAPSHOT:
                if ( v167.PrivateDriverDataSize < 8 )
                {
                  LODWORD(v28) = -1073741811;
                  v52 = v157;
                  goto LABEL_676;
                }
                v44 = v164;
                LODWORD(v28) = DxgDbgTakeSnapshot(
                                 &v164->ModeCount,
                                 v167.PrivateDriverDataSize - 4,
                                 (unsigned int *)v164);
                goto LABEL_405;
              case D3DKMT_ESCAPE_DRT_TEST:
                v44 = v164;
                LODWORD(v28) = DxgkDrtTestEscape(
                                 (struct DXGADAPTER *)v18,
                                 (struct _D3DKMT_DRT_ESCAPE_HEAD *)v164,
                                 (struct COREADAPTERACCESS *)v189);
                goto LABEL_405;
              case D3DKMT_ESCAPE_OUTPUTDUPL_SNAPSHOT:
                if ( !*(_QWORD *)(v18 + 2920) )
                {
                  WdLogSingleEntry2(2LL, v18, -1073741637LL);
                  v138 = L"Try to call D3DKMT_ESCAPE_OUTPUTDUPL_SNAPSHOT on a render only adapter 0x%I64x (Status = 0x%I64x)!";
                  goto LABEL_506;
                }
                if ( v167.PrivateDriverDataSize < 0x18 )
                {
                  LODWORD(v28) = -1073741811;
                  v52 = v157;
                  goto LABEL_676;
                }
                v44 = v164;
                if ( v167.PrivateDriverDataSize != v164->VidPnSourceId )
                {
                  LODWORD(v28) = -1073741811;
                  v52 = v157;
                  goto LABEL_676;
                }
                LODWORD(v28) = OutputDuplGetDebugInfo(
                                 (struct DXGADAPTER *)v18,
                                 (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)v164);
                goto LABEL_405;
              case D3DKMT_ESCAPE_OUTPUTDUPL_DIAGNOSTICS:
                if ( !*(_QWORD *)(v18 + 2920) )
                {
                  WdLogSingleEntry2(2LL, v18, -1073741637LL);
                  v138 = L"Try to call D3DKMT_ESCAPE_OUTPUTDUPL_DIAGNOSTICS on a render only adapter 0x%I64x (Status = 0x%I64x)!";
                  goto LABEL_506;
                }
                if ( v167.PrivateDriverDataSize < 8 )
                {
                  LODWORD(v28) = -1073741811;
                  v52 = v157;
                  goto LABEL_676;
                }
                v44 = v164;
                if ( v167.PrivateDriverDataSize != v164->ModeCount + 8LL )
                {
                  LODWORD(v28) = -1073741811;
                  v52 = v157;
                  goto LABEL_676;
                }
                LODWORD(v28) = OutputDuplGetDiagnosticBuffer(
                                 (struct DXGADAPTER *)v18,
                                 (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)v164);
                goto LABEL_405;
              case D3DKMT_ESCAPE_BDD_PNP:
                if ( (*(_DWORD *)(v18 + 436) & 0x20) != 0 && !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)v18) )
                {
                  *((_DWORD *)&v186.Flags + 1) = 0;
                  memset(&v186.PrivateDriverDataSize + 1, 0, 20);
                  v186.hDevice = 0LL;
                  v186.Flags.Value = v167.Flags.Value;
                  v186.PrivateDriverDataSize = v167.PrivateDriverDataSize;
                  v44 = v164;
                  v186.pPrivateDriverData = v164;
                  LODWORD(v28) = DXGADAPTER::DdiEscape(v139, &v186);
                  goto LABEL_405;
                }
                LODWORD(v28) = -1071775742;
                v52 = v157;
                goto LABEL_676;
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
                }
                *((_DWORD *)&v185.Flags + 1) = 0;
                memset(&v185.PrivateDriverDataSize + 1, 0, 20);
                v185.hDevice = 0LL;
                v185.Flags.Value = v167.Flags.Value;
                v185.PrivateDriverDataSize = v167.PrivateDriverDataSize;
                v44 = v164;
                v185.pPrivateDriverData = v164;
                LODWORD(v28) = DXGADAPTER::DdiEscape(0LL, &v185);
                goto LABEL_405;
              case D3DKMT_ESCAPE_ACTIVATE_SPECIFIC_DIAG:
                if ( v167.PrivateDriverDataSize != 8 )
                {
                  LODWORD(v28) = -1073741811;
                  v52 = v157;
                  goto LABEL_676;
                }
                v44 = v164;
                if ( !v164->VidPnSourceId )
                {
                  *((_BYTE *)DXGGLOBAL::GetGlobal() + 1344) = v44->ModeCount != 0;
                  LODWORD(v28) = 0;
                  v52 = v157;
                  v43 = v159;
                  v51 = v158;
                  goto LABEL_104;
                }
                if ( v164->VidPnSourceId != 15 )
                {
                  WdLogSingleEntry1(1LL, (int)v164->VidPnSourceId);
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
                  goto LABEL_405;
                }
                v140 = *(ADAPTER_DISPLAY **)(v18 + 2920);
                if ( v140 )
                {
                  LODWORD(v28) = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(v140, v164->ModeCount);
                  goto LABEL_405;
                }
                WdLogSingleEntry2(2LL, v18, -1073741637LL);
                v138 = L"Try to activate D3DKMT_ESCAPE_MODES_PRUNED_OUT on a render only adapter 0x%I64x (Status = 0x%I64x)!";
                goto LABEL_506;
              case D3DKMT_ESCAPE_MODES_PRUNED_OUT:
                if ( !*(_QWORD *)(v18 + 2920) )
                {
                  WdLogSingleEntry2(2LL, v18, -1073741637LL);
                  v138 = L"Try to call D3DKMT_ESCAPE_MODES_PRUNED_OUT on a render only adapter 0x%I64x (Status = 0x%I64x)!";
LABEL_506:
                  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v138, v18, -1073741637LL, 0LL, 0LL, 0LL);
                  goto LABEL_508;
                }
                if ( v167.PrivateDriverDataSize < 8 )
                {
                  LODWORD(v28) = -1073741811;
                  v52 = v157;
                  goto LABEL_676;
                }
                v44 = v164;
                if ( v167.PrivateDriverDataSize < 44 * (unsigned __int64)v164->ModeCount + 8 )
                {
                  LODWORD(v28) = -1073741811;
                  v52 = v157;
                  goto LABEL_676;
                }
                LODWORD(v28) = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(*(ADAPTER_DISPLAY **)(v18 + 2920), v164);
                goto LABEL_405;
              case D3DKMT_ESCAPE_WHQL_INFO:
                v43 = v159;
                if ( v167.PrivateDriverDataSize >= 4 )
                {
                  v44 = v164;
                  v164->VidPnSourceId = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 216) + 64LL) + 2720LL);
                  LODWORD(v28) = 0;
                  v52 = v157;
                  v51 = v158;
                  goto LABEL_104;
                }
LABEL_541:
                LODWORD(v28) = -1073741811;
                v52 = v157;
                goto LABEL_153;
              case D3DKMT_ESCAPE_BRIGHTNESS:
                if ( (*(_BYTE *)&v167.Flags.0 & 1) == 0 )
                {
                  LODWORD(v28) = -1073741811;
                  v52 = v157;
                  goto LABEL_676;
                }
                if ( v167.PrivateDriverDataSize < 0x60C )
                {
                  LODWORD(v28) = -1073741811;
                  v52 = v157;
                  goto LABEL_676;
                }
                if ( DXGPROCESS::IsRemoteConnection(Current) )
                {
                  LODWORD(v28) = -1073741790;
                  WdLogSingleEntry2(3LL, v18, -1073741790LL);
                  goto LABEL_404;
                }
                v44 = v164;
                LODWORD(v28) = DpiBrightnessEscape(
                                 *(struct _DEVICE_OBJECT **)(v18 + 216),
                                 (struct _D3DKMT_BRIGHTNESS_INFO *)v164);
                goto LABEL_405;
              case D3DKMT_ESCAPE_EDID_CACHE:
                if ( v167.PrivateDriverDataSize < 4 )
                  goto LABEL_385;
                v44 = v164;
                if ( v167.PrivateDriverDataSize != v164->VidPnSourceId + 4LL )
                  goto LABEL_385;
                if ( IsCurrentConsoleSession() || IsCurrentProcessAdmin() )
                  LODWORD(v28) = (*(__int64 (__fastcall **)(PVOID, struct _D3DKMT_DISPLAYMODELIST *))(*(_QWORD *)DxgMonitor::EDIDCACHE::s_pEdidCache + 16LL))(
                                   DxgMonitor::EDIDCACHE::s_pEdidCache,
                                   v44);
                else
                  memset(v44, 0, v167.PrivateDriverDataSize);
                goto LABEL_405;
              case D3DKMT_ESCAPE_HISTORY_BUFFER_STATUS:
                if ( v167.PrivateDriverDataSize < 8 )
                {
                  if ( v157 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v171);
                  COREACCESS::~COREACCESS((COREACCESS *)v188);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v189);
                  if ( v160 )
                    DXGCONTEXT::ReleaseReference(v160);
                  v146 = (ADAPTER_RENDER **)v159;
                  if ( !v159
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)v159 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_568;
                  }
                  goto LABEL_567;
                }
                if ( v29 )
                {
                  v43 = v159;
                  if ( v159 )
                  {
                    v148 = 0;
                    if ( (qword_1C013A870 & 0x461C8ED7) != 0
                      && (qword_1C013A878 & 0xFFFFFFFFB9E37128uLL) == 0
                      && (qword_1C013A870 & 0x4000) != 0 )
                    {
                      do
                      {
                        NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v29);
                        if ( v150 >= NumDifferentPhysicalAdapters )
                          goto LABEL_589;
                      }
                      while ( !*(_QWORD *)(344LL * v150
                                         + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 366) + 16LL) + 2808LL)
                                         + 40) );
                      v148 = 1;
                    }
LABEL_589:
                    *((_BYTE *)v159 + 1896) = v148;
                    v44 = v164;
                    LOBYTE(v164->VidPnSourceId) = v148;
                    v44->ModeCount = 0;
                    LODWORD(v28) = 0;
                    v52 = v157;
                    v51 = v158;
                    goto LABEL_104;
                  }
                  if ( v157 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v171);
                  COREACCESS::~COREACCESS((COREACCESS *)v188);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v189);
                  if ( v160 )
                    DXGCONTEXT::ReleaseReference(v160);
                  goto LABEL_568;
                }
                if ( v157 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v171);
                COREACCESS::~COREACCESS((COREACCESS *)v188);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v189);
                v147 = v160;
                if ( !v160 )
                  goto LABEL_575;
                goto LABEL_574;
              case D3DKMT_ESCAPE_MIRACAST_ADAPTER_DIAG_INFO:
                if ( v167.PrivateDriverDataSize != 32 )
                {
                  LODWORD(v28) = -1073741811;
                  v52 = v157;
                  goto LABEL_676;
                }
                if ( DXGADAPTER::IsDiagnosticAllowed((DXGADAPTER *)v18) )
                {
                  v44 = v164;
                  DxgkGetAdapterMiracastInfo(*(_QWORD *)(v18 + 216), (__int64)v164);
                  LODWORD(v28) = 0;
                  v52 = v157;
                  v43 = v159;
                  v51 = v158;
                  goto LABEL_104;
                }
                CurrentProcessSessionId = PsGetCurrentProcessSessionId(v142, v141, v143, v144);
                WdLogSingleEntry2(3LL, v18, CurrentProcessSessionId);
                LODWORD(v28) = -1073741790;
                v52 = v157;
                goto LABEL_676;
              case D3DKMT_ESCAPE_PROCESS_VERIFIER_OPTION:
                if ( v167.PrivateDriverDataSize < 0x20 )
                {
                  if ( !v157 )
                    goto LABEL_593;
                  goto LABEL_592;
                }
                Height = v41->pModeList[0].Height;
                if ( Height > 1 )
                {
                  if ( !v157 )
                    goto LABEL_593;
                  goto LABEL_592;
                }
                if ( *v41 )
                {
                  if ( !v157 )
                    goto LABEL_593;
                  goto LABEL_592;
                }
                if ( !Height )
                  *(_OWORD *)&v41->pModeList[0].Format = 0LL;
                if ( v41->pModeList[0].Width != 1000 && v41->pModeList[0].Width != 1001 )
                {
                  if ( !v157 )
                    goto LABEL_593;
                  goto LABEL_592;
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
                  goto LABEL_508;
                }
                v152 = *((_QWORD *)v29 + 366);
                v44 = v164;
                LODWORD(v28) = (*(__int64 (__fastcall **)(_QWORD, struct DXGPROCESS *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v152 + 760) + 8LL)
                                                                                              + 1096LL))(
                                 *(_QWORD *)(v152 + 768),
                                 Current,
                                 v164->pModeList[0].Height);
                goto LABEL_405;
              case D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION:
                if ( v167.PrivateDriverDataSize < 0x20 )
                {
                  if ( !v157 )
                    goto LABEL_593;
                  goto LABEL_592;
                }
                v153 = v41->ModeCount;
                if ( v153 > 1 )
                {
                  if ( !v157 )
                    goto LABEL_593;
                  goto LABEL_592;
                }
                if ( !v153 )
                {
                  *(_OWORD *)&v41->pModeList[0].Width = 0LL;
                  v41->pModeList[0].RefreshRate = 0LL;
                }
                if ( v41->VidPnSourceId != 1000 && v41->VidPnSourceId != 1001 )
                {
                  if ( !v157 )
                    goto LABEL_593;
                  goto LABEL_592;
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
                  goto LABEL_508;
                }
                if ( !*((_BYTE *)v29 + 209) )
                {
                  v154 = *((_QWORD *)v29 + 366);
                  v44 = v164;
                  LODWORD(v28) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v154 + 760) + 8LL)
                                                                           + 1104LL))(
                                   *(_QWORD *)(v154 + 768),
                                   v164->ModeCount);
                  goto LABEL_405;
                }
                goto LABEL_508;
              case D3DKMT_ESCAPE_DOD_SET_DIRTYRECT_MODE:
                if ( v167.PrivateDriverDataSize != 4 )
                {
                  WdLogSingleEntry1(2LL, v167.PrivateDriverDataSize);
                  v155 = L"Supplied Buffer size for D3DKMT_ESCAPE_DOD_SET_DIRTYRECT_MODE (0x%I64x) was not the correct size";
                  goto LABEL_629;
                }
                if ( *(_QWORD *)(v18 + 2928) )
                {
                  WdLogSingleEntry1(3LL, v18);
                  if ( !v157 )
                    goto LABEL_593;
                  goto LABEL_592;
                }
                v156 = *(_QWORD *)(v18 + 2920);
                v44 = v164;
                v52 = v157;
                v43 = v159;
                if ( !*(_QWORD *)(v156 + 448) )
                {
                  LODWORD(v28) = -1073741811;
                  goto LABEL_153;
                }
                *(_DWORD *)(v156 + 456) = v164->VidPnSourceId;
                LODWORD(v28) = 0;
                v51 = v158;
                goto LABEL_104;
              case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS:
                if ( DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v18) )
                {
                  v44 = v164;
                  LODWORD(v28) = ADAPTER_DISPLAY::ReportDisplayState(
                                   *(ADAPTER_DISPLAY **)(v18 + 2920),
                                   (struct _D3DKMT_DXGK_DIAGNOSTICS *)v164,
                                   v167.PrivateDriverDataSize);
                  goto LABEL_405;
                }
                WdLogSingleEntry1(3LL, v18);
                if ( !v157 )
                  goto LABEL_593;
                goto LABEL_592;
              case D3DKMT_ESCAPE_QUERY_IOMMU_STATUS:
                if ( !v167.PrivateDriverDataSize )
                {
                  WdLogSingleEntry1(2LL, 0LL);
                  v155 = L"Supplied Buffer size for D3DKMT_ESCAPE_QUERY_IOMMU_STATUS (0x%I64x) was to small";
                  goto LABEL_629;
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
                  goto LABEL_508;
                }
                if ( *((_BYTE *)v29 + 209) )
                  goto LABEL_508;
                v179 = 0;
                SysMmQueryIommuState(*((const struct SYSMM_ADAPTER **)v29 + 28), (union SYSMM_IOMMU_STATE *)&v179);
                v44 = v164;
                LOBYTE(v164->VidPnSourceId) = v179 & 1;
                LODWORD(v28) = 0;
                v52 = v157;
                v43 = v159;
                v51 = v158;
                goto LABEL_104;
              case D3DKMT_ESCAPE_QUERY_IOMMU_STATUS|D3DKMT_ESCAPE_TDRDBGCTRL:
                if ( !v167.PrivateDriverDataSize )
                {
                  WdLogSingleEntry1(2LL, 0LL);
                  v155 = L"Supplied Buffer size for D3DKMT_ESCAPE_QUERY_DMA_REMAPPING_STATUS (0x%I64x) was to small";
LABEL_629:
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)v155,
                    v167.PrivateDriverDataSize,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  if ( v157 )
LABEL_592:
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v171);
LABEL_593:
                  COREACCESS::~COREACCESS((COREACCESS *)v188);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v189);
                  v147 = v160;
                  if ( v160 )
LABEL_574:
                    DXGCONTEXT::ReleaseReference(v147);
LABEL_575:
                  v146 = (ADAPTER_RENDER **)v159;
                  if ( v159
                    && _InterlockedExchangeAdd64((volatile signed __int64 *)v159 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  {
LABEL_567:
                    ADAPTER_RENDER::DestroyDeviceNoLocks(v146[2], (struct DXGDEVICE *)v146);
                  }
LABEL_568:
                  if ( v166 )
                    DXGADAPTER::ReleaseReference(v166);
LABEL_199:
                  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
                  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
                  if ( !v163 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
                    goto LABEL_687;
                  goto LABEL_686;
                }
                if ( v29 )
                {
                  if ( !*((_BYTE *)v29 + 209) )
                  {
                    LODWORD(v174) = 0;
                    SysMmQueryIommuState(*((const struct SYSMM_ADAPTER **)v29 + 28), (union SYSMM_IOMMU_STATE *)&v174);
                    v44 = v164;
                    LOBYTE(v164->VidPnSourceId) = ((unsigned __int8)v174 & 2) != 0;
                    LODWORD(v28) = 0;
                    v52 = v157;
                    v43 = v159;
                    v51 = v158;
                    goto LABEL_104;
                  }
                  if ( v157 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v171);
                  COREACCESS::~COREACCESS((COREACCESS *)v188);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v189);
                  if ( v160 )
                    DXGCONTEXT::ReleaseReference(v160);
                  if ( v159
                    && _InterlockedExchangeAdd64((volatile signed __int64 *)v159 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  {
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v159 + 2), v159);
                  }
                  if ( v166 )
                    DXGADAPTER::ReleaseReference(v166);
                  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
                  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
                  if ( !v163 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
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
LABEL_508:
                  if ( v157 )
LABEL_455:
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v171);
LABEL_456:
                  COREACCESS::~COREACCESS((COREACCESS *)v188);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v189);
                  v131 = v160;
                  if ( v160 )
LABEL_449:
                    DXGCONTEXT::ReleaseReference(v131);
LABEL_450:
                  v127 = (ADAPTER_RENDER **)v159;
                  if ( v159
                    && _InterlockedExchangeAdd64((volatile signed __int64 *)v159 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  {
LABEL_432:
                    ADAPTER_RENDER::DestroyDeviceNoLocks(v127[2], (struct DXGDEVICE *)v127);
                  }
LABEL_433:
                  v124 = v166;
                  if ( v166 )
LABEL_421:
                    DXGADAPTER::ReleaseReference(v124);
LABEL_422:
                  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
                  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
                  if ( !v163 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
                    return 3221225659LL;
                }
                McTemplateK0q_EtwWriteTransfer(v125, &EventProfilerExit, v126, v161);
                return 3221225659LL;
              default:
                LODWORD(v28) = -1073741811;
                WdLogSingleEntry1(3LL, v34);
                goto LABEL_404;
            }
          }
          if ( v160 )
            v118 = *((_DWORD *)v160 + 7);
          else
            v118 = 0;
          if ( v159 )
            v119 = *((_DWORD *)v159 + 118);
          else
            v119 = 0;
          v120 = *((_DWORD *)v29 + 1140);
          HostProcess = DXGPROCESS::GetHostProcess(v174);
          v122 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                   (DXGADAPTER *)((char *)v29 + 4472),
                   HostProcess,
                   v120,
                   v119,
                   v118,
                   v34,
                   v167.Flags,
                   v167.PrivateDriverDataSize,
                   (unsigned __int8 *)v164);
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
          goto LABEL_404;
        }
        COREACCESS::Release((COREACCESS *)v192);
        LODWORD(v28) = -1073741130;
        v52 = v173;
        goto LABEL_676;
      }
      goto LABEL_372;
    }
    v71 = 0;
    if ( v167.Type == D3DKMT_ESCAPE_DRIVERPRIVATE || v167.Type == D3DKMT_ESCAPE_VIDSCH && *v33 == 3 )
      v71 = 1;
    if ( *(char **)(v18 + 2928) == v30 )
    {
      if ( !v71 )
      {
        v72 = 2LL;
        goto LABEL_159;
      }
    }
    else
    {
      v71 = 1;
    }
    v72 = 3LL;
LABEL_159:
    LODWORD(v28) = COREADAPTERACCESS::AcquireExclusive((__int64)v189, v72);
    if ( (int)v28 >= 0 )
    {
      if ( !v71 )
      {
        v31 = *(_QWORD *)(v18 + 2928);
        if ( v31 )
          ADAPTER_RENDER::FlushScheduler(v31, 2u, 0xFFFFFFFF, 0);
      }
      v39 = 1;
      v176 = 1;
      v34 = v167.Type;
      Current = v174;
      goto LABEL_73;
    }
    v52 = 0;
LABEL_676:
    v43 = v159;
    goto LABEL_153;
  }
  if ( !v29 )
  {
    WdLogSingleEntry1(3LL, 1922LL);
    if ( v160 )
      DXGCONTEXT::ReleaseReference(v160);
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
    if ( !v163 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      goto LABEL_687;
LABEL_686:
    McTemplateK0q_EtwWriteTransfer(v77, &EventProfilerExit, v78, v161);
LABEL_687:
    LODWORD(v28) = -1073741811;
    return (unsigned int)v28;
  }
  v112 = v164;
  if ( v164->VidPnSourceId == 9 )
  {
    if ( v164->pModeList[0].Format == D3DDDIFMT_UNKNOWN )
    {
      if ( !(unsigned __int8)DxgkpIsDrtEnabled((unsigned int)(v167.Type - 1)) )
      {
        WdLogSingleEntry1(3LL, 1902LL);
        if ( v160 )
          DXGCONTEXT::ReleaseReference(v160);
        if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
        if ( !v163 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
          return 3221225506LL;
        goto LABEL_338;
      }
      v112 = v164;
    }
    v113 = *(void **)&v112->pModeList[0].Width;
    *(_QWORD *)&v112->pModeList[0].Width = 0LL;
    v105 = DxgEscapeSuspendResumeProcess(&v167, v112, v29, v113, 1, v112->pModeList[0].Format != D3DDDIFMT_UNKNOWN);
    if ( v160 )
      DXGCONTEXT::ReleaseReference(v160);
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
    if ( !v163 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return v105;
  }
  else
  {
    if ( v164->VidPnSourceId != 10 )
      goto LABEL_54;
    v116 = *(void **)&v164->pModeList[0].Width;
    *(_QWORD *)&v164->pModeList[0].Width = 0LL;
    v105 = DxgEscapeSuspendResumeProcess(&v167, v112, v29, v116, 0, 0);
    if ( v160 )
      DXGCONTEXT::ReleaseReference(v160);
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v168);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v161);
    if ( !v163 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return v105;
  }
  McTemplateK0q_EtwWriteTransfer(v114, &EventProfilerExit, v115, v161);
  return v105;
}
