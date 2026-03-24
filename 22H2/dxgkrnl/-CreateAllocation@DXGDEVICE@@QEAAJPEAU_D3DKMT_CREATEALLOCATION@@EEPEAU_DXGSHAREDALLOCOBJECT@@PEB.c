/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00FD200
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00F9FD0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B800 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C01227D4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0129E20 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002F54 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0003610 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00037C0 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00085E0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0008744 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000E5CC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??0_MOCKDRIVERSTATE_PER_PLANE@@QEAA@XZ @ 0x1C001B620 (--0_MOCKDRIVERSTATE_PER_PLANE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025ECC (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0025FEC (-ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Feature_1679598905__private_IsEnabledDeviceUsage @ 0x1C002615C (Feature_1679598905__private_IsEnabledDeviceUsage.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00261B0 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C00D6CBC (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C00DC7D0 (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C00F9A60 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0101520 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0112F64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C01161F0 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0116660 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012A998 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C012B190 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0134070 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0134134 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01527BC (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01550DC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C0155200 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C0169C84 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x1C016E500 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C0228C80 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C0228DB0 (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C024708C (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C024A2B8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C024A4A0 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C0256B04 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0256BF8 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocation(
        struct _DXGK_ALLOCATIONINFO *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        __int64 a3,
        char a4,
        struct _DXGSHAREDALLOCOBJECT *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        struct COREDEVICEACCESS *a7,
        UINT a8,
        struct _EPROCESS *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int8 *a12,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a13,
        void *a14,
        unsigned int a15)
{
  unsigned __int8 v15; // r15
  struct _DXGK_ALLOCATIONINFO *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  SIZE_T Size; // rdi
  __int64 v22; // rax
  __int64 Flags; // rcx
  __int64 v24; // rax
  _QWORD *v26; // rax
  UINT v27; // r14d
  void **v28; // r13
  __int64 NumAllocations; // rax
  char *v30; // r12
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  int v33; // r15d
  SIZE_T v34; // rax
  SIZE_T v35; // rax
  SIZE_T v36; // rax
  void **v37; // rdi
  SIZE_T v38; // rax
  unsigned __int8 v39; // al
  SIZE_T v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rax
  SIZE_T v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  UINT v51; // ecx
  unsigned __int64 DriverAllocations; // rdi
  struct DXGRESOURCE *v53; // r13
  size_t v54; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  SIZE_T v56; // r8
  UINT v57; // r10d
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r9
  char *v61; // r15
  _QWORD *pPrivateDriverData; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  UINT PrivateDriverDataSize; // eax
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // r15
  UINT i; // eax
  __int64 v71; // r15
  __int64 v72; // rdx
  SIZE_T v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // rax
  ULONG64 v76; // rdx
  struct DXGALLOCATION *v77; // r15
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  char *v82; // rdx
  __int64 v83; // rcx
  char *v84; // r9
  size_t v85; // r8
  char *v86; // rdx
  UINT v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  PVOID v91; // r9
  size_t v92; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  __int64 v94; // rcx
  _QWORD *v95; // rax
  unsigned int v96; // edx
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 j; // rcx
  SIZE_T v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  PVOID v106; // r15
  _QWORD *v107; // rax
  void *v108; // rcx
  __int64 v109; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v110; // eax
  int v111; // eax
  __int64 v112; // rax
  __int64 v113; // rax
  char v114; // cl
  D3DKMT_CREATEALLOCATIONFLAGS v115; // eax
  struct _DXGK_ALLOCATIONINFO *v116; // r8
  UINT Value; // edx
  unsigned int v118; // eax
  int v119; // edx
  SIZE_T v120; // rax
  __int64 v121; // rcx
  UINT v122; // r15d
  struct COREDEVICEACCESS *v123; // r13
  __int64 v124; // r12
  ULONG64 v125; // rdi
  unsigned __int8 *v126; // rsi
  __int64 v127; // r8
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rdx
  struct DXGGLOBAL *Global; // r15
  struct _DXGK_ALLOCATIONINFO *v134; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v136; // rax
  int v137; // eax
  __int64 v138; // rdx
  __int64 v139; // r8
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rdx
  _QWORD *hAllocation; // rax
  D3DKMT_HANDLE v144; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v145; // eax
  D3DKMT_HANDLE v146; // ecx
  __int64 v147; // r8
  struct DXGALLOCATION *k; // r9
  UINT v149; // eax
  struct DXGALLOCATION *v150; // r9
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // r8
  __int64 v154; // rcx
  _QWORD *v155; // rax
  struct _D3DKMT_CREATEALLOCATION *v156; // r12
  unsigned __int8 v157; // r15
  size_t PrivateRuntimeDataSize; // r8
  char *pPrivateRuntimeData; // rdx
  void *v160; // r9
  UINT v161; // eax
  __int64 v162; // rcx
  __int64 v163; // rdx
  __int64 v164; // r8
  __int64 v165; // rcx
  struct _D3DKMT_CREATEALLOCATION *v166; // rdx
  const void *v167; // rdx
  struct DXGALLOCATION *v168; // rax
  struct DXGALLOCATION *v169; // r12
  char *v170; // rcx
  char *v171; // r15
  PVOID v172; // rax
  __int64 v173; // rdx
  __int64 v174; // r8
  __int64 v175; // rcx
  void *v176; // r9
  const void *v177; // rdx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rax
  unsigned int v181; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v182; // edx
  const void *v183; // r11
  void **v184; // rax
  unsigned int v185; // r9d
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // rax
  __int64 v189; // rcx
  int v190; // eax
  __int64 v191; // rax
  struct DXGALLOCATION *v192; // r8
  UINT v193; // r11d
  unsigned __int8 *v194; // r14
  unsigned __int8 *v195; // r9
  D3DKMT_CREATEALLOCATIONFLAGS v196; // eax
  UINT v197; // eax
  __int64 v198; // r12
  unsigned int v199; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v200; // ecx
  bool v201; // zf
  struct _DXGK_ALLOCATIONINFO *v202; // rcx
  __int64 v203; // r8
  int v204; // edx
  struct _DXGK_ALLOCATIONINFO *v205; // rcx
  NTSTATUS v206; // eax
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // rax
  __int64 v210; // rcx
  PVOID v211; // r12
  int v212; // eax
  __int64 v213; // rdx
  __int64 v214; // rcx
  _QWORD *v215; // rax
  __int64 v216; // rdx
  int v217; // ecx
  struct _DXGK_ALLOCATIONINFO *v218; // r8
  unsigned __int64 v219; // r8
  struct COREDEVICEACCESS *v220; // r9
  unsigned int v221; // edi
  struct DXGPROCESS *v222; // rax
  int Resident; // eax
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v227; // eax
  int v228; // eax
  __int64 v229; // rdx
  __int64 v230; // rcx
  __int64 v231; // r8
  _QWORD *v232; // rax
  _OWORD *v233; // rdx
  unsigned __int8 *v234; // rcx
  size_t v235; // rcx
  size_t v236; // r12
  const void *v237; // rdx
  char *v238; // rcx
  size_t v239; // r8
  void **v240; // rax
  _QWORD *v241; // rax
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // rax
  __int64 v245; // r15
  D3DKMT_CREATEALLOCATIONFLAGS v246; // ecx
  struct DXGALLOCATION *v247; // r12
  void *v248; // rcx
  NTSTATUS v249; // eax
  __int64 v250; // rdx
  PVOID v251; // rcx
  int v252; // ecx
  struct _D3DKM_CREATESTANDARDALLOCATION *v253; // rcx
  UINT v254; // r12d
  int v255; // edi
  int v256; // ecx
  struct DXGPROCESS *Current; // rax
  int v258; // eax
  __int64 v259; // rdx
  __int64 v260; // rcx
  __int64 v261; // r8
  unsigned __int8 v262; // al
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rcx
  __int64 v264; // rcx
  UINT v265; // r13d
  struct DXGALLOCATION *v266; // rdi
  char *v267; // r12
  unsigned int v268; // r15d
  __int64 v269; // rdx
  __int64 v270; // r12
  __int64 v271; // rax
  __int64 v272; // r12
  __int64 v273; // rcx
  __int64 v274; // r8
  int v275; // r9d
  unsigned int v276; // r8d
  __int64 v277; // rax
  __int64 v278; // rdx
  __int64 v279; // rsi
  __int64 v280; // rax
  unsigned int v281; // eax
  UINT v282; // r12d
  __int64 v283; // rdx
  int v284; // eax
  __int64 v285; // rax
  struct DXGALLOCATION *v286; // r12
  struct DXGALLOCATION *v287; // r15
  _QWORD *v288; // rax
  __int64 v289; // rcx
  __int64 v290; // rax
  __int64 v291; // rdx
  _QWORD *v292; // rcx
  __int64 v293; // rcx
  __int64 v294; // rcx
  char v295; // r15
  int v296; // eax
  __int64 v297; // rcx
  struct DXGPROCESS *v298; // r12
  unsigned int v299; // r8d
  unsigned int v300; // ecx
  __int64 v301; // r9
  int v302; // edx
  void **v303; // rsi
  struct _SLIST_ENTRY *v304; // rsi
  SIZE_T v305; // rbx
  int Object; // [rsp+20h] [rbp-348h]
  unsigned __int8 v307; // [rsp+70h] [rbp-2F8h]
  char v308; // [rsp+71h] [rbp-2F7h]
  unsigned int v309; // [rsp+80h] [rbp-2E8h]
  unsigned int v310; // [rsp+80h] [rbp-2E8h]
  unsigned int v311; // [rsp+80h] [rbp-2E8h]
  unsigned int HostProcess; // [rsp+80h] [rbp-2E8h]
  signed int v313; // [rsp+80h] [rbp-2E8h]
  unsigned int v314; // [rsp+80h] [rbp-2E8h]
  unsigned __int8 v315[4]; // [rsp+84h] [rbp-2E4h] BYREF
  struct DXGALLOCATION *v316; // [rsp+88h] [rbp-2E0h]
  __int64 v317; // [rsp+90h] [rbp-2D8h]
  char v318; // [rsp+98h] [rbp-2D0h]
  UINT v319; // [rsp+9Ch] [rbp-2CCh]
  char v320; // [rsp+A0h] [rbp-2C8h]
  char v321; // [rsp+A1h] [rbp-2C7h]
  void *v322; // [rsp+A8h] [rbp-2C0h]
  void **v323; // [rsp+B0h] [rbp-2B8h]
  struct _DXGK_ALLOCATIONINFO *v324; // [rsp+B8h] [rbp-2B0h]
  void **v325; // [rsp+C0h] [rbp-2A8h]
  char v326; // [rsp+C8h] [rbp-2A0h]
  char v327; // [rsp+D0h] [rbp-298h]
  struct _DXGSHAREDALLOCOBJECT *v328; // [rsp+D8h] [rbp-290h]
  struct DXGALLOCATION *v329; // [rsp+E0h] [rbp-288h] BYREF
  unsigned __int64 v330; // [rsp+E8h] [rbp-280h]
  void *Src; // [rsp+F0h] [rbp-278h]
  void *v332; // [rsp+F8h] [rbp-270h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v333; // [rsp+100h] [rbp-268h]
  unsigned __int8 *v334; // [rsp+108h] [rbp-260h]
  int v335; // [rsp+110h] [rbp-258h]
  struct _D3DKMT_CREATEALLOCATION *v336; // [rsp+118h] [rbp-250h]
  struct DXGRESOURCE *v337; // [rsp+120h] [rbp-248h]
  char *v338; // [rsp+128h] [rbp-240h]
  PVOID v339[4]; // [rsp+130h] [rbp-238h] BYREF
  struct _DXGK_OPENALLOCATIONINFO *v340; // [rsp+150h] [rbp-218h]
  struct DXGALLOCATION *v341; // [rsp+158h] [rbp-210h]
  struct DXGRESOURCE *v342; // [rsp+160h] [rbp-208h] BYREF
  struct COREDEVICEACCESS *v343; // [rsp+168h] [rbp-200h]
  int v344; // [rsp+170h] [rbp-1F8h]
  SIZE_T v345; // [rsp+178h] [rbp-1F0h]
  unsigned __int8 *v346; // [rsp+180h] [rbp-1E8h] BYREF
  __int64 v347; // [rsp+188h] [rbp-1E0h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+190h] [rbp-1D8h]
  unsigned __int64 *v349; // [rsp+198h] [rbp-1D0h]
  unsigned int *v350; // [rsp+1A0h] [rbp-1C8h]
  void *v351; // [rsp+1A8h] [rbp-1C0h]
  struct DXGALLOCATION *v352; // [rsp+1B0h] [rbp-1B8h] BYREF
  PVOID v353; // [rsp+1B8h] [rbp-1B0h] BYREF
  char v354[8]; // [rsp+1C0h] [rbp-1A8h] BYREF
  char *v355; // [rsp+1C8h] [rbp-1A0h]
  char v356[8]; // [rsp+1D0h] [rbp-198h] BYREF
  char v357[8]; // [rsp+1D8h] [rbp-190h] BYREF
  __int64 v358; // [rsp+1E0h] [rbp-188h] BYREF
  struct _EPROCESS *v359; // [rsp+1E8h] [rbp-180h]
  struct _D3DKMT_CREATESTANDARDALLOCATION *v360; // [rsp+1F0h] [rbp-178h]
  char *v361; // [rsp+1F8h] [rbp-170h]
  struct _D3DKMT_CREATEALLOCATION *v362; // [rsp+200h] [rbp-168h]
  SIZE_T v363; // [rsp+208h] [rbp-160h]
  _BYTE v364[16]; // [rsp+210h] [rbp-158h] BYREF
  _BYTE v365[16]; // [rsp+220h] [rbp-148h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v366; // [rsp+230h] [rbp-138h] BYREF
  _BYTE v367[24]; // [rsp+260h] [rbp-108h] BYREF
  _BYTE v368[24]; // [rsp+278h] [rbp-F0h] BYREF
  _BYTE v369[32]; // [rsp+290h] [rbp-D8h] BYREF
  D3DDDI_MAPGPUVIRTUALADDRESS v370; // [rsp+2B0h] [rbp-B8h] BYREF

  v308 = a4;
  v15 = a3;
  v307 = a3;
  v17 = this;
  v330 = (unsigned __int64)this;
  v339[1] = this;
  v339[2] = a2;
  v336 = a2;
  v362 = a2;
  v326 = a3;
  v328 = a5;
  v333 = a6;
  v343 = a7;
  v359 = a9;
  v350 = a10;
  v349 = a11;
  v334 = a12;
  v360 = a13;
  v18 = *(_QWORD *)(this->Size + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v18 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 168)) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18, a2);
      *(_QWORD *)(v19 + 24) = 4633LL;
      WdLogEvent5_WdAssertion(v19);
    }
    a4 = v308;
  }
  if ( v15 && a4 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v18, a2);
    *(_QWORD *)(v20 + 24) = 4638LL;
    WdLogEvent5_WdAssertion(v20);
  }
  Size = v17->Size;
  v22 = *(_QWORD *)(Size + 16);
  v318 = *(_BYTE *)(v22 + 209);
  v327 = v318;
  Flags = (unsigned int)a2->Flags;
  if ( (Flags & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(v22 + 2060) & 0x10) == 0 )
    {
      v24 = WdLogNewEntry5_WdWarning(Flags, a2, a3);
      *(_QWORD *)(v24 + 24) = v17;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
      return 3221225485LL;
    }
    if ( (Flags & 2) == 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(Flags, a2, a3);
      v26[3] = v17;
      v26[4] = -1073741811LL;
      v26[5] = 1LL;
      WdLogEvent5_WdWarning(v26);
      return 3221225485LL;
    }
  }
  v27 = 0;
  v28 = 0LL;
  v325 = 0LL;
  Src = 0LL;
  ListEntry = 0LL;
  v363 = Size;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations <= 5 )
  {
    v45 = Size + 1472;
    ++*(_DWORD *)(v45 + 20);
    v30 = (char *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v45);
    v322 = v30;
    if ( !v30 )
    {
      ++*(_DWORD *)(v45 + 24);
      v30 = (char *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v45 + 48))(
                      *(unsigned int *)(v45 + 36),
                      *(unsigned int *)(v45 + 44),
                      *(unsigned int *)(v45 + 40));
      v322 = v30;
    }
    ListEntry = (PSLIST_ENTRY)v30;
    if ( !v30 )
    {
      v50 = WdLogNewEntry5_WdLowResource(v47, v46, v48, v49);
      *(_QWORD *)(v50 + 24) = v17;
      WdLogEvent5_WdLowResource(v50);
      return -1073741801LL;
    }
    v324 = (struct _DXGK_ALLOCATIONINFO *)(v30 + 720);
    v340 = (struct _DXGK_OPENALLOCATIONINFO *)(v30 + 480);
    v37 = (void **)(v30 + 640);
    v323 = (void **)(v30 + 640);
    v28 = (void **)(v30 + 680);
    v325 = (void **)(v30 + 680);
    v338 = v30;
    goto LABEL_58;
  }
  v30 = 0LL;
  v322 = 0LL;
  v338 = 0LL;
  v31 = (unsigned int)NumAllocations;
  v32 = 96 * NumAllocations;
  v33 = 0;
  if ( (unsigned __int64)(96 * NumAllocations) <= 0xFFFFFFFF )
  {
    v34 = 96LL * (unsigned int)NumAllocations;
    if ( !is_mul_ok(v31, 0x60uLL) )
      v34 = -1LL;
    v30 = (char *)operator new[](v34, 0x4B677844u, PagedPool);
    v322 = v30;
    v338 = v30;
  }
  else
  {
    v33 = -1073741675;
  }
  v324 = 0LL;
  if ( v32 <= 0xFFFFFFFF )
  {
    v33 = 0;
    if ( 88 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v35 = 88LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 0x58uLL) )
        v35 = -1LL;
      v324 = (struct _DXGK_ALLOCATIONINFO *)operator new[](v35, 0x4B677844u, PagedPool);
    }
    else
    {
      v33 = -1073741675;
    }
  }
  v340 = 0LL;
  if ( v33 >= 0 )
  {
    v33 = 0;
    if ( 32 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v36 = 32LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 0x20uLL) )
        v36 = -1LL;
      v340 = (struct _DXGK_OPENALLOCATIONINFO *)operator new[](v36, 0x4B677844u, PagedPool);
    }
    else
    {
      v33 = -1073741675;
    }
  }
  v37 = 0LL;
  v323 = 0LL;
  if ( v33 >= 0 )
  {
    v33 = 0;
    if ( 8 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v38 = 8LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
        v38 = -1LL;
      v37 = (void **)operator new[](v38, 0x4B677844u, PagedPool);
      v323 = v37;
      v39 = v307;
      if ( !v307 )
        goto LABEL_41;
      v40 = 8LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
        v40 = -1LL;
      v28 = (void **)operator new[](v40, 0x4B677844u, PagedPool);
      v325 = v28;
    }
    else
    {
      v33 = -1073741675;
    }
  }
  v39 = v307;
LABEL_41:
  if ( v33 < 0 || !v30 || !v324 || !v340 || !v37 || !v28 && v39 )
  {
    operator delete[](v30);
    operator delete[](v324);
    operator delete[](v340);
    operator delete[](v37);
    operator delete[](v28);
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
    v44[3] = v17;
    v44[4] = a2->NumAllocations;
    if ( v33 >= 0 )
    {
      v33 = -1073741801;
      v44[5] = -1073741801LL;
    }
    else
    {
      v44[5] = v33;
    }
    WdLogEvent5_WdWarning(v44);
    return (unsigned int)v33;
  }
  v15 = v307;
LABEL_58:
  v355 = v30;
  v361 = v30;
  v51 = 0;
  v319 = 0;
  if ( a2->NumAllocations )
  {
    do
    {
      v37[v51] = 0LL;
      if ( v15 )
        v28[v51] = 0LL;
      ++v51;
    }
    while ( v51 < a2->NumAllocations );
    v319 = v51;
  }
  v316 = 0LL;
  v329 = 0LL;
  LODWORD(DriverAllocations) = 0;
  v317 = 0LL;
  v315[0] = 0;
  v53 = 0LL;
  v337 = 0LL;
  v321 = 0;
  v342 = 0LL;
  _MOCKDRIVERSTATE_PER_PLANE::_MOCKDRIVERSTATE_PER_PLANE((_MOCKDRIVERSTATE_PER_PLANE *)v365);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v367, 0LL, 0);
  if ( v15 )
  {
    v54 = 96LL * a2->NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v54) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v54 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v30, pAllocationInfo, v54);
  }
  else
  {
    memmove(v30, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  }
  v335 = -1;
  v344 = -1;
  if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
  {
    *((_QWORD *)v30 + 2) = a14;
    *((_DWORD *)v30 + 6) = a15;
  }
  v57 = 0;
  v309 = 0;
  if ( a2->NumAllocations )
  {
    v58 = (unsigned int)a2->Flags;
    while ( 1 )
    {
      v59 = v57;
      if ( (v58 & 0x800) != 0 )
      {
        v60 = 96LL * v57;
        v56 = *(unsigned int *)&v30[v60 + 32];
        v58 = (unsigned int)v56;
        if ( (v56 & 1) != 0 )
        {
          v335 = *(_DWORD *)&v30[v60 + 28];
          v344 = v335;
          if ( !v17[21].pPrivateDriverData )
          {
            v58 = (unsigned int)v56 & 0xFFFFFFFE;
            *(_DWORD *)&v30[v60 + 32] = v58;
          }
        }
        if ( (v58 & 2) != 0 )
        {
          v75 = WdLogNewEntry5_WdWarning(v58, v57, v56);
          *(_QWORD *)(v75 + 24) = v17;
          *(_QWORD *)(v75 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v75);
          LODWORD(DriverAllocations) = -1073741811;
          v317 = 3221225485LL;
          goto LABEL_107;
        }
      }
      v61 = &v30[96 * v57];
      if ( (*((_DWORD *)v61 + 8) & 1) != 0 )
      {
        pPrivateDriverData = v17[21].pPrivateDriverData;
        v332 = pPrivateDriverData;
        if ( !pPrivateDriverData )
          goto LABEL_110;
        v63 = pPrivateDriverData[337];
        if ( !v63 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v63 + 16)) )
        {
          v64 = WdLogNewEntry5_WdAssertion(v63, v59);
          *(_QWORD *)(v64 + 24) = 4888LL;
          WdLogEvent5_WdAssertion(v64);
        }
        v58 = *(unsigned int *)(*((_QWORD *)v332 + 337) + 80LL);
        PrivateDriverDataSize = v17[21].PrivateDriverDataSize;
        if ( (_DWORD)v58 != PrivateDriverDataSize )
        {
          v66 = WdLogNewEntry5_WdAssertion(v58, v59);
          *(_QWORD *)(v66 + 24) = 4894LL;
          WdLogEvent5_WdAssertion(v66);
          PrivateDriverDataSize = v17[21].PrivateDriverDataSize;
        }
        if ( *((_DWORD *)v61 + 7) >= PrivateDriverDataSize )
        {
LABEL_110:
          v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v59, v56);
          v78[3] = v17;
          v78[4] = *(unsigned int *)&v30[96 * v309 + 28];
          v78[5] = -1073741811LL;
          WdLogEvent5_WdWarning(v78);
          LODWORD(DriverAllocations) = -1073741811;
          v317 = 3221225485LL;
          v77 = 0LL;
          goto LABEL_404;
        }
        if ( !v17[4].AllocationPriority
          && !v308
          && (*((_BYTE *)DXGPROCESS::GetCurrent() + 347) & 0x20) == 0
          && !ADAPTER_DISPLAY::IsVidPnSourceOwner(
                *((DXGADAPTER ***)v332 + 337),
                (const struct DXGDEVICE *)v17,
                *((_DWORD *)v61 + 7)) )
        {
          v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v59, v56);
          LODWORD(DriverAllocations) = -1071775744;
          v317 = -1071775744LL;
          v74[3] = -1071775744LL;
          v74[4] = v17;
          v74[5] = *(unsigned int *)&v30[96 * v309 + 28];
          v74[6] = v309;
          goto LABEL_109;
        }
        v57 = v309;
      }
      v67 = *((_DWORD *)v61 + 8);
      if ( (v67 & 2) != 0 && (v67 & 1) == 0 )
      {
        v79 = WdLogNewEntry5_WdWarning(v58, v59, v56);
        *(_QWORD *)(v79 + 24) = -1073741811LL;
        *(_QWORD *)(v79 + 32) = v17;
        WdLogEvent5_WdWarning(v79);
        LODWORD(DriverAllocations) = -1073741811;
        v317 = 3221225485LL;
        v77 = 0LL;
        goto LABEL_404;
      }
      v58 = (unsigned int)a2->Flags;
      if ( (v58 & 0x10000) != 0 )
      {
        v68 = v58 & 0x20;
        if ( (v58 & 0x20) != 0 && !*((_QWORD *)v61 + 1) || (v58 & 0x20000) != 0 && !*((_QWORD *)v61 + 1) )
        {
          v80 = WdLogNewEntry5_WdError(v58, v68);
          *(_QWORD *)(v80 + 24) = v17;
          *(_QWORD *)(v80 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v80);
          LODWORD(DriverAllocations) = -1073741811;
          v317 = 3221225485LL;
          v77 = 0LL;
          goto LABEL_404;
        }
        v69 = *((_QWORD *)v61 + 1);
        v56 = a2->pStandardAllocation->ExistingHeapData.Size;
        v345 = v56;
        if ( (v58 & 0x20) != 0 && v69 != (v69 & 0xFFFFFFFFFFFFF000uLL) )
          break;
        if ( v56 != (v56 & 0xFFFFFFFFFFFFF000uLL) )
          break;
      }
      v309 = ++v57;
      if ( v57 >= a2->NumAllocations )
        goto LABEL_102;
    }
    v81 = WdLogNewEntry5_WdError(v58, v68);
    *(_QWORD *)(v81 + 24) = v69;
    *(_QWORD *)(v81 + 32) = v345;
    WdLogEvent5_WdError(v81);
    LODWORD(DriverAllocations) = -1073741811;
    v317 = 3221225485LL;
    v77 = 0LL;
    goto LABEL_404;
  }
LABEL_102:
  for ( i = 0; ; i = v310 + 1 )
  {
    v319 = i;
    v310 = i;
    if ( i >= a2->NumAllocations )
      break;
    v71 = i;
    v72 = 96LL * i;
    v73 = *(unsigned int *)&v30[v72 + 24];
    if ( (unsigned int)v73 > 0x7FFFFFFF )
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v73, v72, v56);
      v74[3] = -1073741811LL;
      goto LABEL_109;
    }
    if ( *(_QWORD *)&v30[v72 + 16] && (_DWORD)v73 )
    {
      if ( v307 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
        v73 = (unsigned int)(2 * v73);
      v82 = (char *)operator new[](v73, 0x4B677844u, PagedPool);
      v323[v71] = v82;
      if ( !v82 )
      {
        LODWORD(DriverAllocations) = -1073741801;
        v317 = 3221225495LL;
        v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v83, 0LL, v56);
        v74[3] = v17;
        v74[4] = a2->NumAllocations;
        v74[5] = -1073741801LL;
        goto LABEL_109;
      }
      if ( v307 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
      {
        v84 = &v82[*(unsigned int *)&v30[96 * v71 + 24]];
        v325[v71] = v84;
        v85 = *(unsigned int *)&v30[96 * v71 + 24];
        v86 = *(char **)&v30[96 * v71 + 16];
        if ( &v86[v85] < v86 || (unsigned __int64)&v86[v85] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v84, v86, v85);
      }
    }
    else
    {
      v323[i] = 0LL;
      if ( v307 )
        v325[i] = 0LL;
    }
  }
  if ( v307 )
  {
    if ( a2->pStandardAllocation )
    {
      v87 = a2->PrivateDriverDataSize;
      if ( v87 )
      {
        v91 = operator new[](v87, 0x4B677844u, PagedPool);
        Src = v91;
        if ( !v91 )
        {
          LODWORD(DriverAllocations) = -1073741801;
          v317 = 3221225495LL;
          v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v89, v88, v90);
          v74[3] = v17;
          v74[4] = a2->PrivateDriverDataSize;
          v74[5] = -1073741801LL;
LABEL_109:
          WdLogEvent5_WdWarning(v74);
          v77 = 0LL;
          goto LABEL_404;
        }
        v92 = a2->PrivateDriverDataSize;
        pStandardAllocation = a2->pStandardAllocation;
        if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v92) < pStandardAllocation
          || (unsigned __int64)pStandardAllocation + v92 > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v91, pStandardAllocation, v92);
      }
    }
  }
  LODWORD(DriverAllocations) = DXGDEVICE::OpenResourceObject(
                                 (ADAPTER_RENDER **)v17,
                                 a2,
                                 (struct _D3DDDI_ALLOCATIONINFO2 *)v30,
                                 v308,
                                 v359,
                                 v328,
                                 (struct DXGRESOURCEREFERENCE *)&v342,
                                 v315,
                                 v333,
                                 (struct DXGAUTOMUTEX *)v365,
                                 (struct DXGAUTOPUSHLOCK *)v367);
  v317 = (unsigned int)DriverAllocations;
  if ( (DriverAllocations & 0x80000000) != 0LL )
  {
LABEL_107:
    v77 = 0LL;
    goto LABEL_404;
  }
  v53 = v342;
  v337 = v342;
  if ( v342 && (*((_DWORD *)v342 + 1) & 1) == 0 && (*(_DWORD *)&a2->Flags & 2) != 0 )
  {
    v95 = (_QWORD *)WdLogNewEntry5_WdError(v94, v76);
    v95[3] = v17;
    v95[4] = v53;
    v95[5] = -1073741811LL;
    WdLogEvent5_WdError(v95);
    LODWORD(DriverAllocations) = -1073741811;
    v317 = 3221225485LL;
    v77 = 0LL;
    goto LABEL_404;
  }
  v96 = v315[0];
  v311 = v315[0];
  DriverAllocations = a2->NumAllocations;
  v97 = *(_QWORD *)(v17->Size + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v97 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v97 + 168)) )
    {
      v100 = WdLogNewEntry5_WdAssertion(v99, v98);
      *(_QWORD *)(v100 + 24) = 4553LL;
      WdLogEvent5_WdAssertion(v100);
    }
    v96 = v311;
  }
  if ( v53 )
  {
    if ( !v96 )
    {
      for ( j = *((_QWORD *)v53 + 3); j; DriverAllocations = (unsigned int)(DriverAllocations + 1) )
        j = *(_QWORD *)(j + 64);
    }
    if ( (unsigned int)DriverAllocations > 0x10 )
    {
      v102 = 8 * DriverAllocations;
      if ( !is_mul_ok(DriverAllocations, 8uLL) )
        v102 = -1LL;
      v106 = operator new[](v102, 0x4B677844u, PagedPool);
      if ( !v106 )
      {
        v107 = (_QWORD *)WdLogNewEntry5_WdWarning(v104, v103, v105);
        v107[3] = v17;
        v107[4] = DriverAllocations;
        v107[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v107);
        LODWORD(DriverAllocations) = -1073741801;
        v317 = 3221225495LL;
        v77 = v329;
        v316 = v329;
        goto LABEL_404;
      }
      if ( !v311 )
      {
        v108 = (void *)*((_QWORD *)v53 + 8);
        if ( v108 )
          operator delete[](v108);
      }
      *((_QWORD *)v53 + 8) = v106;
    }
  }
  v352 = 0LL;
  LODWORD(DriverAllocations) = DXGDEVICE::CreateAllocationObjects(
                                 (DXGDEVICE *)v17,
                                 a2->NumAllocations,
                                 &v329,
                                 v53,
                                 &v352);
  v317 = (unsigned int)DriverAllocations;
  v77 = v329;
  v316 = v329;
  if ( (DriverAllocations & 0x80000000) == 0LL )
  {
    if ( v352 )
    {
      DXGDEVICE::AppendAllocationListToResourceOrDevice((DXGDEVICE *)v17, v53, v329, v352);
      v321 = 1;
    }
    v110 = a2->Flags;
    if ( (*(_WORD *)&v110 & 0x800) != 0 )
    {
      if ( v335 != -1 )
      {
        *(_DWORD *)(*((_QWORD *)v53 + 7) + 12LL) |= 0x40u;
        *((_DWORD *)v53 + 1) |= 8u;
        *(_DWORD *)(*((_QWORD *)v53 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v53 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
      }
      goto LABEL_177;
    }
    if ( (*(_WORD *)&v110 & 0x1000) != 0 )
    {
      if ( !v333 )
        goto LABEL_177;
      v111 = *(_DWORD *)v333;
      if ( (*(_DWORD *)v333 & 0x80u) != 0 )
      {
        v112 = WdLogNewEntry5_WdAssertion(v109, v76);
        *(_QWORD *)(v112 + 24) = 5184LL;
        WdLogEvent5_WdAssertion(v112);
        v111 = *(_DWORD *)v333;
      }
      if ( (v111 & 0x100) == 0 )
      {
LABEL_177:
        if ( v318 )
          goto LABEL_197;
        memset(v324, 0, 88LL * a2->NumAllocations);
        v114 = v308;
        if ( !v308 )
        {
          DriverAllocations = (unsigned int)DXGDEVICE::CreateDriverAllocations(
                                              (DXGDEVICE *)v17,
                                              a2,
                                              (struct _D3DDDI_ALLOCATIONINFO2 *)v30,
                                              v324,
                                              v77,
                                              v53,
                                              v323,
                                              v325,
                                              Src,
                                              v333,
                                              v307,
                                              v360);
          v317 = DriverAllocations;
          v114 = 0;
        }
        if ( (DriverAllocations & 0x80000000) != 0LL )
          goto LABEL_403;
        LODWORD(DriverAllocations) = DXGDEVICE::OpenAllocations(
                                       (DXGDEVICE *)v17,
                                       a2,
                                       (struct _D3DDDI_ALLOCATIONINFO2 *)v30,
                                       v77,
                                       v340,
                                       v323,
                                       v325,
                                       (D3DKMT_CREATESTANDARDALLOCATION *)Src,
                                       v307,
                                       v114,
                                       a8,
                                       v350,
                                       v349);
        v317 = (unsigned int)DriverAllocations;
        if ( (DriverAllocations & 0x80000000) != 0LL )
          goto LABEL_403;
        v115 = a2->Flags;
        v116 = v324;
        Value = v324->Flags.Value;
        if ( (*(_BYTE *)&v115 & 8) != 0 )
        {
          Value |= 0x4000008u;
          v324->Flags.Value = Value;
          v115 = a2->Flags;
        }
        if ( (*(_WORD *)&v115 & 0x100) != 0 )
        {
          Value = Value & 0xFEFFFFFB | 0x1000000;
        }
        else
        {
          if ( (*(_WORD *)&v115 & 0x200) == 0 )
          {
LABEL_189:
            v118 = Value & 0xFFFFF7FF;
            v119 = Value | 0x800;
            if ( (*(_DWORD *)&a2->Flags & 0x8000) == 0 )
              v119 = v118;
            v116->Flags.Value = v119;
            LODWORD(DriverAllocations) = DXGDEVICE::CreateVidMmAllocations(
                                           (DXGDEVICE *)v17,
                                           a2,
                                           (struct _D3DDDI_ALLOCATIONINFO2 *)v30,
                                           v116,
                                           v77,
                                           v333,
                                           v308,
                                           v343);
            v317 = (unsigned int)DriverAllocations;
            if ( (DriverAllocations & 0x80000000) != 0LL )
              goto LABEL_403;
            if ( v334 )
            {
              v120 = v17->Size;
              v121 = *(_QWORD *)(v120 + 648);
              v76 = *(_QWORD *)(v120 + 640);
              v343 = v77;
              v122 = 0;
              if ( a2->NumAllocations )
              {
                v123 = v343;
                v124 = v121;
                v125 = v76;
                v126 = v334;
                do
                {
                  v127 = *(_DWORD *)&a2->Flags >> 5;
                  LOBYTE(v127) = (*(_DWORD *)&a2->Flags & 0x20) != 0;
                  *(_QWORD *)&v126[8 * v122] = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v125 + 8) + 632LL))(
                                                 v124,
                                                 *((_QWORD *)v123 + 3),
                                                 v127);
                  v123 = (struct COREDEVICEACCESS *)*((_QWORD *)v123 + 8);
                  ++v122;
                }
                while ( v122 < a2->NumAllocations );
                v17 = (struct _DXGK_ALLOCATIONINFO *)v330;
                LODWORD(DriverAllocations) = v317;
                v53 = v337;
                v30 = (char *)v322;
              }
            }
LABEL_197:
            if ( v315[0] )
            {
              if ( v53 )
              {
                if ( (*((_DWORD *)v53 + 1) & 1) != 0 )
                {
                  v128 = *((_QWORD *)v53 + 7);
                  if ( !*(_DWORD *)(v128 + 24) && (*(_DWORD *)(v128 + 12) & 8) == 0 )
                  {
                    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v364, v76);
                    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v364);
                    if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
                    {
                      v131 = WdLogNewEntry5_WdAssertion(v130, v129);
                      *(_QWORD *)(v131 + 24) = 5318LL;
                      WdLogEvent5_WdAssertion(v131);
                    }
                    Global = DXGGLOBAL::GetGlobal(v130, v129);
                    v134 = (struct _DXGK_ALLOCATIONINFO *)*((_QWORD *)v53 + 7);
                    v330 = (unsigned __int64)v134;
                    CurrentThread = KeGetCurrentThread();
                    if ( *((struct _KTHREAD **)Global + 33) != CurrentThread )
                    {
                      v136 = WdLogNewEntry5_WdAssertion(CurrentThread, v132);
                      *(_QWORD *)(v136 + 24) = 1100LL;
                      WdLogEvent5_WdAssertion(v136);
                      v134 = (struct _DXGK_ALLOCATIONINFO *)v330;
                    }
                    Object = 0;
                    v137 = HMGRTABLE::AllocHandle((char *)Global + 288, v134, 2LL);
                    v140 = *((_QWORD *)v53 + 7);
                    *(_DWORD *)(v140 + 24) = v137;
                    if ( !*(_DWORD *)(*((_QWORD *)v53 + 7) + 24LL) )
                    {
                      v141 = WdLogNewEntry5_WdWarning(v140, v138, v139);
                      *(_QWORD *)(v141 + 24) = v17;
                      *(_QWORD *)(v141 + 32) = -1073741801LL;
                      WdLogEvent5_WdWarning(v141);
                      LODWORD(DriverAllocations) = -1073741801;
                      v317 = 3221225495LL;
                      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v364, v142);
                      v77 = v329;
                      v316 = v329;
                      goto LABEL_404;
                    }
                    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v364, v138);
                    v316 = v329;
                  }
                }
              }
              DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
                (DXGAUTOPUSHLOCKEXCLUSIVE *)v368,
                (struct DXGPUSHLOCK *const)&v17[2].Flags);
              hAllocation = v17->hAllocation;
              if ( hAllocation )
              {
                hAllocation[4] = v53;
                hAllocation = v17->hAllocation;
              }
              *((_QWORD *)v53 + 5) = hAllocation;
              v17->hAllocation = v53;
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v368);
            }
            v144 = 0;
            if ( v53 )
              v144 = *((_DWORD *)v53 + 4);
            a2->hResource = v144;
            v145 = a2->Flags;
            if ( ((*(_BYTE *)&v145 & 2) != 0 || v308) && (*(_BYTE *)&v145 & 0x40) == 0 )
              v146 = *(_DWORD *)(*((_QWORD *)v53 + 7) + 24LL);
            else
              v146 = 0;
            a2->hGlobalShare = v146;
            if ( v307 )
            {
              v147 = 0LL;
              v319 = 0;
              v77 = v316;
              for ( k = v316; ; k = (struct DXGALLOCATION *)*((_QWORD *)k + 8) )
              {
                v149 = a2->NumAllocations;
                if ( (unsigned int)v147 >= v149 )
                  break;
                v76 = (ULONG64)a2->pAllocationInfo + 96 * (unsigned int)v147;
                if ( v76 >= MmUserProbeAddress )
                  v76 = MmUserProbeAddress;
                *(_DWORD *)v76 = *((_DWORD *)k + 4);
                v147 = (unsigned int)(v147 + 1);
                v319 = v147;
              }
              if ( (DriverAllocations & 0x80000000) != 0LL )
                goto LABEL_404;
            }
            else
            {
              v147 = 0LL;
              v77 = v316;
              v150 = v316;
              v149 = a2->NumAllocations;
              if ( v149 )
              {
                do
                {
                  v76 = 96LL * (unsigned int)v147;
                  *(D3DKMT_HANDLE *)((char *)&a2->pAllocationInfo->hAllocation + v76) = *((_DWORD *)v150 + 4);
                  v147 = (unsigned int)(v147 + 1);
                  v150 = (struct DXGALLOCATION *)*((_QWORD *)v150 + 8);
                  v149 = a2->NumAllocations;
                }
                while ( (unsigned int)v147 < v149 );
              }
            }
            v319 = 0;
            v341 = v77;
            if ( v149 )
            {
              do
              {
                v76 = *(unsigned int *)(*((_QWORD *)v77 + 6) + 4LL);
                if ( (v76 & 1) != 0 )
                {
                  LODWORD(DriverAllocations) = DXGDEVICE::AddPrimaryAllocation((DXGDEVICE *)v17, v77);
                  v317 = (unsigned int)DriverAllocations;
                  if ( (DriverAllocations & 0x80000000) != 0LL )
                    goto LABEL_403;
                }
                else if ( (v76 & 2) != 0 )
                {
                  DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v17, ((unsigned int)v76 >> 6) & 0xF, v77, 0, 1u);
                }
                ++v319;
                v77 = (struct DXGALLOCATION *)*((_QWORD *)v77 + 8);
                v341 = v77;
              }
              while ( v319 < a2->NumAllocations );
            }
            if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
            {
              if ( a2->pPrivateRuntimeData )
              {
                v151 = *((_QWORD *)v53 + 7);
                if ( *(_QWORD *)(v151 + 104) )
                {
                  v156 = v336;
                  if ( *(_DWORD *)(v151 + 112) != v336->PrivateRuntimeDataSize )
                  {
                    LODWORD(DriverAllocations) = -1073741811;
                    v317 = 3221225485LL;
                    v155 = (_QWORD *)WdLogNewEntry5_WdWarning(v151, v76, v147);
                    v155[3] = v17;
                    v155[4] = a2->PrivateRuntimeDataSize;
                    v155[5] = *(unsigned int *)(*((_QWORD *)v53 + 7) + 112LL);
                    goto LABEL_402;
                  }
                }
                else
                {
                  *(_QWORD *)(*((_QWORD *)v53 + 7) + 104LL) = operator new[](
                                                                a2->PrivateRuntimeDataSize,
                                                                0x4B677844u,
                                                                PagedPool);
                  v154 = *((_QWORD *)v53 + 7);
                  if ( !*(_QWORD *)(v154 + 104) )
                  {
                    LODWORD(DriverAllocations) = -1073741801;
                    v317 = 3221225495LL;
                    v155 = (_QWORD *)WdLogNewEntry5_WdWarning(v154, v152, v153);
                    v155[3] = v17;
                    v155[4] = v336->PrivateRuntimeDataSize;
                    v155[5] = -1073741801LL;
                    goto LABEL_402;
                  }
                  v156 = v336;
                  *(_DWORD *)(v154 + 112) = v336->PrivateRuntimeDataSize;
                }
                v157 = v307;
                if ( v307 )
                {
                  PrivateRuntimeDataSize = v156->PrivateRuntimeDataSize;
                  pPrivateRuntimeData = (char *)a2->pPrivateRuntimeData;
                  v160 = *(void **)(*((_QWORD *)v53 + 7) + 104LL);
                  if ( &pPrivateRuntimeData[PrivateRuntimeDataSize] < pPrivateRuntimeData
                    || (unsigned __int64)&pPrivateRuntimeData[PrivateRuntimeDataSize] > MmUserProbeAddress )
                  {
                    *(_BYTE *)MmUserProbeAddress = 0;
                  }
                  memmove(v160, pPrivateRuntimeData, PrivateRuntimeDataSize);
                }
                else
                {
                  memmove(*(void **)(*((_QWORD *)v53 + 7) + 104LL), a2->pPrivateRuntimeData, a2->PrivateRuntimeDataSize);
                }
                if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
                {
                  if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
                  {
                    LODWORD(DriverAllocations) = CheckNoKmdAccessPrivateData(
                                                   v156->PrivateRuntimeDataSize,
                                                   *(_DWORD **)(*((_QWORD *)v53 + 7) + 104LL),
                                                   0xFF000004);
                    v317 = (unsigned int)DriverAllocations;
                    if ( (DriverAllocations & 0x80000000) != 0LL )
                      goto LABEL_403;
                  }
                }
              }
              else
              {
                v157 = v307;
              }
              if ( a2->pStandardAllocation )
              {
                v161 = a2->PrivateDriverDataSize;
                if ( v161 )
                {
                  v162 = *((_QWORD *)v53 + 7);
                  if ( *(_QWORD *)(v162 + 120) )
                  {
                    if ( *(_DWORD *)(v162 + 128) != v161 )
                    {
                      LODWORD(DriverAllocations) = -1073741811;
                      v317 = 3221225485LL;
                      v155 = (_QWORD *)WdLogNewEntry5_WdWarning(v162, v76, v147);
                      v155[3] = v17;
                      v155[4] = a2->PrivateDriverDataSize;
                      v155[5] = *(unsigned int *)(*((_QWORD *)v53 + 7) + 128LL);
                      v155[6] = 5559LL;
                      goto LABEL_402;
                    }
                  }
                  else
                  {
                    *(_QWORD *)(*((_QWORD *)v53 + 7) + 120LL) = operator new[](v161, 0x4B677844u, PagedPool);
                    v165 = *((_QWORD *)v53 + 7);
                    if ( !*(_QWORD *)(v165 + 120) )
                    {
                      LODWORD(DriverAllocations) = -1073741801;
                      v317 = 3221225495LL;
                      v155 = (_QWORD *)WdLogNewEntry5_WdWarning(v165, v163, v164);
                      v155[3] = v17;
                      v155[4] = v336->PrivateDriverDataSize;
                      v155[5] = -1073741801LL;
                      goto LABEL_402;
                    }
                    v166 = v336;
                    *(_DWORD *)(v165 + 128) = v336->PrivateDriverDataSize;
                    v161 = v166->PrivateDriverDataSize;
                  }
                  v167 = Src;
                  if ( !v157 )
                    v167 = a2->pStandardAllocation;
                  memmove(*(void **)(*((_QWORD *)v53 + 7) + 120LL), v167, v161);
                  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
                  {
                    if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
                    {
                      LODWORD(DriverAllocations) = CheckNoKmdAccessPrivateData(
                                                     a2->PrivateDriverDataSize,
                                                     *(_DWORD **)(*((_QWORD *)v53 + 7) + 120LL),
                                                     0xFF000001);
                      v317 = (unsigned int)DriverAllocations;
                      if ( (DriverAllocations & 0x80000000) != 0LL )
                        goto LABEL_403;
                    }
                  }
                }
              }
              v168 = 0LL;
              v319 = 0;
              v77 = v316;
              v169 = v316;
              v341 = v316;
              if ( a2->NumAllocations )
              {
                v170 = (char *)v322;
                while ( 1 )
                {
                  v341 = v168;
                  v171 = &v170[96 * (_QWORD)v168];
                  if ( *((_QWORD *)v171 + 2) )
                  {
                    v172 = operator new[](*((unsigned int *)v171 + 6), 0x4B677844u, PagedPool);
                    v175 = *((_QWORD *)v169 + 6);
                    *(_QWORD *)(v175 + 32) = v172;
                    v176 = *(void **)(*((_QWORD *)v169 + 6) + 32LL);
                    if ( !v176 )
                    {
                      LODWORD(DriverAllocations) = -1073741801;
                      v317 = 3221225495LL;
                      v155 = (_QWORD *)WdLogNewEntry5_WdWarning(v175, v173, v174);
                      v155[3] = v17;
                      v155[4] = v319 + 1;
                      v155[5] = *((unsigned int *)v322 + 24 * (_QWORD)v341 + 6);
                      v155[6] = -1073741801LL;
                      goto LABEL_402;
                    }
                    if ( !v307 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
                      v177 = (const void *)*((_QWORD *)v171 + 2);
                    else
                      v177 = v325[(_QWORD)v341];
                    memmove(v176, v177, *((unsigned int *)v171 + 6));
                    *(_DWORD *)(*((_QWORD *)v169 + 6) + 40LL) = *((_DWORD *)v171 + 6);
                    v170 = (char *)v322;
                  }
                  v168 = (struct DXGALLOCATION *)(v319 + 1);
                  v319 = (unsigned int)v168;
                  v169 = (struct DXGALLOCATION *)*((_QWORD *)v169 + 8);
                  v341 = v169;
                  if ( (unsigned int)v168 >= a2->NumAllocations )
                  {
                    v30 = (char *)v322;
                    goto LABEL_279;
                  }
                }
              }
              v30 = (char *)v322;
            }
            else
            {
LABEL_279:
              v77 = v316;
            }
            v330 = *(_QWORD *)(v17->Size + 16);
            if ( !*(_BYTE *)(v330 + 209) || v308 )
            {
LABEL_348:
              v227 = a2->Flags;
              if ( (*(_WORD *)&v227 & 0x800) != 0 )
              {
                memset(&v366.Width, 0, 40);
                v77 = v316;
                v366.hAllocation = *(HANDLE *)(*((_QWORD *)v316 + 6) + 16LL);
                v228 = ADAPTER_RENDER::DdiDescribeAllocation((ADAPTER_RENDER *)v17->Size, &v366);
                DriverAllocations = v228;
                v317 = v228;
                if ( v228 < 0 )
                {
                  v232 = (_QWORD *)WdLogNewEntry5_WdWarning(v230, v229, v231);
                  v232[3] = DriverAllocations;
                  v232[4] = v17;
                  v232[5] = *((unsigned int *)v77 + 4);
                  v232[6] = v77;
                  WdLogEvent5_WdWarning(v232);
                  goto LABEL_404;
                }
                if ( v366.Format == D3DDDIFMT_UNKNOWN && v366.Height != 1 )
                {
                  v241 = (_QWORD *)WdLogNewEntry5_WdWarning(v230, v229, v231);
                  v241[3] = -1073741811LL;
                  v241[4] = v17;
                  v241[5] = v366.Height;
                  WdLogEvent5_WdWarning(v241);
                  LODWORD(DriverAllocations) = -1073741811;
                  v317 = 3221225485LL;
                  goto LABEL_404;
                }
                v242 = *((_QWORD *)v77 + 5);
                v243 = *(unsigned int *)(*(_QWORD *)(v242 + 56) + 12LL);
                if ( (v243 & 0x20) == 0 )
                {
                  v244 = WdLogNewEntry5_WdAssertion(v243, v242);
                  *(_QWORD *)(v244 + 24) = 5953LL;
                  WdLogEvent5_WdAssertion(v244);
                  v242 = *((_QWORD *)v77 + 5);
                }
                v245 = *(_QWORD *)(v242 + 56);
                *(_DWORD *)(v245 + 208) = v366.Width;
                *(_DWORD *)(v245 + 212) = v366.Height;
                *(_DWORD *)(v245 + 216) = v366.Format;
                v246 = v336->Flags;
                if ( (v17[21].Size & 0x10000000000LL) != 0 )
                {
                  if ( (*(_DWORD *)&v246 & 0x20000) != 0 )
                  {
                    v248 = (void *)*((_QWORD *)v30 + 1);
                    v339[0] = 0LL;
                    v249 = ObReferenceObjectByHandle(v248, 0x20000u, MmSectionObjectType, v307, v339, 0LL);
                    v251 = v339[0];
                    *(PVOID *)(v245 + 192) = v339[0];
                    DriverAllocations = v249;
                    v317 = v249;
                    if ( v249 < 0 )
                    {
                      v209 = WdLogNewEntry5_WdError(v251, v250);
                      v210 = *((_QWORD *)v30 + 1);
LABEL_340:
                      *(_QWORD *)(v209 + 24) = v210;
                      *(_QWORD *)(v209 + 32) = DriverAllocations;
                      WdLogEvent5_WdError(v209);
                      goto LABEL_403;
                    }
                    *(_DWORD *)(v245 + 12) |= 0x400u;
                  }
                }
                else
                {
                  v247 = v316;
                  if ( (*(_BYTE *)&v246 & 0x20) == 0 )
                  {
                    *(_QWORD *)(v245 + 192) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v17->Size + 640) + 8LL)
                                                                                        + 688LL))(
                                                *(_QWORD *)(v17->Size + 648),
                                                *((_QWORD *)v316 + 3));
                    *(_DWORD *)(v245 + 12) |= 0x400u;
                  }
                  *(_QWORD *)(v245 + 224) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v17->Size + 640)
                                                                                                  + 8LL)
                                                                                      + 760LL))(
                                              *(_QWORD *)(v17->Size + 648),
                                              *((_QWORD *)v247 + 3));
                }
                v252 = v335;
                *(_DWORD *)(v245 + 232) = v335;
                if ( v252 != -1 )
                {
                  *(_DWORD *)(v245 + 12) |= 0x40u;
                  *(_DWORD *)(v245 + 12) ^= ((unsigned __int8)*(_DWORD *)(v245 + 12) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 0x80;
                }
              }
              else if ( (*(_WORD *)&v227 & 0x1000) != 0 )
              {
                v77 = v316;
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v17->Size + 640) + 8LL) + 768LL))(
                  *(_QWORD *)(v17->Size + 648),
                  *((_QWORD *)v316 + 3),
                  *((_QWORD *)v333 + 43));
LABEL_381:
                v76 = v17->Size;
                v339[0] = (PVOID)v76;
                if ( (*(_DWORD *)(*(_QWORD *)(v76 + 16) + 2060LL) & 0x40) == 0 )
                  goto LABEL_404;
                v253 = v333;
                if ( !v333 || (*(_DWORD *)v333 & 0x200) != 0 )
                  goto LABEL_404;
                memset(&v370, 0, 56);
                memset(&v370.DriverProtection, 0, 40);
                v370.Protection.Value = 1LL;
                v254 = 0;
                if ( a2->NumAllocations )
                {
                  while ( 1 )
                  {
                    v255 = (*((_DWORD *)v77 + 18) >> 12) & 0x3F;
                    if ( *((_DWORD *)v253 + 4) == 4 )
                    {
                      v256 = *(_DWORD *)(*((_QWORD *)v253 + 3) + 12LL);
                      if ( ((v256 - 1) & 0xFFFFFFFC) != 0 || v256 == 2 )
                      {
                        if ( DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(v17->Size + 16)) )
                          v255 = -1;
                        v76 = (ULONG64)v339[0];
                      }
                    }
                    if ( v318 )
                    {
                      Current = DXGPROCESS::GetCurrent();
                      v258 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v17->Size + 16) + 4240LL),
                               *((_DWORD *)Current + 106),
                               (const struct DXGDEVICE *)v17,
                               0,
                               *((_DWORD *)v77 + 24),
                               &v370);
                    }
                    else
                    {
                      LOBYTE(Object) = 0;
                      v258 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(*(_QWORD *)(v76 + 640) + 8LL) + 800LL))(
                               *(_QWORD *)(v76 + 648),
                               0LL,
                               *((_QWORD *)v77 + 3),
                               &v370,
                               Object,
                               v255);
                    }
                    LODWORD(DriverAllocations) = v258;
                    v317 = (unsigned int)v258;
                    if ( v258 < 0 )
                      break;
                    v262 = DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(v17->Size + 16));
                    BaseAddress = v370.BaseAddress;
                    if ( v262 )
                      BaseAddress = v370.VirtualAddress;
                    v370.BaseAddress = BaseAddress;
                    v370.VirtualAddress = 0LL;
                    ++v254;
                    v77 = (struct DXGALLOCATION *)*((_QWORD *)v77 + 8);
                    v76 = (ULONG64)v339[0];
                    v253 = v333;
                    if ( v254 >= a2->NumAllocations )
                      goto LABEL_403;
                  }
                  v155 = (_QWORD *)WdLogNewEntry5_WdWarning(v260, v259, v261);
                  v155[3] = (int)DriverAllocations;
LABEL_402:
                  WdLogEvent5_WdWarning(v155);
                }
LABEL_403:
                v77 = v316;
                goto LABEL_404;
              }
              v77 = v316;
              goto LABEL_381;
            }
            HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)&v17->SupportedReadSegmentSet);
            if ( !HostProcess )
            {
              v180 = WdLogNewEntry5_WdError(v179, v178);
              *(_QWORD *)(v180 + 24) = -1073741823LL;
              WdLogEvent5_WdError(v180);
              LODWORD(DriverAllocations) = -1073741823;
              v317 = 3221225473LL;
              goto LABEL_404;
            }
            v346 = 0LL;
            if ( !DXGDEVICE::UmdManagesResidency((DXGDEVICE *)v17)
              || !v333
              || (v181 = *((_DWORD *)v333 + 4) - 1, v320 = 1, v181 > 2) )
            {
              v320 = 0;
            }
            v182 = a2->Flags;
            if ( (*(_BYTE *)&v182 & 2) != 0 )
              v332 = *(void **)(*((_QWORD *)v53 + 7) + 104LL);
            else
              v332 = 0LL;
            v183 = Src;
            if ( v307 )
            {
              v184 = v325;
              if ( (*(_DWORD *)&v182 & 0x10000) == 0 )
                goto LABEL_297;
            }
            else
            {
              v183 = a2->pStandardAllocation;
            }
            v184 = v323;
LABEL_297:
            if ( (*(_BYTE *)&v182 & 2) != 0 )
              v185 = *((_DWORD *)v53 + 5);
            else
              v185 = 0;
            v313 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v330 + 4240),
                     HostProcess,
                     (unsigned int)v17[5].pPrivateDriverData,
                     v185,
                     a2,
                     (struct _D3DDDI_ALLOCATIONINFO2 *)v30,
                     v184,
                     v183,
                     v332,
                     v307,
                     v320,
                     &v346);
            if ( !v346 )
            {
              v188 = WdLogNewEntry5_WdError(v187, v186);
              LODWORD(DriverAllocations) = v313;
              *(_QWORD *)(v188 + 24) = v313;
              WdLogEvent5_WdError(v188);
              v317 = v313;
              goto LABEL_404;
            }
            v76 = (ULONG64)v346;
            v334 = v346;
            if ( !v53 || (*((_DWORD *)v53 + 5) = *((_DWORD *)v346 + 1), v189 = (unsigned int)a2->Flags, (v189 & 2) == 0) )
            {
LABEL_311:
              v332 = 0LL;
              v351 = 0LL;
              if ( (*(_DWORD *)&a2->Flags & 2) != 0 && v53 )
              {
                v332 = *(void **)(*((_QWORD *)v53 + 7) + 136LL);
                v351 = v332;
              }
              v192 = v77;
              v193 = 0;
              if ( a2->NumAllocations )
              {
                v194 = v334;
                do
                {
                  v195 = &v194[72 * v193];
                  *((_DWORD *)v192 + 24) = *((_DWORD *)v195 + 4);
                  *((_DWORD *)v192 + 25) = *((_DWORD *)v195 + 4);
                  v196 = a2->Flags;
                  if ( (*(_BYTE *)&v196 & 2) != 0 && (*(_DWORD *)&v196 & 0x20020) != 0 )
                    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v192 + 5) + 56LL) + 200LL) = *((_DWORD *)v195 + 7);
                  else
                    *((_DWORD *)v192 + 32) = *((_DWORD *)v195 + 7);
                  *((_DWORD *)v192 + 33) = *((_DWORD *)v194 + 3);
                  if ( v194[12] & 1 | ((v194[12] & 2) != 0) )
                    *((_QWORD *)v192 + 14) = *(_QWORD *)&v30[96 * v193 + 8];
                  *(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^ *((_DWORD *)v195 + 6)) & 1;
                  *(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^ *((_DWORD *)v195 + 6)) & 2;
                  *(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^ *((_DWORD *)v195 + 6)) & 4;
                  *(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^ *((_DWORD *)v195 + 6)) & 8;
                  *(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^ *((_DWORD *)v195 + 6)) & 0x20;
                  *(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^ *((_DWORD *)v195 + 6)) & 0x800;
                  *(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^ *((_DWORD *)v195 + 6)) & 0x1000;
                  *(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^ *((_DWORD *)v195 + 6)) & 0x2000;
                  *(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^ *((_DWORD *)v195 + 6)) & 0x4000;
                  *(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^ *((_DWORD *)v195 + 6)) & 0x40000;
                  *(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^ *((_DWORD *)v195 + 6)) & 0x80000;
                  *(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^ *((_DWORD *)v195 + 6)) & 0x100000;
                  *(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) |= 0x20000u;
                  if ( (*(_DWORD *)&v30[96 * v193 + 32] & 1) != 0 )
                  {
                    *(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) ^ (*(_DWORD *)&v30[96 * v193 + 28] << 6)) & 0x3C0;
                    if ( v17[21].pPrivateDriverData != *(void **)(v17->Size + 16) )
                      *(_DWORD *)(*((_QWORD *)v192 + 6) + 4LL) |= 4u;
                  }
                  ++v193;
                  v192 = (struct DXGALLOCATION *)*((_QWORD *)v192 + 8);
                }
                while ( v193 < a2->NumAllocations );
                v27 = 0;
                v76 = (ULONG64)v334;
              }
              if ( v313 < 0 )
              {
                LODWORD(DriverAllocations) = v313;
                v317 = (unsigned int)v313;
                goto LABEL_404;
              }
              v197 = 0;
              while ( 1 )
              {
                v314 = v197;
                v345 = (SIZE_T)v77;
                if ( v197 >= a2->NumAllocations )
                  break;
                v198 = v197;
                v199 = *(_DWORD *)(v76 + 72LL * v197 + 32);
                v200 = a2->Flags;
                if ( (*(_DWORD *)&v200 & 0x10000) != 0 )
                {
                  v330 = 96LL * v197;
                  v201 = (*(_BYTE *)&v200 & 0x20) == 0;
                  v202 = *(struct _DXGK_ALLOCATIONINFO **)&v355[v330 + 8];
                  if ( v201 )
                  {
                    v353 = 0LL;
                    v206 = ObReferenceObjectByHandle(v202, 0x20000u, MmSectionObjectType, v307, &v353, 0LL);
                    DriverAllocations = v206;
                    v317 = v206;
                    if ( v206 < 0 )
                    {
                      v209 = WdLogNewEntry5_WdError(v208, v207);
                      v210 = *(_QWORD *)((char *)v322 + v330 + 8);
                      goto LABEL_340;
                    }
                    v330 = (unsigned __int64)&v324[v198];
                    v211 = v353;
                    v212 = ProcessSectionAttributes(v353, (struct _DXGK_ALLOCATIONINFO *)v330);
                    DriverAllocations = v212;
                    v317 = v212;
                    if ( v212 < 0 )
                    {
                      v215 = (_QWORD *)WdLogNewEntry5_WdError(v214, v213);
                      v215[3] = v17;
                      v215[4] = DriverAllocations;
                      v215[5] = 5826LL;
                      WdLogEvent5_WdError(v215);
                      ObfDereferenceObject(v211);
                      goto LABEL_403;
                    }
                    v216 = *(_QWORD *)(*((_QWORD *)v77 + 5) + 56LL);
                    *(_DWORD *)(v216 + 12) |= 0x400u;
                    v217 = *(_DWORD *)(v216 + 12);
                    *(_QWORD *)(v216 + 192) = v211;
                    v218 = (struct _DXGK_ALLOCATIONINFO *)v330;
                    *(_DWORD *)(v216 + 204) = *(_DWORD *)(v330 + 12);
                    *(_DWORD *)(v216 + 12) = v217 ^ ((unsigned __int16)v217 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v218->Flags.0 << 9)) & 0x800;
                  }
                  else
                  {
                    v330 = *(_QWORD *)&v355[v330 + 8];
                    if ( (v17[21].Size & 0x10000000000LL) == 0 )
                    {
                      LODWORD(DriverAllocations) = ProcessSysMemAttributes(v202, v199, &v324[v197]);
                      v317 = (unsigned int)DriverAllocations;
                      if ( (DriverAllocations & 0x80000000) != 0LL )
                        goto LABEL_403;
                      v202 = (struct _DXGK_ALLOCATIONINFO *)v330;
                    }
                    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
                    {
                      v203 = *(_QWORD *)(*((_QWORD *)v77 + 5) + 56LL);
                      *(_DWORD *)(v203 + 12) |= 0x200u;
                      v204 = *(_DWORD *)(v203 + 12);
                      *(_QWORD *)(v203 + 192) = v202;
                      v205 = &v324[v198];
                      *(_DWORD *)(v203 + 204) = v205->Alignment;
                      *(_DWORD *)(v203 + 12) = v204 ^ ((unsigned __int16)v204 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v205->Flags.0 << 9)) & 0x800;
                    }
                  }
                }
                v219 = v314;
                v330 = v314;
                v30 = (char *)v322;
                v220 = (struct COREDEVICEACCESS *)((char *)v322 + 96 * v314);
                v343 = v220;
                if ( (*((_DWORD *)v220 + 8) & 1) != 0 )
                {
                  v347 = 0LL;
                  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v354, v77);
                  DXGALLOCATIONREFERENCE::MoveAssign(&v347, v354);
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v354);
                  v221 = (unsigned int)v17[5].pPrivateDriverData;
                  v222 = DXGPROCESS::GetCurrent();
                  Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v17->Size + 16) + 4240LL),
                               *((_DWORD *)v222 + 106),
                               v221,
                               0,
                               (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                               1u,
                               (const struct DXGALLOCATIONREFERENCE *)&v347,
                               0LL,
                               0LL);
                  DriverAllocations = Resident;
                  v317 = Resident;
                  if ( Resident < 0 )
                  {
                    v226 = WdLogNewEntry5_WdError(v225, v224);
                    *(_QWORD *)(v226 + 24) = DriverAllocations;
                    WdLogEvent5_WdError(v226);
                    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v347);
                    break;
                  }
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v347);
                  v219 = v330;
                  v220 = v343;
                }
                *(_QWORD *)(*((_QWORD *)v77 + 6) + 16LL) = *((_QWORD *)v77 + 6);
                v233 = (_OWORD *)*((_QWORD *)v77 + 6);
                v234 = &v334[72 * v219];
                *((_QWORD *)v77 + 15) = *((_QWORD *)v234 + 4);
                v233[4] = *(_OWORD *)(v234 + 40);
                v233[5] = *(_OWORD *)(v234 + 56);
                v233[6] = *(_OWORD *)(v234 + 72);
                v235 = *((unsigned int *)v220 + 6);
                if ( !v307 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
                {
                  v236 = *((unsigned int *)v220 + 6);
                  v328 = (struct _DXGSHAREDALLOCOBJECT *)(8 * v219);
                  v239 = v235;
                  v237 = *(void **)((char *)v323 + (_QWORD)v328);
                  v238 = (char *)*((_QWORD *)v220 + 2);
                }
                else
                {
                  v236 = (unsigned int)v235;
                  v328 = (struct _DXGSHAREDALLOCOBJECT *)(8 * v219);
                  v237 = v325[v219];
                  v238 = (char *)*((_QWORD *)v220 + 2);
                  if ( (unsigned __int64)&v238[v236] > MmUserProbeAddress || &v238[v236] <= v238 )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  v239 = v236;
                }
                memmove(v238, v237, v239);
                if ( v332 )
                {
                  if ( !v307 || (v240 = v325, (*(_DWORD *)&a2->Flags & 0x10000) != 0) )
                    v240 = v323;
                  memmove(*((void **)v332 - 2), *(const void **)((char *)v240 + (_QWORD)v328), v236);
                  v332 = *(void **)v332;
                  v351 = v332;
                }
                v30 = (char *)v322;
                v76 = (ULONG64)v334;
                v197 = v314 + 1;
                v77 = (struct DXGALLOCATION *)*((_QWORD *)v77 + 8);
              }
              operator delete[](v346);
              if ( (DriverAllocations & 0x80000000) != 0LL )
                goto LABEL_403;
              goto LABEL_348;
            }
            v190 = *(_DWORD *)(v76 + 8);
            if ( (v189 & 0x40) != 0 )
            {
              if ( v190 )
              {
                v191 = WdLogNewEntry5_WdAssertion(v189, v76);
                *(_QWORD *)(v191 + 24) = 5683LL;
LABEL_309:
                WdLogEvent5_WdAssertion(v191);
                v76 = (ULONG64)v334;
              }
            }
            else if ( !v190 )
            {
              v191 = WdLogNewEntry5_WdAssertion(v189, v76);
              *(_QWORD *)(v191 + 24) = 5687LL;
              goto LABEL_309;
            }
            *(_DWORD *)(*((_QWORD *)v53 + 7) + 28LL) = *(_DWORD *)(v76 + 8);
            goto LABEL_311;
          }
          Value |= 0x800004u;
        }
        v116->Flags.Value = Value;
        goto LABEL_189;
      }
    }
    else
    {
      if ( !v53 )
        goto LABEL_177;
      v113 = *((_QWORD *)v53 + 7);
      if ( !v113 || (*(_BYTE *)(v113 + 12) & 0x60) != 0x60 )
        goto LABEL_177;
    }
    *((_DWORD *)v53 + 1) |= 8u;
    goto LABEL_177;
  }
LABEL_404:
  DXGAUTOMUTEX::ReleaseIfAcquired((DXGAUTOMUTEX *)v365, v76);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v367);
  if ( (DriverAllocations & 0x80000000) == 0LL )
  {
    if ( (unsigned int)Feature_1679598905__private_IsEnabledDeviceUsage() )
    {
      if ( v77 )
      {
        LODWORD(v328) = 0;
        if ( a2->NumAllocations )
        {
          v265 = 0;
          v266 = v316;
          do
          {
            v267 = *(char **)&v17->SupportedReadSegmentSet;
            v339[0] = v267;
            LODWORD(v328) = *((_DWORD *)v266 + 4);
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v267 + 208));
            v268 = ((unsigned int)v328 >> 6) & 0xFFFFFF;
            if ( v268 < *((_DWORD *)v267 + 64) )
            {
              v269 = *((_QWORD *)v267 + 30);
              if ( (((unsigned int)v328 >> 25) & 0x60) == (*(_BYTE *)(v269 + 16LL * v268 + 8) & 0x60)
                && (*(_DWORD *)(v269 + 16LL * v268 + 8) & 0x1F) != 0 )
              {
                v270 = 2LL * (((unsigned int)v328 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v269 + 16LL * (((unsigned int)v328 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
                {
                  v271 = WdLogNewEntry5_WdAssertion(((unsigned int)v328 >> 25) & 0x60, v269);
                  *(_QWORD *)(v271 + 24) = 222LL;
                  WdLogEvent5_WdAssertion(v271);
                  v269 = *((_QWORD *)v339[0] + 30);
                }
                *(_DWORD *)(v269 + 8 * v270 + 8) &= ~0x2000u;
                v267 = (char *)v339[0];
              }
              if ( v268 < *((_DWORD *)v267 + 64) )
                *(_DWORD *)(*((_QWORD *)v267 + 30) + 16LL * v268 + 8) &= ~0x4000u;
            }
            *((_QWORD *)v267 + 27) = 0LL;
            ExReleasePushLockExclusiveEx(v267 + 208, 0LL);
            KeLeaveCriticalRegion();
            ++v265;
            v266 = (struct DXGALLOCATION *)*((_QWORD *)v266 + 8);
          }
          while ( v265 < a2->NumAllocations );
          LODWORD(DriverAllocations) = v317;
          v53 = v337;
        }
      }
    }
    if ( v315[0] )
    {
      v272 = *(_QWORD *)&v17->SupportedReadSegmentSet;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v272 + 208, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v275 = *(_DWORD *)(v272 + 232);
          if ( v275 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v273, &EventBlockThread, v274, v275);
        }
        ExAcquirePushLockExclusiveEx(v272 + 208, 0LL);
      }
      *(_QWORD *)(v272 + 216) = KeGetCurrentThread();
      v276 = *((_DWORD *)v53 + 4);
      v277 = (v276 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v277 < *(_DWORD *)(v272 + 256) )
      {
        v278 = *(_QWORD *)(v272 + 240);
        if ( ((v276 >> 25) & 0x60) == (*(_BYTE *)(v278 + 16 * v277 + 8) & 0x60)
          && (*(_DWORD *)(v278 + 16 * v277 + 8) & 0x1F) != 0 )
        {
          v279 = 2LL * ((v276 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v278 + 16LL * ((v276 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v280 = WdLogNewEntry5_WdAssertion((v276 >> 25) & 0x60, v278);
            *(_QWORD *)(v280 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v280);
            v278 = *(_QWORD *)(v272 + 240);
          }
          *(_DWORD *)(v278 + 8 * v279 + 8) &= ~0x2000u;
        }
      }
      if ( (unsigned int)Feature_1679598905__private_IsEnabledDeviceUsage() )
      {
        v281 = (*((_DWORD *)v53 + 4) >> 6) & 0xFFFFFF;
        if ( v281 < *(_DWORD *)(v272 + 256) )
          *(_DWORD *)(*(_QWORD *)(v272 + 240) + 16LL * v281 + 8) &= ~0x4000u;
      }
      *(_QWORD *)(v272 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v272 + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    goto LABEL_482;
  }
  if ( v77 )
  {
    v282 = 0;
    if ( a2->NumAllocations )
    {
      do
      {
        v283 = *((_QWORD *)v77 + 6);
        if ( *(_QWORD *)(v283 + 8) && !v308 )
        {
          if ( (v284 = *(_DWORD *)(v283 + 4), (v284 & 1) != 0) && !v17[4].AllocationPriority || (v284 & 2) != 0 )
          {
            if ( (v284 & 0x10) != 0 )
            {
              v285 = WdLogNewEntry5_WdAssertion(v264, v283);
              *(_QWORD *)(v285 + 24) = 6158LL;
              WdLogEvent5_WdAssertion(v285);
              v283 = *((_QWORD *)v77 + 6);
            }
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v17->Size + 640) + 8LL) + 200LL))(
              *(_QWORD *)(v17->Size + 648),
              *(_QWORD *)(v283 + 8));
            *(_DWORD *)(*((_QWORD *)v77 + 6) + 4LL) |= 0x10u;
          }
        }
        ++v282;
        v77 = (struct DXGALLOCATION *)*((_QWORD *)v77 + 8);
      }
      while ( v282 < a2->NumAllocations );
      LODWORD(DriverAllocations) = v317;
    }
    v77 = v316;
  }
  if ( v315[0] )
  {
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v356, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign(&v342, v356);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v356);
    DXGDEVICE::RemoveResourceFromDeviceList((DXGDEVICE *)v17, v53);
  }
  else
  {
    if ( !v77 )
      goto LABEL_482;
    if ( v321 )
      DXGDEVICE::RemoveAllocationsWithoutDestroy((DXGDEVICE *)v17, v53, v77, a2->NumAllocations);
    if ( !v53 || *((_QWORD *)v53 + 7) )
    {
      v286 = v77;
      do
      {
        v287 = v286;
        v288 = (_QWORD *)((char *)v286 + 64);
        v286 = (struct DXGALLOCATION *)*((_QWORD *)v286 + 8);
        *((_QWORD *)v287 + 7) = 0LL;
        *v288 = 0LL;
        if ( v53 )
        {
          v289 = *((_QWORD *)v53 + 7);
          if ( v289 )
          {
            if ( *(_QWORD *)(*((_QWORD *)v287 + 6) + 48LL) )
            {
              DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v289 + 32));
              --*(_DWORD *)(*((_QWORD *)v53 + 7) + 132LL);
              v290 = *((_QWORD *)v287 + 6) + 48LL;
              v291 = *(_QWORD *)v290;
              v292 = *(_QWORD **)(*((_QWORD *)v287 + 6) + 56LL);
              if ( *(_QWORD *)(*(_QWORD *)v290 + 8LL) != v290 || *v292 != v290 )
                __fastfail(3u);
              *v292 = v291;
              *(_QWORD *)(v291 + 8) = v292;
              *(_QWORD *)(*((_QWORD *)v287 + 6) + 48LL) = 0LL;
              v293 = *((_QWORD *)v53 + 7) + 32LL;
              *(_QWORD *)(v293 + 8) = 0LL;
              ExReleasePushLockExclusiveEx(v293, 0LL);
              KeLeaveCriticalRegion();
            }
          }
        }
        DXGDEVICE::DestroyAllocations((DXGDEVICE *)v17, 0LL, 0, v287, 0LL, 0);
      }
      while ( v286 );
      v77 = v316;
    }
    if ( !v53 )
      goto LABEL_482;
    v294 = *((_QWORD *)v53 + 7);
    if ( !v294 )
    {
      DXGDEVICE::DestroyAllocations((DXGDEVICE *)v17, v53, 0, v77, 0LL, 0);
      goto LABEL_482;
    }
    v295 = 0;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v294 + 32));
    v296 = *((_DWORD *)v53 + 1);
    if ( (v296 & 0x10) == 0 )
    {
      *((_DWORD *)v53 + 1) = v296 | 0x10;
      v295 = 1;
    }
    v297 = *((_QWORD *)v53 + 7) + 32LL;
    *(_QWORD *)(v297 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v297, 0LL);
    KeLeaveCriticalRegion();
    if ( !v295 )
      goto LABEL_482;
    DXGDEVICE::RemoveResourceFromDeviceList((DXGDEVICE *)v17, v53);
    v298 = DXGPROCESS::GetCurrent();
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v369,
      (struct _KTHREAD **)v298);
    DXGPROCESS::GetResourceUnsafe((__int64)v298, (DXGRESOURCEREFERENCE *)&v358, *((_DWORD *)v53 + 4));
    if ( v358 )
    {
      v299 = *(_DWORD *)(v358 + 16);
      v300 = (v299 >> 6) & 0xFFFFFF;
      if ( v300 < *((_DWORD *)v298 + 64) )
      {
        v301 = *((_QWORD *)v298 + 30);
        v302 = *(_DWORD *)(v301 + 16LL * v300 + 8);
        if ( ((v299 >> 25) & 0x60) == (v302 & 0x60) && (v302 & 0x2000) == 0 && (v302 & 0x1F) != 0 )
          *(_DWORD *)(v301 + 16LL * ((v299 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v357, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v342, v357);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v357);
    }
    else
    {
      v295 = 0;
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v358);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v369);
    if ( !v295 )
      goto LABEL_482;
  }
  DXGDEVICE::DestroyResource((DXGDEVICE *)v17, v53, 0LL, 0);
LABEL_482:
  v303 = v323;
  if ( a2->NumAllocations )
  {
    do
      operator delete[](v303[v27++]);
    while ( v27 < a2->NumAllocations );
  }
  operator delete[](Src);
  if ( a2->NumAllocations > 5 )
  {
    operator delete[](v322);
    operator delete[](v324);
    operator delete[](v340);
    operator delete[](v303);
    operator delete[](v325);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v367);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v365);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v342);
  v304 = ListEntry;
  if ( ListEntry )
  {
    v305 = v363 + 1472;
    ++*(_DWORD *)(v363 + 1500);
    if ( ExQueryDepthSList((PSLIST_HEADER)v305) < *(_WORD *)(v305 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v305, v304);
    }
    else
    {
      ++*(_DWORD *)(v305 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *))(v305 + 56))(v304);
    }
  }
  return (unsigned int)DriverAllocations;
}
