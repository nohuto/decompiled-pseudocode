/*
 * XREFs of ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C018D710 (DxgkQueryAdapterInfo.c)
 *     DxgkQueryAdapterInfoInternal @ 0x1C02CF4A0 (DxgkQueryAdapterInfoInternal.c)
 *     ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037F2C0 (-VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0009084 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C0009AF0 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0011E10 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C0013F30 (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C001B478 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001B5E4 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001B620 (-Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C0045928 (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ?GetDisplayOnlyDriverPreferPhysicallyContiguous@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C00459FC (-GetDisplayOnlyDriverPreferPhysicallyContiguous@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     DxgkInvalidateDeviceState @ 0x1C005E3A0 (DxgkInvalidateDeviceState.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C01661E4 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     DpiIsDriverUpdateInProgress @ 0x1C017A688 (DpiIsDriverUpdateInProgress.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C017DA78 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C01A5DA4 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C01B473C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C01B902C (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C01CFECC (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C01D011C (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C01D05D8 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C01D0634 (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C01D2AC0 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     ?QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z @ 0x1C01D5104 (-QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C01D5F38 (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?QueryWDDM3_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_3_0_CAPS@@@Z @ 0x1C01D7DBC (-QueryWDDM3_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_3_0_CAPS@@@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01F7DCC (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C0220044 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C02B2A24 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C02B2BB8 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C02B2C38 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z @ 0x1C02B46B0 (-QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z.c)
 *     ?QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z @ 0x1C02B474C (-QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z.c)
 *     ?QueryWDDM2_9Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_9_CAPS@@@Z @ 0x1C02B47A8 (-QueryWDDM2_9Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_9_CAPS@@@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C02BB968 (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z @ 0x1C02BC5CC (-GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C02CA564 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x1C02CB0CC (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C02CB1C8 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C032AD34 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C0387D4C (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C0394FE4 (DpiQueryAdapterRegistryInfo.c)
 *     DpiReadBlockListInfo @ 0x1C039554C (DpiReadBlockListInfo.c)
 */

__int64 __fastcall DxgkQueryAdapterInfoImpl(const struct _D3DKMT_QUERYADAPTERINFO *a1, char a2, struct DXGADAPTER *a3)
{
  char v4; // bl
  const struct _D3DKMT_QUERYADAPTERINFO *v5; // rsi
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // rdi
  struct DXGPROCESS *v10; // rax
  __int128 v11; // xmm0
  size_t v12; // xmm1_8
  size_t v13; // rbx
  unsigned int v14; // eax
  struct _D3DKMT_WDDM_1_2_CAPS *v15; // r14
  unsigned __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r8
  struct DXGADAPTER **v24; // r9
  DXGADAPTER *v25; // rsi
  int AdapterRegistryInfo; // r12d
  __int64 v27; // rbx
  int PairingAdapters; // eax
  struct DXGADAPTER *v29; // rbx
  struct DXGADAPTER *v30; // rcx
  int v31; // eax
  bool v32; // al
  ADAPTER_DISPLAY **v33; // rbx
  signed __int64 v34; // rax
  enum _KMTQUERYADAPTERINFOTYPE v35; // r14d
  __int64 v36; // r9
  unsigned int v37; // ebx
  struct DXGADAPTER *v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r13
  struct DXGADAPTER *v41; // rsi
  struct DXGADAPTER *v42; // rbx
  D3DKMDT_GRAPHICS_PREEMPTION_GRANULARITY *v43; // rax
  D3DKMDT_GRAPHICS_PREEMPTION_GRANULARITY v44; // ecx
  struct _D3DKMT_WDDM_1_2_CAPS *v45; // rdi
  void *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // r8
  DXGADAPTER *v51; // rdi
  __int64 v52; // rbx
  const void **v53; // rbx
  size_t v54; // r8
  DXGADAPTER *v55; // rcx
  DXGADAPTER *v56; // r10
  DXGADAPTER *v57; // r11
  int v58; // ecx
  DXGADAPTER *v59; // rcx
  char v60; // cl
  struct DXGADAPTER *v61; // rbx
  struct _D3DKMT_WDDM_1_2_CAPS *v62; // rdi
  int v63; // eax
  DXGADAPTER *v64; // rax
  int v65; // edx
  DXGPROCESS *v66; // rdi
  int v67; // ecx
  __int64 v68; // rbx
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  DXGADAPTER *v70; // rbx
  char v71; // cl
  int v72; // eax
  unsigned __int8 IsDriverUpdateInProgress; // al
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  struct DXGADAPTER *v75; // rdx
  int v76; // r8d
  __int64 GraphicsPreemptionGranularity; // rcx
  __int64 v78; // rdx
  _DWORD *v79; // rcx
  struct DXGADAPTER *v80; // rdi
  __int64 v81; // rcx
  struct _D3DKMT_WDDM_1_2_CAPS *v82; // rdx
  __int64 v83; // rsi
  unsigned __int8 IsMultiPlaneOverlaySupported; // al
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  const wchar_t *v88; // r9
  __int64 v89; // rcx
  __int64 v90; // r8
  bool v91; // zf
  __int64 v92; // rdx
  unsigned int v93; // r9d
  int v94; // eax
  __int64 HostSilo; // rax
  __int64 v96; // r9
  struct _D3DKMT_WDDM_1_2_CAPS *v97; // rdx
  struct DXGADAPTER *v98; // r8
  __int64 v99; // r8
  unsigned __int64 v100; // r9
  char *v101; // r8
  char *p_ComputePreemptionGranularity; // rcx
  size_t v103; // rbx
  __int64 v104; // rsi
  __int64 v105; // r8
  unsigned __int64 v106; // r9
  char *v107; // r8
  int v108; // eax
  __int64 v109; // rbx
  __int64 v110; // rdx
  __int64 v111; // rsi
  struct DXGADAPTER *v112; // rax
  struct DXGADAPTER *v113; // rax
  __int64 v114; // rcx
  struct DXGADAPTER *v115; // rcx
  void *v116; // rbx
  int v117; // eax
  __int64 v118; // rdx
  struct DXGADAPTER *v119; // rbx
  __int64 v120; // r8
  __int64 v121; // r8
  int v122; // eax
  struct DXGADAPTER *v123; // rbx
  __int64 v124; // rax
  ADAPTER_RENDER *v125; // rsi
  __int64 v126; // rbx
  char v127; // cl
  DXGADAPTER *v128; // rcx
  const struct _UNICODE_STRING *DisplayUMDFileName; // rax
  unsigned __int16 *v130; // r8
  int v131; // eax
  ADAPTER_DISPLAY **v132; // r8
  struct _D3DKMT_WDDM_1_2_CAPS *v133; // [rsp+50h] [rbp-298h]
  struct DXGADAPTER *v134; // [rsp+58h] [rbp-290h] BYREF
  char v135; // [rsp+60h] [rbp-288h]
  void *Src[2]; // [rsp+68h] [rbp-280h]
  size_t Size; // [rsp+78h] [rbp-270h]
  _BYTE v138[8]; // [rsp+80h] [rbp-268h] BYREF
  DXGADAPTER *v139; // [rsp+88h] [rbp-260h] BYREF
  int v140; // [rsp+90h] [rbp-258h] BYREF
  __int64 v141; // [rsp+98h] [rbp-250h]
  char v142; // [rsp+A0h] [rbp-248h]
  struct DXGADAPTER *v143; // [rsp+A8h] [rbp-240h] BYREF
  struct DXGPROCESS *v144; // [rsp+B0h] [rbp-238h]
  unsigned int v145; // [rsp+B8h] [rbp-230h]
  _D3DKMT_WDDM_1_3_CAPS v146; // [rsp+C0h] [rbp-228h] BYREF
  D3DKMDT_COMPUTE_PREEMPTION_GRANULARITY v147; // [rsp+C4h] [rbp-224h] BYREF
  unsigned int v148; // [rsp+C8h] [rbp-220h]
  D3DKMDT_GRAPHICS_PREEMPTION_GRANULARITY v149; // [rsp+CCh] [rbp-21Ch] BYREF
  __int64 v150; // [rsp+D0h] [rbp-218h] BYREF
  struct DXGADAPTER *v151; // [rsp+D8h] [rbp-210h] BYREF
  unsigned __int64 v152; // [rsp+E8h] [rbp-200h] BYREF
  struct DXGDEVICE *v153; // [rsp+F0h] [rbp-1F8h] BYREF
  struct DXGDEVICE *v154; // [rsp+F8h] [rbp-1F0h] BYREF
  void *v155; // [rsp+100h] [rbp-1E8h]
  unsigned __int64 v156; // [rsp+108h] [rbp-1E0h] BYREF
  _BYTE v157[8]; // [rsp+110h] [rbp-1D8h] BYREF
  struct DXGADAPTER *v158; // [rsp+118h] [rbp-1D0h]
  char v159; // [rsp+120h] [rbp-1C8h]
  _DXGKARG_QUERYADAPTERINFO v160; // [rsp+130h] [rbp-1B8h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v161; // [rsp+160h] [rbp-188h] BYREF
  __int128 v162; // [rsp+190h] [rbp-158h] BYREF
  int v163; // [rsp+1A0h] [rbp-148h]
  _D3DKMT_QUERYADAPTERINFO v164; // [rsp+1A8h] [rbp-140h] BYREF
  _BYTE v165[64]; // [rsp+1C0h] [rbp-128h] BYREF
  _BYTE v166[144]; // [rsp+200h] [rbp-E8h] BYREF
  wchar_t Str2[20]; // [rsp+290h] [rbp-58h] BYREF

  v4 = a2;
  v135 = a2;
  v5 = a1;
  v140 = -1;
  v141 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v142 = 1;
    v140 = 2015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2015);
  }
  else
  {
    v142 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v140, 2015);
  CurrentProcess = PsGetCurrentProcess(v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v144 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( v144 )
      goto LABEL_7;
    goto LABEL_5;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  v144 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    v4 = v135;
LABEL_5:
    v10 = v9;
    v144 = v9;
    goto LABEL_6;
  }
  v4 = v135;
LABEL_6:
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v88 = L"Invalid process context, returning 0x%I64x";
LABEL_257:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v88, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v140);
    v91 = v142 == 0;
LABEL_259:
    if ( v91 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_275;
  }
LABEL_7:
  if ( a3 && v4 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v88 = L"Not valid to provide pAdapter when calling from usermode, return 0x%I64x";
    goto LABEL_257;
  }
  v155 = 0LL;
  if ( v4 )
  {
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (const struct _D3DKMT_QUERYADAPTERINFO *)MmUserProbeAddress;
    v11 = *(_OWORD *)&v5->hAdapter;
    v12 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  else
  {
    v11 = *(_OWORD *)&v5->hAdapter;
    v12 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  Size = v12;
  *(_OWORD *)Src = v11;
  if ( *((_QWORD *)&v11 + 1) )
  {
    v13 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      v14 = (Size + 7) & 0xFFFFFFF8;
      v148 = v14;
      if ( v14 < (unsigned int)Size )
      {
        WdLogSingleEntry2(3LL, -1073741811LL, 3192LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v140);
        if ( v142 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v140);
        return 3221225485LL;
      }
      else
      {
        v15 = (struct _D3DKMT_WDDM_1_2_CAPS *)operator new[](v14, 0x4B677844u, 64LL);
        v133 = v15;
        v155 = v15;
        if ( v15 )
        {
          v16 = SHIDWORD(Src[0]);
          if ( SHIDWORD(Src[0]) < 23 && SHIDWORD(Src[0]) >= 17
            || SHIDWORD(Src[0]) < 16 && SHIDWORD(Src[0]) >= 10
            || SHIDWORD(Src[0]) >= 52 && SHIDWORD(Src[0]) < 61
            || SHIDWORD(Src[0]) > 72 )
          {
LABEL_22:
            memset(v15, 0, (unsigned int)Size);
          }
          else
          {
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
                if ( v135 )
                {
                  if ( (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v11 + 1) < *((_QWORD *)&v11 + 1)
                    || (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v11 + 1) > MmUserProbeAddress )
                  {
                    *(_BYTE *)MmUserProbeAddress = 0;
                  }
                  memmove(v15, *((const void **)&v11 + 1), v13);
                }
                else
                {
                  memmove(v15, *((const void **)&v11 + 1), (unsigned int)Size);
                }
                break;
              default:
                goto LABEL_22;
            }
          }
          v139 = a3;
          if ( a3 )
            v24 = 0LL;
          else
            v24 = &v139;
          DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
            (DXGADAPTERBYHANDLE *)&v151,
            (unsigned int)Src[0],
            (struct _KTHREAD **)v144,
            v24,
            1);
          v25 = v139;
          if ( v139 )
          {
            AdapterRegistryInfo = 0;
            if ( (_DWORD)v16 != 9 )
            {
              if ( (_DWORD)v16 != 67 )
              {
                v27 = 0LL;
LABEL_56:
                v134 = 0LL;
                v143 = 0LL;
                v152 = 0LL;
                v156 = 0LL;
                PairingAdapters = DxgkpGetPairingAdapters(v139, v27, &v134, &v152, &v143, &v156, 0);
                v145 = PairingAdapters;
                if ( PairingAdapters < 0 )
                {
                  if ( (_DWORD)v16 != 9 && (_DWORD)v16 != 67 )
                  {
                    v143 = 0LL;
                    PairingAdapters = DxgkpGetPairingAdapters(v25, v27, &v134, &v152, 0LL, 0LL, 0);
                    v145 = PairingAdapters;
                  }
                  if ( PairingAdapters < 0 )
                  {
                    WdLogSingleEntry2(2LL, v25, v27);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x!",
                      (__int64)v25,
                      v27,
                      0LL,
                      0LL,
                      0LL);
                    operator delete(v15);
                    if ( v151 )
                      DXGADAPTER::ReleaseReference(v151);
                    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v140);
                    if ( v142 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
                      McTemplateK0q_EtwWriteTransfer(v49, &EventProfilerExit, v50, v140);
                    return v145;
                  }
                }
                v29 = v134;
                v30 = v143;
                if ( v134 != v25 && v143 != v25 )
                {
                  WdLogSingleEntry1(1LL, 3360LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"(pRenderAdapter == pAdapterIn) || (pDisplayAdapter == pAdapterIn)",
                    3360LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v30 = v143;
                }
                if ( v30 && !*((_QWORD *)v30 + 365) )
                {
                  WdLogSingleEntry1(1LL, 3362LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
                    3362LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v30 = v143;
                }
                if ( !v29 || !*((_QWORD *)v29 + 366) )
                {
                  WdLogSingleEntry1(1LL, 3364LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"(pRenderAdapter != NULL) && (pRenderAdapter->IsRenderAdapter())",
                    3364LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v30 = v143;
                }
                v32 = 0;
                if ( (unsigned int)v16 <= 0x1B )
                {
                  v31 = 138619200;
                  if ( _bittest(&v31, v16) )
                    v32 = 1;
                }
                if ( v25 == v29 && *((_BYTE *)v25 + 209) || v29 && *((_BYTE *)v29 + 209) && !v32 )
                {
                  if ( (unsigned int)v16 > 0x39 || (v92 = 0x210F85840908010LL, !_bittest64(&v92, v16)) )
                  {
                    if ( (_DWORD)v16 != 68 )
                    {
                      v158 = v29;
                      v159 = 0;
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v157);
                      if ( *((_DWORD *)v29 + 50) != 1 )
                      {
                        AdapterRegistryInfo = -1073741130;
                        if ( v159 )
                          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v157);
                        goto LABEL_289;
                      }
                      *(void **)&v164.hAdapter = Src[0];
                      *(_QWORD *)&v164.PrivateDriverDataSize = Size;
                      v164.pPrivateDriverData = v15;
                      v94 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
                              (struct DXGADAPTER *)((char *)v134 + 4472),
                              v144,
                              &v164,
                              v93);
                      AdapterRegistryInfo = v94;
                      if ( v94 >= 0 )
                      {
                        AdapterRegistryInfo = PostProcessUMDFileName(SHIDWORD(Src[0]), v15, v148);
                        if ( v159 )
                          goto LABEL_292;
                      }
                      else
                      {
                        WdLogSingleEntry3(3LL, LODWORD(Src[0]), v94, 3414LL);
                        if ( v159 )
                        {
LABEL_292:
                          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v157);
                          LODWORD(v40) = Size;
                          goto LABEL_98;
                        }
                      }
LABEL_289:
                      LODWORD(v40) = Size;
                      goto LABEL_98;
                    }
                  }
                }
                COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v166, v29, v30);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v134 + 2), v134);
                v33 = (ADAPTER_DISPLAY **)v143;
                if ( v143 )
                {
                  v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)v143 + 3, 0xFFFFFFFFFFFFFFFFuLL);
                  v33 = (ADAPTER_DISPLAY **)v143;
                  if ( v34 == 1 )
                    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v143 + 2), v143);
                }
                v35 = HIDWORD(Src[0]);
                if ( HIDWORD(Src[0]) != 9 && HIDWORD(Src[0]) != 67 )
                {
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
                    (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v165,
                    v134,
                    (struct DXGADAPTER *)v33);
                  v37 = 1;
                  if ( *((_DWORD *)v139 + 50) == 1 && *((_DWORD *)v134 + 50) == 1 )
                  {
                    v38 = v143;
                    if ( !v143 )
                      goto LABEL_82;
                    if ( *((_DWORD *)v143 + 50) == 1 )
                    {
                      v38 = v143;
LABEL_82:
                      v35 = HIDWORD(Src[0]);
                      v39 = 0x1C0000000uLL;
                      switch ( HIDWORD(Src[0]) )
                      {
                        case 0:
                          *(_QWORD *)&v160.Flags.0 = 0LL;
                          HIDWORD(v160.hKmdProcessHandle) = 0;
                          memset(&v160, 0, 24);
                          v160.pOutputData = v133;
                          v160.OutputDataSize = Size;
                          v66 = v144;
                          v67 = *((_DWORD *)v144 + 106);
                          if ( (v67 & 0x100) != 0 )
                            v160.Flags.Value = (v160.Flags.Value | 1) ^ ((*(_BYTE *)&v160.Flags.0 | 1) ^ (unsigned __int8)(2 * *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v144 + 76) + 608LL) + 336LL))) & 2;
                          v68 = *((_QWORD *)v134 + 366);
                          KeEnterCriticalRegion();
                          ExAcquirePushLockSharedEx(v68 + 72, 0LL);
                          _InterlockedIncrement((volatile signed __int32 *)(v68 + 88));
                          RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(v66, *((_DWORD *)v134 + 60));
                          if ( RenderAdapterInfo )
                            v160.hKmdProcessHandle = (HANDLE)*((_QWORD *)RenderAdapterInfo + 6);
                          _InterlockedDecrement((volatile signed __int32 *)(v68 + 88));
                          ExReleasePushLockSharedEx(v68 + 72, 0LL);
                          KeLeaveCriticalRegion();
                          AdapterRegistryInfo = DXGADAPTER::DdiQueryAdapterInfo(v134, &v160);
                          goto LABEL_169;
                        case 1:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 524 )
                            goto LABEL_296;
                          v61 = v134;
                          v62 = v133;
                          v63 = ADAPTER_RENDER::CopyUmdFileName(
                                  *((ADAPTER_RENDER **)v134 + 366),
                                  (struct _D3DKMT_UMDFILENAMEINFO *)v133);
                          goto LABEL_154;
                        case 2:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 528 )
                            goto LABEL_296;
                          v105 = *((_QWORD *)v134 + 366);
                          if ( (*((_DWORD *)v144 + 106) & 8) != 0 )
                          {
                            v133[43].PreemptionCaps.ComputePreemptionGranularity = *(_DWORD *)(v105 + 712);
                            v133[43].Value = *(_DWORD *)(v105 + 716);
                            v106 = *(unsigned __int16 *)(v105 + 696);
                            v107 = *(char **)(v105 + 704);
                          }
                          else
                          {
                            v133[43].PreemptionCaps.ComputePreemptionGranularity = *(_DWORD *)(v105 + 688);
                            v133[43].Value = *(_DWORD *)(v105 + 692);
                            v106 = *(unsigned __int16 *)(v105 + 672);
                            v107 = *(char **)(v105 + 680);
                          }
                          v108 = RtlStringCbCopyNW((char *)v133, (__int64)v133, v107, v106);
                          AdapterRegistryInfo = v108;
                          if ( v108 < 0 )
                          {
                            v109 = v108;
                            WdLogSingleEntry1(2LL, v108);
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000,
                              -1,
                              (__int64)L"CopyIcdFileName failed with 0x%I64x",
                              v109,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                          }
                          goto LABEL_92;
                        case 3:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 24 )
                            goto LABEL_296;
                          v150 = 0LL;
                          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *, __int64 *, struct _D3DKMT_WDDM_1_2_CAPS *, struct _D3DKMT_WDDM_1_2_CAPS::$85A070F6A014979135EAC7792424D6A3::$0F5964AD7A466414866DCBA5BE62409C *, D3DKMDT_COMPUTE_PREEMPTION_GRANULARITY *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v134 + 366) + 760LL) + 8LL) + 64LL))(
                            *(_QWORD *)(*((_QWORD *)v134 + 366) + 768LL),
                            0LL,
                            &v150,
                            &v150,
                            &v150,
                            v133,
                            &v133->0,
                            &v133[1].PreemptionCaps.ComputePreemptionGranularity);
                          goto LABEL_92;
                        case 4:
                        case 0x34:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 16 )
                            goto LABEL_296;
                          v112 = v134;
                          if ( HIDWORD(Src[0]) == 4 )
                            v112 = v139;
                          if ( !v112 )
                            goto LABEL_346;
                          *(_OWORD *)&v133->PreemptionCaps.GraphicsPreemptionGranularity = *(_OWORD *)((char *)v112 + 292);
                          goto LABEL_92;
                        case 5:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          AdapterRegistryInfo = (*(__int64 (__fastcall **)(_QWORD, struct _D3DKMT_WDDM_1_2_CAPS *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v134 + 366) + 736LL) + 8LL) + 504LL))(
                                                  *(_QWORD *)(*((_QWORD *)v134 + 366) + 744LL),
                                                  v133);
                          goto LABEL_92;
                        case 6:
                        case 0x35:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          AdapterRegistryInfo = -1073741823;
                          v113 = v134;
                          if ( HIDWORD(Src[0]) == 6 )
                            v113 = v139;
                          if ( v113 )
                          {
                            v114 = *(_QWORD *)(*((_QWORD *)v113 + 27) + 64LL);
                            v133->PreemptionCaps.GraphicsPreemptionGranularity = *(_DWORD *)(v114 + 1144);
                            v133->PreemptionCaps.ComputePreemptionGranularity = *(unsigned __int16 *)(v114 + 1150);
                            v133->Value = (unsigned __int16)*(_DWORD *)(v114 + 1148);
                            AdapterRegistryInfo = 0;
                          }
                          goto LABEL_92;
                        case 7:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          v110 = *(_QWORD *)(*((_QWORD *)v134 + 366) + 760LL);
                          v111 = *((_QWORD *)v144 + 8);
                          if ( v111 )
                            v111 = *(_QWORD *)(v111 + 8LL * (unsigned int)(*(_DWORD *)v110 - 1));
                          AdapterRegistryInfo = (*(__int64 (__fastcall **)(__int64, struct _D3DKMT_WDDM_1_2_CAPS *))(*(_QWORD *)(v110 + 8) + 368LL))(
                                                  v111,
                                                  v133);
                          goto LABEL_92;
                        case 8:
                        case 0x36:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 2080 )
                            goto LABEL_296;
                          AdapterRegistryInfo = -1073741823;
                          v115 = v134;
                          if ( HIDWORD(Src[0]) == 8 )
                            v115 = v139;
                          if ( v115 )
                            AdapterRegistryInfo = DpiQueryAdapterRegistryInfo(*((_QWORD *)v115 + 27), v133);
                          goto LABEL_92;
                        case 0xB:
                        case 0x37:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          AdapterRegistryInfo = -1073741823;
                          if ( HIDWORD(Src[0]) == 11 )
                            v70 = v139;
                          else
                            v70 = v134;
                          if ( !v70 )
                            goto LABEL_92;
                          v71 = 0;
                          v138[0] = 0;
                          v72 = *((_DWORD *)v70 + 109);
                          if ( (v72 & 0x20) != 0 || (v72 & 4) != 0 )
                          {
                            IsDriverUpdateInProgress = 0;
                          }
                          else
                          {
                            IsDriverUpdateInProgress = DpiIsDriverUpdateInProgress(*((_QWORD *)v70 + 27), v138);
                            v71 = v138[0];
                          }
                          v133->PreemptionCaps.GraphicsPreemptionGranularity = IsDriverUpdateInProgress;
                          if ( v71 )
                          {
                            v116 = (void *)*((_QWORD *)v70 + 27);
                            ObfReferenceObject(v116);
                            DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v165);
                            DxgkInvalidateDeviceState((__int64)v116);
                            ObfDereferenceObject(v116);
                            AdapterRegistryInfo = 0;
                          }
                          else
                          {
LABEL_179:
                            AdapterRegistryInfo = 0;
                          }
                          goto LABEL_92;
                        case 0xC:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v133->PreemptionCaps.GraphicsPreemptionGranularity = D3DKMDT_GRAPHICS_PREEMPTION_NONE;
                          v133->PreemptionCaps.GraphicsPreemptionGranularity = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v134 + 366) + 16LL)
                                                                                          + 2284LL) >> 5) & 1;
                          goto LABEL_92;
                        case 0xD:
                        case 0x38:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          AdapterRegistryInfo = -1073741823;
                          if ( HIDWORD(Src[0]) == 13 )
                            v64 = v139;
                          else
                            v64 = v134;
                          if ( v64 )
                          {
                            v65 = *((_DWORD *)v64 + 705);
                            v133->PreemptionCaps.GraphicsPreemptionGranularity = v65;
                            if ( (*((_DWORD *)v144 + 106) & 0x100) != 0
                              && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v144 + 76) + 608LL) + 392LL) <= 0x10u )
                            {
                              v117 = v65;
                              if ( v65 > 2600 )
                                v117 = 2600;
                              v133->PreemptionCaps.GraphicsPreemptionGranularity = v117;
                            }
                            AdapterRegistryInfo = 0;
                          }
                          goto LABEL_92;
                        case 0xF:
                        case 0x39:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          AdapterRegistryInfo = -1073741823;
                          v41 = v134;
                          v42 = v134;
                          if ( HIDWORD(Src[0]) == 15 )
                            v42 = v139;
                          if ( v42 )
                          {
                            LODWORD(v43) = DXGADAPTER::GetAdapterType(v42);
                            v44 = *v43;
                            v133->PreemptionCaps.GraphicsPreemptionGranularity = *v43;
                            if ( v41 )
                            {
                              v44 ^= ((unsigned __int16)v44 ^ (unsigned __int16)(*((unsigned __int8 *)v41 + 212) << 8)) & 0x100;
                              v133->PreemptionCaps.GraphicsPreemptionGranularity = v44;
                            }
                            if ( *((_DWORD *)v42 + 792) )
                              v133->PreemptionCaps.GraphicsPreemptionGranularity = v44 | 0x2000;
                            AdapterRegistryInfo = 0;
                          }
                          goto LABEL_92;
                        case 0x10:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 8 )
                            goto LABEL_296;
                          if ( (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 4) == 0 )
                            goto LABEL_371;
                          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v165);
                          AdapterRegistryInfo = OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
                                                  v139,
                                                  (__int64)lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_);
                          goto LABEL_92;
                        case 0x11:
                        case 0x3A:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          AdapterRegistryInfo = -1073741823;
                          if ( HIDWORD(Src[0]) == 17 )
                            v59 = v139;
                          else
                            v59 = v134;
                          if ( v59 )
                          {
                            DXGADAPTER::QueryWDDM1_2Caps(v59, v133);
                            AdapterRegistryInfo = 0;
                          }
                          goto LABEL_92;
                        case 0x12:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 8 )
                            goto LABEL_296;
                          AdapterRegistryInfo = ADAPTER_RENDER::GetUmdFileVersion(
                                                  *((ADAPTER_RENDER **)v134 + 366),
                                                  (union _LARGE_INTEGER *)v133);
                          goto LABEL_92;
                        case 0x13:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v82 = v133;
                          if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v134 + 366) + 16LL) + 2755LL) )
                            goto LABEL_247;
                          v133->PreemptionCaps.GraphicsPreemptionGranularity = 1;
                          goto LABEL_92;
                        case 0x14:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          IsMultiPlaneOverlaySupported = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v134 + 366));
                          v82 = v133;
                          if ( !IsMultiPlaneOverlaySupported )
                            goto LABEL_247;
                          v133->PreemptionCaps.GraphicsPreemptionGranularity = 1;
                          goto LABEL_92;
                        case 0x15:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 520 )
                            goto LABEL_296;
                          v61 = v134;
                          if ( !(_BYTE)word_1C013B49C
                            || !*((_BYTE *)v134 + 2759)
                            || (*((_DWORD *)v134 + 698) & 0x20) != 0 )
                          {
                            AdapterRegistryInfo = -1073741637;
                            v96 = -1073741637LL;
                            v97 = v133;
                            goto LABEL_302;
                          }
                          v62 = v133;
                          v63 = ADAPTER_RENDER::CopyDListFileName(
                                  *((ADAPTER_RENDER **)v134 + 366),
                                  (unsigned __int16 *)v133,
                                  (unsigned int)v38);
LABEL_154:
                          AdapterRegistryInfo = v63;
                          if ( v63 < 0 )
                          {
                            v96 = v63;
                            goto LABEL_300;
                          }
                          goto LABEL_92;
                        case 0x16:
                        case 0x3B:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          AdapterRegistryInfo = -1073741823;
                          if ( HIDWORD(Src[0]) == 22 )
                            v55 = v139;
                          else
                            v55 = v134;
                          if ( v55 )
                          {
                            DXGADAPTER::QueryWDDM1_3Caps(v55, (struct _D3DKMT_WDDM_1_3_CAPS *)v133);
                            if ( v56 && v57 != v56 )
                            {
                              v146.0 = 0;
                              DXGADAPTER::QueryWDDM1_3Caps(v56, &v146);
                              v133->PreemptionCaps.GraphicsPreemptionGranularity ^= (v133->PreemptionCaps.GraphicsPreemptionGranularity ^ v146.Value) & 0x20;
                            }
                            AdapterRegistryInfo = 0;
                          }
                          goto LABEL_92;
                        case 0x17:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 16 )
                            goto LABEL_296;
                          if ( v133->PreemptionCaps.ComputePreemptionGranularity == D3DKMDT_COMPUTE_PREEMPTION_NONE )
                            goto LABEL_375;
                          if ( (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 4) == 0 )
                          {
LABEL_371:
                            v118 = -1073741790LL;
                            AdapterRegistryInfo = -1073741790;
                            goto LABEL_373;
                          }
                          if ( v133->PreemptionCaps.ComputePreemptionGranularity )
                          {
                            *(_DWORD *)(*((_QWORD *)v134 + 366) + 1240LL) = v133[1].PreemptionCaps.GraphicsPreemptionGranularity;
                          }
                          else
                          {
LABEL_375:
                            v119 = v134;
                            v133->Value = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v134 + 366));
                            v133[1].PreemptionCaps.GraphicsPreemptionGranularity = *(_DWORD *)(*((_QWORD *)v119 + 366)
                                                                                             + 1240LL);
                          }
                          goto LABEL_92;
                        case 0x18:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          DXGADAPTER::QueryWDDM2_0Caps(v134, (struct _D3DKMT_WDDM_2_0_CAPS *)v133);
                          goto LABEL_92;
                        case 0x19:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 78 )
                            goto LABEL_296;
                          AdapterRegistryInfo = DXGADAPTER::QueryNodeMetadata(
                                                  v134,
                                                  v133->PreemptionCaps.GraphicsPreemptionGranularity,
                                                  (struct _DXGK_NODEMETADATA *)&v133->PreemptionCaps.ComputePreemptionGranularity);
                          goto LABEL_92;
                        case 0x1A:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 520 )
                            goto LABEL_296;
                          v61 = v134;
                          v120 = *((_QWORD *)v134 + 366);
                          v62 = v133;
                          LOWORD(v133->PreemptionCaps.GraphicsPreemptionGranularity) = 0;
                          v63 = RtlStringCbCopyNW(
                                  (char *)v133,
                                  0x1C0000000LL,
                                  *(char **)(v120 + 648),
                                  *(unsigned __int16 *)(v120 + 640));
                          goto LABEL_154;
                        case 0x1B:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          if ( (*((_DWORD *)v139 + 109) & 0x200) == 0 )
                            v37 = 0;
                          goto LABEL_190;
                        case 0x1C:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v82 = v133;
                          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v134 + 366) + 16LL) + 2276LL) & 0x10) == 0 )
                            goto LABEL_247;
                          v133->PreemptionCaps.GraphicsPreemptionGranularity = 1;
                          goto LABEL_92;
                        case 0x1D:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 520 )
                            goto LABEL_296;
                          v61 = v134;
                          v121 = *((_QWORD *)v134 + 366);
                          v62 = v133;
                          LOWORD(v133->PreemptionCaps.GraphicsPreemptionGranularity) = 0;
                          v63 = RtlStringCbCopyNW(
                                  (char *)v133,
                                  0x1C0000000LL,
                                  *(char **)(v121 + 664),
                                  *(unsigned __int16 *)(v121 + 656));
                          goto LABEL_154;
                        case 0x1E:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v75 = v134;
                          if ( *((int *)v134 + 638) < 0x2000 )
                            v76 = 1;
                          else
                            v76 = *((_DWORD *)v134 + 72);
                          v133->PreemptionCaps.GraphicsPreemptionGranularity = v76;
                          if ( (*((_DWORD *)v144 + 106) & 0x100) != 0 && (**((_DWORD **)v75 + 353) & 0x1000000) == 0 )
                          {
                            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v75 + 27) + 64LL) + 40LL) + 28LL) >= 0xF003u )
                              v76 = 1;
                            v133->PreemptionCaps.GraphicsPreemptionGranularity = v76;
                          }
                          goto LABEL_92;
                        case 0x1F:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 28 )
                            goto LABEL_296;
                          GraphicsPreemptionGranularity = (unsigned int)v133->PreemptionCaps.GraphicsPreemptionGranularity;
                          if ( *((int *)v134 + 638) >= 0x2000 )
                            v37 = *((_DWORD *)v134 + 72);
                          v78 = (unsigned int)v133->PreemptionCaps.GraphicsPreemptionGranularity;
                          if ( (unsigned int)GraphicsPreemptionGranularity >= v37 )
                            goto LABEL_297;
                          _mm_lfence();
                          v79 = *(_DWORD **)(*(_QWORD *)(344 * GraphicsPreemptionGranularity
                                                       + *((_QWORD *)v134 + 351)
                                                       + 8)
                                           + 64LL);
                          v133->PreemptionCaps.ComputePreemptionGranularity = v79[281];
                          v133->Value = v79[282];
                          v133[1].PreemptionCaps.GraphicsPreemptionGranularity = v79[283];
                          v133[1].PreemptionCaps.ComputePreemptionGranularity = v79[284];
                          v133[1].Value = v79[285];
                          v133[2].PreemptionCaps.GraphicsPreemptionGranularity = v79[280];
                          v35 = HIDWORD(Src[0]);
                          LODWORD(v40) = Size;
                          goto LABEL_92;
                        case 0x20:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          QueryDriverCapsExt(v38, (struct _D3DKMT_DRIVERCAPS_EXT *)v133);
                          goto LABEL_92;
                        case 0x21:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v162 = 0LL;
                          v163 = 0;
                          v122 = DxgkMiracastQueryMiracastSupportInternal(&v162);
                          if ( v122 == -1073741637 )
                            goto LABEL_401;
                          if ( v122 < 0 )
                          {
                            AdapterRegistryInfo = v122;
                            v118 = v122;
LABEL_373:
                            WdLogSingleEntry1(3LL, v118);
                          }
                          else
                          {
                            v133->PreemptionCaps.GraphicsPreemptionGranularity = 2 - (BYTE8(v162) != 0);
                          }
                          goto LABEL_92;
                        case 0x22:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          if ( *((int *)v134 + 638) >= 0x2000 )
                            v37 = *((_DWORD *)v134 + 72);
                          if ( (*((_DWORD *)v134 + 571) & 0x40) == 0 )
                          {
                            AdapterRegistryInfo = -1073741811;
                            WdLogSingleEntry1(3LL, -1073741811LL);
                            goto LABEL_92;
                          }
                          v78 = (unsigned int)v133->PreemptionCaps.GraphicsPreemptionGranularity;
                          if ( (unsigned int)v78 < v37 )
                          {
                            ADAPTER_RENDER::QueryGpuMmuCaps(
                              *((ADAPTER_RENDER **)v134 + 366),
                              v78,
                              (struct _D3DKMT_GPUMMU_CAPS *)&v133->PreemptionCaps.ComputePreemptionGranularity);
                            goto LABEL_92;
                          }
LABEL_297:
                          AdapterRegistryInfo = -1073741811;
                          goto LABEL_298;
                        case 0x23:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v133->PreemptionCaps.GraphicsPreemptionGranularity = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v134 + 366) + 16LL)
                                                                                        + 2861LL) != 0;
                          goto LABEL_92;
                        case 0x24:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v133->PreemptionCaps.GraphicsPreemptionGranularity = *((_DWORD *)DXGGLOBAL::GetGlobal() + 372);
                          goto LABEL_92;
                        case 0x25:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v133->PreemptionCaps.GraphicsPreemptionGranularity = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v134 + 366) + 16LL)
                                                                                        + 2862LL) != 0;
                          goto LABEL_92;
                        case 0x26:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v133->PreemptionCaps.GraphicsPreemptionGranularity = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v134 + 366) + 16LL)
                                                                                        + 2863LL) != 0;
                          goto LABEL_92;
                        case 0x27:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v133->PreemptionCaps.GraphicsPreemptionGranularity = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v134 + 366) + 16LL)
                                                                                        + 2864LL) != 0;
                          goto LABEL_92;
                        case 0x28:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v133->PreemptionCaps.GraphicsPreemptionGranularity = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v134 + 366) + 16LL)
                                                                                        + 2865LL) != 0;
                          goto LABEL_92;
                        case 0x29:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 24 )
                            goto LABEL_296;
                          AdapterRegistryInfo = DxgkReadPnPRegistryPath(
                                                  v134,
                                                  (unsigned int)v133->PreemptionCaps.GraphicsPreemptionGranularity,
                                                  (unsigned int)v133->PreemptionCaps.ComputePreemptionGranularity,
                                                  *(_QWORD *)&v133->0,
                                                  *(_QWORD *)&v133[1].PreemptionCaps.ComputePreemptionGranularity);
                          goto LABEL_92;
                        case 0x2A:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 56 )
                            goto LABEL_296;
                          if ( *((int *)v134 + 638) >= 0x2000 )
                            v37 = *((_DWORD *)v134 + 72);
                          if ( v133->PreemptionCaps.GraphicsPreemptionGranularity >= v37 )
                            WdLogSingleEntry2(
                              3LL,
                              (unsigned int)v133->PreemptionCaps.GraphicsPreemptionGranularity,
                              -1073741811LL);
                          else
                            (*(void (__fastcall **)(_QWORD, _QWORD, struct _D3DKMT_WDDM_1_2_CAPS::$85A070F6A014979135EAC7792424D6A3::$0F5964AD7A466414866DCBA5BE62409C *, D3DKMDT_COMPUTE_PREEMPTION_GRANULARITY *, struct _D3DKMT_WDDM_1_2_CAPS *, struct _D3DKMT_WDDM_1_2_CAPS::$85A070F6A014979135EAC7792424D6A3::$0F5964AD7A466414866DCBA5BE62409C *, D3DKMDT_COMPUTE_PREEMPTION_GRANULARITY *, struct _D3DKMT_WDDM_1_2_CAPS *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v134 + 366) + 760LL) + 8LL) + 64LL))(
                              *(_QWORD *)(*((_QWORD *)v134 + 366) + 768LL),
                              (unsigned int)v133->PreemptionCaps.GraphicsPreemptionGranularity,
                              &v133[2].0,
                              &v133[3].PreemptionCaps.ComputePreemptionGranularity,
                              v133 + 4,
                              &v133->0,
                              &v133[1].PreemptionCaps.ComputePreemptionGranularity,
                              v133 + 2);
                          goto LABEL_179;
                        case 0x2B:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v133->PreemptionCaps.GraphicsPreemptionGranularity = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v134 + 366) + 16LL)
                                                                                        + 2866LL) != 0;
                          goto LABEL_92;
                        case 0x2C:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 1 )
                            goto LABEL_296;
                          LOBYTE(v133->PreemptionCaps.GraphicsPreemptionGranularity) = 1;
                          v123 = v134;
                          if ( *((_DWORD *)v134 + 103) == 1297040209 )
                          {
                            wcscpy(Str2, L"Qualcomm Adreno 530");
                            if ( !wcsncmp(*((const wchar_t **)v134 + 217), Str2, (unsigned int)(v40 + 19))
                              && (*(_DWORD *)(*((_QWORD *)v123 + 351) + 16LL) & 0x10) == 0 )
                            {
                              LOBYTE(v133->PreemptionCaps.GraphicsPreemptionGranularity) = 0;
                            }
                          }
                          goto LABEL_92;
                        case 0x2D:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v80 = v134;
                          if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v134 + 366)) )
                            goto LABEL_190;
                          v81 = *(_QWORD *)(*((_QWORD *)v80 + 366) + 16LL);
                          if ( *(_QWORD *)(v81 + 1216) )
                          {
                            if ( *(_BYTE *)(v81 + 2866) )
                              goto LABEL_190;
                          }
                          if ( *(_QWORD *)(v81 + 1224) )
                          {
                            if ( *(_BYTE *)(v81 + 2866) )
LABEL_190:
                              v133->PreemptionCaps.GraphicsPreemptionGranularity = v37;
                            else
                              v133->PreemptionCaps.GraphicsPreemptionGranularity = D3DKMDT_GRAPHICS_PREEMPTION_NONE;
                          }
                          else
                          {
LABEL_401:
                            v82 = v133;
LABEL_247:
                            v82->PreemptionCaps.GraphicsPreemptionGranularity = D3DKMDT_GRAPHICS_PREEMPTION_NONE;
                          }
                          goto LABEL_92;
                        case 0x2E:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          if ( v133->PreemptionCaps.ComputePreemptionGranularity )
                          {
                            v124 = (unsigned int)v133->PreemptionCaps.GraphicsPreemptionGranularity;
                            if ( (unsigned int)v124 < 0x10 )
                              *(_BYTE *)(v124 + *((_QWORD *)v134 + 366) + 1224) = v133->Value != 0;
                          }
                          else
                          {
                            v125 = (ADAPTER_RENDER *)*((_QWORD *)v134 + 366);
                            v126 = (unsigned int)v133->PreemptionCaps.GraphicsPreemptionGranularity;
                            if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v125) && (unsigned int)v126 < 0x10 )
                              v127 = *((_BYTE *)v125 + v126 + 1224);
                            else
                              v127 = 0;
                            v133->Value = v127 != 0;
                          }
                          goto LABEL_92;
                        case 0x2F:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 8 )
                            goto LABEL_296;
                          v153 = 0LL;
                          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
                            (DXGDEVICEBYHANDLE *)&v154,
                            v133->PreemptionCaps.GraphicsPreemptionGranularity,
                            (struct _KTHREAD **)v144,
                            &v153);
                          if ( v153 )
                          {
                            LOBYTE(v133->PreemptionCaps.ComputePreemptionGranularity) = *((_BYTE *)v153 + 1938);
                          }
                          else
                          {
                            WdLogSingleEntry1(2LL, (unsigned int)v133->PreemptionCaps.GraphicsPreemptionGranularity);
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000,
                              -1,
                              (__int64)L"Invalid hDevice (0x%I64x) specified",
                              (unsigned int)v133->PreemptionCaps.GraphicsPreemptionGranularity,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                            AdapterRegistryInfo = -1073741811;
                          }
                          if ( !v154 )
                            goto LABEL_92;
                          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v154 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          {
                            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v154 + 2), v154);
                            v35 = HIDWORD(Src[0]);
                          }
                          else
                          {
LABEL_169:
                            v35 = HIDWORD(Src[0]);
                          }
                          goto LABEL_170;
                        case 0x30:
                          if ( (*((_DWORD *)v144 + 106) & 0x200) != 0 )
                          {
                            HostSilo = PsGetHostSilo();
                            v83 = PsAttachSiloToCurrentThread(HostSilo);
                          }
                          else
                          {
                            v83 = 0LL;
                          }
                          LODWORD(v40) = Size;
                          AdapterRegistryInfo = DxgkpQueryRegistry(v134, (unsigned int *)v133, Size);
                          if ( v83 )
                            PsAttachSiloToCurrentThread(v83);
                          goto LABEL_92;
                        case 0x31:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 8 )
                            goto LABEL_296;
                          AdapterRegistryInfo = ADAPTER_RENDER::GetKmdFileVersion(
                                                  *((ADAPTER_RENDER **)v134 + 366),
                                                  (union _LARGE_INTEGER *)v133);
                          goto LABEL_92;
                        case 0x32:
                        case 0x33:
                          v40 = (unsigned int)Size;
                          if ( (unsigned int)Size < 8 )
                            goto LABEL_296;
                          LOBYTE(v36) = HIDWORD(Src[0]) == 50;
                          AdapterRegistryInfo = DpiReadBlockListInfo(
                                                  *((_QWORD *)v134 + 27),
                                                  v133,
                                                  (unsigned int)Size,
                                                  v36);
                          goto LABEL_92;
                        case 0x3C:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 80 )
                            goto LABEL_296;
                          v51 = v139;
                          if ( !*((_QWORD *)v139 + 27) )
                          {
                            WdLogSingleEntry1(1LL, 3878LL);
                            DxgkLogInternalTriageEvent(
                              0LL,
                              262146,
                              -1,
                              (__int64)L"pAdapterIn->GetFdo() != NULL",
                              3878LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                          }
                          v52 = *(_QWORD *)(*((_QWORD *)v51 + 27) + 64LL);
                          if ( *(_QWORD *)(v52 + 4776) && (v53 = (const void **)(v52 + 4768)) != 0LL )
                          {
                            memset(v133, 0, 0x50uLL);
                            if ( *(unsigned __int16 *)v53 >= 0x4Eu )
                              v54 = 78LL;
                            else
                              v54 = *(unsigned __int16 *)v53;
                            memmove(v133, v53[1], v54);
                            AdapterRegistryInfo = 0;
                          }
                          else
                          {
LABEL_346:
                            AdapterRegistryInfo = -1073741823;
                          }
                          goto LABEL_92;
                        case 0x3D:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 56 )
                            goto LABEL_296;
                          AdapterRegistryInfo = DXGADAPTER::GetNodePerfData(v134, (struct _D3DKMT_NODE_PERFDATA *)v133);
                          goto LABEL_92;
                        case 0x3E:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 64 )
                            goto LABEL_296;
                          AdapterRegistryInfo = DXGADAPTER::GetAdapterPerfData(
                                                  v134,
                                                  (struct _D3DKMT_ADAPTER_PERFDATA *)v133);
                          goto LABEL_92;
                        case 0x3F:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 40 )
                            goto LABEL_296;
                          AdapterRegistryInfo = DXGADAPTER::GetAdapterPerfDataCaps(
                                                  v134,
                                                  (struct _D3DKMT_ADAPTER_PERFDATACAPS *)v133);
                          goto LABEL_92;
                        case 0x40:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 132 )
                            goto LABEL_296;
                          AdapterRegistryInfo = DXGADAPTER::GetGpuVersion(v134, (struct _D3DKMT_GPUVERSION *)v133);
                          goto LABEL_92;
                        case 0x41:
                        case 0x42:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 0x2000 )
                            goto LABEL_296;
                          AdapterRegistryInfo = -1073741823;
                          v128 = v134;
                          if ( HIDWORD(Src[0]) == 65 )
                            v128 = v139;
                          if ( v128 )
                          {
                            DXGADAPTER::GetDeviceDescriptor(v128, Size, (unsigned __int16 *)v133);
                            AdapterRegistryInfo = 0;
                          }
                          goto LABEL_92;
                        case 0x44:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 1 )
                            goto LABEL_296;
                          if ( HIDWORD(Src[0]) == 68 && v134 )
                            v60 = *((_BYTE *)v134 + 210);
                          else
                            v60 = 0;
                          LOBYTE(v133->PreemptionCaps.GraphicsPreemptionGranularity) = v60;
                          goto LABEL_92;
                        case 0x46:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          DXGADAPTER::QueryWDDM2_7Caps(v134, (struct _D3DKMT_WDDM_2_7_CAPS *)v133);
                          goto LABEL_92;
                        case 0x47:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 524 )
                            goto LABEL_296;
                          v61 = v134;
                          v62 = v133;
                          if ( v133->PreemptionCaps.GraphicsPreemptionGranularity )
                          {
                            AdapterRegistryInfo = -1073741811;
                          }
                          else
                          {
                            DisplayUMDFileName = (const struct _UNICODE_STRING *)ADAPTER_RENDER::GetDisplayUMDFileName(*((_QWORD *)v134 + 366));
                            if ( !(unsigned int)IsNullUmdDriver(DisplayUMDFileName) )
                            {
                              v100 = *v130;
                              p_ComputePreemptionGranularity = (char *)&v133->PreemptionCaps.ComputePreemptionGranularity;
                              v101 = (char *)*((_QWORD *)v130 + 1);
                              goto LABEL_310;
                            }
                            AdapterRegistryInfo = -1073741811;
                          }
                          goto LABEL_299;
                        case 0x48:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          AdapterRegistryInfo = DXGADAPTER::QueryTrackedWorkloadSupport(
                                                  v134,
                                                  v133->PreemptionCaps.GraphicsPreemptionGranularity,
                                                  (enum DXGK_ENGINE_TYPE)v133->PreemptionCaps.ComputePreemptionGranularity,
                                                  (int *)&v133->Value);
                          goto LABEL_92;
                        case 0x49:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v98 = v134;
                          if ( !(_BYTE)word_1C013B49C || !*((_BYTE *)v134 + 2759) )
                          {
                            AdapterRegistryInfo = -1073741637;
                            v96 = -1073741637LL;
                            v97 = v133;
                            goto LABEL_304;
                          }
                          v133->PreemptionCaps.GraphicsPreemptionGranularity = (*((_DWORD *)v134 + 698) & 0x20) == 0;
                          goto LABEL_92;
                        case 0x4A:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 8 )
                            goto LABEL_296;
                          if ( v38 )
                          {
                            v133->PreemptionCaps = 0LL;
                            if ( !*((_QWORD *)v38 + 366) )
                              *(_QWORD *)&v133->PreemptionCaps ^= (v133->PreemptionCaps.GraphicsPreemptionGranularity ^ (unsigned int)ADAPTER_DISPLAY::GetDisplayOnlyDriverPreferPhysicallyContiguous(*((ADAPTER_DISPLAY **)v38 + 365))) & 1;
                          }
                          else
                          {
                            AdapterRegistryInfo = -1073741811;
                            WdLogSingleEntry1((unsigned int)(Size - 5), -1073741811LL);
                          }
                          goto LABEL_92;
                        case 0x4B:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          DXGADAPTER::QueryWDDM2_9Caps(v134, (struct _D3DKMT_WDDM_2_9_CAPS *)v133);
                          goto LABEL_92;
                        case 0x4C:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v58 = *((_DWORD *)v134 + 571);
                          if ( (v58 & 0x10000) != 0 )
                          {
                            v133->PreemptionCaps.GraphicsPreemptionGranularity = 3;
                          }
                          else if ( (v58 & 0x8000) != 0 )
                          {
                            v133->PreemptionCaps.GraphicsPreemptionGranularity = 2;
                          }
                          else
                          {
                            v133->PreemptionCaps.GraphicsPreemptionGranularity = ((unsigned __int8)v58 >> 4) & 1;
                          }
                          goto LABEL_92;
                        case 0x4D:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          DXGADAPTER::QueryWDDM3_0Caps(v134, (struct _D3DKMT_WDDM_3_0_CAPS *)v133);
                          goto LABEL_92;
                        case 0x4E:
                          v40 = (unsigned int)Size;
                          if ( (unsigned int)Size < 0x208 )
                            goto LABEL_296;
                          v61 = v134;
                          v99 = *((_QWORD *)v134 + 366);
                          v62 = v133;
                          if ( *(_WORD *)(v99 + 592) )
                          {
                            v100 = *(unsigned __int16 *)(v99 + 592);
                            v101 = *(char **)(v99 + 600);
                            p_ComputePreemptionGranularity = (char *)v133;
LABEL_310:
                            AdapterRegistryInfo = RtlStringCbCopyNW(p_ComputePreemptionGranularity, v39, v101, v100);
                            if ( AdapterRegistryInfo >= 0 )
                              goto LABEL_92;
                          }
                          else
                          {
                            AdapterRegistryInfo = -1073741811;
                          }
LABEL_299:
                          v96 = AdapterRegistryInfo;
LABEL_300:
                          v97 = v62;
LABEL_302:
                          v98 = v61;
LABEL_304:
                          WdLogSingleEntry3(4LL, v97, v98, v96);
LABEL_92:
                          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v165);
                          v45 = v133;
                          break;
                        case 0x4F:
                          v40 = (unsigned int)Size;
                          v103 = 520LL;
                          if ( (unsigned int)Size < 0x208 )
                            goto LABEL_296;
                          v104 = *(_QWORD *)(*((_QWORD *)v134 + 27) + 64LL);
                          memset(v133, 0, 0x208uLL);
                          if ( *(_WORD *)(v104 + 2792) <= 0x208u )
                            v103 = *(unsigned __int16 *)(v104 + 2792);
                          memmove(v133, *(const void **)(v104 + 2800), v103);
                          HIWORD(v133->PreemptionCaps.GraphicsPreemptionGranularity) = 92;
                          goto LABEL_92;
                        case 0x50:
                          v40 = (unsigned int)Size;
                          if ( (_DWORD)Size == 4 )
                          {
                            v133->PreemptionCaps.GraphicsPreemptionGranularity = D3DKMDT_GRAPHICS_PREEMPTION_NONE;
                            if ( *((_QWORD *)v134 + 366) )
                              v133->PreemptionCaps.GraphicsPreemptionGranularity = (*((_DWORD *)v134 + 570) >> 11) & 1;
                          }
                          else
                          {
LABEL_296:
                            AdapterRegistryInfo = -1073741811;
                            v78 = v40;
LABEL_298:
                            WdLogSingleEntry2(3LL, v78, -1073741811LL);
                          }
                          goto LABEL_92;
                        default:
                          AdapterRegistryInfo = -1073741811;
                          WdLogSingleEntry2(3LL, SHIDWORD(Src[0]), -1073741811LL);
LABEL_170:
                          LODWORD(v40) = Size;
                          goto LABEL_92;
                      }
                      goto LABEL_93;
                    }
                  }
                  AdapterRegistryInfo = -1073741130;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v165);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v166);
                  LODWORD(v40) = Size;
LABEL_97:
                  v15 = v133;
LABEL_98:
                  if ( AdapterRegistryInfo >= 0 )
                  {
                    v46 = Src[1];
                    if ( v135
                      && ((char *)Src[1] + (unsigned int)v40 > (void *)MmUserProbeAddress
                       || (char *)Src[1] + (unsigned int)v40 <= Src[1]) )
                    {
                      *(_BYTE *)MmUserProbeAddress = 0;
                    }
                    memmove(v46, v15, (unsigned int)v40);
                  }
                  operator delete(v15);
                  if ( v151
                    && _InterlockedExchangeAdd64((volatile signed __int64 *)v151 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  {
                    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v151 + 2), v151);
                  }
                  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v140);
                  if ( v142 )
                  {
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
                      McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v140);
                  }
                  return (unsigned int)AdapterRegistryInfo;
                }
                AdapterRegistryInfo = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v166, 0LL);
                if ( AdapterRegistryInfo < 0 )
                {
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v166);
                  LODWORD(v40) = Size;
                  goto LABEL_97;
                }
                if ( !v33 || !v33[365] )
                {
                  WdLogSingleEntry1(1LL, 3447LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
                    3447LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v45 = v133;
                if ( v35 == KMTQAITYPE_CURRENTDISPLAYMODE )
                {
                  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                                      v33[365],
                                      v133->PreemptionCaps.GraphicsPreemptionGranularity);
                  if ( *(_DWORD *)DisplayModeInfo )
                  {
                    *(_OWORD *)&v133->PreemptionCaps.ComputePreemptionGranularity = *(_OWORD *)DisplayModeInfo;
                    *(_OWORD *)&v133[1].0 = *((_OWORD *)DisplayModeInfo + 1);
                    v133[3].PreemptionCaps = (D3DKMDT_PREEMPTION_CAPS)*((_QWORD *)DisplayModeInfo + 4);
                    v133[3].Value = *((_DWORD *)DisplayModeInfo + 10);
LABEL_186:
                    LODWORD(v40) = Size;
LABEL_93:
                    if ( AdapterRegistryInfo >= 0 && (*((_DWORD *)v144 + 106) & 0x200) != 0 )
                      AdapterRegistryInfo = PostProcessUMDFileName(v35, v45, v40);
                    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v166);
                    goto LABEL_97;
                  }
                  AdapterRegistryInfo = -1071774919;
                  v132 = v33;
                }
                else
                {
                  if ( v35 != (KMTQUITYPE_GPUVERSION|KMTQAITYPE_GETSEGMENTSIZE) )
                    goto LABEL_186;
                  v149 = v133->PreemptionCaps.GraphicsPreemptionGranularity;
                  v147 = D3DKMDT_COMPUTE_PREEMPTION_NONE;
                  *(_QWORD *)&v161.Type = 33LL;
                  *(_QWORD *)&v161.InputDataSize = 4LL;
                  *(_QWORD *)&v161.Flags.0 = 0LL;
                  HIDWORD(v161.hKmdProcessHandle) = 0;
                  v161.pOutputData = &v147;
                  v161.OutputDataSize = 4;
                  v161.pInputData = &v149;
                  v131 = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v33, &v161);
                  AdapterRegistryInfo = v131;
                  if ( v131 >= 0 )
                  {
                    v133->PreemptionCaps.ComputePreemptionGranularity = v147;
                    goto LABEL_186;
                  }
                  v132 = (ADAPTER_DISPLAY **)v131;
                }
                WdLogSingleEntry2(3LL, (unsigned int)v133->PreemptionCaps.GraphicsPreemptionGranularity, v132);
                goto LABEL_186;
              }
              if ( (_DWORD)v13 != 8 )
              {
                WdLogSingleEntry2(3LL, v13, -1073741811LL);
                operator delete(v15);
                if ( v151 )
                  DXGADAPTER::ReleaseReference(v151);
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v140);
                if ( !v142 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
                  return 3221225485LL;
LABEL_275:
                McTemplateK0q_EtwWriteTransfer(v89, &EventProfilerExit, v90, v140);
                return 3221225485LL;
              }
LABEL_157:
              v27 = (unsigned int)v15->PreemptionCaps.GraphicsPreemptionGranularity;
              goto LABEL_56;
            }
            if ( (_DWORD)v13 == 48 )
              goto LABEL_157;
            WdLogSingleEntry2(3LL, v13, -1073741811LL);
            operator delete(v15);
            if ( v151 )
              DXGADAPTER::ReleaseReference(v151);
          }
          else
          {
            WdLogSingleEntry2(3LL, LODWORD(Src[0]), -1073741811LL);
            operator delete(v15);
            if ( v151 )
              DXGADAPTER::ReleaseReference(v151);
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v140);
          v91 = v142 == 0;
          goto LABEL_259;
        }
        WdLogSingleEntry1(3LL, -1073741801LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v140);
        if ( v142 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v23, v140);
        return 3221225495LL;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v140);
      if ( v142 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v140);
      return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v140);
    if ( v142 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v17, v140);
    return 3221225485LL;
  }
}
