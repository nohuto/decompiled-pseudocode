/*
 * XREFs of ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018FB80
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C018FB60 (DxgkQueryAdapterInfo.c)
 *     DxgkQueryAdapterInfoInternal @ 0x1C02D4220 (DxgkQueryAdapterInfoInternal.c)
 *     ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0383B50 (-VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C0004E00 (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0004EF0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C0004F5C (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007998 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00082D8 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ @ 0x1C0014FBC (-IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00164A0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C001B6D8 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001B844 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001B880 (-Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C0046958 (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ?GetDisplayOnlyDriverPreferPhysicallyContiguous@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0046A2C (-GetDisplayOnlyDriverPreferPhysicallyContiguous@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     DxgkInvalidateDeviceState @ 0x1C005EFC0 (DxgkInvalidateDeviceState.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C016B7A4 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C0176618 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C018BCDC (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0192AEC (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C0192D3C (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C0192DC4 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C0192E20 (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z @ 0x1C0192FDC (-QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0193078 (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?QueryWDDM3_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_3_0_CAPS@@@Z @ 0x1C0193130 (-QueryWDDM3_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_3_0_CAPS@@@Z.c)
 *     DpiIsDriverUpdateInProgress @ 0x1C01932F4 (DpiIsDriverUpdateInProgress.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C019F070 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C01B625C (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01C71F0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01CA0D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C01E4D18 (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C020667C (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C022E5EA (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C02B78E4 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C02B7A78 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C02B7AF8 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z @ 0x1C02B9570 (-QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z.c)
 *     ?QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z @ 0x1C02B960C (-QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z.c)
 *     ?QueryWDDM2_9Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_9_CAPS@@@Z @ 0x1C02B9668 (-QueryWDDM2_9Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_9_CAPS@@@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C02C0888 (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z @ 0x1C02C14EC (-GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C02CF2E4 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x1C02CFE4C (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C02CFF48 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C031266C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C032F774 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C038C5BC (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C03998C4 (DpiQueryAdapterRegistryInfo.c)
 *     DpiReadBlockListInfo @ 0x1C0399E2C (DpiReadBlockListInfo.c)
 */

__int64 __fastcall DxgkQueryAdapterInfoImpl(const struct _D3DKMT_QUERYADAPTERINFO *a1, char a2, struct DXGADAPTER *a3)
{
  const struct _D3DKMT_QUERYADAPTERINFO *v5; // rdi
  __int64 v6; // r13
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // rsi
  struct DXGTHREAD *Current; // rax
  const wchar_t *v11; // r9
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf
  __int128 v17; // xmm0
  size_t v18; // xmm1_8
  __int64 v19; // r8
  size_t v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int *v27; // r15
  __int64 v28; // r8
  unsigned __int64 v29; // r14
  struct DXGADAPTER **v30; // r9
  DXGADAPTER *v31; // r12
  int AdapterRegistryInfo; // edi
  unsigned int v33; // esi
  int PairingAdapters; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  struct DXGADAPTER *v37; // rbx
  unsigned int v38; // esi
  int v39; // eax
  bool v40; // al
  __int64 v41; // rcx
  unsigned int v42; // r9d
  __int64 v43; // r14
  int v44; // eax
  ADAPTER_DISPLAY **v45; // rbx
  signed __int64 v46; // rax
  enum _KMTQUERYADAPTERINFOTYPE v47; // r12d
  __int64 v48; // r9
  struct DXGADAPTER *v49; // r8
  __int64 v50; // rdx
  __int64 HostSilo; // rax
  __int64 v52; // rdx
  struct DXGADAPTER *v53; // rbx
  int v54; // eax
  __int64 v55; // r9
  struct DXGADAPTER *v56; // r8
  __int64 v57; // r8
  unsigned __int64 v58; // r9
  char *v59; // r8
  char *v60; // rcx
  int v61; // eax
  size_t v62; // rbx
  __int64 v63; // rdi
  __int64 v64; // r8
  unsigned __int64 v65; // r9
  char *v66; // r8
  int v67; // eax
  __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rcx
  DXGPROCESS *v72; // rsi
  int v73; // ecx
  __int64 v74; // rbx
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  struct DXGADAPTER *v76; // rax
  DXGADAPTER *v77; // rbx
  __int64 v78; // rcx
  const void **v79; // rdx
  size_t v80; // r8
  struct DXGADAPTER *v81; // rax
  __int64 v82; // rcx
  struct DXGADAPTER *v83; // rcx
  struct DXGADAPTER *v84; // rbx
  char v85; // cl
  int v86; // eax
  unsigned __int8 IsDriverUpdateInProgress; // al
  void *v88; // rbx
  struct DXGADAPTER *v89; // rax
  int v90; // edx
  int v91; // eax
  struct DXGADAPTER *v92; // rsi
  struct DXGADAPTER *v93; // rbx
  unsigned int *v94; // rax
  unsigned int v95; // ecx
  __int64 v96; // rdx
  DXGADAPTER *v97; // rcx
  struct DXGADAPTER *v98; // rbx
  DXGADAPTER *v99; // rcx
  DXGADAPTER *v100; // r10
  DXGADAPTER *v101; // r11
  __int64 v102; // r8
  __int64 v103; // r8
  struct DXGADAPTER *v104; // r8
  int v105; // edx
  __int64 v106; // rcx
  _DWORD *v107; // rcx
  int v108; // eax
  struct DXGADAPTER *v109; // rbx
  struct DXGADAPTER *v110; // rbx
  __int64 v111; // rcx
  __int64 v112; // rax
  ADAPTER_RENDER *v113; // rsi
  __int64 v114; // rbx
  DXGADAPTER *v115; // rcx
  const struct _UNICODE_STRING *DisplayUMDFileName; // rax
  unsigned __int16 *v117; // r8
  int v118; // ecx
  int v119; // eax
  ADAPTER_DISPLAY **v120; // r8
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  void *v122; // rcx
  __int64 v123; // rcx
  __int64 v124; // r8
  struct DXGADAPTER *v125; // [rsp+50h] [rbp-288h] BYREF
  void *Src[2]; // [rsp+58h] [rbp-280h]
  size_t Size; // [rsp+68h] [rbp-270h]
  char v128; // [rsp+70h] [rbp-268h] BYREF
  char v129; // [rsp+71h] [rbp-267h]
  DXGADAPTER *v130; // [rsp+78h] [rbp-260h] BYREF
  int v131; // [rsp+80h] [rbp-258h] BYREF
  __int64 v132; // [rsp+88h] [rbp-250h]
  char v133; // [rsp+90h] [rbp-248h]
  struct DXGPROCESS *v134; // [rsp+98h] [rbp-240h]
  struct DXGADAPTER *v135; // [rsp+A0h] [rbp-238h] BYREF
  unsigned int v136; // [rsp+A8h] [rbp-230h]
  _D3DKMT_WDDM_1_3_CAPS v137; // [rsp+B0h] [rbp-228h] BYREF
  unsigned int v138; // [rsp+B4h] [rbp-224h] BYREF
  unsigned int v139; // [rsp+B8h] [rbp-220h]
  unsigned int v140; // [rsp+BCh] [rbp-21Ch] BYREF
  __int64 v141; // [rsp+C0h] [rbp-218h] BYREF
  struct DXGADAPTER *v142; // [rsp+C8h] [rbp-210h] BYREF
  unsigned __int64 v143; // [rsp+D8h] [rbp-200h] BYREF
  struct DXGDEVICE *v144; // [rsp+E0h] [rbp-1F8h] BYREF
  struct DXGDEVICE *v145; // [rsp+E8h] [rbp-1F0h] BYREF
  void *v146; // [rsp+F0h] [rbp-1E8h]
  unsigned int *v147; // [rsp+F8h] [rbp-1E0h]
  _BYTE v148[8]; // [rsp+100h] [rbp-1D8h] BYREF
  struct DXGADAPTER *v149; // [rsp+108h] [rbp-1D0h]
  char v150; // [rsp+110h] [rbp-1C8h]
  unsigned __int64 v151; // [rsp+120h] [rbp-1B8h] BYREF
  _DXGKARG_QUERYADAPTERINFO v152; // [rsp+128h] [rbp-1B0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v153; // [rsp+158h] [rbp-180h] BYREF
  __int128 v154; // [rsp+188h] [rbp-150h] BYREF
  int v155; // [rsp+198h] [rbp-140h]
  _D3DKMT_QUERYADAPTERINFO v156; // [rsp+1A0h] [rbp-138h] BYREF
  _BYTE v157[56]; // [rsp+1B8h] [rbp-120h] BYREF
  _BYTE v158[144]; // [rsp+1F0h] [rbp-E8h] BYREF
  wchar_t Str2[20]; // [rsp+280h] [rbp-58h] BYREF

  v129 = a2;
  v5 = a1;
  v131 = -1;
  v6 = 0LL;
  v132 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v133 = 1;
    v131 = 2015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2015);
  }
  else
  {
    v133 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v131, 2015);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v134 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v134 )
        goto LABEL_9;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v134 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v134 )
        goto LABEL_9;
      WdLogSingleEntry1(2LL, 2923LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v134 = v9;
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v11 = L"Invalid process context, returning 0x%I64x";
    goto LABEL_16;
  }
LABEL_9:
  if ( a3 && a2 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v11 = L"Not valid to provide pAdapter when calling from usermode, return 0x%I64x";
LABEL_16:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v131);
    v16 = v133 == 0;
LABEL_75:
    if ( !v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v131);
    return 3221225485LL;
  }
  v146 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (const struct _D3DKMT_QUERYADAPTERINFO *)MmUserProbeAddress;
    v17 = *(_OWORD *)&v5->hAdapter;
    v18 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  else
  {
    v17 = *(_OWORD *)&v5->hAdapter;
    v18 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  Size = v18;
  *(_OWORD *)Src = v17;
  if ( !*((_QWORD *)&v17 + 1) )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v131);
    if ( v133 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v19, v131);
    return 3221225485LL;
  }
  v21 = (unsigned int)Size;
  if ( !(_DWORD)Size )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v131);
    if ( v133 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v131);
    return 3221225485LL;
  }
  v24 = (Size + 7) & 0xFFFFFFF8;
  v139 = v24;
  if ( v24 < (unsigned int)Size )
  {
    WdLogSingleEntry2(3LL, -1073741811LL, 3188LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v131);
    if ( v133 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v131);
    return 3221225485LL;
  }
  v27 = (unsigned int *)operator new[](v24, 0x4B677844u, 64LL);
  v147 = v27;
  v146 = v27;
  if ( !v27 )
  {
    WdLogSingleEntry1(3LL, -1073741801LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v131);
    if ( v133 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v28, v131);
    return 3221225495LL;
  }
  v29 = SHIDWORD(Src[0]);
  switch ( HIDWORD(Src[0]) )
  {
    case 1:
    case 7:
    case 9:
    case 0x10:
    case 0x17:
    case 0x19:
    case 0x1F:
    case 0x22:
    case 0x29:
    case 0x2A:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x32:
    case 0x33:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x43:
    case 0x47:
    case 0x48:
      if ( v129 )
      {
        if ( (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v17 + 1) < *((_QWORD *)&v17 + 1)
          || (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v17 + 1) > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v27, *((const void **)&v17 + 1), v21);
      }
      else
      {
        memmove(v27, *((const void **)&v17 + 1), (unsigned int)Size);
      }
      break;
    default:
      memset(v27, 0, (unsigned int)Size);
      break;
  }
  v130 = a3;
  v30 = &v130;
  if ( a3 )
    v30 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v142,
    (unsigned int)Src[0],
    (struct _KTHREAD **)v134,
    v30,
    1);
  v31 = v130;
  if ( !v130 )
  {
    WdLogSingleEntry2(3LL, LODWORD(Src[0]), -1073741811LL);
    operator delete(v27);
    if ( v142 )
      DXGADAPTER::ReleaseReference(v142);
LABEL_74:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v131);
    v16 = v133 == 0;
    goto LABEL_75;
  }
  AdapterRegistryInfo = 0;
  v33 = 0;
  if ( (_DWORD)v29 == 9 )
  {
    if ( (_DWORD)v21 == 48 )
      goto LABEL_58;
LABEL_72:
    WdLogSingleEntry2(3LL, v21, -1073741811LL);
    operator delete(v27);
    if ( v142 )
      DXGADAPTER::ReleaseReference(v142);
    goto LABEL_74;
  }
  if ( (_DWORD)v29 != 67 )
    goto LABEL_59;
  if ( (_DWORD)v21 != 8 )
    goto LABEL_72;
LABEL_58:
  v33 = *v27;
LABEL_59:
  v125 = 0LL;
  v135 = 0LL;
  v143 = 0LL;
  v151 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v130, v33, &v125, &v143, &v135, &v151, 0);
  v136 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    if ( (_DWORD)v29 != 9 && (_DWORD)v29 != 67 )
    {
      v135 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v31, v33, &v125, &v143, 0LL, 0LL, 0);
      v136 = PairingAdapters;
    }
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry2(2LL, v31, v33);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x!",
        (__int64)v31,
        v33,
        0LL,
        0LL,
        0LL);
      operator delete(v27);
      if ( v142 )
        DXGADAPTER::ReleaseReference(v142);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v131);
      if ( v133 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v131);
      return v136;
    }
  }
  v37 = v125;
  if ( v125 == v31 || v135 == v31 )
  {
    v38 = 1;
  }
  else
  {
    v38 = 1;
    WdLogSingleEntry1(1LL, 3356LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pRenderAdapter == pAdapterIn) || (pDisplayAdapter == pAdapterIn)",
      3356LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v135 && !*((_QWORD *)v135 + 365) )
  {
    WdLogSingleEntry1(1LL, 3358LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
      3358LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !v37 || !*((_QWORD *)v37 + 366) )
  {
    WdLogSingleEntry1(1LL, 3360LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pRenderAdapter != NULL) && (pRenderAdapter->IsRenderAdapter())",
      3360LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v40 = 0;
  if ( (unsigned int)v29 <= 0x1B )
  {
    v39 = 138619200;
    if ( _bittest(&v39, v29) )
      v40 = 1;
  }
  if ( (v31 != v37 || !*((_BYTE *)v31 + 209)) && (!v37 || !*((_BYTE *)v37 + 209) || v40)
    || (unsigned int)v29 <= 0x39 && (v41 = 0x210F85840908010LL, _bittest64(&v41, v29))
    || (_DWORD)v29 == 68 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v158, v37, v135);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v125 + 2), v125);
    v45 = (ADAPTER_DISPLAY **)v135;
    if ( v135 )
    {
      v46 = _InterlockedExchangeAdd64((volatile signed __int64 *)v135 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v45 = (ADAPTER_DISPLAY **)v135;
      if ( v46 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v135 + 2), v135);
    }
    v47 = HIDWORD(Src[0]);
    if ( HIDWORD(Src[0]) != 9 && HIDWORD(Src[0]) != 67 )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157,
        v125,
        (struct DXGADAPTER *)v45);
      if ( *((_DWORD *)v130 + 50) == 1 && *((_DWORD *)v125 + 50) == 1 )
      {
        v49 = v135;
        if ( !v135 )
          goto LABEL_122;
        if ( *((_DWORD *)v135 + 50) == 1 )
        {
          v49 = v135;
LABEL_122:
          v47 = HIDWORD(Src[0]);
          v50 = 0x1C0000000uLL;
          switch ( HIDWORD(Src[0]) )
          {
            case 0:
              *(_QWORD *)&v152.Flags.0 = 0LL;
              HIDWORD(v152.hKmdProcessHandle) = 0;
              memset(&v152, 0, 24);
              v152.pOutputData = v27;
              v152.OutputDataSize = Size;
              v72 = v134;
              v73 = *((_DWORD *)v134 + 106);
              if ( (v73 & 0x100) != 0 )
                v152.Flags.Value = ((unsigned __int8)(2 * *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v134 + 76) + 608LL) + 336LL)) ^ 1) & 2 ^ 1;
              v74 = *((_QWORD *)v125 + 366);
              KeEnterCriticalRegion();
              ExAcquirePushLockSharedEx(v74 + 72, 0LL);
              _InterlockedIncrement((volatile signed __int32 *)(v74 + 88));
              RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(v72, *((_DWORD *)v125 + 60));
              if ( RenderAdapterInfo )
                v152.hKmdProcessHandle = (HANDLE)*((_QWORD *)RenderAdapterInfo + 6);
              _InterlockedDecrement((volatile signed __int32 *)(v74 + 88));
              ExReleasePushLockSharedEx(v74 + 72, 0LL);
              KeLeaveCriticalRegion();
              AdapterRegistryInfo = DXGADAPTER::DdiQueryAdapterInfo(v125, &v152);
              goto LABEL_184;
            case 1:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 524 )
                goto LABEL_128;
              v53 = v125;
              v54 = ADAPTER_RENDER::CopyUmdFileName(
                      *((ADAPTER_RENDER **)v125 + 366),
                      (struct _D3DKMT_UMDFILENAMEINFO *)v27);
              goto LABEL_131;
            case 2:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 528 )
                goto LABEL_334;
              v64 = *((_QWORD *)v125 + 366);
              if ( (*((_DWORD *)v134 + 106) & 8) != 0 )
              {
                v27[130] = *(_DWORD *)(v64 + 712);
                v27[131] = *(_DWORD *)(v64 + 716);
                v65 = *(unsigned __int16 *)(v64 + 696);
                v66 = *(char **)(v64 + 704);
              }
              else
              {
                v27[130] = *(_DWORD *)(v64 + 688);
                v27[131] = *(_DWORD *)(v64 + 692);
                v65 = *(unsigned __int16 *)(v64 + 672);
                v66 = *(char **)(v64 + 680);
              }
              v67 = RtlStringCbCopyNW((char *)v27, 0x1C0000000LL, v66, v65);
              AdapterRegistryInfo = v67;
              if ( v67 >= 0 )
                goto LABEL_429;
              v68 = v67;
              WdLogSingleEntry1(2LL, v67);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"CopyIcdFileName failed with 0x%I64x",
                v68,
                0LL,
                0LL,
                0LL,
                0LL);
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 3:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 24 )
                goto LABEL_331;
              v141 = 0LL;
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *, __int64 *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v125 + 366) + 760LL) + 8LL) + 64LL))(
                *(_QWORD *)(*((_QWORD *)v125 + 366) + 768LL),
                0LL,
                &v141,
                &v141,
                &v141,
                v27,
                v27 + 2,
                v27 + 4);
              AdapterRegistryInfo = 0;
              goto LABEL_429;
            case 4:
            case 0x34:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 16 )
                goto LABEL_334;
              v76 = v125;
              if ( HIDWORD(Src[0]) == 4 )
                v76 = v130;
              if ( !v76 )
                goto LABEL_191;
              *(_OWORD *)v27 = *(_OWORD *)((char *)v76 + 292);
              AdapterRegistryInfo = 0;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 5:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 12 )
                goto LABEL_331;
              AdapterRegistryInfo = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v125 + 366) + 736LL)
                                                                                                  + 8LL)
                                                                                      + 504LL))(
                                      *(_QWORD *)(*((_QWORD *)v125 + 366) + 744LL),
                                      v27);
              goto LABEL_429;
            case 6:
            case 0x35:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 12 )
                goto LABEL_334;
              AdapterRegistryInfo = -1073741823;
              v81 = v125;
              if ( HIDWORD(Src[0]) == 6 )
                v81 = v130;
              if ( !v81 )
                goto LABEL_429;
              v82 = *(_QWORD *)(*((_QWORD *)v81 + 27) + 64LL);
              *v27 = *(_DWORD *)(v82 + 1144);
              v27[1] = *(unsigned __int16 *)(v82 + 1150);
              v27[2] = (unsigned __int16)*(_DWORD *)(v82 + 1148);
              AdapterRegistryInfo = 0;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 7:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 12 )
                goto LABEL_334;
              v70 = *(_QWORD *)(*((_QWORD *)v125 + 366) + 760LL);
              v71 = *((_QWORD *)v134 + 8);
              if ( v71 )
                v6 = *(_QWORD *)(v71 + 8LL * (unsigned int)(*(_DWORD *)v70 - 1));
              AdapterRegistryInfo = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v70 + 8) + 368LL))(
                                      v6,
                                      v27);
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 8:
            case 0x36:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 2080 )
                goto LABEL_334;
              AdapterRegistryInfo = -1073741823;
              v83 = v125;
              if ( HIDWORD(Src[0]) == 8 )
                v83 = v130;
              if ( !v83 )
                goto LABEL_429;
              AdapterRegistryInfo = DpiQueryAdapterRegistryInfo(*((_QWORD *)v83 + 27), v27);
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0xB:
            case 0x37:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_334;
              AdapterRegistryInfo = -1073741823;
              v84 = v125;
              if ( HIDWORD(Src[0]) == 11 )
                v84 = v130;
              if ( !v84 )
                goto LABEL_429;
              v85 = 0;
              v128 = 0;
              v86 = *((_DWORD *)v84 + 109);
              if ( (v86 & 0x20) != 0 || (v86 & 4) != 0 )
              {
                IsDriverUpdateInProgress = 0;
              }
              else
              {
                IsDriverUpdateInProgress = DpiIsDriverUpdateInProgress(*((_QWORD *)v84 + 27), &v128);
                v85 = v128;
              }
              *v27 = IsDriverUpdateInProgress;
              if ( !v85 )
                goto LABEL_321;
              v88 = (void *)*((_QWORD *)v84 + 27);
              ObfReferenceObject(v88);
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              DxgkInvalidateDeviceState((__int64)v88);
              ObfDereferenceObject(v88);
              AdapterRegistryInfo = 0;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0xC:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_331;
              *v27 = 0;
              *v27 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v125 + 366) + 16LL) + 2284LL) >> 5) & 1;
              AdapterRegistryInfo = 0;
              goto LABEL_429;
            case 0xD:
            case 0x38:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_334;
              AdapterRegistryInfo = -1073741823;
              v89 = v125;
              if ( HIDWORD(Src[0]) == 13 )
                v89 = v130;
              if ( !v89 )
                goto LABEL_429;
              v90 = *((_DWORD *)v89 + 705);
              *v27 = v90;
              if ( (*((_DWORD *)v134 + 106) & 0x100) != 0
                && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v134 + 76) + 608LL) + 392LL) <= 0x10u )
              {
                v91 = v90;
                if ( v90 > 2600 )
                  v91 = 2600;
                *v27 = v91;
              }
              goto LABEL_321;
            case 0xF:
            case 0x39:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_334;
              AdapterRegistryInfo = -1073741823;
              v92 = v125;
              v93 = v125;
              if ( HIDWORD(Src[0]) == 15 )
                v93 = v130;
              if ( !v93 )
                goto LABEL_429;
              LODWORD(v94) = DXGADAPTER::GetAdapterType(v93);
              v95 = *v94;
              *v27 = *v94;
              if ( v92 )
              {
                v95 ^= ((unsigned __int16)v95 ^ (unsigned __int16)(*((unsigned __int8 *)v92 + 212) << 8)) & 0x100;
                *v27 = v95;
              }
              if ( *((_DWORD *)v93 + 792) )
                *v27 = v95 | 0x2000;
              goto LABEL_321;
            case 0x10:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 8 )
                goto LABEL_334;
              if ( (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 4) == 0 )
                goto LABEL_249;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              AdapterRegistryInfo = OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
                                      v130,
                                      (__int64)lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_);
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x11:
            case 0x3A:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 12 )
                goto LABEL_334;
              AdapterRegistryInfo = -1073741823;
              v97 = v125;
              if ( HIDWORD(Src[0]) == 17 )
                v97 = v130;
              if ( !v97 )
                goto LABEL_429;
              DXGADAPTER::QueryWDDM1_2Caps(v97, (struct _D3DKMT_WDDM_1_2_CAPS *)v27);
              AdapterRegistryInfo = 0;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x12:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 8 )
                goto LABEL_331;
              AdapterRegistryInfo = ADAPTER_RENDER::GetUmdFileVersion(
                                      *((ADAPTER_RENDER **)v125 + 366),
                                      (union _LARGE_INTEGER *)v27);
              goto LABEL_429;
            case 0x13:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_334;
              if ( v49 && DXGADAPTER::IsIndirectDisplayDevice(v49) )
                goto LABEL_266;
              LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v125 + 366) + 16LL) + 2755LL) != 0;
              *v27 = v6;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x14:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_331;
              LOBYTE(v6) = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v125 + 366)) != 0;
              *v27 = v6;
              goto LABEL_429;
            case 0x15:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 520 )
                goto LABEL_334;
              v53 = v125;
              if ( !(_BYTE)word_1C014049C || !*((_BYTE *)v125 + 2759) || (*((_DWORD *)v125 + 698) & 0x20) != 0 )
              {
                AdapterRegistryInfo = -1073741637;
                v55 = -1073741637LL;
                goto LABEL_133;
              }
              v54 = ADAPTER_RENDER::CopyDListFileName(
                      *((ADAPTER_RENDER **)v125 + 366),
                      (unsigned __int16 *)v27,
                      (unsigned int)v49);
LABEL_131:
              AdapterRegistryInfo = v54;
              if ( v54 < 0 )
              {
                v55 = v54;
                goto LABEL_133;
              }
              goto LABEL_429;
            case 0x16:
            case 0x3B:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_334;
              AdapterRegistryInfo = -1073741823;
              v99 = v125;
              if ( HIDWORD(Src[0]) == 22 )
                v99 = v130;
              if ( !v99 )
                goto LABEL_429;
              DXGADAPTER::QueryWDDM1_3Caps(v99, (struct _D3DKMT_WDDM_1_3_CAPS *)v27);
              if ( v100 && v101 != v100 )
              {
                v137.0 = 0;
                DXGADAPTER::QueryWDDM1_3Caps(v100, &v137);
                *v27 ^= (*v27 ^ v137.Value) & 0x20;
              }
              goto LABEL_321;
            case 0x17:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 16 )
                goto LABEL_334;
              if ( !v27[1] )
                goto LABEL_276;
              if ( (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 4) == 0 )
              {
LABEL_249:
                AdapterRegistryInfo = -1073741790;
                v96 = -1073741790LL;
                goto LABEL_250;
              }
              if ( v27[1] )
              {
                *(_DWORD *)(*((_QWORD *)v125 + 366) + 1240LL) = v27[3];
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              else
              {
LABEL_276:
                v98 = v125;
                v27[2] = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v125 + 366));
                v27[3] = *(_DWORD *)(*((_QWORD *)v98 + 366) + 1240LL);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              goto LABEL_446;
            case 0x18:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_331;
              DXGADAPTER::QueryWDDM2_0Caps(v125, (struct _D3DKMT_WDDM_2_0_CAPS *)v27);
              goto LABEL_429;
            case 0x19:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 78 )
                goto LABEL_331;
              AdapterRegistryInfo = DXGADAPTER::QueryNodeMetadata(v125, *v27, (struct _DXGK_NODEMETADATA *)(v27 + 1));
              goto LABEL_429;
            case 0x1A:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 520 )
                goto LABEL_334;
              v53 = v125;
              v102 = *((_QWORD *)v125 + 366);
              *(_WORD *)v27 = 0;
              v54 = RtlStringCbCopyNW(
                      (char *)v27,
                      0x1C0000000LL,
                      *(char **)(v102 + 648),
                      *(unsigned __int16 *)(v102 + 640));
              goto LABEL_131;
            case 0x1B:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_331;
              *v27 = (*((_DWORD *)v130 + 109) >> 9) & 1;
              goto LABEL_429;
            case 0x1C:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_331;
              *v27 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v125 + 366) + 16LL) + 2276LL) & 0x10) != 0;
              goto LABEL_429;
            case 0x1D:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 520 )
                goto LABEL_334;
              v53 = v125;
              v103 = *((_QWORD *)v125 + 366);
              *(_WORD *)v27 = 0;
              v54 = RtlStringCbCopyNW(
                      (char *)v27,
                      0x1C0000000LL,
                      *(char **)(v103 + 664),
                      *(unsigned __int16 *)(v103 + 656));
              goto LABEL_131;
            case 0x1E:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_334;
              v104 = v125;
              if ( *((int *)v125 + 638) < 0x2000 )
                v105 = 1;
              else
                v105 = *((_DWORD *)v125 + 72);
              *v27 = v105;
              if ( (*((_DWORD *)v134 + 106) & 0x100) != 0 && (**((_DWORD **)v104 + 353) & 0x1000000) == 0 )
              {
                if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v104 + 27) + 64LL) + 40LL) + 28LL) >= 0xF003u )
                  v105 = 1;
                *v27 = v105;
              }
              goto LABEL_321;
            case 0x1F:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 28 )
                goto LABEL_334;
              v106 = *v27;
              if ( *((int *)v125 + 638) >= 0x2000 )
                v38 = *((_DWORD *)v125 + 72);
              v52 = *v27;
              if ( (unsigned int)v106 >= v38 )
                goto LABEL_345;
              _mm_lfence();
              v107 = *(_DWORD **)(*(_QWORD *)(344 * v106 + *((_QWORD *)v125 + 351) + 8) + 64LL);
              v27[1] = v107[281];
              v27[2] = v107[282];
              v27[3] = v107[283];
              v27[4] = v107[284];
              v27[5] = v107[285];
              v27[6] = v107[280];
              AdapterRegistryInfo = 0;
              v47 = HIDWORD(Src[0]);
              LODWORD(v43) = Size;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x20:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_331;
              QueryDriverCapsExt(v49, (struct _D3DKMT_DRIVERCAPS_EXT *)v27);
              goto LABEL_429;
            case 0x21:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_334;
              v154 = 0LL;
              v155 = 0;
              v108 = DxgkMiracastQueryMiracastSupportInternal(&v154);
              if ( v108 == -1073741637 )
                goto LABEL_266;
              if ( v108 >= 0 )
              {
                *v27 = 2 - (BYTE8(v154) != 0);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              else
              {
                AdapterRegistryInfo = v108;
                v96 = v108;
LABEL_250:
                WdLogSingleEntry1(3LL, v96);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              goto LABEL_446;
            case 0x22:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 12 )
                goto LABEL_128;
              if ( *((int *)v125 + 638) >= 0x2000 )
                v38 = *((_DWORD *)v125 + 72);
              if ( (*((_DWORD *)v125 + 571) & 0x40) == 0 )
              {
                AdapterRegistryInfo = -1073741811;
                WdLogSingleEntry1(3LL, -1073741811LL);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
                goto LABEL_446;
              }
              v52 = *v27;
              if ( (unsigned int)v52 >= v38 )
              {
LABEL_345:
                AdapterRegistryInfo = -1073741811;
                goto LABEL_129;
              }
              ADAPTER_RENDER::QueryGpuMmuCaps(
                *((ADAPTER_RENDER **)v125 + 366),
                v52,
                (struct _D3DKMT_GPUMMU_CAPS *)(v27 + 1));
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x23:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_128;
              LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v125 + 366) + 16LL) + 2861LL) != 0;
              *v27 = v6;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x24:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_128;
              *v27 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 372);
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x25:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_128;
              LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v125 + 366) + 16LL) + 2862LL) != 0;
              *v27 = v6;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x26:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_128;
              LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v125 + 366) + 16LL) + 2863LL) != 0;
              *v27 = v6;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x27:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_128;
              LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v125 + 366) + 16LL) + 2864LL) != 0;
              *v27 = v6;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x28:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_128;
              LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v125 + 366) + 16LL) + 2865LL) != 0;
              *v27 = v6;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x29:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 24 )
                goto LABEL_331;
              AdapterRegistryInfo = DxgkReadPnPRegistryPath(
                                      v125,
                                      *v27,
                                      v27[1],
                                      *((_QWORD *)v27 + 1),
                                      *((_QWORD *)v27 + 2));
              goto LABEL_429;
            case 0x2A:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 56 )
                goto LABEL_334;
              if ( *((int *)v125 + 638) >= 0x2000 )
                v38 = *((_DWORD *)v125 + 72);
              v69 = *v27;
              if ( (unsigned int)v69 >= v38 )
              {
                WdLogSingleEntry2(3LL, v69, -1073741811LL);
LABEL_321:
                AdapterRegistryInfo = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              else
              {
                (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v125 + 366) + 760LL) + 8LL) + 64LL))(
                  *(_QWORD *)(*((_QWORD *)v125 + 366) + 768LL),
                  v69,
                  v27 + 8,
                  v27 + 10,
                  v27 + 12,
                  v27 + 2,
                  v27 + 4,
                  v27 + 6);
                AdapterRegistryInfo = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              goto LABEL_446;
            case 0x2B:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_128;
              LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v125 + 366) + 16LL) + 2866LL) != 0;
              *v27 = v6;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x2C:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 1 )
                goto LABEL_128;
              *(_BYTE *)v27 = 1;
              v109 = v125;
              if ( *((_DWORD *)v125 + 103) != 1297040209 )
                goto LABEL_429;
              wcscpy(Str2, L"Qualcomm Adreno 530");
              if ( wcsncmp(*((const wchar_t **)v125 + 217), Str2, (unsigned int)(v43 + 19))
                || (*(_DWORD *)(*((_QWORD *)v109 + 351) + 16LL) & 0x10) != 0 )
              {
                goto LABEL_429;
              }
              *(_BYTE *)v27 = 0;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x2D:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_128;
              v110 = v125;
              if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v125 + 366))
                || (v111 = *(_QWORD *)(*((_QWORD *)v110 + 366) + 16LL), *(_QWORD *)(v111 + 1216))
                && *(_BYTE *)(v111 + 2866)
                || *(_QWORD *)(v111 + 1224) && *(_BYTE *)(v111 + 2866) )
              {
                *v27 = 1;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              else
              {
LABEL_266:
                *v27 = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              goto LABEL_446;
            case 0x2E:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 12 )
                goto LABEL_128;
              if ( v27[1] )
              {
                v112 = *v27;
                if ( (unsigned int)v112 >= 0x10 )
                  goto LABEL_429;
                *(_BYTE *)(v112 + *((_QWORD *)v125 + 366) + 1224) = v27[2] != 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              else
              {
                v113 = (ADAPTER_RENDER *)*((_QWORD *)v125 + 366);
                v114 = *v27;
                if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v113) && (unsigned int)v114 < 0x10 )
                {
                  LOBYTE(v6) = *((_BYTE *)v113 + v114 + 1224) != 0;
                  v27[2] = v6;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
                }
                else
                {
                  LOBYTE(v6) = 0;
                  v27[2] = v6;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
                }
              }
              goto LABEL_446;
            case 0x2F:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 8 )
                goto LABEL_128;
              v144 = 0LL;
              DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v145, *v27, (struct _KTHREAD **)v134, &v144);
              if ( v144 )
              {
                *((_BYTE *)v27 + 4) = *((_BYTE *)v144 + 1938);
                AdapterRegistryInfo = 0;
              }
              else
              {
                WdLogSingleEntry1(2LL, *v27);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Invalid hDevice (0x%I64x) specified",
                  *v27,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                AdapterRegistryInfo = -1073741811;
              }
              if ( !v145 )
                goto LABEL_429;
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v145 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              {
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v145 + 2), v145);
                v47 = HIDWORD(Src[0]);
                LODWORD(v43) = Size;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              else
              {
LABEL_184:
                v47 = HIDWORD(Src[0]);
                LODWORD(v43) = Size;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              goto LABEL_446;
            case 0x30:
              if ( (*((_DWORD *)v134 + 106) & 0x200) != 0 )
              {
                HostSilo = PsGetHostSilo();
                v6 = PsAttachSiloToCurrentThread(HostSilo);
              }
              LODWORD(v43) = Size;
              AdapterRegistryInfo = DxgkpQueryRegistry(v125, v27, Size);
              if ( !v6 )
                goto LABEL_429;
              PsAttachSiloToCurrentThread(v6);
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x31:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 8 )
                goto LABEL_331;
              AdapterRegistryInfo = ADAPTER_RENDER::GetKmdFileVersion(
                                      *((ADAPTER_RENDER **)v125 + 366),
                                      (union _LARGE_INTEGER *)v27);
              goto LABEL_429;
            case 0x32:
            case 0x33:
              v43 = (unsigned int)Size;
              if ( (unsigned int)Size < 8 )
                goto LABEL_128;
              LOBYTE(v48) = HIDWORD(Src[0]) == 50;
              AdapterRegistryInfo = DpiReadBlockListInfo(*((_QWORD *)v125 + 27), v27, (unsigned int)Size, v48);
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x3C:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 80 )
                goto LABEL_128;
              v77 = v130;
              if ( !*((_QWORD *)v130 + 27) )
              {
                WdLogSingleEntry1(1LL, 3874LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pAdapterIn->GetFdo() != NULL",
                  3874LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v78 = *(_QWORD *)(*((_QWORD *)v77 + 27) + 64LL);
              v79 = (const void **)(v78 + 4768);
              if ( !*(_QWORD *)(v78 + 4776) )
                v79 = 0LL;
              if ( v79 )
              {
                *(_OWORD *)v27 = 0LL;
                *((_OWORD *)v27 + 1) = 0LL;
                *((_OWORD *)v27 + 2) = 0LL;
                *((_OWORD *)v27 + 3) = 0LL;
                *((_OWORD *)v27 + 4) = 0LL;
                v80 = *(unsigned __int16 *)v79;
                if ( *(unsigned __int16 *)v79 >= 0x4Eu )
                  v80 = 78LL;
                memmove(v27, v79[1], v80);
                AdapterRegistryInfo = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              else
              {
LABEL_191:
                AdapterRegistryInfo = -1073741823;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              goto LABEL_446;
            case 0x3D:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 56 )
                goto LABEL_128;
              AdapterRegistryInfo = DXGADAPTER::GetNodePerfData(v125, (struct _D3DKMT_NODE_PERFDATA *)v27);
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x3E:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 64 )
                goto LABEL_128;
              AdapterRegistryInfo = DXGADAPTER::GetAdapterPerfData(v125, (struct _D3DKMT_ADAPTER_PERFDATA *)v27);
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x3F:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 40 )
                goto LABEL_128;
              AdapterRegistryInfo = DXGADAPTER::GetAdapterPerfDataCaps(v125, (struct _D3DKMT_ADAPTER_PERFDATACAPS *)v27);
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x40:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 132 )
                goto LABEL_128;
              AdapterRegistryInfo = DXGADAPTER::GetGpuVersion(v125, (struct _D3DKMT_GPUVERSION *)v27);
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x41:
            case 0x42:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 0x2000 )
                goto LABEL_128;
              AdapterRegistryInfo = -1073741823;
              v115 = v125;
              if ( HIDWORD(Src[0]) == 65 )
                v115 = v130;
              if ( !v115 )
                goto LABEL_429;
              DXGADAPTER::GetDeviceDescriptor(v115, Size, (unsigned __int16 *)v27);
              AdapterRegistryInfo = 0;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x44:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 1 )
                goto LABEL_128;
              if ( HIDWORD(Src[0]) == 68 && v125 )
              {
                *(_BYTE *)v27 = *((_BYTE *)v125 + 210);
                AdapterRegistryInfo = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              else
              {
                *(_BYTE *)v27 = 0;
                AdapterRegistryInfo = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              goto LABEL_446;
            case 0x46:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_331;
              DXGADAPTER::QueryWDDM2_7Caps(v125, (struct _D3DKMT_WDDM_2_7_CAPS *)v27);
              goto LABEL_429;
            case 0x47:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 524 )
                goto LABEL_128;
              v53 = v125;
              if ( *v27 )
              {
                AdapterRegistryInfo = -1073741811;
                v55 = -1073741811LL;
                goto LABEL_133;
              }
              DisplayUMDFileName = (const struct _UNICODE_STRING *)ADAPTER_RENDER::GetDisplayUMDFileName(*((_QWORD *)v125 + 366));
              if ( (unsigned int)IsNullUmdDriver(DisplayUMDFileName) )
              {
                AdapterRegistryInfo = -1073741811;
                v55 = -1073741811LL;
                goto LABEL_133;
              }
              v58 = *v117;
              v60 = (char *)(v27 + 1);
              v59 = (char *)*((_QWORD *)v117 + 1);
              goto LABEL_140;
            case 0x48:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 12 )
                goto LABEL_128;
              AdapterRegistryInfo = DXGADAPTER::QueryTrackedWorkloadSupport(
                                      v125,
                                      *v27,
                                      (enum DXGK_ENGINE_TYPE)v27[1],
                                      (int *)v27 + 2);
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x49:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_334;
              v56 = v125;
              if ( (_BYTE)word_1C014049C && *((_BYTE *)v125 + 2759) )
              {
                *v27 = (*((_DWORD *)v125 + 698) & 0x20) == 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
                goto LABEL_446;
              }
              AdapterRegistryInfo = -1073741637;
              v55 = -1073741637LL;
              goto LABEL_134;
            case 0x4A:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 8 )
                goto LABEL_128;
              if ( !v49 )
              {
                AdapterRegistryInfo = -1073741811;
                WdLogSingleEntry1((unsigned int)(Size - 5), -1073741811LL);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
                goto LABEL_446;
              }
              *(_QWORD *)v27 = 0LL;
              if ( *((_QWORD *)v49 + 366) )
                goto LABEL_429;
              *(_QWORD *)v27 ^= (*v27 ^ (unsigned int)ADAPTER_DISPLAY::GetDisplayOnlyDriverPreferPhysicallyContiguous(*((ADAPTER_DISPLAY **)v49 + 365))) & 1;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x4B:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size != 4 )
                goto LABEL_331;
              DXGADAPTER::QueryWDDM2_9Caps(v125, (struct _D3DKMT_WDDM_2_9_CAPS *)v27);
              goto LABEL_429;
            case 0x4C:
              v43 = (unsigned int)Size;
              if ( (_DWORD)Size != 4 )
              {
LABEL_128:
                AdapterRegistryInfo = -1073741811;
                v52 = v43;
LABEL_129:
                WdLogSingleEntry2(3LL, v52, -1073741811LL);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
                goto LABEL_446;
              }
              v118 = *((_DWORD *)v125 + 571);
              if ( (v118 & 0x10000) != 0 )
              {
                *v27 = 3;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
                goto LABEL_446;
              }
              if ( (v118 & 0x8000) != 0 )
                *v27 = 2;
              else
                *v27 = ((unsigned __int8)v118 >> 4) & 1;
              goto LABEL_429;
            case 0x4D:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size == 4 )
              {
                DXGADAPTER::QueryWDDM3_0Caps(v125, (struct _D3DKMT_WDDM_3_0_CAPS *)v27);
              }
              else
              {
LABEL_331:
                AdapterRegistryInfo = -1073741811;
                WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
              }
              goto LABEL_429;
            case 0x4E:
              LODWORD(v43) = Size;
              if ( (unsigned int)Size < 0x208 )
                goto LABEL_334;
              v53 = v125;
              v57 = *((_QWORD *)v125 + 366);
              if ( *(_WORD *)(v57 + 592) )
              {
                v58 = *(unsigned __int16 *)(v57 + 592);
                v59 = *(char **)(v57 + 600);
                v60 = (char *)v27;
LABEL_140:
                v61 = RtlStringCbCopyNW(v60, v50, v59, v58);
                AdapterRegistryInfo = v61;
                if ( v61 >= 0 )
                  goto LABEL_429;
                v55 = v61;
              }
              else
              {
                AdapterRegistryInfo = -1073741811;
                v55 = -1073741811LL;
              }
LABEL_133:
              v56 = v53;
LABEL_134:
              WdLogSingleEntry3(4LL, v27, v56, v55);
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              break;
            case 0x4F:
              LODWORD(v43) = Size;
              v62 = 520LL;
              if ( (unsigned int)Size < 0x208 )
                goto LABEL_334;
              v63 = *(_QWORD *)(*((_QWORD *)v125 + 27) + 64LL);
              memset(v27, 0, 0x208uLL);
              if ( *(_WORD *)(v63 + 2792) <= 0x208u )
                v62 = *(unsigned __int16 *)(v63 + 2792);
              memmove(v27, *(const void **)(v63 + 2800), v62);
              *((_WORD *)v27 + 1) = 92;
              AdapterRegistryInfo = 0;
              DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              goto LABEL_446;
            case 0x50:
              LODWORD(v43) = Size;
              if ( (_DWORD)Size == 4 )
              {
                *v27 = 0;
                if ( *((_QWORD *)v125 + 366) )
                {
                  *v27 = (*((_DWORD *)v125 + 570) >> 11) & 1;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
                }
                else
                {
LABEL_429:
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
                }
              }
              else
              {
LABEL_334:
                AdapterRegistryInfo = -1073741811;
                WdLogSingleEntry2(3LL, (unsigned int)Size, -1073741811LL);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
              }
              break;
            default:
              AdapterRegistryInfo = -1073741811;
              WdLogSingleEntry2(3LL, SHIDWORD(Src[0]), -1073741811LL);
              LODWORD(v43) = Size;
              goto LABEL_429;
          }
          goto LABEL_446;
        }
      }
      AdapterRegistryInfo = -1073741130;
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v157);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v158);
      LODWORD(v43) = Size;
      goto LABEL_450;
    }
    AdapterRegistryInfo = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v158, 0LL);
    if ( AdapterRegistryInfo < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v158);
      LODWORD(v43) = Size;
      goto LABEL_450;
    }
    if ( !v45 || !v45[365] )
    {
      WdLogSingleEntry1(1LL, 3443LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
        3443LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v47 == KMTQAITYPE_CURRENTDISPLAYMODE )
    {
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v45[365], *v27);
      if ( *(_DWORD *)DisplayModeInfo )
      {
        *(_OWORD *)(v27 + 1) = *(_OWORD *)DisplayModeInfo;
        *(_OWORD *)(v27 + 5) = *((_OWORD *)DisplayModeInfo + 1);
        *(_QWORD *)(v27 + 9) = *((_QWORD *)DisplayModeInfo + 4);
        v27[11] = *((_DWORD *)DisplayModeInfo + 10);
        goto LABEL_445;
      }
      AdapterRegistryInfo = -1071774919;
      v120 = v45;
    }
    else
    {
      if ( v47 != (KMTQUITYPE_GPUVERSION|KMTQAITYPE_GETSEGMENTSIZE) )
      {
LABEL_445:
        LODWORD(v43) = Size;
LABEL_446:
        if ( AdapterRegistryInfo >= 0 && (*((_DWORD *)v134 + 106) & 0x200) != 0 )
          AdapterRegistryInfo = PostProcessUMDFileName(v47, v27, v43);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v158);
        goto LABEL_450;
      }
      v140 = *v27;
      v138 = 0;
      *(_QWORD *)&v153.Type = 33LL;
      *(_QWORD *)&v153.InputDataSize = 4LL;
      *(_QWORD *)&v153.Flags.0 = 0LL;
      HIDWORD(v153.hKmdProcessHandle) = 0;
      v153.pOutputData = &v138;
      v153.OutputDataSize = 4;
      v153.pInputData = &v140;
      v119 = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v45, &v153);
      AdapterRegistryInfo = v119;
      if ( v119 >= 0 )
      {
        v27[1] = v138;
        goto LABEL_445;
      }
      v120 = (ADAPTER_DISPLAY **)v119;
    }
    WdLogSingleEntry2(3LL, *v27, v120);
    goto LABEL_445;
  }
  v149 = v37;
  v150 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v148);
  LOBYTE(v6) = *((_DWORD *)v37 + 50) == 1;
  if ( !(_DWORD)v6 )
  {
    AdapterRegistryInfo = -1073741130;
    if ( v150 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v148);
    goto LABEL_104;
  }
  *(void **)&v156.hAdapter = Src[0];
  *(_QWORD *)&v156.PrivateDriverDataSize = Size;
  v156.pPrivateDriverData = v27;
  v44 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
          (struct DXGADAPTER *)((char *)v125 + 4472),
          v134,
          &v156,
          v42);
  AdapterRegistryInfo = v44;
  if ( v44 >= 0 )
  {
    AdapterRegistryInfo = PostProcessUMDFileName(SHIDWORD(Src[0]), v27, v139);
    if ( v150 )
      goto LABEL_107;
  }
  else
  {
    WdLogSingleEntry3(3LL, LODWORD(Src[0]), v44, 3410LL);
    if ( v150 )
    {
LABEL_107:
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v148);
      LODWORD(v43) = Size;
      goto LABEL_450;
    }
  }
LABEL_104:
  LODWORD(v43) = Size;
LABEL_450:
  if ( AdapterRegistryInfo >= 0 )
  {
    v122 = Src[1];
    if ( v129
      && ((char *)Src[1] + (unsigned int)v43 > (void *)MmUserProbeAddress || (char *)Src[1] + (unsigned int)v43 <= Src[1]) )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v122, v27, (unsigned int)v43);
  }
  operator delete(v27);
  if ( v142 && _InterlockedExchangeAdd64((volatile signed __int64 *)v142 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v142 + 2), v142);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v131);
  if ( v133 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v123, &EventProfilerExit, v124, v131);
  return (unsigned int)AdapterRegistryInfo;
}
