/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C01CD980
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0175EB4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01A0874 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C01A55E0 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C01CBEE0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000295C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0004118 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004D78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0005070 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C00078E4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0007B34 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSYNCOBJECTMUTEX@@QEAA@XZ @ 0x1C0015690 (--1DXGSYNCOBJECTMUTEX@@QEAA@XZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00159D0 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00164A0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0019198 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0023F34 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGPROCESSDDILOCK@@QEAA@XZ @ 0x1C0023F50 (--1DXGPROCESSDDILOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0024B0C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@XZ @ 0x1C0024F60 (--0DXGSYNCOBJECTMUTEX@@QEAA@XZ.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00251E0 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     Feature_1344054585__private_IsEnabledDeviceUsage @ 0x1C0025464 (Feature_1344054585__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1C0047ED4 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C0048028 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0171518 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C0187A80 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C018AB64 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01A1DDC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C01A21A0 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C01B3840 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C01B5930 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01B7900 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C01C19B0 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C01C5980 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01C6300 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01CA0D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C01CB650 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C01D14E0 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C01D9FF8 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1C01DA510 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01E0700 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C02D8108 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C02D8150 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C02D8274 (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x1C02E6C58 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C02ECA20 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C0322B4C (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1C03440A8 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0344C50 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C038592C (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C038AEE8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C038B168 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocation(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        unsigned __int8 a3,
        char a4,
        struct _DXGSHAREDALLOCOBJECT *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        struct COREDEVICEACCESS *a7,
        unsigned int a8,
        struct _EPROCESS *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a13,
        void *a14,
        UINT a15)
{
  DXG_GUEST_VIRTUALGPU_VMBUS *v17; // rsi
  char *v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v23; // r14
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v25; // rcx
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  struct DXGPROCESS *v28; // rax
  struct _D3DKMT_CREATEALLOCATION *v29; // rdi
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // r8d
  struct _PAGED_LOOKASIDE_LIST *v32; // rcx
  int *p_NumAllocations; // r12
  __int64 NumAllocations; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r14
  int v37; // edi
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  void **v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  void **v44; // r14
  char *v45; // rax
  __int64 v46; // r9
  unsigned int v47; // ecx
  __int64 v48; // r14
  struct DXGRESOURCE *v49; // r13
  size_t v50; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS *v52; // r9
  struct _D3DDDI_ALLOCATIONINFO2 *v53; // r15
  unsigned int v54; // r8d
  __int64 v55; // rcx
  UINT Value; // eax
  struct _D3DDDI_ALLOCATIONINFO2 *v57; // rdi
  __int64 v58; // r15
  __int64 v59; // r8
  struct DXGALLOCATION *v60; // rdi
  __int64 v61; // rcx
  unsigned int v62; // edx
  UINT v63; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v64; // eax
  __int64 hSection; // rdi
  SIZE_T Size; // r15
  __int64 v67; // r9
  unsigned int v68; // eax
  __int64 v69; // r15
  struct _D3DDDI_ALLOCATIONINFO2 *v70; // rdi
  unsigned __int64 PrivateDriverDataSize; // rcx
  char *v72; // rcx
  __int64 v73; // r8
  char *v74; // r9
  size_t v75; // r8
  char *pPrivateDriverData; // rdx
  struct _D3DKMT_CREATEALLOCATION *v77; // r15
  UINT v78; // eax
  void *v79; // r9
  size_t v80; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  unsigned int v82; // edx
  unsigned int v83; // edi
  __int64 v84; // rcx
  __int64 i; // rcx
  unsigned int v86; // r14d
  unsigned __int64 v87; // rax
  __int64 v88; // rdi
  void *v89; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS *v90; // rdi
  __int64 v91; // rax
  struct _DXGK_ALLOCATIONINFO *v92; // r15
  char v93; // cl
  struct _DXGK_ALLOCATIONINFO *v94; // r9
  struct _D3DKMT_CREATEALLOCATION *v95; // r15
  struct _DXGK_ALLOCATIONINFO *v96; // r8
  unsigned int v97; // eax
  unsigned int v98; // edx
  __int64 v99; // rax
  struct DXGALLOCATION *v100; // r15
  unsigned int v101; // edi
  __int64 v102; // r13
  __int64 v103; // r14
  D3DKMT_CREATEALLOCATIONFLAGS *v104; // rsi
  unsigned __int64 *v105; // rbx
  __int64 v106; // r8
  __int64 v107; // rax
  struct DXGGLOBAL *v108; // rax
  __int64 v109; // rax
  D3DKMT_HANDLE v110; // eax
  D3DKMT_HANDLE v111; // ecx
  __int64 v112; // r8
  struct DXGALLOCATION *v113; // r9
  D3DKMT_HANDLE *v114; // rdx
  struct DXGALLOCATION *v115; // rdx
  unsigned int v116; // r15d
  const struct DXGALLOCATION *v117; // rdi
  unsigned int v118; // edx
  __int64 v119; // rax
  unsigned __int64 PrivateRuntimeDataSize; // rcx
  __int64 v121; // rcx
  unsigned __int64 v122; // rax
  unsigned int v123; // eax
  __int64 v124; // r9
  unsigned __int64 v125; // r8
  size_t v126; // r8
  char *pPrivateRuntimeData; // rdx
  void *v128; // r9
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rcx
  void *v132; // rdx
  DXG_GUEST_VIRTUALGPU_VMBUS *v133; // rax
  struct DXGALLOCATION *v134; // rdi
  struct _D3DDDI_ALLOCATIONINFO2 *v135; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v136; // r15
  void *v137; // rcx
  void *v138; // rdx
  unsigned int v139; // ecx
  __int64 v140; // rdi
  char v141; // r15
  D3DKMT_CREATEALLOCATIONFLAGS *v142; // rdi
  const void *v143; // r11
  const void *v144; // r10
  void **v145; // rax
  unsigned int v146; // r9d
  int v147; // eax
  __int64 v148; // r15
  _DWORD *p_hDevice; // rdx
  int v150; // eax
  D3DKMT_CREATEALLOCATIONFLAGS *v151; // r10
  __int64 v152; // rax
  struct DXGALLOCATION *v153; // rdi
  unsigned int v154; // r14d
  struct _D3DKMT_CREATEALLOCATION *v155; // r13
  int v156; // ecx
  struct _D3DKMT_CREATEALLOCATION *v157; // r8
  struct _D3DDDI_ALLOCATIONINFO2 *v158; // rdx
  char v159; // r15
  __int64 v160; // rcx
  __int64 v161; // r8
  HANDLE v162; // r9
  __int64 v163; // r15
  unsigned int v164; // eax
  __int64 v165; // rdi
  unsigned int v166; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v167; // r8d
  DXG_GUEST_VIRTUALGPU_VMBUS *v168; // rcx
  DXG_GUEST_VIRTUALGPU_VMBUS *v169; // r9
  __int64 v170; // rdi
  __int64 v171; // rdx
  int v172; // ecx
  struct _DXGK_ALLOCATIONINFO *v173; // r8
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v174; // eax
  DXG_GUEST_VIRTUALGPU_VMBUS *v175; // rcx
  NTSTATUS v176; // eax
  __int64 v177; // rdi
  __int64 *v178; // r15
  struct _DXGK_ALLOCATIONINFO *v179; // rdi
  int v180; // eax
  __int64 v181; // r13
  DXG_GUEST_VIRTUALGPU_VMBUS *v182; // r9
  int Resident; // eax
  struct DXGALLOCATION *v184; // r15
  unsigned int v185; // eax
  ADAPTER_RENDER **v186; // r13
  __int64 v187; // rdi
  __int64 v188; // rdx
  struct _D3DKMT_CREATEALLOCATION *v189; // rcx
  size_t v190; // rdi
  __int64 v191; // r13
  const void *v192; // rdx
  char *v193; // rcx
  size_t v194; // r8
  void **v195; // rax
  HANDLE CurrentProcessId; // rax
  int v197; // eax
  __int64 v198; // r15
  D3DKMT_CREATEALLOCATIONFLAGS *v199; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS v200; // ecx
  _DWORD *v201; // rdi
  HANDLE v202; // rcx
  NTSTATUS v203; // eax
  __int64 v204; // rdi
  struct _D3DDDI_ALLOCATIONINFO2 *v205; // r15
  int v206; // ecx
  ADAPTER_RENDER **v207; // rdx
  __int64 v208; // rcx
  struct _D3DKM_CREATESTANDARDALLOCATION *v209; // rcx
  struct DXGALLOCATION *v210; // r15
  int v211; // edi
  int v212; // ecx
  ADAPTER_RENDER **v213; // rdi
  int v214; // eax
  unsigned __int8 v215; // al
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rcx
  __int64 v217; // rcx
  __int64 v218; // rcx
  unsigned int v219; // r14d
  __int64 v220; // r13
  unsigned __int64 v221; // rdi
  unsigned int v222; // r15d
  __int64 v223; // r8
  __int64 v224; // rdi
  __int64 v225; // r13
  __int64 v226; // rcx
  __int64 v227; // r8
  int v228; // r9d
  struct DXGRESOURCE *v229; // rdi
  unsigned int v230; // edx
  __int64 v231; // rax
  __int64 v232; // r9
  __int64 v233; // rsi
  unsigned int v234; // eax
  unsigned int v235; // r15d
  ADAPTER_RENDER **v236; // r13
  __int64 v237; // rax
  int v238; // eax
  char *v239; // r15
  ADAPTER_RENDER *v240; // rax
  ADAPTER_RENDER *v241; // rdi
  __int64 v242; // rax
  __int64 v243; // rdx
  _QWORD *v244; // rcx
  __int64 v245; // rcx
  char v246; // di
  int v247; // eax
  __int64 v248; // rcx
  struct DXGPROCESS *v249; // r15
  unsigned int Count; // r8d
  __int64 v251; // rax
  __int64 v252; // r9
  int v253; // edx
  unsigned int v254; // edi
  void **k; // rsi
  struct DXGTHREAD *DxgThread; // rax
  int Object; // [rsp+20h] [rbp-3E8h]
  int Src; // [rsp+40h] [rbp-3C8h]
  int v259; // [rsp+48h] [rbp-3C0h]
  int v260; // [rsp+50h] [rbp-3B8h]
  int v261; // [rsp+60h] [rbp-3A8h]
  int v262; // [rsp+68h] [rbp-3A0h]
  int v263; // [rsp+70h] [rbp-398h]
  int v264; // [rsp+78h] [rbp-390h]
  int v265; // [rsp+88h] [rbp-380h]
  int v266; // [rsp+E0h] [rbp-328h]
  int v267; // [rsp+E8h] [rbp-320h]
  struct DXGALLOCATION *v270; // [rsp+108h] [rbp-300h]
  unsigned __int8 v271[8]; // [rsp+118h] [rbp-2F0h] BYREF
  __int64 v272; // [rsp+120h] [rbp-2E8h]
  unsigned int v273; // [rsp+128h] [rbp-2E0h]
  char v274; // [rsp+12Ch] [rbp-2DCh]
  unsigned int HostProcess; // [rsp+130h] [rbp-2D8h]
  struct _D3DDDI_ALLOCATIONINFO2 *v276; // [rsp+138h] [rbp-2D0h]
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // [rsp+140h] [rbp-2C8h]
  struct _D3DKMT_CREATEALLOCATION *v278; // [rsp+148h] [rbp-2C0h]
  char v279; // [rsp+150h] [rbp-2B8h]
  void **v280; // [rsp+158h] [rbp-2B0h]
  ADAPTER_RENDER **v281; // [rsp+160h] [rbp-2A8h]
  struct _DXGK_ALLOCATIONINFO *v282; // [rsp+168h] [rbp-2A0h]
  void **v283; // [rsp+170h] [rbp-298h]
  char v284; // [rsp+178h] [rbp-290h]
  unsigned __int8 v285; // [rsp+180h] [rbp-288h]
  struct DXGRESOURCE *v286; // [rsp+188h] [rbp-280h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v287; // [rsp+190h] [rbp-278h]
  struct DXGPROCESS *v288; // [rsp+198h] [rbp-270h]
  void *v289; // [rsp+1A0h] [rbp-268h]
  struct DXGALLOCATION *v290; // [rsp+1A8h] [rbp-260h] BYREF
  int v291; // [rsp+1B0h] [rbp-258h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v292; // [rsp+1B8h] [rbp-250h]
  int VidPnSourceId; // [rsp+1C0h] [rbp-248h]
  struct DXGALLOCATION *j; // [rsp+1C8h] [rbp-240h]
  struct _EX_RUNDOWN_REF *v295; // [rsp+1D0h] [rbp-238h] BYREF
  PVOID v296; // [rsp+1D8h] [rbp-230h]
  struct DXGPROCESS *v297; // [rsp+1E0h] [rbp-228h]
  PVOID Entry; // [rsp+1E8h] [rbp-220h]
  unsigned __int64 *v299; // [rsp+1F0h] [rbp-218h]
  __int64 v300; // [rsp+1F8h] [rbp-210h]
  ADAPTER_RENDER *v301; // [rsp+200h] [rbp-208h]
  char *v302; // [rsp+208h] [rbp-200h]
  struct _DXGK_OPENALLOCATIONINFO *v303; // [rsp+210h] [rbp-1F8h]
  UINT *v304; // [rsp+218h] [rbp-1F0h]
  DXGDEVICE *v305; // [rsp+220h] [rbp-1E8h]
  int v306; // [rsp+228h] [rbp-1E0h] BYREF
  struct DXGRESOURCE *v307; // [rsp+230h] [rbp-1D8h] BYREF
  char *v308; // [rsp+238h] [rbp-1D0h]
  unsigned int *v309; // [rsp+240h] [rbp-1C8h]
  struct COREDEVICEACCESS *v310; // [rsp+248h] [rbp-1C0h]
  struct _EX_RUNDOWN_REF *v311; // [rsp+250h] [rbp-1B8h] BYREF
  struct _EX_RUNDOWN_REF *v312; // [rsp+258h] [rbp-1B0h] BYREF
  unsigned __int8 *v313; // [rsp+260h] [rbp-1A8h] BYREF
  unsigned __int64 *v314; // [rsp+268h] [rbp-1A0h]
  struct _D3DKMT_CREATESTANDARDALLOCATION *v315; // [rsp+270h] [rbp-198h]
  unsigned __int64 *v316; // [rsp+278h] [rbp-190h]
  PVOID v317; // [rsp+280h] [rbp-188h] BYREF
  struct DXGALLOCATION *v318; // [rsp+288h] [rbp-180h] BYREF
  PVOID v319; // [rsp+290h] [rbp-178h] BYREF
  struct _EX_RUNDOWN_REF *v320; // [rsp+298h] [rbp-170h] BYREF
  DXGFASTMUTEX *v321; // [rsp+2A0h] [rbp-168h] BYREF
  char v322; // [rsp+2A8h] [rbp-160h]
  char v323[8]; // [rsp+2B0h] [rbp-158h] BYREF
  __int64 v324; // [rsp+2B8h] [rbp-150h]
  int v325; // [rsp+2C0h] [rbp-148h]
  struct _EPROCESS *v326; // [rsp+2C8h] [rbp-140h]
  struct _PAGED_LOOKASIDE_LIST *v327; // [rsp+2D0h] [rbp-138h]
  char *v328; // [rsp+2D8h] [rbp-130h]
  _BYTE v329[16]; // [rsp+2E0h] [rbp-128h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v330; // [rsp+2F0h] [rbp-118h] BYREF
  _BYTE v331[24]; // [rsp+320h] [rbp-E8h] BYREF
  _BYTE v332[24]; // [rsp+338h] [rbp-D0h] BYREF
  D3DDDI_MAPGPUVIRTUALADDRESS v333; // [rsp+350h] [rbp-B8h] BYREF

  v278 = a2;
  v17 = this;
  v287 = this;
  v305 = this;
  v285 = a3;
  v296 = a5;
  v292 = a6;
  v310 = a7;
  v326 = a9;
  v309 = a10;
  v316 = a11;
  v299 = a12;
  v315 = a13;
  v18 = (char *)this + 16;
  v281 = (ADAPTER_RENDER **)((char *)this + 16);
  v302 = (char *)this + 16;
  v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v19 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 168)) )
  {
    WdLogSingleEntry1(1LL, 4760LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      4760LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a3 && a4 )
  {
    WdLogSingleEntry1(1LL, 4765LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!(UserMode && OpenShared)", 4765LL, 0LL, 0LL, 0LL, 0LL);
  }
  v20 = *(_QWORD *)(*(_QWORD *)v18 + 16LL);
  v274 = *(_BYTE *)(v20 + 209);
  v284 = v274;
  CurrentProcess = PsGetCurrentProcess(v20);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v23 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_14;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v28 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    v288 = v28;
    if ( v28 )
    {
LABEL_15:
      v297 = v28;
      goto LABEL_16;
    }
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
LABEL_14:
    v28 = v23;
    v288 = v23;
    goto LABEL_15;
  }
  v25 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  v288 = v25;
  if ( !v25 )
    goto LABEL_14;
  v297 = v25;
LABEL_16:
  v29 = v278;
  p_Flags = &v278->Flags;
  v301 = (ADAPTER_RENDER *)&v278->Flags;
  Flags = v278->Flags;
  if ( (*(_WORD *)&Flags & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 2284LL) & 0x10) == 0 )
    {
      WdLogSingleEntry2(3LL, v17, -1073741811LL);
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&Flags & 2) == 0 )
    {
      WdLogSingleEntry3(3LL, v17, -1073741811LL, 1LL);
      return 3221225485LL;
    }
  }
  v283 = 0LL;
  v289 = 0LL;
  v32 = *(struct _PAGED_LOOKASIDE_LIST **)v18;
  Entry = 0LL;
  v327 = v32;
  p_NumAllocations = (int *)&v278->NumAllocations;
  v304 = &v278->NumAllocations;
  NumAllocations = v278->NumAllocations;
  if ( (unsigned int)NumAllocations <= 5 )
  {
    v45 = (char *)ExAllocateFromPagedLookasideList(v32 + 13);
    Entry = v45;
    if ( !v45 )
    {
      WdLogSingleEntry1(6LL, v17);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Out of memory allocating scratch data",
        (__int64)v17,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741801LL;
    }
    v276 = (struct _D3DDDI_ALLOCATIONINFO2 *)v45;
    v282 = (struct _DXGK_ALLOCATIONINFO *)(v45 + 720);
    v303 = (struct _DXGK_OPENALLOCATIONINFO *)(v45 + 480);
    v41 = (void **)(v45 + 640);
    v280 = (void **)(v45 + 640);
    v44 = (void **)(v45 + 680);
    v283 = (void **)(v45 + 680);
    goto LABEL_64;
  }
  v276 = 0LL;
  v35 = (unsigned int)NumAllocations;
  v36 = 96 * NumAllocations;
  v37 = 0;
  if ( (unsigned __int64)(96 * NumAllocations) <= 0xFFFFFFFF )
  {
    v38 = 96LL * (unsigned int)NumAllocations;
    if ( !is_mul_ok(v35, 0x60uLL) )
      v38 = -1LL;
    v276 = (struct _D3DDDI_ALLOCATIONINFO2 *)operator new[](v38, 0x4B677844u, 256LL);
  }
  else
  {
    v37 = -1073741675;
  }
  v282 = 0LL;
  if ( v36 <= 0xFFFFFFFF )
  {
    v37 = 0;
    if ( 88 * (unsigned __int64)(unsigned int)*p_NumAllocations <= 0xFFFFFFFF )
    {
      v39 = 88LL * (unsigned int)*p_NumAllocations;
      if ( !is_mul_ok((unsigned int)*p_NumAllocations, 0x58uLL) )
        v39 = -1LL;
      v282 = (struct _DXGK_ALLOCATIONINFO *)operator new[](v39, 0x4B677844u, 258LL);
    }
    else
    {
      v37 = -1073741675;
    }
  }
  v303 = 0LL;
  if ( v37 >= 0 )
  {
    v37 = 0;
    if ( 32 * (unsigned __int64)(unsigned int)*p_NumAllocations <= 0xFFFFFFFF )
    {
      v40 = 32LL * (unsigned int)*p_NumAllocations;
      if ( !is_mul_ok((unsigned int)*p_NumAllocations, 0x20uLL) )
        v40 = -1LL;
      v303 = (struct _DXGK_OPENALLOCATIONINFO *)operator new[](v40, 0x4B677844u, 256LL);
    }
    else
    {
      v37 = -1073741675;
    }
  }
  v41 = 0LL;
  v280 = 0LL;
  if ( v37 >= 0 )
  {
    v37 = 0;
    if ( 8 * (unsigned __int64)(unsigned int)*p_NumAllocations <= 0xFFFFFFFF )
    {
      v42 = 8LL * (unsigned int)*p_NumAllocations;
      if ( !is_mul_ok((unsigned int)*p_NumAllocations, 8uLL) )
        v42 = -1LL;
      v41 = (void **)operator new[](v42, 0x4B677844u, 256LL);
      v280 = v41;
      if ( a3 )
      {
        v43 = 8LL * (unsigned int)*p_NumAllocations;
        if ( !is_mul_ok((unsigned int)*p_NumAllocations, 8uLL) )
          v43 = -1LL;
        v44 = (void **)operator new[](v43, 0x4B677844u, 256LL);
        v283 = v44;
        v41 = v280;
        goto LABEL_49;
      }
    }
    else
    {
      v37 = -1073741675;
    }
  }
  v44 = 0LL;
LABEL_49:
  v45 = (char *)v276;
  if ( v37 < 0 || !v276 || !v282 || !v303 || !v41 || !v44 && a3 )
  {
    operator delete(v276);
    operator delete(v282);
    operator delete(v303);
    operator delete(v280);
    operator delete(v44);
    if ( v37 >= 0 )
    {
      v37 = -1073741801;
      v46 = -1073741801LL;
    }
    else
    {
      v46 = v37;
    }
    WdLogSingleEntry3(3LL, v17, (unsigned int)*p_NumAllocations, v46);
    return (unsigned int)v37;
  }
  v29 = v278;
LABEL_64:
  v308 = v45;
  v328 = v45;
  v47 = 0;
  v273 = 0;
  if ( *p_NumAllocations )
  {
    do
    {
      v41[v47] = 0LL;
      if ( a3 )
        v44[v47] = 0LL;
      ++v47;
    }
    while ( v47 < *p_NumAllocations );
    v273 = v47;
  }
  v270 = 0LL;
  v290 = 0LL;
  LODWORD(v48) = 0;
  v272 = 0LL;
  v271[0] = 0;
  v49 = 0LL;
  v286 = 0LL;
  v279 = 0;
  v307 = 0LL;
  DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v321);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v323, 0LL, 0);
  if ( a3 )
  {
    v50 = 96LL * (unsigned int)*p_NumAllocations;
    pAllocationInfo = v29->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v50) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v50 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v276, pAllocationInfo, v50);
  }
  else
  {
    memmove(v276, v29->pAllocationInfo, 96LL * (unsigned int)*p_NumAllocations);
  }
  VidPnSourceId = -1;
  v291 = -1;
  v52 = p_Flags;
  v53 = v276;
  if ( (*(_DWORD *)p_Flags & 0x10000) != 0 )
  {
    v276->pPrivateDriverData = a14;
    v53->PrivateDriverDataSize = a15;
  }
  v54 = 0;
  v273 = 0;
  if ( *p_NumAllocations )
  {
    while ( 1 )
    {
      v300 = v54;
      v55 = v54;
      if ( (*(_DWORD *)v52 & 0x800) != 0 )
      {
        Value = v53[v55].Flags.Value;
        if ( (Value & 1) != 0 )
        {
          VidPnSourceId = v53[v55].VidPnSourceId;
          v291 = VidPnSourceId;
          if ( !*((_QWORD *)v17 + 235) )
          {
            Value &= ~1u;
            v53[v55].Flags.Value = Value;
          }
        }
        if ( (Value & 2) != 0 )
          break;
      }
      v57 = &v53[v55];
      if ( (v53[v55].Flags.Value & 1) != 0 && !v274 )
      {
        v58 = *((_QWORD *)v17 + 235);
        if ( v58 )
        {
          v61 = *(_QWORD *)(v58 + 2920);
          if ( !v61 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v61 + 16)) )
          {
            WdLogSingleEntry1(1LL, 5025LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pDisplayAdapter->IsDisplayAdapter() && pDisplayAdapter->GetDisplayCore()->IsCoreResourceSharedOwner()",
              5025LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( *(_DWORD *)(*(_QWORD *)(v58 + 2920) + 96LL) != *((_DWORD *)v17 + 472) )
          {
            WdLogSingleEntry1(1LL, 5031LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pDisplayAdapter->GetDisplayCore()->GetNumVidPnSources() == this->GetNumVidPnSources()",
              5031LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v62 = v57->VidPnSourceId;
          if ( v62 >= *((_DWORD *)v17 + 472) )
          {
            v59 = v57->VidPnSourceId;
            goto LABEL_88;
          }
          if ( !*((_DWORD *)v17 + 116)
            && !a4
            && (*((_DWORD *)v288 + 106) & 0x100) == 0
            && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v58 + 2920), v17, v62) )
          {
            v67 = v57->VidPnSourceId;
            LODWORD(v48) = -1071775744;
            v272 = -1071775744LL;
            WdLogSingleEntry4(3LL, -1071775744LL, v17, v67, v300);
            v60 = 0LL;
            goto LABEL_451;
          }
          v52 = p_Flags;
          v54 = v273;
        }
        else if ( (*(_DWORD *)(*((_QWORD *)v17 + 5) + 424LL) & 0x100) == 0 )
        {
          v59 = v57->VidPnSourceId;
LABEL_88:
          WdLogSingleEntry3(3LL, v17, v59, -1073741811LL);
          LODWORD(v48) = -1073741811;
          v272 = 3221225485LL;
          v60 = 0LL;
          goto LABEL_451;
        }
      }
      v63 = v57->Flags.Value;
      if ( (v63 & 2) != 0 && (v63 & 1) == 0 )
      {
        WdLogSingleEntry2(3LL, -1073741811LL, v17);
        LODWORD(v48) = -1073741811;
        v272 = 3221225485LL;
        v60 = 0LL;
        goto LABEL_451;
      }
      v64 = *v52;
      if ( (*(_DWORD *)v52 & 0x10000) != 0 )
      {
        if ( (*(_BYTE *)&v64 & 0x20) != 0 && !v57->hSection || (*(_DWORD *)&v64 & 0x20000) != 0 && !v57->hSection )
        {
          WdLogSingleEntry2(2LL, v17, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%I64x: ExistingSysMem pointer or Section Handle not specified, returning 0x%I64x",
            (__int64)v17,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_119;
        }
        if ( (hSection = (__int64)v57->hSection,
              Size = v278->pStandardAllocation->ExistingHeapData.Size,
              (*(_BYTE *)&v64 & 0x20) != 0)
          && hSection != (hSection & 0xFFFFFFFFFFFFF000uLL)
          || Size != (Size & 0xFFFFFFFFFFFFF000uLL) )
        {
          WdLogSingleEntry2(2LL, hSection, Size);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Existing sysmem must be paged aligned and a multiple of page in size.                    pSysMem:0x"
                      "%I64x, Size:0x%I64x",
            hSection,
            Size,
            0LL,
            0LL,
            0LL);
LABEL_119:
          LODWORD(v48) = -1073741811;
          v272 = 3221225485LL;
          v60 = 0LL;
          goto LABEL_451;
        }
      }
      v273 = ++v54;
      if ( v54 >= *p_NumAllocations )
        goto LABEL_121;
      v53 = v276;
    }
    WdLogSingleEntry2(3LL, v17, -1073741811LL);
    LODWORD(v48) = -1073741811;
    v272 = 3221225485LL;
LABEL_113:
    v60 = 0LL;
    goto LABEL_451;
  }
LABEL_121:
  v68 = 0;
  HostProcess = 0;
  v273 = 0;
  while ( v68 < *p_NumAllocations )
  {
    v69 = v68;
    v70 = &v276[v68];
    PrivateDriverDataSize = v70->PrivateDriverDataSize;
    if ( (unsigned int)PrivateDriverDataSize > 0x7FFFFFFF )
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      v60 = 0LL;
      goto LABEL_451;
    }
    if ( v70->pPrivateDriverData && (_DWORD)PrivateDriverDataSize )
    {
      if ( a3 && (*(_DWORD *)v52 & 0x10000) == 0 )
        PrivateDriverDataSize = (unsigned int)(2 * PrivateDriverDataSize);
      v72 = (char *)operator new[](PrivateDriverDataSize, 0x4B677844u, 258LL);
      v280[v69] = v72;
      if ( !v72 )
      {
        LODWORD(v48) = -1073741801;
        v272 = 3221225495LL;
        v73 = (unsigned int)*p_NumAllocations;
        goto LABEL_132;
      }
      v52 = p_Flags;
      if ( a3 && (*(_DWORD *)p_Flags & 0x10000) == 0 )
      {
        v74 = &v72[v70->PrivateDriverDataSize];
        v283[v69] = v74;
        v75 = v70->PrivateDriverDataSize;
        pPrivateDriverData = (char *)v70->pPrivateDriverData;
        if ( &pPrivateDriverData[v75] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[v75] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v74, pPrivateDriverData, v75);
        v52 = p_Flags;
      }
    }
    else
    {
      v280[v68] = 0LL;
      if ( a3 )
        v283[v68] = 0LL;
    }
    v68 = HostProcess + 1;
    HostProcess = v68;
    v273 = v68;
  }
  v77 = v278;
  if ( a3 )
  {
    if ( v278->pStandardAllocation )
    {
      v78 = v278->PrivateDriverDataSize;
      if ( v78 )
      {
        v79 = (void *)operator new[](v78, 0x4B677844u, 258LL);
        v289 = v79;
        if ( !v79 )
        {
          LODWORD(v48) = -1073741801;
          v272 = 3221225495LL;
          v73 = v278->PrivateDriverDataSize;
LABEL_132:
          WdLogSingleEntry3(3LL, v17, v73, -1073741801LL);
          v60 = 0LL;
          goto LABEL_451;
        }
        v80 = v278->PrivateDriverDataSize;
        pStandardAllocation = v278->pStandardAllocation;
        if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v80) < pStandardAllocation
          || (unsigned __int64)pStandardAllocation + v80 > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v79, pStandardAllocation, v80);
      }
    }
  }
  LODWORD(v48) = DXGDEVICE::OpenResourceObject(
                   v17,
                   v77,
                   v276,
                   a4,
                   v326,
                   (struct _DXGSHAREDALLOCOBJECT *)v296,
                   (struct DXGRESOURCEREFERENCE *)&v307,
                   v271,
                   v292,
                   (struct DXGAUTOMUTEX *)&v321,
                   (struct DXGAUTOPUSHLOCK *)v323);
  v272 = (unsigned int)v48;
  if ( (int)v48 < 0 )
    goto LABEL_113;
  v49 = v307;
  v286 = v307;
  if ( v307 && (*((_DWORD *)v307 + 1) & 1) == 0 && (*(_DWORD *)p_Flags & 2) != 0 )
  {
    WdLogSingleEntry3(2LL, v17, v307, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Driver asked to create a shared resource, but resource 0x%p already exists, and is non-sh"
                "ared, returning 0x%I64x",
      (__int64)v17,
      (__int64)v49,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_119;
  }
  v82 = v271[0];
  HostProcess = v271[0];
  v83 = *p_NumAllocations;
  v84 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v84 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v84 + 168)) )
    {
      WdLogSingleEntry1(1LL, 4680LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
        4680LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v82 = HostProcess;
  }
  if ( !v49 )
    goto LABEL_175;
  if ( !v82 )
  {
    for ( i = *((_QWORD *)v49 + 3); i; ++v83 )
      i = *(_QWORD *)(i + 64);
  }
  if ( v83 <= 0x10 )
  {
LABEL_175:
    v318 = 0LL;
    LODWORD(v48) = DXGDEVICE::CreateAllocationObjects(v17, *p_NumAllocations, &v290, v49, &v318);
    v272 = (unsigned int)v48;
    if ( (int)v48 < 0 )
      goto LABEL_170;
    v270 = v290;
    if ( v318 )
    {
      DXGDEVICE::AppendAllocationListToResourceOrDevice(v17, v49, v290, v318);
      v279 = 1;
    }
    v90 = p_Flags;
    if ( (*(_DWORD *)p_Flags & 0x800) != 0 )
    {
      if ( VidPnSourceId != -1 )
      {
        *(_DWORD *)(*((_QWORD *)v49 + 7) + 12LL) |= 0x40u;
        *((_DWORD *)v49 + 1) |= 8u;
        *(_DWORD *)(*((_QWORD *)v49 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v49 + 7) + 12LL) ^ (*(unsigned int *)v90 >> 3)) & 0x80;
      }
      goto LABEL_191;
    }
    if ( (*(_DWORD *)p_Flags & 0x1000) != 0 )
    {
      if ( !v292 )
        goto LABEL_191;
      if ( (*(_DWORD *)v292 & 0x80u) != 0 )
      {
        WdLogSingleEntry1(1LL, 5322LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pCreateStandardAllocation->Flags.Primary == 0",
          5322LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (*(_DWORD *)v292 & 0x100) == 0 )
      {
LABEL_191:
        if ( v274 )
          goto LABEL_215;
        v92 = v282;
        memset(v282, 0, 88LL * (unsigned int)*p_NumAllocations);
        v93 = a4;
        if ( a4 )
        {
          v95 = v278;
        }
        else
        {
          v94 = v92;
          v95 = v278;
          LODWORD(v48) = DXGDEVICE::CreateDriverAllocations(
                           v17,
                           v278,
                           v276,
                           v94,
                           v270,
                           v49,
                           v280,
                           v283,
                           v289,
                           v292,
                           a3,
                           v315);
          v272 = (unsigned int)v48;
          v93 = 0;
        }
        if ( (int)v48 < 0 )
          goto LABEL_450;
        LODWORD(v48) = DXGDEVICE::OpenAllocations(v17, v95, v276, v270, v303, v280, v283, v289, a3, v93, a8, v309, v316);
        v272 = (unsigned int)v48;
        if ( (int)v48 < 0 )
          goto LABEL_450;
        v96 = v282;
        if ( (*(_DWORD *)v90 & 8) != 0 )
          v282->Flags.Value |= 0x4000008u;
        if ( (*(_DWORD *)v90 & 0x100) != 0 )
        {
          v97 = v96->Flags.Value & 0xFEFFFFFB | 0x1000000;
        }
        else
        {
          if ( (*(_DWORD *)v90 & 0x200) == 0 )
          {
LABEL_204:
            v98 = v96->Flags.Value | 0x800;
            if ( (*(_DWORD *)v90 & 0x8000) == 0 )
              v98 = v96->Flags.Value & 0xFFFFF7FF;
            v96->Flags.Value = v98;
            if ( (*(_DWORD *)v90 & 0x80000) != 0 )
              v96->Flags.Value = v98 | 0x1000;
            LODWORD(v48) = DXGDEVICE::CreateVidMmAllocations(v17, v95, v276, v96, v270, v292, a4);
            v272 = (unsigned int)v48;
            if ( (int)v48 < 0 )
              goto LABEL_450;
            if ( !v299 )
            {
LABEL_216:
              if ( v271[0] )
              {
                if ( v49 )
                {
                  if ( (*((_DWORD *)v49 + 1) & 1) != 0 )
                  {
                    v107 = *((_QWORD *)v49 + 7);
                    if ( !*(_DWORD *)(v107 + 24) && (*(_DWORD *)(v107 + 12) & 8) == 0 )
                    {
                      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v329);
                      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v329);
                      if ( (*(_DWORD *)v90 & 2) == 0 )
                      {
                        WdLogSingleEntry1(1LL, 5462LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"0 != (pCreateAllocation->Flags.CreateShared)",
                          5462LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      if ( (*((_DWORD *)v288 + 106) & 0x100) != 0 )
                      {
                        *(_DWORD *)(*((_QWORD *)v49 + 7) + 24LL) = DXGPROCESS::AllocHandleSafe(
                                                                     *((_QWORD *)v288 + 76),
                                                                     *((_QWORD *)v49 + 7),
                                                                     2u);
                        *(_DWORD *)(*((_QWORD *)v49 + 7) + 12LL) |= 0x2000u;
                      }
                      else
                      {
                        v108 = DXGGLOBAL::GetGlobal();
                        *(_DWORD *)(*((_QWORD *)v49 + 7) + 24LL) = DXGGLOBAL::AllocHandle(
                                                                     (__int64)v108,
                                                                     *((_QWORD *)v49 + 7),
                                                                     2u);
                      }
                      if ( !*(_DWORD *)(*((_QWORD *)v49 + 7) + 24LL) )
                      {
                        WdLogSingleEntry2(3LL, v17, -1073741801LL);
                        LODWORD(v48) = -1073741801;
                        v272 = 3221225495LL;
                        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v329);
                        goto LABEL_450;
                      }
                      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v329);
                    }
                  }
                }
                DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
                  (DXGAUTOPUSHLOCKEXCLUSIVE *)v331,
                  (struct _KTHREAD **)v17 + 30);
                v109 = *((_QWORD *)v17 + 7);
                if ( v109 )
                  *(_QWORD *)(v109 + 32) = v49;
                *((_QWORD *)v49 + 5) = *((_QWORD *)v17 + 7);
                *((_QWORD *)v17 + 7) = v49;
                DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v331);
              }
              v110 = 0;
              if ( v49 )
                v110 = *((_DWORD *)v49 + 4);
              v95->hResource = v110;
              if ( ((*(_DWORD *)v90 & 2) != 0 || a4) && (*(_DWORD *)v90 & 0x40) == 0 )
                v111 = *(_DWORD *)(*((_QWORD *)v49 + 7) + 24LL);
              else
                v111 = 0;
              v95->hGlobalShare = v111;
              if ( a3 )
              {
                v112 = 0LL;
                v273 = 0;
                v113 = v270;
                j = v270;
                while ( (unsigned int)v112 < *p_NumAllocations )
                {
                  v114 = &v95->pAllocationInfo->hAllocation + 24 * (unsigned int)v112;
                  if ( (unsigned __int64)v114 >= MmUserProbeAddress )
                    v114 = (D3DKMT_HANDLE *)MmUserProbeAddress;
                  *v114 = *((_DWORD *)v113 + 4);
                  v112 = (unsigned int)(v112 + 1);
                  v273 = v112;
                  v113 = (struct DXGALLOCATION *)*((_QWORD *)v113 + 8);
                  j = v113;
                }
                if ( (int)v48 < 0 )
                  goto LABEL_450;
              }
              else
              {
                v112 = 0LL;
                v273 = 0;
                v115 = v270;
                v113 = v270;
                j = v270;
                if ( !*p_NumAllocations )
                {
LABEL_251:
                  if ( (*(_DWORD *)(*((_QWORD *)v17 + 5) + 424LL) & 0x100) == 0 || *((_DWORD *)v17 + 472) )
                  {
                    v116 = 0;
                    v273 = 0;
                    v117 = v115;
                    for ( j = v115; v116 < *p_NumAllocations; j = v117 )
                    {
                      v118 = *(_DWORD *)(*((_QWORD *)v117 + 6) + 4LL);
                      if ( (v118 & 1) != 0 )
                      {
                        LODWORD(v48) = DXGDEVICE::AddPrimaryAllocation(v17, v117);
                        v272 = (unsigned int)v48;
                        if ( (int)v48 < 0 )
                          goto LABEL_450;
                      }
                      else if ( (v118 & 2) != 0 )
                      {
                        DXGDEVICE::SetDisplayedPrimary(v17, (v118 >> 6) & 0xF, v117, 0, 1u);
                      }
                      v273 = ++v116;
                      v117 = (const struct DXGALLOCATION *)*((_QWORD *)v117 + 8);
                    }
                    v95 = v278;
                    v90 = p_Flags;
                  }
                  if ( (*(_DWORD *)v90 & 2) == 0 )
                    goto LABEL_297;
                  if ( v95->pPrivateRuntimeData )
                  {
                    v119 = *((_QWORD *)v49 + 7);
                    PrivateRuntimeDataSize = v95->PrivateRuntimeDataSize;
                    if ( *(_QWORD *)(v119 + 104) )
                    {
                      v123 = *(_DWORD *)(v119 + 112);
                      if ( v123 != (_DWORD)PrivateRuntimeDataSize )
                      {
                        LODWORD(v48) = -1073741811;
                        v272 = 3221225485LL;
                        v124 = v123;
                        v125 = PrivateRuntimeDataSize;
LABEL_449:
                        WdLogSingleEntry3(3LL, v17, v125, v124);
                        goto LABEL_450;
                      }
                    }
                    else
                    {
                      *(_QWORD *)(*((_QWORD *)v49 + 7) + 104LL) = operator new[](
                                                                    PrivateRuntimeDataSize,
                                                                    0x4B677844u,
                                                                    258LL);
                      v121 = *((_QWORD *)v49 + 7);
                      v122 = v95->PrivateRuntimeDataSize;
                      if ( !*(_QWORD *)(v121 + 104) )
                      {
LABEL_448:
                        LODWORD(v48) = -1073741801;
                        v272 = 3221225495LL;
                        v125 = v122;
                        v124 = -1073741801LL;
                        goto LABEL_449;
                      }
                      *(_DWORD *)(v121 + 112) = v122;
                    }
                    if ( a3 )
                    {
                      v126 = v95->PrivateRuntimeDataSize;
                      pPrivateRuntimeData = (char *)v95->pPrivateRuntimeData;
                      v128 = *(void **)(*((_QWORD *)v49 + 7) + 104LL);
                      if ( &pPrivateRuntimeData[v126] < pPrivateRuntimeData
                        || (unsigned __int64)&pPrivateRuntimeData[v126] > MmUserProbeAddress )
                      {
                        *(_BYTE *)MmUserProbeAddress = 0;
                      }
                      memmove(v128, pPrivateRuntimeData, v126);
                    }
                    else
                    {
                      memmove(
                        *(void **)(*((_QWORD *)v49 + 7) + 104LL),
                        v95->pPrivateRuntimeData,
                        v95->PrivateRuntimeDataSize);
                    }
                    if ( (*(_DWORD *)v90 & 0x100000) != 0 )
                    {
                      LODWORD(v48) = CheckNoKmdAccessPrivateData(
                                       v95->PrivateRuntimeDataSize,
                                       *(void **)(*((_QWORD *)v49 + 7) + 104LL),
                                       0xFF000004);
                      v272 = (unsigned int)v48;
                      if ( (int)v48 < 0 )
                        goto LABEL_450;
                    }
                  }
                  if ( !v95->pStandardAllocation || (v129 = v95->PrivateDriverDataSize, !(_DWORD)v129) )
                  {
LABEL_285:
                    v133 = 0LL;
                    v273 = 0;
                    v134 = v270;
                    j = v270;
                    if ( *p_NumAllocations )
                    {
                      v135 = v276;
                      do
                      {
                        v287 = v133;
                        v136 = &v135[(_QWORD)v133];
                        if ( v136->pPrivateDriverData )
                        {
                          *(_QWORD *)(*((_QWORD *)v134 + 6) + 32LL) = operator new[](
                                                                        v136->PrivateDriverDataSize,
                                                                        0x4B677844u,
                                                                        258LL);
                          v137 = *(void **)(*((_QWORD *)v134 + 6) + 32LL);
                          if ( !v137 )
                          {
                            LODWORD(v48) = -1073741801;
                            v272 = 3221225495LL;
                            WdLogSingleEntry4(3LL, v17, v273 + 1, v136->PrivateDriverDataSize, -1073741801LL);
                            goto LABEL_450;
                          }
                          if ( !a3 || (*(_DWORD *)p_Flags & 0x10000) != 0 )
                            v138 = v136->pPrivateDriverData;
                          else
                            v138 = v283[(_QWORD)v287];
                          memmove(v137, v138, v136->PrivateDriverDataSize);
                          *(_DWORD *)(*((_QWORD *)v134 + 6) + 40LL) = v136->PrivateDriverDataSize;
                          v135 = v276;
                        }
                        v133 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v273 + 1);
                        v273 = (unsigned int)v133;
                        v134 = (struct DXGALLOCATION *)*((_QWORD *)v134 + 8);
                        j = v134;
                      }
                      while ( (unsigned int)v133 < *p_NumAllocations );
                    }
LABEL_297:
                    v140 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
                    v315 = (struct _D3DKMT_CREATESTANDARDALLOCATION *)(v140 + 209);
                    if ( !*(_BYTE *)(v140 + 209) || a4 )
                    {
LABEL_371:
                      v60 = v270;
                      if ( LOBYTE(v315->Type) )
                      {
                        if ( !a4 )
                        {
                          if ( bTracingEnabled )
                          {
                            v184 = v270;
                            v185 = 0;
                            HostProcess = 0;
                            if ( *p_NumAllocations )
                            {
                              v186 = v281;
                              do
                              {
                                if ( bTracingEnabled )
                                {
                                  LODWORD(v278) = *((_DWORD *)v184 + 5);
                                  v187 = *((_QWORD *)v184 + 5);
                                  if ( v187 )
                                    v300 = *(_QWORD *)(v187 + 48);
                                  else
                                    v300 = 0LL;
                                  if ( v187 )
                                    v291 = *(_DWORD *)(v187 + 16);
                                  else
                                    v291 = 0;
                                  LODWORD(v296) = *((_DWORD *)v184 + 4);
                                  if ( v187 )
                                    v308 = *(char **)(v187 + 56);
                                  else
                                    v308 = 0LL;
                                  v301 = (ADAPTER_RENDER *)*((_QWORD *)*v186 + 2);
                                  CurrentProcessId = PsGetCurrentProcessId();
                                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
                                    McTemplateK0ppppppppppppq_EtwWriteTransfer(
                                      (__int64)v301,
                                      &EventCreateDeviceAllocation,
                                      v300,
                                      CurrentProcessId,
                                      v17,
                                      v301,
                                      v184);
                                  v185 = HostProcess;
                                }
                                HostProcess = ++v185;
                                v184 = (struct DXGALLOCATION *)*((_QWORD *)v184 + 8);
                              }
                              while ( v185 < *p_NumAllocations );
                              v49 = v286;
                              v60 = v270;
                            }
                          }
                        }
                      }
                      if ( (*(_DWORD *)p_Flags & 0x800) != 0 )
                      {
                        memset(&v330.Width, 0, 40);
                        v330.hAllocation = *(HANDLE *)(*((_QWORD *)v60 + 6) + 16LL);
                        v197 = ADAPTER_RENDER::DdiDescribeAllocation(*v281, &v330, v112);
                        LODWORD(v48) = v197;
                        v272 = v197;
                        if ( v197 < 0 )
                        {
                          WdLogSingleEntry4(3LL, v197, v17, *((unsigned int *)v60 + 4), v60);
                          goto LABEL_451;
                        }
                        if ( v330.Format == D3DDDIFMT_UNKNOWN && v330.Height != 1 )
                        {
                          WdLogSingleEntry3(3LL, -1073741811LL, v17, v330.Height);
                          LODWORD(v48) = -1073741811;
                          v272 = 3221225485LL;
                          goto LABEL_451;
                        }
                        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v60 + 5) + 56LL) + 12LL) & 0x20) == 0 )
                        {
                          WdLogSingleEntry1(1LL, 6160LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"pAllocationObjectList->m_pOwningResource->m_pSharedResource->m_CrossAdapter",
                            6160LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        v198 = *(_QWORD *)(*((_QWORD *)v60 + 5) + 56LL);
                        *(_DWORD *)(v198 + 208) = v330.Width;
                        *(_DWORD *)(v198 + 212) = v330.Height;
                        *(_DWORD *)(v198 + 216) = v330.Format;
                        v199 = p_Flags;
                        v200 = *p_Flags;
                        if ( (*((_BYTE *)v17 + 1901) & 1) != 0 )
                        {
                          if ( (*(_DWORD *)&v200 & 0x20000) != 0 )
                          {
                            v202 = v276->hSection;
                            v317 = 0LL;
                            v203 = ObReferenceObjectByHandle(v202, 0x20000u, MmSectionObjectType, a3, &v317, 0LL);
                            *(_QWORD *)(v198 + 192) = v317;
                            LODWORD(v48) = v203;
                            v272 = (unsigned int)v203;
                            if ( v203 < 0 )
                            {
                              v204 = v203;
                              v205 = v276;
                              WdLogSingleEntry2(2LL, v276->hSection, v203);
                              DxgkLogInternalTriageEvent(
                                0LL,
                                0x40000,
                                -1,
                                (__int64)L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
                                (__int64)v205->hSection,
                                v204,
                                0LL,
                                0LL,
                                0LL);
                              goto LABEL_450;
                            }
                            v201 = (_DWORD *)(v198 + 12);
                            *(_DWORD *)(v198 + 12) |= 0x400u;
                            v199 = p_Flags;
                          }
                          else
                          {
                            v201 = (_DWORD *)(v198 + 12);
                          }
                        }
                        else
                        {
                          v201 = (_DWORD *)(v198 + 12);
                          if ( (*(_BYTE *)&v200 & 0x20) == 0 )
                          {
                            *(_QWORD *)(v198 + 192) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)*v281 + 95) + 8LL)
                                                                                                + 680LL))(
                                                        *((_QWORD *)*v281 + 96),
                                                        *((_QWORD *)v270 + 3));
                            *v201 |= 0x400u;
                          }
                          *(_QWORD *)(v198 + 224) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)*v281 + 95) + 8LL)
                                                                                              + 752LL))(
                                                      *((_QWORD *)*v281 + 96),
                                                      *((_QWORD *)v270 + 3));
                          v199 = p_Flags;
                        }
                        v206 = VidPnSourceId;
                        *(_DWORD *)(v198 + 232) = VidPnSourceId;
                        if ( v206 != -1 )
                        {
                          *v201 |= 0x40u;
                          *v201 ^= ((unsigned __int8)*v201 ^ (unsigned __int8)(*(unsigned int *)v199 >> 3)) & 0x80;
                        }
                      }
                      else if ( (*(_DWORD *)p_Flags & 0x1000) != 0 )
                      {
                        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, struct DXGALLOCATION *))(*(_QWORD *)(*((_QWORD *)*v281 + 95) + 8LL)
                                                                                               + 760LL))(
                          *((_QWORD *)*v281 + 96),
                          *((_QWORD *)v60 + 3),
                          *((_QWORD *)v292 + 43),
                          v113);
                      }
                      v207 = v281;
                      v301 = *v281;
                      v208 = *((_QWORD *)v301 + 2);
                      if ( (*(_DWORD *)(v208 + 2284) & 0x40) == 0 )
                      {
                        v306 = 0;
                        SysMmQueryIommuState(
                          *(const struct SYSMM_ADAPTER **)(v208 + 224),
                          (union SYSMM_IOMMU_STATE *)&v306);
                        if ( (v306 & 4) == 0 )
                          goto LABEL_450;
                        v207 = v281;
                      }
                      v209 = v292;
                      if ( v292 )
                      {
                        v60 = v270;
                        if ( (*(_DWORD *)v292 & 0x200) == 0 )
                        {
                          memset(&v333, 0, 56);
                          memset(&v333.DriverProtection, 0, 40);
                          v333.Protection.Value = 1LL;
                          v273 = 0;
                          v210 = v270;
                          j = v270;
                          if ( *p_NumAllocations )
                          {
                            while ( 1 )
                            {
                              v211 = (*((_DWORD *)v210 + 18) >> 12) & 0x3F;
                              if ( *((_DWORD *)v209 + 4) == 4 )
                              {
                                v212 = *(_DWORD *)(*((_QWORD *)v209 + 3) + 12LL);
                                if ( ((v212 - 1) & 0xFFFFFFFC) != 0 || v212 == 2 )
                                {
                                  if ( DXGADAPTER::ReplicateGdiContent(*((DXGADAPTER **)*v207 + 2)) )
                                    v211 = -1;
                                }
                              }
                              if ( v274 )
                              {
                                v213 = v281;
                                v214 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)*v281 + 2) + 4472LL),
                                         *((_DWORD *)v288 + 126),
                                         v17,
                                         0,
                                         *((_DWORD *)v210 + 5),
                                         &v333);
                              }
                              else
                              {
                                LOBYTE(Object) = 0;
                                v214 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(*((_QWORD *)v301 + 95) + 8LL) + 792LL))(
                                         *((_QWORD *)v301 + 96),
                                         0LL,
                                         *((_QWORD *)v210 + 3),
                                         &v333,
                                         Object,
                                         v211);
                                v213 = v281;
                              }
                              LODWORD(v48) = v214;
                              v272 = (unsigned int)v214;
                              if ( v214 < 0 )
                                break;
                              v215 = DXGADAPTER::ReplicateGdiContent(*((DXGADAPTER **)*v213 + 2));
                              BaseAddress = v333.BaseAddress;
                              if ( v215 )
                                BaseAddress = v333.VirtualAddress;
                              v333.BaseAddress = BaseAddress;
                              v333.VirtualAddress = 0LL;
                              ++v273;
                              v210 = (struct DXGALLOCATION *)*((_QWORD *)v210 + 8);
                              j = v210;
                              v209 = v292;
                              if ( v273 >= *p_NumAllocations )
                                goto LABEL_450;
                              v207 = v281;
                            }
                            WdLogSingleEntry1(3LL, v214);
                            goto LABEL_450;
                          }
                        }
                      }
                      else
                      {
LABEL_450:
                        v60 = v270;
                      }
                      goto LABEL_451;
                    }
                    HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)v17 + 5));
                    if ( !HostProcess )
                    {
                      WdLogSingleEntry1(2LL, -1073741823LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Failed to get host adapter process, returning 0x%I64x",
                        -1073741823LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      LODWORD(v48) = -1073741823;
                      v272 = 3221225473LL;
                      goto LABEL_450;
                    }
                    v313 = 0LL;
                    v141 = DXGDEVICE::UmdManagesResidency(v17) && v292 && (unsigned int)(*((_DWORD *)v292 + 4) - 1) <= 2;
                    v287 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v140 + 4472);
                    v142 = p_Flags;
                    if ( (*(_DWORD *)p_Flags & 2) != 0 )
                      v143 = *(const void **)(*((_QWORD *)v49 + 7) + 104LL);
                    else
                      v143 = 0LL;
                    if ( a3 )
                      v144 = v289;
                    else
                      v144 = v278->pStandardAllocation;
                    if ( !a3 || (v145 = v283, (*(_DWORD *)p_Flags & 0x10000) != 0) )
                      v145 = v280;
                    if ( (*(_DWORD *)p_Flags & 2) != 0 )
                      v146 = *((_DWORD *)v49 + 5);
                    else
                      v146 = 0;
                    v316 = (unsigned __int64 *)((char *)v17 + 472);
                    v147 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
                             v287,
                             HostProcess,
                             *((_DWORD *)v17 + 118),
                             v146,
                             v278,
                             v276,
                             v145,
                             v144,
                             v143,
                             a3,
                             v141,
                             &v313);
                    v148 = v147;
                    LODWORD(v296) = v147;
                    if ( !v313 )
                    {
                      WdLogSingleEntry1(2LL, v147);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"VmBusSendCreateAllocation failed: 0x%I64x",
                        v148,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      LODWORD(v48) = v148;
                      v272 = (unsigned int)v148;
                      goto LABEL_450;
                    }
                    p_hDevice = v313;
                    v278 = (struct _D3DKMT_CREATEALLOCATION *)v313;
                    if ( !v49 )
                      goto LABEL_330;
                    *((_DWORD *)v49 + 5) = *((_DWORD *)v313 + 1);
                    if ( (*(_DWORD *)v142 & 2) == 0 )
                      goto LABEL_330;
                    v150 = p_hDevice[2];
                    if ( (*(_DWORD *)v142 & 0x40) != 0 )
                    {
                      if ( v150 )
                      {
                        WdLogSingleEntry1(1LL, 5839LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"NULL == pOutput->hGlobalSharedResource",
                          5839LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
LABEL_328:
                        p_hDevice = &v278->hDevice;
                      }
                    }
                    else if ( !v150 )
                    {
                      WdLogSingleEntry1(1LL, 5843LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"pOutput->hGlobalSharedResource",
                        5843LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      goto LABEL_328;
                    }
                    *(_DWORD *)(*((_QWORD *)v49 + 7) + 28LL) = p_hDevice[2];
LABEL_330:
                    v299 = 0LL;
                    v314 = 0LL;
                    v151 = v142;
                    if ( (*(_DWORD *)v142 & 2) != 0 && v49 )
                    {
                      v299 = *(unsigned __int64 **)(*((_QWORD *)v49 + 7) + 136LL);
                      v314 = v299;
                    }
                    v152 = (__int64)v270;
                    v153 = v270;
                    HostProcess = 0;
                    if ( *p_NumAllocations )
                    {
                      v154 = 0;
                      v155 = v278;
                      do
                      {
                        v156 = *(&v155->hGlobalShare + 1);
                        *((_DWORD *)v153 + 32) = v156;
                        v157 = &v155[v154];
                        *((_DWORD *)v153 + 5) = v157->pPrivateRuntimeData;
                        *((_BYTE *)v153 + 128) = v156 | 4;
                        if ( (*(_DWORD *)v151 & 2) != 0 && (*(_DWORD *)v151 & 0x20020) != 0 )
                          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v153 + 5) + 56LL) + 200LL) = *(&v157->PrivateRuntimeDataSize
                                                                                           + 1);
                        else
                          *((_DWORD *)v153 + 31) = *(&v157->PrivateRuntimeDataSize + 1);
                        if ( *(_BYTE *)(&v155->hGlobalShare + 1) & 1 | ((*(_BYTE *)(&v155->hGlobalShare + 1) & 2) != 0) )
                        {
                          *((_QWORD *)v153 + 13) = v276[v154].hSection;
                          *((_BYTE *)v153 + 128) ^= (*((_BYTE *)v153 + 128) ^ (8 * (v157->PrivateRuntimeDataSize >> 21))) & 8;
                        }
                        *(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^ v157->PrivateRuntimeDataSize) & 1;
                        *(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^ v157->PrivateRuntimeDataSize) & 2;
                        *(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^ v157->PrivateRuntimeDataSize) & 4;
                        *(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^ v157->PrivateRuntimeDataSize) & 8;
                        *(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^ v157->PrivateRuntimeDataSize) & 0x20;
                        *(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^ v157->PrivateRuntimeDataSize) & 0x800;
                        *(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^ v157->PrivateRuntimeDataSize) & 0x1000;
                        *(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^ v157->PrivateRuntimeDataSize) & 0x2000;
                        *(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^ v157->PrivateRuntimeDataSize) & 0x4000;
                        *(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^ v157->PrivateRuntimeDataSize) & 0x40000;
                        *(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^ v157->PrivateRuntimeDataSize) & 0x80000;
                        *(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^ v157->PrivateRuntimeDataSize) & 0x100000;
                        *(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) |= 0x20000u;
                        v158 = &v276[v154];
                        if ( (v158->Flags.Value & 1) != 0 )
                        {
                          *(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) ^ (v158->VidPnSourceId << 6)) & 0x3C0;
                          if ( *((_QWORD *)v17 + 235) != *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) )
                            *(_DWORD *)(*((_QWORD *)v153 + 6) + 4LL) |= 4u;
                        }
                        if ( bTracingEnabled )
                        {
                          v159 = (*((_DWORD *)v153 + 18) >> 12) & 0x3F;
                          v287 = (DXG_GUEST_VIRTUALGPU_VMBUS *)*((_QWORD *)v153 + 6);
                          v310 = (struct COREDEVICEACCESS *)*((unsigned int *)v153 + 30);
                          v309 = *(unsigned int **)(*((_QWORD *)v17 + 2) + 16LL);
                          v162 = PsGetCurrentProcessId();
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
                            McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
                              v160,
                              &EventCreateAdapterAllocation,
                              v161,
                              (__int64)v162,
                              (char)v17,
                              (char)v309,
                              0,
                              (char)v310,
                              Src,
                              v259,
                              v260,
                              0,
                              v261,
                              v262,
                              v263,
                              v264,
                              (char)v287,
                              v265,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              0,
                              v266,
                              v267,
                              v159,
                              0);
                          v151 = p_Flags;
                        }
                        ++v154;
                        v153 = (struct DXGALLOCATION *)*((_QWORD *)v153 + 8);
                      }
                      while ( v154 < *p_NumAllocations );
                      LODWORD(v48) = v272;
                      v49 = v286;
                      p_hDevice = &v278->hDevice;
                      LODWORD(v148) = (_DWORD)v296;
                      v152 = (__int64)v270;
                    }
                    if ( (int)v148 < 0 )
                    {
                      LODWORD(v48) = v148;
                      v272 = (unsigned int)v148;
                      goto LABEL_450;
                    }
                    v163 = v152;
                    v300 = v152;
                    v164 = 0;
                    while ( 1 )
                    {
                      HostProcess = v164;
                      if ( v164 >= *p_NumAllocations )
                      {
LABEL_370:
                        operator delete(v313);
                        if ( (int)v48 >= 0 )
                          goto LABEL_371;
                        goto LABEL_450;
                      }
                      v165 = v164;
                      v166 = p_hDevice[18 * v164 + 8];
                      v167 = *v151;
                      if ( (*(_DWORD *)v151 & 0x10000) != 0 )
                      {
                        v168 = (DXG_GUEST_VIRTUALGPU_VMBUS *)&v308[96 * v164 + 8];
                        v287 = v168;
                        if ( (*(_BYTE *)&v167 & 0x20) == 0 )
                        {
                          v175 = *(DXG_GUEST_VIRTUALGPU_VMBUS **)v168;
                          v319 = 0LL;
                          v176 = ObReferenceObjectByHandle(v175, 0x20000u, MmSectionObjectType, a3, &v319, 0LL);
                          v296 = v319;
                          LODWORD(v48) = v176;
                          v272 = (unsigned int)v176;
                          if ( v176 < 0 )
                          {
                            v177 = v176;
                            v178 = (__int64 *)v287;
                            WdLogSingleEntry2(2LL, *(_QWORD *)v287, v176);
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000,
                              -1,
                              (__int64)L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
                              *v178,
                              v177,
                              0LL,
                              0LL,
                              0LL);
                            goto LABEL_450;
                          }
                          v179 = &v282[v165];
                          v180 = ProcessSectionAttributes(v319, v179);
                          v48 = v180;
                          v272 = v180;
                          if ( v180 < 0 )
                          {
                            WdLogSingleEntry3(2LL, v17, v180, 6004LL);
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000,
                              -1,
                              (__int64)L"Failed to query section attributes. Device=0x%I64x, Status=%I64X",
                              (__int64)v17,
                              v48,
                              6004LL,
                              0LL,
                              0LL);
                            ObfDereferenceObject(v296);
                            goto LABEL_450;
                          }
                          v171 = *(_QWORD *)(*(_QWORD *)(v163 + 40) + 56LL);
                          v172 = *(_DWORD *)(v171 + 12) | 0x400;
                          *(_DWORD *)(v171 + 12) = v172;
                          *(_QWORD *)(v171 + 192) = v296;
                          *(_DWORD *)(v171 + 204) = v179->Alignment;
                          v174 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v179->Flags.Value;
                          goto LABEL_366;
                        }
                        v169 = *(DXG_GUEST_VIRTUALGPU_VMBUS **)v168;
                        v287 = *(DXG_GUEST_VIRTUALGPU_VMBUS **)v168;
                        v170 = v164;
                        if ( (*((_BYTE *)v17 + 1901) & 1) == 0 )
                        {
                          LODWORD(v48) = ProcessSysMemAttributes(v169, v166, &v282[v170]);
                          v272 = (unsigned int)v48;
                          if ( (int)v48 < 0 )
                            goto LABEL_450;
                          v169 = v287;
                          v151 = p_Flags;
                        }
                        if ( (*(_DWORD *)v151 & 2) != 0 )
                        {
                          v171 = *(_QWORD *)(*(_QWORD *)(v163 + 40) + 56LL);
                          v172 = *(_DWORD *)(v171 + 12) | 0x200;
                          *(_DWORD *)(v171 + 12) = v172;
                          *(_QWORD *)(v171 + 192) = v169;
                          v173 = v282;
                          *(_DWORD *)(v171 + 204) = v282[v170].Alignment;
                          v174 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v173[v170].Flags.Value;
LABEL_366:
                          *(_DWORD *)(v171 + 12) = v172 ^ ((unsigned __int16)v172 ^ (unsigned __int16)(*(_WORD *)&v174 << 9)) & 0x800;
                        }
                      }
                      v181 = HostProcess;
                      v182 = (DXG_GUEST_VIRTUALGPU_VMBUS *)&v276[HostProcess];
                      v287 = v182;
                      if ( (*((_DWORD *)v182 + 8) & 1) != 0 )
                      {
                        v312 = 0LL;
                        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                          (DXGALLOCATIONREFERENCE *)&v320,
                          (struct _EX_RUNDOWN_REF *)v163);
                        DXGALLOCATIONREFERENCE::MoveAssign(&v312, &v320);
                        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v320);
                        Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)*v281 + 2) + 4472LL),
                                     *((_DWORD *)v288 + 126),
                                     *(_DWORD *)v316,
                                     0,
                                     (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                                     1u,
                                     (const struct DXGALLOCATIONREFERENCE *)&v312,
                                     0LL,
                                     0LL);
                        v48 = Resident;
                        v272 = Resident;
                        if ( Resident < 0 )
                        {
                          WdLogSingleEntry1(2LL, Resident);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000,
                            -1,
                            (__int64)L"VmBusSendMakeResident failed: 0x%I64x",
                            v48,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v312);
                          v49 = v286;
                          goto LABEL_370;
                        }
                        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v312);
                        v182 = v287;
                      }
                      *(_QWORD *)(*(_QWORD *)(v163 + 48) + 16LL) = *(_QWORD *)(v163 + 48);
                      v188 = *(_QWORD *)(v163 + 48);
                      v189 = &v278[v181];
                      *(_DWORD *)(v163 + 120) = v189->pStandardAllocation;
                      *(_QWORD *)(v188 + 112) = LODWORD(v189->pStandardAllocation);
                      *(_OWORD *)(v188 + 64) = *(_OWORD *)&v189->PrivateDriverDataSize;
                      *(_OWORD *)(v188 + 80) = *(_OWORD *)&v189->Flags;
                      *(_OWORD *)(v188 + 96) = *(_OWORD *)&v189[1].hDevice;
                      if ( !a3 || (*(_DWORD *)p_Flags & 0x10000) != 0 )
                      {
                        v190 = *((unsigned int *)v182 + 6);
                        v191 = v181;
                        v194 = v190;
                        v192 = v280[v191];
                        v193 = (char *)*((_QWORD *)v182 + 2);
                      }
                      else
                      {
                        v190 = *((unsigned int *)v182 + 6);
                        v191 = v181;
                        v192 = v283[v191];
                        v193 = (char *)*((_QWORD *)v182 + 2);
                        if ( (unsigned __int64)&v193[v190] > MmUserProbeAddress || &v193[v190] <= v193 )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        v194 = v190;
                      }
                      memmove(v193, v192, v194);
                      if ( v299 )
                      {
                        if ( !a3 || (v195 = v283, (*(_DWORD *)p_Flags & 0x10000) != 0) )
                          v195 = v280;
                        memmove((void *)*(v299 - 2), v195[v191], v190);
                        v299 = (unsigned __int64 *)*v299;
                        v314 = v299;
                      }
                      v49 = v286;
                      p_hDevice = &v278->hDevice;
                      v151 = p_Flags;
                      v164 = HostProcess + 1;
                      v163 = *(_QWORD *)(v163 + 64);
                      v300 = v163;
                    }
                  }
                  v130 = *((_QWORD *)v49 + 7);
                  if ( *(_QWORD *)(v130 + 120) )
                  {
                    v139 = *(_DWORD *)(v130 + 128);
                    if ( v139 != (_DWORD)v129 )
                    {
                      LODWORD(v48) = -1073741811;
                      v272 = 3221225485LL;
                      WdLogSingleEntry4(3LL, v17, v129, v139, 5715LL);
                      goto LABEL_450;
                    }
LABEL_281:
                    v132 = v289;
                    if ( !a3 )
                      v132 = v95->pStandardAllocation;
                    memmove(*(void **)(*((_QWORD *)v49 + 7) + 120LL), v132, v95->PrivateDriverDataSize);
                    if ( (*(_DWORD *)v90 & 0x100000) != 0 )
                    {
                      LODWORD(v48) = CheckNoKmdAccessPrivateData(
                                       v95->PrivateDriverDataSize,
                                       *(void **)(*((_QWORD *)v49 + 7) + 120LL),
                                       0xFF000001);
                      v272 = (unsigned int)v48;
                      if ( (int)v48 < 0 )
                        goto LABEL_450;
                    }
                    goto LABEL_285;
                  }
                  *(_QWORD *)(*((_QWORD *)v49 + 7) + 120LL) = operator new[]((unsigned int)v129, 0x4B677844u, 258LL);
                  v131 = *((_QWORD *)v49 + 7);
                  v122 = v95->PrivateDriverDataSize;
                  if ( *(_QWORD *)(v131 + 120) )
                  {
                    *(_DWORD *)(v131 + 128) = v122;
                    goto LABEL_281;
                  }
                  goto LABEL_448;
                }
                do
                {
                  *(&v95->pAllocationInfo->hAllocation + 24 * (unsigned int)v112) = *((_DWORD *)v113 + 4);
                  v112 = (unsigned int)(v112 + 1);
                  v113 = (struct DXGALLOCATION *)*((_QWORD *)v113 + 8);
                }
                while ( (unsigned int)v112 < *p_NumAllocations );
                v273 = v112;
                j = v113;
              }
              v115 = v270;
              goto LABEL_251;
            }
            v99 = *((_QWORD *)v17 + 2);
            v100 = v270;
            v101 = 0;
            if ( *p_NumAllocations )
            {
              v102 = *(_QWORD *)(v99 + 768);
              v103 = *(_QWORD *)(v99 + 760);
              v104 = p_Flags;
              v105 = v299;
              do
              {
                v106 = *(unsigned int *)v104 >> 5;
                LOBYTE(v106) = (*(_DWORD *)v104 & 0x20) != 0;
                v105[v101] = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v103 + 8) + 624LL))(
                               v102,
                               *((_QWORD *)v100 + 3),
                               v106);
                v100 = (struct DXGALLOCATION *)*((_QWORD *)v100 + 8);
                ++v101;
              }
              while ( v101 < *p_NumAllocations );
              v17 = v287;
              LODWORD(v48) = v272;
              v49 = v286;
            }
            v90 = p_Flags;
LABEL_215:
            v95 = v278;
            goto LABEL_216;
          }
          v97 = v96->Flags.Value | 0x800004;
        }
        v96->Flags.Value = v97;
        goto LABEL_204;
      }
    }
    else
    {
      if ( !v49 )
        goto LABEL_191;
      v91 = *((_QWORD *)v49 + 7);
      if ( !v91 || (*(_BYTE *)(v91 + 12) & 0x60) != 0x60 )
        goto LABEL_191;
    }
    *((_DWORD *)v49 + 1) |= 8u;
    goto LABEL_191;
  }
  v86 = v83;
  v87 = 8LL * v83;
  if ( !is_mul_ok(v83, 8uLL) )
    v87 = -1LL;
  v88 = operator new[](v87, 0x4B677844u, 256LL);
  if ( v88 )
  {
    if ( !HostProcess )
    {
      v89 = (void *)*((_QWORD *)v49 + 8);
      if ( v89 )
        operator delete(v89);
    }
    *((_QWORD *)v49 + 8) = v88;
    goto LABEL_175;
  }
  WdLogSingleEntry3(3LL, v17, v86, -1073741801LL);
  LODWORD(v48) = -1073741801;
  v272 = 3221225495LL;
LABEL_170:
  v60 = v290;
  v270 = v290;
LABEL_451:
  if ( v322 )
  {
    v322 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v321);
  }
  if ( v325 == 1 )
  {
    v325 = 0;
    v217 = v324;
    _InterlockedDecrement((volatile signed __int32 *)(v324 + 16));
    ExReleasePushLockSharedEx(v217, 0LL);
    KeLeaveCriticalRegion();
    v60 = v290;
    v270 = v290;
  }
  else if ( v325 == 2 )
  {
    v325 = 0;
    v218 = v324;
    *(_QWORD *)(v324 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v218, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (int)v48 < 0 )
  {
    if ( v60 )
    {
      v235 = 0;
      if ( *p_NumAllocations )
      {
        v236 = v281;
        do
        {
          v237 = *((_QWORD *)v60 + 6);
          if ( *(_QWORD *)(v237 + 8) && !a4 )
          {
            if ( (v238 = *(_DWORD *)(v237 + 4), (v238 & 1) != 0) && !*((_DWORD *)v17 + 116) || (v238 & 2) != 0 )
            {
              if ( (v238 & 0x10) != 0 )
              {
                WdLogSingleEntry1(1LL, 6365LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"!pAllocation->m_pAllocation->m_Invalidated",
                  6365LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)*v236 + 95) + 8LL) + 184LL))(
                *((_QWORD *)*v236 + 96),
                *(_QWORD *)(*((_QWORD *)v60 + 6) + 8LL));
              *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) |= 0x10u;
            }
          }
          ++v235;
          v60 = (struct DXGALLOCATION *)*((_QWORD *)v60 + 8);
        }
        while ( v235 < *p_NumAllocations );
        LODWORD(v48) = v272;
        v49 = v286;
      }
      v60 = v270;
    }
    if ( v271[0] )
    {
      v295 = 0LL;
      DXGRESOURCEREFERENCE::MoveAssign(&v307, &v295);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v295);
      DXGDEVICE::RemoveResourceFromDeviceList(v17, v49);
      DXGDEVICE::DestroyResource(v17, (struct DXGALLOCATION **)v49, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
    }
    else if ( v60 )
    {
      if ( v279 )
        DXGDEVICE::RemoveAllocationsWithoutDestroy(v17, v49, v60, *p_NumAllocations);
      v239 = (char *)v49 + 56;
      if ( !v49 || *(_QWORD *)v239 )
      {
        v240 = v60;
        do
        {
          v241 = v240;
          v301 = (ADAPTER_RENDER *)*((_QWORD *)v240 + 8);
          *((_QWORD *)v240 + 7) = 0LL;
          *((_QWORD *)v240 + 8) = 0LL;
          if ( v49 && *(_QWORD *)v239 && *(_QWORD *)(*((_QWORD *)v240 + 6) + 48LL) )
          {
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)v239 + 32LL));
            --*(_DWORD *)(*(_QWORD *)v239 + 132LL);
            v242 = *((_QWORD *)v241 + 6) + 48LL;
            v243 = *(_QWORD *)v242;
            v244 = *(_QWORD **)(*((_QWORD *)v241 + 6) + 56LL);
            if ( *(_QWORD *)(*(_QWORD *)v242 + 8LL) != v242 || *v244 != v242 )
              __fastfail(3u);
            *v244 = v243;
            *(_QWORD *)(v243 + 8) = v244;
            *(_QWORD *)(*((_QWORD *)v241 + 6) + 48LL) = 0LL;
            v245 = *(_QWORD *)v239 + 32LL;
            *(_QWORD *)(v245 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v245, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGDEVICE::DestroyAllocations(v17, 0LL, 0, v241, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
          v240 = v301;
        }
        while ( v301 );
        v60 = v270;
      }
      if ( v49 )
      {
        if ( *(_QWORD *)v239 )
        {
          v246 = 0;
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)v239 + 32LL));
          v247 = *((_DWORD *)v49 + 1);
          if ( (v247 & 0x10) == 0 )
          {
            *((_DWORD *)v49 + 1) = v247 | 0x10;
            v246 = 1;
          }
          v248 = *(_QWORD *)v239 + 32LL;
          *(_QWORD *)(v248 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v248, 0LL);
          KeLeaveCriticalRegion();
          if ( v246 )
          {
            DXGDEVICE::RemoveResourceFromDeviceList(v17, v49);
            v249 = v288;
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v332, v288);
            DXGPROCESS::GetResourceUnsafe((__int64)v249, (DXGRESOURCEREFERENCE *)&v311, *((_DWORD *)v49 + 4));
            if ( v311 )
            {
              Count = v311[2].Count;
              v251 = (Count >> 6) & 0xFFFFFF;
              if ( (unsigned int)v251 < *((_DWORD *)v249 + 74) )
              {
                v252 = *((_QWORD *)v249 + 35);
                v253 = *(_DWORD *)(v252 + 16 * v251 + 8);
                if ( ((Count >> 25) & 0x60) == (*(_BYTE *)(v252 + 16 * v251 + 8) & 0x60)
                  && (v253 & 0x2000) == 0
                  && (v253 & 0x1F) != 0 )
                {
                  *(_DWORD *)(v252 + 16LL * ((Count >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                }
              }
              v295 = 0LL;
              DXGRESOURCEREFERENCE::MoveAssign(&v307, &v295);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v295);
            }
            else
            {
              v246 = 0;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v311);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v332);
            if ( v246 )
              DXGDEVICE::DestroyResource(
                v17,
                (struct DXGALLOCATION **)v49,
                0LL,
                (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
          }
        }
        else
        {
          DXGDEVICE::DestroyAllocations(v17, v49, 0, v60, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
        }
      }
    }
  }
  else
  {
    if ( (unsigned int)Feature_1344054585__private_IsEnabledDeviceUsage() )
    {
      if ( v60 )
      {
        LODWORD(v278) = 0;
        if ( *p_NumAllocations )
        {
          v219 = 0;
          do
          {
            v220 = *((_QWORD *)v17 + 5);
            v221 = *((unsigned int *)v60 + 4);
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v220 + 248));
            v222 = ((unsigned int)v221 >> 6) & 0xFFFFFF;
            if ( v222 < *(_DWORD *)(v220 + 296) )
            {
              v223 = *(_QWORD *)(v220 + 280);
              if ( (((unsigned int)v221 >> 25) & 0x60) == (*(_BYTE *)(v223 + 16LL * v222 + 8) & 0x60)
                && (*(_DWORD *)(v223 + 16LL * v222 + 8) & 0x1F) != 0 )
              {
                v224 = 2 * ((v221 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v223 + 8 * v224 + 8) & 0x2000) == 0 )
                {
                  WdLogSingleEntry1(1LL, 222LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                    222LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                *(_DWORD *)(*(_QWORD *)(v220 + 280) + 8 * v224 + 8) &= ~0x2000u;
              }
              if ( v222 < *(_DWORD *)(v220 + 296) )
                *(_DWORD *)(*(_QWORD *)(v220 + 280) + 16LL * v222 + 8) &= ~0x4000u;
            }
            *(_QWORD *)(v220 + 256) = 0LL;
            ExReleasePushLockExclusiveEx(v220 + 248, 0LL);
            KeLeaveCriticalRegion();
            ++v219;
            v60 = (struct DXGALLOCATION *)*((_QWORD *)v270 + 8);
            v270 = v60;
          }
          while ( v219 < *p_NumAllocations );
          LODWORD(v48) = v272;
        }
      }
    }
    if ( v271[0] )
    {
      v225 = *((_QWORD *)v17 + 5);
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v225 + 248, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v228 = *(_DWORD *)(v225 + 272);
          if ( v228 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v226, &EventBlockThread, v227, v228);
        }
        ExAcquirePushLockExclusiveEx(v225 + 248, 0LL);
      }
      *(_QWORD *)(v225 + 256) = KeGetCurrentThread();
      v229 = v286;
      v230 = *((_DWORD *)v286 + 4);
      v231 = (v230 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v231 < *(_DWORD *)(v225 + 296) )
      {
        v232 = *(_QWORD *)(v225 + 280);
        if ( ((v230 >> 25) & 0x60) == (*(_BYTE *)(v232 + 16 * v231 + 8) & 0x60)
          && (*(_DWORD *)(v232 + 16 * v231 + 8) & 0x1F) != 0 )
        {
          v233 = 2LL * ((v230 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v232 + 16LL * ((v230 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 222LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              222LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*(_QWORD *)(v225 + 280) + 8 * v233 + 8) &= ~0x2000u;
        }
      }
      if ( (unsigned int)Feature_1344054585__private_IsEnabledDeviceUsage() )
      {
        v234 = (*((_DWORD *)v229 + 4) >> 6) & 0xFFFFFF;
        if ( v234 < *(_DWORD *)(v225 + 296) )
          *(_DWORD *)(*(_QWORD *)(v225 + 280) + 16LL * v234 + 8) &= ~0x4000u;
      }
      *(_QWORD *)(v225 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v225 + 248, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v254 = 0;
  for ( k = v280; v254 < *p_NumAllocations; ++v254 )
    operator delete(k[v254]);
  operator delete(v289);
  if ( (unsigned int)*p_NumAllocations > 5 )
  {
    operator delete(v276);
    operator delete(v282);
    operator delete(v303);
    operator delete(k);
    operator delete(v283);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v323);
  DXGSYNCOBJECTMUTEX::~DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v321);
  if ( v307 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v307 + 9);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    v311 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v311) >= 0 && (v311 || DxgkThreadObjectCreateDxgThread(1)) )
    {
      v295 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v295) >= 0 )
      {
        DxgThread = (struct DXGTHREAD *)v295;
        if ( !v295 )
        {
          DxgThread = DxgkThreadObjectCreateDxgThread(1);
          v295 = (struct _EX_RUNDOWN_REF *)DxgThread;
        }
      }
      else
      {
        DxgThread = 0LL;
      }
      if ( *((_DWORD *)DxgThread + 12) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
    }
  }
  if ( Entry )
    ExFreeToPagedLookasideList(v327 + 13, Entry);
  return (unsigned int)v48;
}
