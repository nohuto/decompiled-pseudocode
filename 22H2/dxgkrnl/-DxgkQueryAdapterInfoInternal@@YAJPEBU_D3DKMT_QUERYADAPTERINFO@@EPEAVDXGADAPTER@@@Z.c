/*
 * XREFs of ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C01309C0
 * Callers:
 *     ?VmBusQueryAdapterInfoCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DA830 (-VmBusQueryAdapterInfoCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkQueryAdapterInfo @ 0x1C01309A0 (DxgkQueryAdapterInfo.c)
 *     ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0245AC0 (-VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00026B4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C0007C40 (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ?IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ @ 0x1C0007CAC (-IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C0009A8C (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0009BA0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000B9F0 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C0025AD8 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0025BA4 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0025C10 (-Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     DxgkInvalidateDeviceState @ 0x1C0052818 (DxgkInvalidateDeviceState.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0101D60 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C0132CF4 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C0132D70 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C0132DCC (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0132E78 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0133E18 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiIsDriverUpdateInProgress @ 0x1C0135490 (DpiIsDriverUpdateInProgress.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C015E75C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C015EA80 (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C01635F4 (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z @ 0x1C0165E40 (-QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C0173350 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     DpiReadBlockListInfo @ 0x1C0174A74 (DpiReadBlockListInfo.c)
 *     ?QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z @ 0x1C0174B58 (-QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z.c)
 *     DpiFdoGetAdapterUniqueGUID @ 0x1C0174C70 (DpiFdoGetAdapterUniqueGUID.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0174DC4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0195C18 (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C020DA00 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C020DBA8 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C020DC38 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C020DCC4 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z @ 0x1C020F530 (-QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C0215F8C (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z @ 0x1C0216BEC (-GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C0221F78 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x1C02228A8 (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C02229A4 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C024B134 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C029D1A8 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C02C74F0 (DpiQueryAdapterRegistryInfo.c)
 */

__int64 __fastcall DxgkQueryAdapterInfoInternal(
        const struct _D3DKMT_QUERYADAPTERINFO *a1,
        char a2,
        struct DXGADAPTER *a3)
{
  const struct _D3DKMT_QUERYADAPTERINFO *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v13; // rdx
  ULONG64 v14; // rcx
  __int64 v15; // r8
  struct DXGPROCESS *v16; // rdi
  struct DXGTHREAD *Current; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  bool v22; // zf
  __int128 v23; // xmm0
  size_t v24; // xmm1_8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  size_t v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int *v43; // r14
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned __int64 v48; // rsi
  size_t v49; // r12
  struct _KTHREAD **v50; // rdi
  struct DXGADAPTER **v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  DXGADAPTER *v55; // r13
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdi
  unsigned int v59; // ebx
  __int64 v60; // rax
  int PairingAdapters; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  struct DXGADAPTER *v68; // rbx
  DXGADAPTER *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // eax
  bool v74; // cl
  __int64 v75; // rcx
  unsigned int v76; // ebx
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  _QWORD *v81; // rax
  ADAPTER_DISPLAY **v82; // rbx
  signed __int64 v83; // rax
  __int64 v84; // r13
  __int64 v85; // r9
  __int64 v86; // rcx
  DXGADAPTER *v87; // r8
  __int64 HostSilo; // rax
  __int64 v89; // rdx
  __int64 v90; // rax
  struct DXGADAPTER *v91; // rbx
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // r8
  unsigned __int64 v98; // r9
  char *v99; // r8
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  struct DXGPROCESS *v108; // rsi
  unsigned int *v109; // rbx
  __int64 v110; // rax
  struct DXGADAPTER *v111; // rax
  DXGADAPTER *v112; // rbx
  __int64 v113; // rcx
  __int64 v114; // rax
  const void **AdapterUniqueGUID; // rax
  size_t v116; // r8
  struct DXGADAPTER *v117; // rax
  __int64 v118; // rcx
  struct DXGADAPTER *v119; // rcx
  char v120; // cl
  struct DXGADAPTER *v121; // rbx
  int v122; // eax
  unsigned __int8 IsDriverUpdateInProgress; // al
  void *v124; // rbx
  struct DXGADAPTER *v125; // rax
  int v126; // edx
  struct DXGADAPTER *v127; // rbx
  DXGADAPTER *v128; // rcx
  int *AdapterType; // rax
  int v130; // ecx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // rdx
  DXGADAPTER *v135; // rcx
  DXGADAPTER *v136; // rcx
  struct DXGADAPTER *v137; // rbx
  DXGADAPTER *v138; // rcx
  DXGADAPTER *v139; // rbx
  DXGADAPTER *v140; // r11
  __int64 v141; // r8
  __int64 v142; // r8
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rbx
  _DWORD *v146; // rcx
  int v147; // eax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // rbx
  __int64 v152; // rcx
  struct DXGADAPTER *v153; // rbx
  struct DXGADAPTER *v154; // rbx
  __int64 v155; // rcx
  __int64 v156; // rax
  ADAPTER_RENDER *v157; // rsi
  __int64 v158; // rbx
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rax
  DXGADAPTER *v162; // rcx
  struct DXGADAPTER *v163; // rbx
  __int64 v164; // rcx
  __int64 v165; // rdx
  const struct _UNICODE_STRING *DisplayUMDFileName; // rax
  char **v167; // r8
  __int64 v168; // rcx
  __int64 v169; // rax
  int v170; // eax
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // rax
  void *v178; // rcx
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  struct DXGADAPTER *v182; // [rsp+50h] [rbp-298h] BYREF
  void *Src[2]; // [rsp+58h] [rbp-290h]
  size_t Size; // [rsp+68h] [rbp-280h]
  char v185; // [rsp+70h] [rbp-278h] BYREF
  char v186; // [rsp+71h] [rbp-277h]
  DXGADAPTER *v187; // [rsp+78h] [rbp-270h] BYREF
  int v188; // [rsp+80h] [rbp-268h] BYREF
  __int64 v189; // [rsp+88h] [rbp-260h]
  char v190; // [rsp+90h] [rbp-258h]
  DXGADAPTER *v191; // [rsp+98h] [rbp-250h] BYREF
  struct DXGPROCESS *v192; // [rsp+A0h] [rbp-248h]
  unsigned int v193; // [rsp+A8h] [rbp-240h]
  _D3DKMT_WDDM_1_3_CAPS v194; // [rsp+B0h] [rbp-238h] BYREF
  unsigned int v195; // [rsp+B4h] [rbp-234h] BYREF
  BOOL IsRemoteConnection; // [rsp+B8h] [rbp-230h]
  unsigned int v197; // [rsp+C0h] [rbp-228h]
  unsigned int v198; // [rsp+C4h] [rbp-224h] BYREF
  __int64 v199; // [rsp+C8h] [rbp-220h] BYREF
  struct DXGADAPTER *v200; // [rsp+D0h] [rbp-218h] BYREF
  unsigned __int64 v201; // [rsp+E0h] [rbp-208h] BYREF
  struct DXGDEVICE *v202; // [rsp+E8h] [rbp-200h] BYREF
  struct DXGDEVICE *v203; // [rsp+F0h] [rbp-1F8h] BYREF
  void *v204; // [rsp+F8h] [rbp-1F0h]
  unsigned int *v205; // [rsp+100h] [rbp-1E8h]
  char v206[8]; // [rsp+108h] [rbp-1E0h] BYREF
  struct DXGADAPTER *v207; // [rsp+110h] [rbp-1D8h]
  char v208; // [rsp+118h] [rbp-1D0h]
  int v209; // [rsp+120h] [rbp-1C8h] BYREF
  unsigned __int64 v210; // [rsp+128h] [rbp-1C0h] BYREF
  _DXGKARG_QUERYADAPTERINFO v211; // [rsp+130h] [rbp-1B8h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v212; // [rsp+160h] [rbp-188h] BYREF
  __int128 v213; // [rsp+190h] [rbp-158h] BYREF
  int v214; // [rsp+1A0h] [rbp-148h]
  _D3DKMT_QUERYADAPTERINFO v215; // [rsp+1A8h] [rbp-140h] BYREF
  _BYTE v216[64]; // [rsp+1C0h] [rbp-128h] BYREF
  _BYTE v217[144]; // [rsp+200h] [rbp-E8h] BYREF
  wchar_t Str2[20]; // [rsp+290h] [rbp-58h] BYREF

  v186 = a2;
  v5 = a1;
  v188 = -1;
  v6 = 0LL;
  v189 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v190 = 1;
    v188 = 2015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2015);
  }
  else
  {
    v190 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v188, 2015LL);
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9, v10);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v16 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( (ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
     || (Current = DXGTHREAD::GetCurrent(v14, v13)) == 0LL
     || (v192 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) == 0LL)
    && (v192 = v16) == 0LL
    || a3 && a2 )
  {
    v18 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v19);
    v22 = v190 == 0;
LABEL_62:
    if ( !v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v188);
    return 3221225485LL;
  }
  v204 = 0LL;
  if ( a2 )
  {
    v14 = MmUserProbeAddress;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (const struct _D3DKMT_QUERYADAPTERINFO *)MmUserProbeAddress;
    v23 = *(_OWORD *)&v5->hAdapter;
    v24 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  else
  {
    v23 = *(_OWORD *)&v5->hAdapter;
    v24 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  Size = v24;
  *(_OWORD *)Src = v23;
  if ( !*((_QWORD *)&v23 + 1) )
  {
    v25 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v26);
    if ( v190 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v188);
    return 3221225485LL;
  }
  v30 = (unsigned int)Size;
  if ( !(_DWORD)Size )
  {
    v31 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v32);
    if ( v190 != (_BYTE)v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v188);
    return 3221225485LL;
  }
  v35 = (Size + 7) & 0xFFFFFFF8;
  v197 = v35;
  if ( v35 < (unsigned int)Size )
  {
    v36 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    *(_QWORD *)(v36 + 32) = 3131LL;
    WdLogEvent5_WdWarning(v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v37);
    if ( v190 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v188);
    return 3221225485LL;
  }
  v43 = (unsigned int *)operator new[](v35, 0x4B677844u, (POOL_TYPE)512);
  v205 = v43;
  v204 = v43;
  if ( !v43 )
  {
    v44 = WdLogNewEntry5_WdWarning(v41, v40, v42);
    *(_QWORD *)(v44 + 24) = -1073741801LL;
    WdLogEvent5_WdWarning(v44);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v45);
    if ( v190 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v188);
    return 3221225495LL;
  }
  v48 = SHIDWORD(Src[0]);
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
      v22 = a2 == 0;
      v49 = (unsigned int)Size;
      if ( !v22
        && ((unsigned __int64)(unsigned int)Size + *((_QWORD *)&v23 + 1) < *((_QWORD *)&v23 + 1)
         || (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v23 + 1) > MmUserProbeAddress) )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v43, *((const void **)&v23 + 1), v30);
      break;
    default:
      v49 = (unsigned int)Size;
      memset(v43, 0, (unsigned int)Size);
      break;
  }
  IsRemoteConnection = 0;
  v50 = (struct _KTHREAD **)v192;
  if ( (_DWORD)v48 == 16 )
    IsRemoteConnection = DXGPROCESS::IsRemoteConnection(v192);
  v187 = a3;
  v51 = &v187;
  if ( a3 )
    v51 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v200, LODWORD(Src[0]), v50, v51, 1);
  v55 = v187;
  if ( !v187 )
  {
    v56 = WdLogNewEntry5_WdWarning(v53, v52, v54);
    *(_QWORD *)(v56 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v56 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v56);
    operator delete[](v43);
    if ( v200 )
      DXGADAPTER::ReleaseReference(v200);
LABEL_61:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v57);
    v22 = v190 == 0;
    goto LABEL_62;
  }
  LODWORD(v58) = 0;
  if ( (_DWORD)v48 == 9 )
  {
    if ( (_DWORD)v30 == 48 )
      goto LABEL_56;
LABEL_59:
    v60 = WdLogNewEntry5_WdWarning(v53, v52, v54);
    *(_QWORD *)(v60 + 24) = v49;
    *(_QWORD *)(v60 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v60);
    operator delete[](v43);
    if ( v200 )
      DXGADAPTER::ReleaseReference(v200);
    goto LABEL_61;
  }
  if ( (_DWORD)v48 != 67 )
  {
    v59 = 0;
    goto LABEL_67;
  }
  if ( (_DWORD)v30 != 8 )
    goto LABEL_59;
LABEL_56:
  v59 = *v43;
LABEL_67:
  v182 = 0LL;
  v191 = 0LL;
  v201 = 0LL;
  v210 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v187, v59, &v182, &v201, &v191, &v210, 0);
  v193 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    if ( (_DWORD)v48 != 9 && (_DWORD)v48 != 67 )
    {
      v191 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v55, v59, &v182, &v201, 0LL, 0LL, 0);
      v193 = PairingAdapters;
    }
    if ( PairingAdapters < 0 )
    {
      v64 = WdLogNewEntry5_WdError(v63, v62);
      *(_QWORD *)(v64 + 24) = v55;
      *(_QWORD *)(v64 + 32) = v59;
      WdLogEvent5_WdError(v64);
      operator delete[](v43);
      if ( v200 )
        DXGADAPTER::ReleaseReference(v200);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v65);
      if ( v190 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v66, &EventProfilerExit, v67, v188);
      return v193;
    }
  }
  v68 = v182;
  v69 = v191;
  if ( v182 != v55 && v191 != v55 )
  {
    v70 = WdLogNewEntry5_WdAssertion(v63, v62);
    *(_QWORD *)(v70 + 24) = 3306LL;
    WdLogEvent5_WdAssertion(v70);
    v69 = v191;
  }
  if ( v69 && !*((_QWORD *)v69 + 337) )
  {
    v71 = WdLogNewEntry5_WdAssertion(v63, v62);
    *(_QWORD *)(v71 + 24) = 3308LL;
    WdLogEvent5_WdAssertion(v71);
  }
  if ( !v68 || !*((_QWORD *)v68 + 338) )
  {
    v72 = WdLogNewEntry5_WdAssertion(v63, v62);
    *(_QWORD *)(v72 + 24) = 3310LL;
    WdLogEvent5_WdAssertion(v72);
  }
  v74 = 0;
  if ( (unsigned int)v48 <= 0x1B )
  {
    v73 = 138619200;
    if ( _bittest(&v73, v48) )
      v74 = 1;
  }
  if ( (v55 != v68 || !*((_BYTE *)v55 + 209)) && (!v68 || !*((_BYTE *)v68 + 209) || v74)
    || (unsigned int)v48 <= 0x39 && (v75 = 0x210F85840908010LL, _bittest64(&v75, v48))
    || (_DWORD)v48 == 68 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v217, v68, v191);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v182 + 2), v182);
    v82 = (ADAPTER_DISPLAY **)v191;
    if ( v191 )
    {
      v83 = _InterlockedExchangeAdd64((volatile signed __int64 *)v191 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v82 = (ADAPTER_DISPLAY **)v191;
      if ( v83 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v191 + 2), v191);
    }
    LODWORD(v84) = HIDWORD(Src[0]);
    if ( HIDWORD(Src[0]) == 9 || HIDWORD(Src[0]) == 67 )
    {
      LODWORD(v58) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v217, 0LL);
      if ( (int)v58 >= 0 )
      {
        if ( !v82 || !v82[337] )
        {
          v169 = WdLogNewEntry5_WdAssertion(v168, v89);
          *(_QWORD *)(v169 + 24) = 3393LL;
          WdLogEvent5_WdAssertion(v169);
        }
        if ( (_DWORD)v84 == 9 )
        {
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v82[337], *v43);
          if ( *(_DWORD *)DisplayModeInfo )
          {
            *(_OWORD *)(v43 + 1) = *(_OWORD *)DisplayModeInfo;
            *(_OWORD *)(v43 + 5) = *((_OWORD *)DisplayModeInfo + 1);
            *(_QWORD *)(v43 + 9) = *((_QWORD *)DisplayModeInfo + 4);
            v43[11] = *((_DWORD *)DisplayModeInfo + 10);
          }
          else
          {
            LODWORD(v58) = -1071774919;
            v177 = WdLogNewEntry5_WdWarning(v175, v89, v176);
            *(_QWORD *)(v177 + 24) = *v43;
            *(_QWORD *)(v177 + 32) = v82;
            WdLogEvent5_WdWarning(v177);
          }
        }
        else if ( (_DWORD)v84 == 67 )
        {
          v198 = *v43;
          v195 = 0;
          *(_QWORD *)&v212.Type = 33LL;
          *(_QWORD *)&v212.InputDataSize = 4LL;
          *(_QWORD *)&v212.Flags.0 = 0LL;
          HIDWORD(v212.hKmdProcessHandle) = 0;
          v212.pOutputData = &v195;
          v212.OutputDataSize = 4;
          v212.pInputData = &v198;
          v170 = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v82, &v212);
          v58 = v170;
          if ( v170 < 0 )
          {
            v173 = WdLogNewEntry5_WdWarning(v171, v89, v172);
            *(_QWORD *)(v173 + 24) = *v43;
            *(_QWORD *)(v173 + 32) = v58;
            WdLogEvent5_WdWarning(v173);
          }
          else
          {
            v43[1] = v195;
          }
        }
        goto LABEL_382;
      }
    }
    else
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216,
        v182,
        (struct DXGADAPTER *)v82);
      if ( *((_DWORD *)v187 + 50) == 1 )
      {
        v86 = *((unsigned int *)v182 + 50);
        if ( (_DWORD)v86 == 1 )
        {
          v87 = v191;
          if ( !v191 )
            goto LABEL_119;
          if ( *((_DWORD *)v191 + 50) == 1 )
          {
            v87 = v191;
LABEL_119:
            v84 = SHIDWORD(Src[0]);
            switch ( HIDWORD(Src[0]) )
            {
              case 0:
                *(_QWORD *)&v211.Flags.0 = 0LL;
                HIDWORD(v211.hKmdProcessHandle) = 0;
                memset(&v211, 0, 24);
                v211.pOutputData = v43;
                v211.OutputDataSize = Size;
                v108 = v192;
                if ( (*((_BYTE *)v192 + 347) & 0x20) != 0 )
                  v211.Flags.Value = (2 * *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v192 + 62) + 496LL) + 296LL)) & 2 | 1;
                v109 = (unsigned int *)v182;
                v58 = *((_QWORD *)v182 + 338);
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx(v58 + 72, 0LL);
                v110 = *(_QWORD *)(*((_QWORD *)v108 + 6) + 8LL * v109[58]);
                if ( v110 )
                  v211.hKmdProcessHandle = *(HANDLE *)(v110 + 16);
                ExReleasePushLockSharedEx(v58 + 72, 0LL);
                KeLeaveCriticalRegion();
                LODWORD(v58) = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v109, &v211);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 1:
                if ( (_DWORD)Size != 524 )
                  goto LABEL_125;
                v91 = v182;
                v92 = ADAPTER_RENDER::CopyUmdFileName(
                        *((ADAPTER_RENDER **)v182 + 338),
                        (struct _D3DKMT_UMDFILENAMEINFO *)v43);
                goto LABEL_127;
              case 2:
                if ( (_DWORD)Size != 528 )
                  goto LABEL_125;
                v97 = *((_QWORD *)v182 + 338);
                if ( (*((_BYTE *)v192 + 347) & 1) != 0 )
                {
                  v43[130] = *(_DWORD *)(v97 + 592);
                  v43[131] = *(_DWORD *)(v97 + 596);
                  v98 = *(unsigned __int16 *)(v97 + 576);
                  v99 = *(char **)(v97 + 584);
                }
                else
                {
                  v43[130] = *(_DWORD *)(v97 + 568);
                  v43[131] = *(_DWORD *)(v97 + 572);
                  v98 = *(unsigned __int16 *)(v97 + 552);
                  v99 = *(char **)(v97 + 560);
                }
                LODWORD(v58) = RtlStringCbCopyNW((char *)v43, 0x1C0000000LL, v99, v98);
                if ( (int)v58 >= 0 )
                  goto LABEL_368;
                v102 = WdLogNewEntry5_WdError(v101, v100);
                *(_QWORD *)(v102 + 24) = (int)v58;
                WdLogEvent5_WdError(v102);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 3:
                if ( (_DWORD)Size != 24 )
                  goto LABEL_125;
                v199 = 0LL;
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *, __int64 *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v182 + 338) + 640LL) + 8LL) + 80LL))(
                  *(_QWORD *)(*((_QWORD *)v182 + 338) + 648LL),
                  0LL,
                  &v199,
                  &v199,
                  &v199,
                  v43,
                  v43 + 2,
                  v43 + 4);
                LODWORD(v58) = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 4:
              case 0x34:
                if ( (_DWORD)Size != 16 )
                  goto LABEL_125;
                v111 = v182;
                if ( HIDWORD(Src[0]) == 4 )
                  v111 = v187;
                if ( !v111 )
                  goto LABEL_165;
                *(_OWORD *)v43 = *(_OWORD *)((char *)v111 + 284);
                LODWORD(v58) = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 5:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_125;
                LODWORD(v58) = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v182 + 338) + 616LL)
                                                                                             + 8LL)
                                                                                 + 504LL))(
                                 *(_QWORD *)(*((_QWORD *)v182 + 338) + 624LL),
                                 v43);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 6:
              case 0x35:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_125;
                LODWORD(v58) = -1073741823;
                v117 = v182;
                if ( HIDWORD(Src[0]) == 6 )
                  v117 = v187;
                if ( !v117 )
                  goto LABEL_368;
                v118 = *(_QWORD *)(*((_QWORD *)v117 + 27) + 64LL);
                *v43 = *(_DWORD *)(v118 + 1144);
                v43[1] = *(unsigned __int16 *)(v118 + 1150);
                v43[2] = (unsigned __int16)*(_DWORD *)(v118 + 1148);
                LODWORD(v58) = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 7:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_125;
                v106 = *(_QWORD *)(*((_QWORD *)v182 + 338) + 640LL);
                v107 = *((_QWORD *)v192 + 8);
                if ( v107 )
                  v6 = *(_QWORD *)(v107 + 8LL * (unsigned int)(*(_DWORD *)v106 - 1));
                LODWORD(v58) = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v106 + 8) + 376LL))(
                                 v6,
                                 v43);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 8:
              case 0x36:
                if ( (_DWORD)Size != 2080 )
                  goto LABEL_125;
                LODWORD(v58) = -1073741823;
                v119 = v182;
                if ( HIDWORD(Src[0]) == 8 )
                  v119 = v187;
                if ( !v119 )
                  goto LABEL_368;
                LODWORD(v58) = DpiQueryAdapterRegistryInfo(*((_QWORD *)v119 + 27), v43);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0xB:
              case 0x37:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                v120 = 0;
                v185 = 0;
                LODWORD(v58) = -1073741823;
                v121 = v182;
                if ( HIDWORD(Src[0]) == 11 )
                  v121 = v187;
                if ( !v121 )
                  goto LABEL_368;
                v122 = *((_DWORD *)v121 + 87);
                if ( (v122 & 0x20) != 0 || (v122 & 4) != 0 )
                {
                  IsDriverUpdateInProgress = 0;
                }
                else
                {
                  IsDriverUpdateInProgress = DpiIsDriverUpdateInProgress(*((_QWORD *)v121 + 27), &v185);
                  v120 = v185;
                }
                *v43 = IsDriverUpdateInProgress;
                if ( !v120 )
                  goto LABEL_361;
                v124 = (void *)*((_QWORD *)v121 + 27);
                ObfReferenceObject(v124);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                DxgkInvalidateDeviceState((__int64)v124);
                ObfDereferenceObject(v124);
                LODWORD(v58) = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0xC:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                *v43 = 0;
                *v43 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v182 + 338) + 16LL) + 2060LL) >> 5) & 1;
                LODWORD(v58) = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0xD:
              case 0x38:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LODWORD(v58) = -1073741823;
                v125 = v182;
                if ( HIDWORD(Src[0]) == 13 )
                  v125 = v187;
                if ( !v125 )
                  goto LABEL_368;
                v126 = *((_DWORD *)v125 + 649);
                *v43 = v126;
                if ( (*((_BYTE *)v192 + 347) & 0x20) != 0
                  && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v192 + 62) + 496LL) + 352LL) <= 0x10u )
                {
                  if ( v126 > 2600 )
                    v126 = 2600;
                  *v43 = v126;
                }
                goto LABEL_361;
              case 0xF:
              case 0x39:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LODWORD(v58) = -1073741823;
                v127 = v182;
                v128 = v182;
                if ( HIDWORD(Src[0]) == 15 )
                  v128 = v187;
                if ( !v128 )
                  goto LABEL_368;
                AdapterType = DXGADAPTER::GetAdapterType(v128, &v209);
                v130 = *AdapterType;
                *v43 = *AdapterType;
                if ( v127 )
                  *v43 = v130 ^ ((unsigned __int16)v130 ^ (unsigned __int16)(*((unsigned __int8 *)v127 + 212) << 8)) & 0x100;
                goto LABEL_361;
              case 0x10:
                if ( (_DWORD)Size != 8 )
                  goto LABEL_125;
                if ( !*((_BYTE *)DXGPROCESS::GetCurrent(v86, 0x1C0000000LL, (__int64)v87, v85) + 346) )
                  goto LABEL_216;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                v135 = v187;
                if ( IsRemoteConnection )
                  v135 = 0LL;
                LODWORD(v58) = OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
                                 v135,
                                 v134,
                                 *v43,
                                 v43,
                                 lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x11:
              case 0x3A:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_125;
                LODWORD(v58) = -1073741823;
                v136 = v182;
                if ( HIDWORD(Src[0]) == 17 )
                  v136 = v187;
                if ( !v136 )
                  goto LABEL_368;
                DXGADAPTER::QueryWDDM1_2Caps(v136, (struct _D3DKMT_WDDM_1_2_CAPS *)v43);
                LODWORD(v58) = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x12:
                if ( (_DWORD)Size != 8 )
                  goto LABEL_125;
                LODWORD(v58) = ADAPTER_RENDER::GetUmdFileVersion(
                                 *((ADAPTER_RENDER **)v182 + 338),
                                 (union _LARGE_INTEGER *)v43);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x13:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                if ( v87 && DXGADAPTER::IsIndirectDisplayDevice(v87) )
                  goto LABEL_232;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v182 + 338) + 16LL) + 2531LL) != 0;
                *v43 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x14:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LOBYTE(v6) = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v182 + 338)) != 0;
                *v43 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x15:
                if ( (_DWORD)Size != 520 )
                  goto LABEL_125;
                v91 = v182;
                if ( !(_BYTE)word_1C00B2B1D || !*((_BYTE *)v182 + 2535) )
                {
                  v96 = (_QWORD *)WdLogNewEntry5_WdEvent(v86, 0x1C0000000uLL);
                  v96[3] = v43;
                  v96[4] = v91;
                  LODWORD(v58) = -1073741637;
                  v96[5] = -1073741637LL;
                  WdLogEvent5_WdEvent(v96);
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                  break;
                }
                v92 = ADAPTER_RENDER::CopyDListFileName(
                        *((ADAPTER_RENDER **)v182 + 338),
                        (unsigned __int16 *)v43,
                        (unsigned int)v87);
LABEL_127:
                v58 = v92;
                if ( v92 < 0 )
                {
                  v95 = (_QWORD *)WdLogNewEntry5_WdEvent(v94, v93);
                  v95[3] = v43;
                  v95[4] = v91;
                  v95[5] = v58;
                  goto LABEL_129;
                }
                goto LABEL_368;
              case 0x16:
              case 0x3B:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LODWORD(v58) = -1073741823;
                v138 = v182;
                v139 = v187;
                if ( HIDWORD(Src[0]) == 22 )
                  v138 = v187;
                if ( !v138 )
                  goto LABEL_368;
                DXGADAPTER::QueryWDDM1_3Caps(v138, (struct _D3DKMT_WDDM_1_3_CAPS *)v43);
                if ( v140 && v139 != v140 )
                {
                  v194.0 = 0;
                  DXGADAPTER::QueryWDDM1_3Caps(v140, &v194);
                  *v43 ^= (*v43 ^ v194.Value) & 0x20;
                }
                goto LABEL_361;
              case 0x17:
                if ( (_DWORD)Size != 16 )
                  goto LABEL_125;
                if ( !v43[1] )
                  goto LABEL_241;
                if ( !*((_BYTE *)DXGPROCESS::GetCurrent(v86, 0x1C0000000LL, (__int64)v87, v85) + 346) )
                {
LABEL_216:
                  LODWORD(v58) = -1073741790;
                  v90 = WdLogNewEntry5_WdWarning(v132, v131, v133);
                  *(_QWORD *)(v90 + 24) = -1073741790LL;
                  goto LABEL_367;
                }
                if ( v43[1] )
                {
                  *(_DWORD *)(*((_QWORD *)v182 + 338) + 1104LL) = v43[3];
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                }
                else
                {
LABEL_241:
                  v137 = v182;
                  v43[2] = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v182 + 338));
                  v43[3] = *(_DWORD *)(*((_QWORD *)v137 + 338) + 1104LL);
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                }
                break;
              case 0x18:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                DXGADAPTER::QueryWDDM2_0Caps(v182, (struct _D3DKMT_WDDM_2_0_CAPS *)v43);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x19:
                if ( (_DWORD)Size != 78 )
                  goto LABEL_125;
                LODWORD(v58) = DXGADAPTER::QueryNodeMetadata(v182, *v43, (struct _DXGK_NODEMETADATA *)(v43 + 1));
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x1A:
                if ( (_DWORD)Size != 520 )
                  goto LABEL_125;
                v91 = v182;
                v141 = *((_QWORD *)v182 + 338);
                *(_WORD *)v43 = 0;
                v92 = RtlStringCbCopyNW(
                        (char *)v43,
                        0x1C0000000LL,
                        *(char **)(v141 + 528),
                        *(unsigned __int16 *)(v141 + 520));
                goto LABEL_127;
              case 0x1B:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                *v43 = (*((_DWORD *)v187 + 87) >> 9) & 1;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x1C:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                *v43 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v182 + 338) + 16LL) + 2052LL) & 0x10) != 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x1D:
                if ( (_DWORD)Size != 520 )
                  goto LABEL_125;
                v91 = v182;
                v142 = *((_QWORD *)v182 + 338);
                *(_WORD *)v43 = 0;
                v92 = RtlStringCbCopyNW(
                        (char *)v43,
                        0x1C0000000LL,
                        *(char **)(v142 + 544),
                        *(unsigned __int16 *)(v142 + 536));
                goto LABEL_127;
              case 0x1E:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                if ( *((int *)v182 + 582) < 0x2000 )
                  *v43 = 1;
                else
                  *v43 = *((_DWORD *)v182 + 70);
                goto LABEL_361;
              case 0x1F:
                if ( (_DWORD)Size != 28 )
                  goto LABEL_125;
                v143 = *v43;
                if ( *((int *)v182 + 582) < 0x2000 )
                  v144 = 1LL;
                else
                  v144 = *((unsigned int *)v182 + 70);
                v145 = *v43;
                if ( (unsigned int)v143 < (unsigned int)v144 )
                {
                  _mm_lfence();
                  v146 = *(_DWORD **)(*(_QWORD *)(360 * v145 + *((_QWORD *)v182 + 323) + 8) + 64LL);
                  v43[1] = v146[281];
                  v43[2] = v146[282];
                  v43[3] = v146[283];
                  v43[4] = v146[284];
                  v43[5] = v146[285];
                  v43[6] = v146[280];
                  LODWORD(v58) = 0;
                  LODWORD(v84) = HIDWORD(Src[0]);
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                  break;
                }
                LODWORD(v58) = -1073741811;
                v90 = WdLogNewEntry5_WdWarning(v144, v143, v87);
                *(_QWORD *)(v90 + 24) = v145;
                goto LABEL_366;
              case 0x20:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                QueryDriverCapsExt(v87, (struct _D3DKMT_DRIVERCAPS_EXT *)v43);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x21:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                v213 = 0LL;
                v214 = 0;
                v147 = DxgkMiracastQueryMiracastSupportInternal(&v213);
                v151 = v147;
                if ( v147 == -1073741637 )
                  goto LABEL_232;
                if ( v147 < 0 )
                {
                  LODWORD(v58) = v147;
                  v90 = WdLogNewEntry5_WdWarning(v149, v148, v150);
                  *(_QWORD *)(v90 + 24) = v151;
                  goto LABEL_367;
                }
                *v43 = 2 - (BYTE8(v213) != 0);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x22:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_125;
                if ( *((int *)v182 + 582) < 0x2000 )
                  v152 = 1LL;
                else
                  v152 = *((unsigned int *)v182 + 70);
                if ( (*((_DWORD *)v182 + 515) & 0x40) == 0 )
                {
                  LODWORD(v58) = -1073741811;
                  v90 = WdLogNewEntry5_WdWarning(v152, v182, v87);
                  *(_QWORD *)(v90 + 24) = -1073741811LL;
                  goto LABEL_367;
                }
                if ( *v43 >= (unsigned int)v152 )
                {
                  LODWORD(v58) = -1073741811;
                  v90 = WdLogNewEntry5_WdWarning(v152, v182, v87);
                  *(_QWORD *)(v90 + 24) = *v43;
                  goto LABEL_366;
                }
                ADAPTER_RENDER::QueryGpuMmuCaps(
                  *((ADAPTER_RENDER **)v182 + 338),
                  *v43,
                  (struct _D3DKMT_GPUMMU_CAPS *)(v43 + 1));
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x23:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v182 + 338) + 16LL) + 2637LL) != 0;
                *v43 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x24:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                *v43 = *((_DWORD *)DXGGLOBAL::GetGlobal(v86, 0x1C0000000LL) + 342);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x25:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v182 + 338) + 16LL) + 2638LL) != 0;
                *v43 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x26:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v182 + 338) + 16LL) + 2639LL) != 0;
                *v43 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x27:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v182 + 338) + 16LL) + 2640LL) != 0;
                *v43 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x28:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v182 + 338) + 16LL) + 2641LL) != 0;
                *v43 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x29:
                if ( (_DWORD)Size != 24 )
                  goto LABEL_125;
                LODWORD(v58) = DxgkReadPnPRegistryPath(v182, *v43, v43[1], *((_QWORD *)v43 + 1), *((_QWORD *)v43 + 2));
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x2A:
                if ( (_DWORD)Size != 56 )
                  goto LABEL_125;
                if ( *((int *)v182 + 582) < 0x2000 )
                  v103 = 1LL;
                else
                  v103 = *((unsigned int *)v182 + 70);
                v104 = *v43;
                if ( (unsigned int)v104 >= (unsigned int)v103 )
                {
                  v105 = WdLogNewEntry5_WdWarning(v103, v104, v87);
                  *(_QWORD *)(v105 + 24) = *v43;
                  *(_QWORD *)(v105 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v105);
LABEL_361:
                  LODWORD(v58) = 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                }
                else
                {
                  (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v182 + 338) + 640LL) + 8LL) + 80LL))(
                    *(_QWORD *)(*((_QWORD *)v182 + 338) + 648LL),
                    v104,
                    v43 + 8,
                    v43 + 10,
                    v43 + 12,
                    v43 + 2,
                    v43 + 4,
                    v43 + 6);
                  LODWORD(v58) = 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                }
                break;
              case 0x2B:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v182 + 338) + 16LL) + 2642LL) != 0;
                *v43 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x2C:
                if ( (_DWORD)Size != 1 )
                  goto LABEL_125;
                *(_BYTE *)v43 = 1;
                v153 = v182;
                if ( *((_DWORD *)v182 + 81) != 1297040209 )
                  goto LABEL_368;
                wcscpy(Str2, L"Qualcomm Adreno 530");
                if ( wcsncmp(*((const wchar_t **)v182 + 189), Str2, 0x14uLL)
                  || (*(_DWORD *)(*((_QWORD *)v153 + 323) + 16LL) & 0x10) != 0 )
                {
                  goto LABEL_368;
                }
                *(_BYTE *)v43 = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x2D:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                v154 = v182;
                if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v182 + 338))
                  || (v155 = *(_QWORD *)(*((_QWORD *)v154 + 338) + 16LL), *(_QWORD *)(v155 + 1152))
                  && *(_BYTE *)(v155 + 2642)
                  || *(_QWORD *)(v155 + 1160) && *(_BYTE *)(v155 + 2642) )
                {
                  *v43 = 1;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                }
                else
                {
LABEL_232:
                  *v43 = 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                }
                break;
              case 0x2E:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_125;
                if ( v43[1] )
                {
                  v156 = *v43;
                  if ( (unsigned int)v156 >= 0x10 )
                    goto LABEL_368;
                  *(_BYTE *)(v156 + *((_QWORD *)v182 + 338) + 1088) = v43[2] != 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                }
                else
                {
                  v157 = (ADAPTER_RENDER *)*((_QWORD *)v182 + 338);
                  v158 = *v43;
                  if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v157) && (unsigned int)v158 < 0x10 )
                  {
                    LOBYTE(v6) = *((_BYTE *)v157 + v158 + 1088) != 0;
                    v43[2] = v6;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                  }
                  else
                  {
                    LOBYTE(v6) = 0;
                    v43[2] = v6;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                  }
                }
                break;
              case 0x2F:
                if ( (_DWORD)Size != 8 )
                  goto LABEL_125;
                v202 = 0LL;
                DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v203, *v43, (struct _KTHREAD **)v192, &v202);
                if ( v202 )
                {
                  *((_BYTE *)v43 + 4) = *((_BYTE *)v202 + 1906);
                  LODWORD(v58) = 0;
                }
                else
                {
                  v161 = WdLogNewEntry5_WdError(v160, v159);
                  *(_QWORD *)(v161 + 24) = *v43;
                  WdLogEvent5_WdError(v161);
                  LODWORD(v58) = -1073741811;
                }
                if ( !v203 )
                  goto LABEL_368;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v203 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v203 + 2), v203);
                LODWORD(v84) = HIDWORD(Src[0]);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x30:
                if ( (*((_BYTE *)v192 + 348) & 4) != 0 )
                {
                  HostSilo = PsGetHostSilo();
                  v6 = PsAttachSiloToCurrentThread(HostSilo);
                }
                LODWORD(v58) = DxgkpQueryRegistry(v182, v43, Size);
                if ( !v6 )
                  goto LABEL_368;
                PsAttachSiloToCurrentThread(v6);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x31:
                if ( (_DWORD)Size != 8 )
                  goto LABEL_125;
                LODWORD(v58) = ADAPTER_RENDER::GetKmdFileVersion(
                                 *((ADAPTER_RENDER **)v182 + 338),
                                 (union _LARGE_INTEGER *)v43);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x32:
              case 0x33:
                if ( (unsigned int)Size < 8 )
                  goto LABEL_125;
                LOBYTE(v85) = HIDWORD(Src[0]) == 50;
                LODWORD(v58) = DpiReadBlockListInfo(*((_QWORD *)v182 + 27), v43, (unsigned int)Size, v85);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x3C:
                if ( (_DWORD)Size != 80 )
                  goto LABEL_125;
                v112 = v187;
                v113 = *((_QWORD *)v187 + 27);
                if ( !v113 )
                {
                  v114 = WdLogNewEntry5_WdAssertion(0LL, 0x1C0000000uLL);
                  *(_QWORD *)(v114 + 24) = 3749LL;
                  WdLogEvent5_WdAssertion(v114);
                  v113 = *((_QWORD *)v112 + 27);
                }
                AdapterUniqueGUID = (const void **)DpiFdoGetAdapterUniqueGUID(v113);
                if ( AdapterUniqueGUID )
                {
                  *(_OWORD *)v43 = 0LL;
                  *((_OWORD *)v43 + 1) = 0LL;
                  *((_OWORD *)v43 + 2) = 0LL;
                  *((_OWORD *)v43 + 3) = 0LL;
                  *((_OWORD *)v43 + 4) = 0LL;
                  v116 = *(unsigned __int16 *)AdapterUniqueGUID;
                  if ( *(unsigned __int16 *)AdapterUniqueGUID >= 0x4Eu )
                    v116 = 78LL;
                  memmove(v43, AdapterUniqueGUID[1], v116);
                  LODWORD(v58) = 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                }
                else
                {
LABEL_165:
                  LODWORD(v58) = -1073741823;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                }
                break;
              case 0x3D:
                if ( (_DWORD)Size != 56 )
                  goto LABEL_125;
                LODWORD(v58) = DXGADAPTER::GetNodePerfData(v182, (struct _D3DKMT_NODE_PERFDATA *)v43);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x3E:
                if ( (_DWORD)Size != 64 )
                  goto LABEL_125;
                LODWORD(v58) = DXGADAPTER::GetAdapterPerfData(v182, (struct _D3DKMT_ADAPTER_PERFDATA *)v43);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x3F:
                if ( (_DWORD)Size != 40 )
                  goto LABEL_125;
                LODWORD(v58) = DXGADAPTER::GetAdapterPerfDataCaps(v182, (struct _D3DKMT_ADAPTER_PERFDATACAPS *)v43);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x40:
                if ( (_DWORD)Size != 132 )
                  goto LABEL_125;
                LODWORD(v58) = DXGADAPTER::GetGpuVersion(v182, (struct _D3DKMT_GPUVERSION *)v43);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x41:
              case 0x42:
                if ( (_DWORD)Size != 0x2000 )
                  goto LABEL_125;
                LODWORD(v58) = -1073741823;
                v162 = v182;
                if ( HIDWORD(Src[0]) == 65 )
                  v162 = v187;
                if ( !v162 )
                  goto LABEL_368;
                DXGADAPTER::GetDeviceDescriptor(v162, 0x2000u, (unsigned __int16 *)v43);
                LODWORD(v58) = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x44:
                if ( (_DWORD)Size != 1 )
                  goto LABEL_125;
                if ( v182 )
                  *(_BYTE *)v43 = *((_BYTE *)v182 + 210);
                else
                  *(_BYTE *)v43 = 0;
                goto LABEL_361;
              case 0x46:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                DXGADAPTER::QueryWDDM2_7Caps(v182, (struct _D3DKMT_WDDM_2_7_CAPS *)v43);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x47:
                if ( (_DWORD)Size != 524 )
                  goto LABEL_125;
                v163 = v182;
                v164 = *((_QWORD *)v182 + 338);
                v165 = *v43;
                if ( (_DWORD)v165 )
                {
                  LODWORD(v58) = -1073741811;
                }
                else
                {
                  DisplayUMDFileName = (const struct _UNICODE_STRING *)ADAPTER_RENDER::GetDisplayUMDFileName(v164);
                  if ( (unsigned int)IsNullUmdDriver(DisplayUMDFileName) )
                  {
                    LODWORD(v58) = -1073741811;
                  }
                  else
                  {
                    LODWORD(v58) = RtlStringCbCopyNW((char *)v43 + 4, v165, v167[1], *(unsigned __int16 *)v167);
                    if ( (int)v58 >= 0 )
                      goto LABEL_368;
                  }
                }
                v95 = (_QWORD *)WdLogNewEntry5_WdEvent(v164, v165);
                v95[3] = v43;
                v95[4] = v163;
                v95[5] = (int)v58;
LABEL_129:
                WdLogEvent5_WdEvent(v95);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                break;
              case 0x48:
                if ( (_DWORD)Size == 12 )
                {
                  LODWORD(v58) = DXGADAPTER::QueryTrackedWorkloadSupport(
                                   v182,
                                   *v43,
                                   (enum DXGK_ENGINE_TYPE)v43[1],
                                   (int *)v43 + 2);
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                }
                else
                {
LABEL_125:
                  LODWORD(v58) = -1073741811;
                  v90 = WdLogNewEntry5_WdWarning(v86, 0x1C0000000uLL, v87);
                  *(_QWORD *)(v90 + 24) = v49;
LABEL_366:
                  *(_QWORD *)(v90 + 32) = -1073741811LL;
LABEL_367:
                  WdLogEvent5_WdWarning(v90);
LABEL_368:
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
                }
                break;
              default:
                LODWORD(v58) = -1073741811;
                v90 = WdLogNewEntry5_WdWarning(v86, 0x1C0000000uLL, v87);
                *(_QWORD *)(v90 + 24) = v84;
                goto LABEL_366;
            }
LABEL_382:
            if ( (int)v58 >= 0 && (*((_BYTE *)v192 + 348) & 4) != 0 )
              LODWORD(v58) = PostProcessUMDFileName((enum _KMTQUERYADAPTERINFOTYPE)v84, v43, Size);
            goto LABEL_385;
          }
        }
      }
      LODWORD(v58) = -1073741130;
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v216);
    }
LABEL_385:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v217, v89);
    goto LABEL_386;
  }
  v207 = v68;
  v208 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v206);
  if ( *((_DWORD *)v68 + 50) == 1 )
  {
    *(void **)&v215.hAdapter = Src[0];
    *(_QWORD *)&v215.PrivateDriverDataSize = Size;
    v215.pPrivateDriverData = v43;
    v76 = v197;
    v77 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
            (struct DXGADAPTER *)((char *)v182 + 4240),
            v192,
            &v215,
            v197);
    v58 = v77;
    if ( v77 >= 0 )
    {
      LODWORD(v58) = PostProcessUMDFileName(SHIDWORD(Src[0]), v43, v76);
      if ( v208 )
LABEL_106:
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v206);
    }
    else
    {
      v81 = (_QWORD *)WdLogNewEntry5_WdWarning(v79, v78, v80);
      v81[3] = LODWORD(Src[0]);
      v81[4] = v58;
      v81[5] = 3360LL;
      WdLogEvent5_WdWarning(v81);
      if ( v208 )
        goto LABEL_106;
    }
  }
  else
  {
    LODWORD(v58) = -1073741130;
    if ( v208 )
      goto LABEL_106;
  }
LABEL_386:
  if ( (int)v58 >= 0 )
  {
    v178 = Src[1];
    if ( v186 && ((char *)Src[1] + v49 > (void *)MmUserProbeAddress || (char *)Src[1] + v49 <= Src[1]) )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v178, v43, v49);
  }
  operator delete[](v43);
  if ( v200 && _InterlockedExchangeAdd64((volatile signed __int64 *)v200 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v200 + 2), v200);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v179);
  if ( v190 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v180, &EventProfilerExit, v181, v188);
  return (unsigned int)v58;
}
