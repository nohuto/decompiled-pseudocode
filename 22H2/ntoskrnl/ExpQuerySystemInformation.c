/*
 * XREFs of ExpQuerySystemInformation @ 0x1406C9E30
 * Callers:
 *     NtQuerySystemInformationEx @ 0x1406C7760 (NtQuerySystemInformationEx.c)
 *     NtQuerySystemInformation @ 0x1406C9CB0 (NtQuerySystemInformation.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x1402056D0 (PoEnergyEstimationEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KeEnterCriticalRegionThread @ 0x14025ABE0 (KeEnterCriticalRegionThread.c)
 *     MmQueryMemoryListInformation @ 0x14026EA10 (MmQueryMemoryListInformation.c)
 *     PsGetCurrentProcess @ 0x1402BBC90 (PsGetCurrentProcess.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     KeEnterCriticalRegion @ 0x1402D19A0 (KeEnterCriticalRegion.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     MmGetHighestPhysicalPage @ 0x1402D3AC8 (MmGetHighestPhysicalPage.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1402D6DE0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140307180 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x140316278 (ExpGetSystemEmulationBasicInformation.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140316414 (ExCpuSetResourceManagerAccessCheck.c)
 *     KeQueryCycleTimeStatsProcessor @ 0x1403166E0 (KeQueryCycleTimeStatsProcessor.c)
 *     KeQueryBootTimeValues @ 0x140317088 (KeQueryBootTimeValues.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14031AE60 (MmQuerySystemWorkingSetInformation.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14031CAE4 (PoGetPerfStateAndParkingInfo.c)
 *     KeQueryGroupAffinity @ 0x140322B10 (KeQueryGroupAffinity.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x140327F1C (ExpGetSystemEmulationProcessorInformation.c)
 *     MmGetLowestPhysicalPage @ 0x14032CF4C (MmGetLowestPhysicalPage.c)
 *     VslIsSecureKernelRunning @ 0x14032D1FC (VslIsSecureKernelRunning.c)
 *     MmGetSharedCommit @ 0x14033B124 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x14033B134 (MmGetResidentAvailablePages.c)
 *     VslGetNestedPageProtectionFlags @ 0x140340410 (VslGetNestedPageProtectionFlags.c)
 *     KeFlushProcessWriteBuffers @ 0x140343D14 (KeFlushProcessWriteBuffers.c)
 *     MmGetAvailablePages @ 0x140344570 (MmGetAvailablePages.c)
 *     MmGetTotalCommittedPages @ 0x140344590 (MmGetTotalCommittedPages.c)
 *     MmGetTotalCommitLimit @ 0x1403445B0 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x1403445D0 (MmGetPeakCommitment.c)
 *     MmGetProcessPartitionId @ 0x1403445F0 (MmGetProcessPartitionId.c)
 *     KeQueryActiveProcessorCountEx @ 0x140344620 (KeQueryActiveProcessorCountEx.c)
 *     ExpGetSystemProcessorInformation @ 0x1403446E0 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140344ADC (ExpGetSystemBasicInformation.c)
 *     PoGetIdleTimes @ 0x140344D4C (PoGetIdleTimes.c)
 *     KeGetProcessorIndexFromNumber @ 0x140344E90 (KeGetProcessorIndexFromNumber.c)
 *     KeQueryActiveGroupCount @ 0x1403544B0 (KeQueryActiveGroupCount.c)
 *     KeIsUserCetAllowed @ 0x14035AE38 (KeIsUserCetAllowed.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x140360960 (KeGetRecommendedSharedDataAlignment.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     PsQueryCpuQuotaInformation @ 0x1403CF8B4 (PsQueryCpuQuotaInformation.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeIsCetCapable @ 0x1403F2480 (KeIsCetCapable.c)
 *     ZwFilterBootOption @ 0x1403FB6A0 (ZwFilterBootOption.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     HvlQueryActiveProcessors @ 0x1404F1E90 (HvlQueryActiveProcessors.c)
 *     HvlQueryProcessorTopologyCount @ 0x1404F2090 (HvlQueryProcessorTopologyCount.c)
 *     VslIsTrustletRunning @ 0x1404FC7A4 (VslIsTrustletRunning.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FCD30 (VslQuerySecureKernelProfileInformation.c)
 *     KeQuerySecureSpeculationInformation @ 0x14051B448 (KeQuerySecureSpeculationInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140522428 (KeGetAffinitizedInterruptsInfo.c)
 *     MmEnumerateBadPages @ 0x14056469C (MmEnumerateBadPages.c)
 *     PpmCapturePerformanceDistribution @ 0x140576B5C (PpmCapturePerformanceDistribution.c)
 *     PsQueryActivityModerationUserSettings @ 0x140581310 (PsQueryActivityModerationUserSettings.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140597420 (SeQueryTrustedPlatformModuleInformation.c)
 *     ExpGetLookasideInformation @ 0x1405B1BC0 (ExpGetLookasideInformation.c)
 *     ExGetBigPoolInfo @ 0x1405B369C (ExGetBigPoolInfo.c)
 *     ExpQueryModuleInformation @ 0x1405ED940 (ExpQueryModuleInformation.c)
 *     PsLookupProcessByProcessId @ 0x140625CA0 (PsLookupProcessByProcessId.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ExpGetProcessInformation @ 0x14063E980 (ExpGetProcessInformation.c)
 *     SeCodeIntegrityQueryPolicyInformation @ 0x14065F160 (SeCodeIntegrityQueryPolicyInformation.c)
 *     ExGetSessionPoolTagInformation @ 0x14066070C (ExGetSessionPoolTagInformation.c)
 *     CmQueryFeatureConfigurationSections @ 0x1406842DC (CmQueryFeatureConfigurationSections.c)
 *     ExIsRestrictedCaller @ 0x140686630 (ExIsRestrictedCaller.c)
 *     PsQueryFullProcessImageName @ 0x14068D51C (PsQueryFullProcessImageName.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x14068F6B8 (KeBuildLogicalProcessorSystemInformation.c)
 *     SeCodeIntegrityQueryInformation @ 0x1406904A0 (SeCodeIntegrityQueryInformation.c)
 *     ExpGetSystemFlushInformation @ 0x1406904F0 (ExpGetSystemFlushInformation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14069061C (ExpGetSystemFirmwareTableInformation.c)
 *     PfSnQueryPrefetcherInformation @ 0x1406920B4 (PfSnQueryPrefetcherInformation.c)
 *     IoQuerySystemDeviceName @ 0x14069663C (IoQuerySystemDeviceName.c)
 *     SeSecureBootQueryInformation @ 0x14069F214 (SeSecureBootQueryInformation.c)
 *     IoQueryLowPriorityIoInformation @ 0x1406A11A8 (IoQueryLowPriorityIoInformation.c)
 *     MmGetPageFileInformation @ 0x1406A1644 (MmGetPageFileInformation.c)
 *     SmQueryStoreInformation @ 0x1406A5798 (SmQueryStoreInformation.c)
 *     ExpReadComPlusPackage @ 0x1406A5E50 (ExpReadComPlusPackage.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406BF5C0 (ExpQuerySystemPerformanceInformation.c)
 *     PsWow64GetSupportedArchitectures @ 0x1406C74B8 (PsWow64GetSupportedArchitectures.c)
 *     WbDispatchOperation @ 0x1406C7BE4 (WbDispatchOperation.c)
 *     ExHandleSPCall2 @ 0x1406C8260 (ExHandleSPCall2.c)
 *     MmGetNumberOfPhysicalPages @ 0x1406C8500 (MmGetNumberOfPhysicalPages.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     PfQuerySuperfetchInformation @ 0x1406CD5D0 (PfQuerySuperfetchInformation.c)
 *     ExpQueryNumaProcessorMap @ 0x1406FDCF0 (ExpQueryNumaProcessorMap.c)
 *     ExReleaseTimeRefreshLock @ 0x1407095C0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407095E4 (ExAcquireTimeRefreshLock.c)
 *     ExGetPoolTagInfo @ 0x14070C78C (ExGetPoolTagInfo.c)
 *     SeQueryHSTIResults @ 0x140772D90 (SeQueryHSTIResults.c)
 *     ExpQueryChannelInformation @ 0x14077A830 (ExpQueryChannelInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     CmQueryRegistryQuotaInformation @ 0x14077C89C (CmQueryRegistryQuotaInformation.c)
 *     IoGetConfigurationInformation @ 0x140781A10 (IoGetConfigurationInformation.c)
 *     ExQueryBootEntropyInformation @ 0x14079EFC4 (ExQueryBootEntropyInformation.c)
 *     ExpQueryModuleInformationEx @ 0x1407B1ACC (ExpQueryModuleInformationEx.c)
 *     KeQueryCpuSetInformation @ 0x1407C6FA8 (KeQueryCpuSetInformation.c)
 *     ExpQueryMemoryTopologyInformation @ 0x1407C8350 (ExpQueryMemoryTopologyInformation.c)
 *     ExpQueryInterruptSteeringInformation @ 0x1407CF4C4 (ExpQueryInterruptSteeringInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x1407CFE44 (ExpGetSystemPlatformBinary.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407D22D8 (ExpGetSystemWriteConstraintInformation.c)
 *     HvlQueryEnlightenmentInfo @ 0x1407D2DDC (HvlQueryEnlightenmentInfo.c)
 *     IoQueryVhdBootInformation @ 0x1407D33E4 (IoQueryVhdBootInformation.c)
 *     ExSystemExceptionFilter @ 0x1407D4E30 (ExSystemExceptionFilter.c)
 *     CmQuerySingleFeatureConfiguration @ 0x14086B1FC (CmQuerySingleFeatureConfiguration.c)
 *     HvlQueryDetailInfo @ 0x14088E378 (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x14088E494 (HvlQueryVsmProtectionInfo.c)
 *     KeQuerySpeculationControlInformation @ 0x1408BB998 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x1408BCCD8 (KeQueryKvaShadowInformation.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C4920 (MmGetSessionMappedViewInformation.c)
 *     ObQueryRefTraceInformation @ 0x1408DE044 (ObQueryRefTraceInformation.c)
 *     PsRootSiloInformation @ 0x140905C44 (PsRootSiloInformation.c)
 *     SeSecurityModelQueryInformation @ 0x14091CDBC (SeSecurityModelQueryInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937EBC (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x140949FB0 (ExGetSessionBigPoolInformation.c)
 *     ExpGetDeviceDataInformation @ 0x14094A1C8 (ExpGetDeviceDataInformation.c)
 *     ExpGetHandleInformation @ 0x14094A3D4 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x14094A454 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x14094A4D4 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x14094A554 (ExpGetObjectInformation.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x14094A5E4 (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpIsIumEncryptionKeyAvailable @ 0x14094A640 (ExpIsIumEncryptionKeyAvailable.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094A6EC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x14094AC64 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14094AD5C (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryNumaProximityNode @ 0x14094AF0C (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094B060 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQuerySingleModuleInformation @ 0x14094B270 (ExpQuerySingleModuleInformation.c)
 *     ExpCovQueryInformation @ 0x14095782C (ExpCovQueryInformation.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     VfGetVerifierInformation @ 0x1409ECAC4 (VfGetVerifierInformation.c)
 *     VfGetVerifierInformationEx @ 0x1409ECB8C (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x1409F248C (BgkQueryBootGraphicsInformation.c)
 */

NTSTATUS __fastcall ExpQuerySystemInformation(
        unsigned int a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        unsigned int Length,
        unsigned int *a6)
{
  unsigned int v8; // r14d
  unsigned __int8 v9; // r12
  unsigned int v10; // esi
  ULONG v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // r9
  __int16 v14; // r10
  __int64 v15; // r8
  unsigned int v16; // r11d
  USHORT v17; // cx
  ULONG ActiveProcessorCount; // eax
  USHORT ActiveGroupCount; // ax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  int SystemBasicInformation; // eax
  _KPROCESS *v23; // rax
  unsigned __int16 v24; // di
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // cx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  signed int BootGraphicsInformation; // esi
  _KPROCESS *v33; // rax
  unsigned __int16 v34; // di
  unsigned __int16 v35; // cx
  _KPROCESS *CurrentProcess; // rax
  unsigned __int16 ProcessPartitionId; // ax
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // cx
  unsigned __int16 v40; // cx
  __int64 v41; // rcx
  unsigned int v42; // esi
  unsigned int v43; // eax
  _DWORD *v44; // r13
  unsigned int v45; // ecx
  unsigned __int64 v46; // r14
  unsigned int v47; // ecx
  _DWORD *PoolWithTag; // rax
  _DWORD *v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  unsigned __int64 v54; // rsi
  char v55; // r14
  char *v56; // rdx
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS v58; // edi
  NTSTATUS result; // eax
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  __int64 v61; // rcx
  signed int ModuleInformation; // eax
  int v63; // ecx
  unsigned int v64; // eax
  int v65; // ecx
  int v66; // esi
  unsigned int v67; // edx
  unsigned int v68; // ebx
  int v69; // ecx
  int v70; // edx
  __int64 *v71; // r12
  __int64 v72; // r8
  __int64 *v73; // r12
  __int64 v74; // rdx
  unsigned int i; // edi
  _DWORD *v76; // rdx
  __int64 v77; // rdi
  __int64 v78; // rcx
  _OWORD *v79; // rdi
  __int64 v80; // rcx
  _OWORD *v81; // rax
  __int64 v82; // rsi
  __int64 v83; // rcx
  _OWORD *v84; // rax
  __int64 *v85; // r12
  __int64 v86; // rcx
  __int64 v87; // r8
  unsigned int v88; // r8d
  int v89; // r9d
  unsigned int v90; // eax
  unsigned int v91; // r13d
  unsigned __int16 j; // ax
  __int64 v93; // rcx
  _QWORD *v94; // rax
  unsigned int v95; // eax
  __int64 v96; // rcx
  unsigned int v97; // eax
  unsigned int v98; // r13d
  __int64 v99; // rdx
  _DWORD *PoolWithQuotaTag; // rdi
  int v101; // eax
  int v102; // ecx
  __int64 v103; // rax
  __int64 v104; // r8
  __int64 v105; // r9
  PVOID v106; // rdi
  unsigned int v107; // ecx
  PVOID v108; // r12
  void *v109; // rcx
  unsigned int v110; // eax
  unsigned int v111; // r13d
  __int64 v112; // rcx
  char v113; // cl
  __int16 NestedPageProtectionFlags; // ax
  char v115; // cl
  bool IsUserCetAllowed; // al
  int v117; // ecx
  unsigned __int8 IsKTMCommitCoordinator; // al
  int v119; // edx
  struct _DMA_ADAPTER *v120; // r14
  signed int CpuSetInformation; // eax
  struct _MDL *v122; // rax
  struct _MDL *v123; // r14
  int v124; // eax
  __int64 v125; // rax
  unsigned int Size; // [rsp+30h] [rbp-308h] BYREF
  int Size_4; // [rsp+34h] [rbp-304h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-300h] BYREF
  unsigned __int16 v129; // [rsp+3Ch] [rbp-2FCh]
  int v130; // [rsp+40h] [rbp-2F8h]
  unsigned int v131; // [rsp+44h] [rbp-2F4h]
  char v132[4]; // [rsp+48h] [rbp-2F0h] BYREF
  int v133; // [rsp+4Ch] [rbp-2ECh]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-2E8h] BYREF
  int v135[2]; // [rsp+58h] [rbp-2E0h]
  unsigned int *v136; // [rsp+60h] [rbp-2D8h]
  int v137; // [rsp+68h] [rbp-2D0h] BYREF
  char Data[4]; // [rsp+6Ch] [rbp-2CCh] BYREF
  unsigned __int16 v139; // [rsp+70h] [rbp-2C8h]
  ULONG v140; // [rsp+74h] [rbp-2C4h]
  unsigned int v141; // [rsp+78h] [rbp-2C0h]
  unsigned int v142; // [rsp+7Ch] [rbp-2BCh]
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType; // [rsp+80h] [rbp-2B8h]
  unsigned int v144; // [rsp+84h] [rbp-2B4h]
  unsigned int v145; // [rsp+88h] [rbp-2B0h] BYREF
  int v146; // [rsp+8Ch] [rbp-2ACh] BYREF
  int v147; // [rsp+90h] [rbp-2A8h]
  int v148; // [rsp+94h] [rbp-2A4h] BYREF
  unsigned int v149; // [rsp+98h] [rbp-2A0h] BYREF
  _QWORD *v150; // [rsp+A0h] [rbp-298h]
  PEPROCESS Process; // [rsp+A8h] [rbp-290h] BYREF
  PVOID v152; // [rsp+B0h] [rbp-288h] BYREF
  PVOID P; // [rsp+B8h] [rbp-280h] BYREF
  PVOID v154; // [rsp+C0h] [rbp-278h] BYREF
  __int64 v155; // [rsp+C8h] [rbp-270h]
  HANDLE Handle; // [rsp+D0h] [rbp-268h]
  HANDLE ProcessId[2]; // [rsp+D8h] [rbp-260h]
  char *v158; // [rsp+E8h] [rbp-250h]
  __int64 v159; // [rsp+F0h] [rbp-248h] BYREF
  int *v160; // [rsp+F8h] [rbp-240h]
  PVOID Object; // [rsp+100h] [rbp-238h] BYREF
  __int64 v162; // [rsp+108h] [rbp-230h]
  __int128 v163; // [rsp+110h] [rbp-228h] BYREF
  int v164; // [rsp+128h] [rbp-210h]
  _OWORD Src[27]; // [rsp+140h] [rbp-1F8h] BYREF

  v133 = a3;
  *(_QWORD *)v135 = a2;
  v142 = a1;
  v136 = a6;
  v8 = 0;
  LODWORD(NumberOfBytes) = 0;
  v159 = 0LL;
  v145 = 0;
  v146 = 0;
  v131 = 0;
  v137 = 0;
  v139 = 0;
  v129 = 0;
  v163 = 0LL;
  Process = 0LL;
  ProcNumber = 0;
  RelationshipType = RelationProcessorCore;
  v154 = 0LL;
  P = 0LL;
  v147 = 0;
  memset(Src, 0, sizeof(Src));
  Size_4 = 0;
  v9 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  if ( v9 )
  {
    switch ( a1 )
    {
      case 0xCu:
        v11 = 8;
        goto LABEL_6;
      case 0x23u:
      case 0x91u:
      case 0x93u:
      case 0x95u:
      case 0x9Eu:
      case 0xA3u:
      case 0xA9u:
      case 0xCAu:
      case 0xE3u:
        v10 = 1;
        v11 = 1;
        break;
      default:
        v11 = 4;
LABEL_6:
        v10 = 1;
        break;
    }
    ProbeForWrite((volatile void *)a4, Length, v11);
    if ( a6 )
    {
      v12 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v10 = 1;
  }
  Size = 0;
  RelationshipType = RelationAll;
  v13 = 0LL;
  v140 = 0;
  v14 = 0;
  v130 = 0;
  v129 = 0;
  v139 = 0;
  v155 = 0LL;
  Handle = 0LL;
  v162 = 0LL;
  v15 = 9LL;
  v141 = 9;
  v147 = 9;
  v16 = v142;
  switch ( v142 )
  {
    case 2u:
    case 0x21u:
    case 0x24u:
    case 0x41u:
      v130 = 0xFFFF;
      v129 = -1;
      v17 = -1;
      goto LABEL_15;
    case 8u:
    case 0x17u:
    case 0x2Au:
    case 0x3Du:
    case 0x49u:
    case 0x53u:
    case 0x64u:
    case 0x6Cu:
    case 0x8Du:
    case 0xA0u:
      if ( (unsigned int)v133 < 2 )
        return -1073741811;
      v130 = (unsigned __int16)**(_WORD **)v135;
      v129 = v130;
      ActiveGroupCount = KeQueryActiveGroupCount();
      v17 = v130;
      if ( (unsigned __int16)v130 >= ActiveGroupCount )
        return -1073741811;
LABEL_15:
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(v17);
      v13 = ActiveProcessorCount;
      v140 = ActiveProcessorCount;
      v14 = v130;
      v15 = v141;
      v16 = v142;
LABEL_34:
      v20 = (unsigned int)v133;
      goto LABEL_35;
    case 0x48u:
      v20 = (unsigned int)v133;
      if ( v133 != 4 )
        return -1073741811;
      v15 = (unsigned int)**(_DWORD **)v135;
      v147 = **(_DWORD **)v135;
      goto LABEL_35;
    case 0x6Bu:
      v20 = (unsigned int)v133;
      if ( (unsigned int)v133 < 4 )
        return -1073741811;
      RelationshipType = **(_DWORD **)v135;
      goto LABEL_35;
    case 0x79u:
      v20 = (unsigned int)v133;
      if ( (unsigned int)v133 >= 2 )
      {
        v139 = **(_WORD **)v135;
        if ( v139 < (unsigned __int16)KeNumberNodes )
          goto LABEL_35;
      }
      return -1073741811;
    case 0xA5u:
      v20 = (unsigned int)v133;
      if ( v133 )
      {
        if ( v133 != 8 )
          return -1073741811;
        v155 = **(_QWORD **)v135;
      }
      else
      {
        v155 = 0LL;
      }
LABEL_35:
      v21 = 0x140000000uLL;
      switch ( v16 )
      {
        case 0u:
        case 0x72u:
          if ( Length == 64 )
          {
            SystemBasicInformation = ExpGetSystemBasicInformation(a4);
            goto LABEL_639;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 1u:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemProcessorInformation(a4);
            Size = 12;
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 2u:
          if ( Length < 0x138 )
          {
            if ( a6 )
              *a6 = 344;
            return -1073741820;
          }
          v10 = 344;
          if ( Length <= 0x158 )
            v10 = Length;
          ExpQuerySystemPerformanceInformation(v13, (void *)a4, v10);
          goto LABEL_259;
        case 3u:
          if ( Length <= 0x30 )
          {
            KeQueryBootTimeValues((_QWORD *)Src + 1, (LARGE_INTEGER *)Src, &Src[2]);
            v53 = *((_QWORD *)PsGetCurrentServerSiloGlobals(v52, v51) + 133);
            *(_QWORD *)&Src[1] = *(_QWORD *)(v53 + 440);
            DWORD2(Src[1]) = *(_DWORD *)(v53 + 432);
            *((_QWORD *)&Src[2] + 1) = MEMORY[0xFFFFF780000003B0];
            memmove((void *)a4, Src, Length);
            goto LABEL_121;
          }
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 4u:
        case 0xAu:
        case 0x19u:
        case 0x1Du:
        case 0x60u:
          return -1073741822;
        case 5u:
        case 0x39u:
        case 0x94u:
          SystemBasicInformation = ExpGetProcessInformation((int *)a4, Length, &Size, 0LL, v16);
          goto LABEL_640;
        case 6u:
          return -1073741637;
        case 7u:
          if ( Length == 24 )
          {
            ConfigurationInformation = IoGetConfigurationInformation();
            *(_DWORD *)a4 = ConfigurationInformation->DiskCount;
            *(_DWORD *)(a4 + 4) = ConfigurationInformation->FloppyCount;
            *(_DWORD *)(a4 + 8) = ConfigurationInformation->CdRomCount;
            *(_DWORD *)(a4 + 12) = ConfigurationInformation->TapeCount;
            *(_DWORD *)(a4 + 16) = ConfigurationInformation->SerialCount;
            *(_DWORD *)(a4 + 20) = ConfigurationInformation->ParallelCount;
            goto LABEL_67;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 8u:
        case 0x8Du:
          v42 = 48;
          if ( v16 != 8 )
            v42 = 72;
          if ( Length && !(Length % v42) )
          {
            v131 = 0;
            v43 = 0;
            while ( 1 )
            {
              v141 = v43;
              if ( v43 >= (unsigned int)v13 )
                break;
              ProcNumber.Group = v14;
              ProcNumber.Number = v43;
              ProcNumber.Reserved = 0;
              v44 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              v45 = v131;
              if ( Length < v42 + v131 )
                goto LABEL_91;
              v131 += v42;
              PoGetIdleTimes(&ProcNumber, 0LL, (__int64)Src);
              *(_QWORD *)(a4 + 16) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v44[8098];
              *(_QWORD *)(a4 + 8) = KeMaximumIncrement * (unsigned __int64)DWORD1(Src[0]);
              *(_QWORD *)(a4 + 24) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v44[8099];
              *(_QWORD *)(a4 + 32) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v44[8100];
              *(_QWORD *)a4 = KeMaximumIncrement * (unsigned __int64)LODWORD(Src[0]);
              *(_DWORD *)(a4 + 40) = v44[8096];
              if ( v142 == 141 )
              {
                *(_QWORD *)(a4 + 48) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v44[8107];
                *(_DWORD *)(a4 + 44) = 0;
                *(_QWORD *)(a4 + 56) = 0LL;
                *(_QWORD *)(a4 + 64) = 0LL;
              }
              a4 += v42;
              v43 = v141 + 1;
              LODWORD(v13) = v140;
              v14 = v130;
            }
            v45 = v131;
LABEL_91:
            Size = v45;
            BootGraphicsInformation = Size_4;
            goto LABEL_641;
          }
          if ( a6 )
            *a6 = v13 * v42;
          return -1073741820;
        case 9u:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = NtGlobalFlag;
            goto LABEL_160;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xBu:
          if ( ExIsRestrictedCaller(v9) )
            return -1073741790;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          ModuleInformation = ExpQueryModuleInformation(v61, (_DWORD *)a4, Length, &Size);
          goto LABEL_167;
        case 0xCu:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( ExIsRestrictedCaller(v9) )
            return -1073741790;
          SystemBasicInformation = ExpGetLockInformation(a4, Length, &Size);
          goto LABEL_640;
        case 0xDu:
          if ( Length >= 0x128 )
            goto LABEL_181;
          if ( a6 )
            *a6 = 296;
          return -1073741820;
        case 0xEu:
        case 0xFu:
        case 0x13u:
LABEL_181:
          BootGraphicsInformation = -1073741822;
          goto LABEL_641;
        case 0x10u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (a4 & 7) != 0 )
            return -2147483646;
          if ( !ExIsRestrictedCaller(v9) )
          {
            SystemBasicInformation = ExpGetHandleInformation(a4, Length, &Size);
            goto LABEL_640;
          }
          return -1073741790;
        case 0x11u:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          if ( ExIsRestrictedCaller(v9) )
            return -1073741790;
          SystemBasicInformation = ExpGetObjectInformation(a4, Length, &Size);
          goto LABEL_640;
        case 0x12u:
        case 0x90u:
          v64 = 32;
          if ( v16 != 18 )
            v64 = 40;
          Size = v64;
          if ( Length >= v64 )
          {
            Size = 0;
            LOBYTE(v8) = v16 == 144;
            SystemBasicInformation = MmGetPageFileInformation(40LL, a4, Length, v8, &Size);
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = v64;
          return -1073741820;
        case 0x15u:
        case 0x51u:
        case 0x77u:
        case 0x78u:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          v65 = 2;
          if ( v16 == 119 )
          {
            v66 = 3;
          }
          else
          {
            if ( v16 == 120 )
              v65 = 4;
            v66 = v65;
          }
          MmQuerySystemWorkingSetInformation(v66, Src);
          *(_OWORD *)a4 = Src[0];
          *(_DWORD *)(a4 + 16) = Src[1];
          *(_QWORD *)(a4 + 24) = *((_QWORD *)&Src[1] + 1);
          *(_OWORD *)(a4 + 32) = Src[2];
          *(_OWORD *)(a4 + 48) = Src[3];
          Size = 64;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0x16u:
          if ( Length >= 0x30 )
          {
            SystemBasicInformation = ExGetPoolTagInfo(a4, Length, &Size, v13);
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x17u:
          Size = 24 * v13;
          if ( Length >= 24 * (int)v13 )
          {
            for ( i = 0; i < (unsigned int)v13; ++i )
            {
              ProcNumber.Group = v14;
              ProcNumber.Number = i;
              ProcNumber.Reserved = 0;
              v76 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              *(_DWORD *)a4 = v76[2895];
              *(_DWORD *)(a4 + 4) = v76[3127];
              *(_DWORD *)(a4 + 8) = v76[3143];
              *(_DWORD *)(a4 + 12) = KeTimeIncrement;
              *(_DWORD *)(a4 + 16) = 0;
              *(_DWORD *)(a4 + 20) = 0;
              a4 += 24LL;
              LODWORD(v13) = v140;
              v14 = v130;
            }
            goto LABEL_290;
          }
          if ( a6 )
            *a6 = 24 * v13;
          return -1073741820;
        case 0x18u:
          if ( Length == 20 )
          {
            *(_DWORD *)(a4 + 4) = KiMaximumDpcQueueDepth;
            *(_DWORD *)(a4 + 8) = KiMinimumDpcRate;
            *(_DWORD *)(a4 + 12) = KiAdjustDpcThreshold;
            *(_DWORD *)(a4 + 16) = KiIdealDpcRate;
            goto LABEL_279;
          }
          if ( a6 )
            *a6 = 20;
          return -1073741820;
        case 0x1Cu:
          if ( Length != 12 && Length != 24 )
          {
            if ( a6 )
              *a6 = 12;
            return -1073741820;
          }
          LOBYTE(v21) = 1;
          ExAcquireTimeRefreshLock(v21);
          v54 = KeTimeAdjustmentFrequency;
          v55 = KeTimeSynchronization;
          ExReleaseTimeRefreshLock();
          if ( Length == 24 )
          {
            *(_QWORD *)a4 = v54;
            *(_QWORD *)(a4 + 8) = MEMORY[0xFFFFF78000000300];
            *(_BYTE *)(a4 + 16) = v55;
          }
          else
          {
            *(_DWORD *)a4 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v54;
            *(_DWORD *)(a4 + 4) = KeMaximumIncrement;
            *(_BYTE *)(a4 + 8) = v55;
          }
LABEL_121:
          Size = Length;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0x1Fu:
          SystemBasicInformation = EtwQueryPerformanceTraceInformation(a4, Length, v9, &Size);
          goto LABEL_640;
        case 0x21u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          Size = 16;
          v69 = 0;
          v70 = 0;
          if ( (_DWORD)v13 )
          {
            v71 = KiProcessorBlock;
            v72 = (unsigned int)v13;
            do
            {
              v69 += *(_DWORD *)(*v71 + 33592);
              v70 += *(_DWORD *)(*v71++ + 32432);
              --v72;
            }
            while ( v72 );
          }
          *(_DWORD *)a4 = v69;
          *(_DWORD *)(a4 + 4) = v70;
          *(_DWORD *)(a4 + 8) = 0;
          *(_DWORD *)(a4 + 12) = 0;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0x23u:
          if ( Length >= 2 )
          {
            *(_BYTE *)a4 = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerNotPresent;
            Size = 2;
            BootGraphicsInformation = Size_4;
            goto LABEL_641;
          }
          if ( a6 )
            *a6 = 2;
          return -1073741820;
        case 0x24u:
          if ( Length < 0x30 )
          {
            if ( a6 )
              *a6 = 48;
            return -1073741820;
          }
          if ( (_DWORD)v13 )
          {
            v73 = KiProcessorBlock;
            v74 = (unsigned int)v13;
            do
            {
              v8 += *(_DWORD *)(*v73++ + 11580);
              --v74;
            }
            while ( v74 );
          }
          *(_DWORD *)a4 = v8;
          *(_DWORD *)(a4 + 4) = KeThreadSwitchCounters;
          *(_DWORD *)(a4 + 8) = dword_140C31CA8;
          *(_DWORD *)(a4 + 12) = dword_140C31CA4;
          *(_DWORD *)(a4 + 16) = dword_140C31CAC;
          *(_DWORD *)(a4 + 20) = dword_140C31CB0;
          *(_DWORD *)(a4 + 24) = dword_140C31CB8;
          *(_DWORD *)(a4 + 28) = dword_140C31CB4;
          *(_DWORD *)(a4 + 32) = dword_140C31CBC;
          *(_DWORD *)(a4 + 36) = dword_140C31CC0;
          *(_DWORD *)(a4 + 40) = dword_140C31CC4;
          *(_DWORD *)(a4 + 44) = dword_140C31CC8;
          Size = 48;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0x25u:
          if ( Length >= 0x10 )
          {
            SystemBasicInformation = CmQueryRegistryQuotaInformation(a4, v20, v15, v13);
            Size = 16;
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x2Au:
          Size = 48 * v13;
          if ( Length < 48 * (int)v13 )
            goto LABEL_104;
          while ( v8 < (unsigned int)v13 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            PoGetIdleTimes(&ProcNumber, (__int64)Src, 0LL);
            *(_OWORD *)a4 = Src[0];
            *(_OWORD *)(a4 + 16) = Src[1];
            *(_OWORD *)(a4 + 32) = Src[2];
            a4 += 48LL;
            ++v8;
            LODWORD(v13) = v140;
            v14 = v130;
          }
          goto LABEL_62;
        case 0x2Bu:
          if ( Length >= 0x18 )
          {
            Size = Length;
            SystemBasicInformation = ExpQueryLegacyDriverInformation(a4, &Size, v15, v13);
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 0x2Cu:
          if ( Length < 0xAC )
          {
            if ( a6 )
              *a6 = 172;
            return -1073741820;
          }
          v77 = *((_QWORD *)PsGetCurrentServerSiloGlobals(0x140000000LL, v20) + 133);
          LOBYTE(v78) = 1;
          ExAcquireTimeRefreshLock(v78);
          Src[0] = *(_OWORD *)v77;
          Src[1] = *(_OWORD *)(v77 + 16);
          Src[2] = *(_OWORD *)(v77 + 32);
          Src[3] = *(_OWORD *)(v77 + 48);
          Src[4] = *(_OWORD *)(v77 + 64);
          Src[5] = *(_OWORD *)(v77 + 80);
          Src[6] = *(_OWORD *)(v77 + 96);
          Src[7] = *(_OWORD *)(v77 + 112);
          Src[8] = *(_OWORD *)(v77 + 128);
          Src[9] = *(_OWORD *)(v77 + 144);
          *(_QWORD *)&Src[10] = *(_QWORD *)(v77 + 160);
          DWORD2(Src[10]) = *(_DWORD *)(v77 + 168);
          ExReleaseTimeRefreshLock();
          *(_OWORD *)a4 = Src[0];
          *(_OWORD *)(a4 + 16) = Src[1];
          *(_OWORD *)(a4 + 32) = Src[2];
          *(_OWORD *)(a4 + 48) = Src[3];
          *(_OWORD *)(a4 + 64) = Src[4];
          *(_OWORD *)(a4 + 80) = Src[5];
          *(_OWORD *)(a4 + 96) = Src[6];
          *(_OWORD *)(a4 + 112) = Src[7];
          *(_OWORD *)(a4 + 128) = Src[8];
          *(_OWORD *)(a4 + 144) = Src[9];
          *(_QWORD *)(a4 + 160) = *(_QWORD *)&Src[10];
          *(_DWORD *)(a4 + 168) = DWORD2(Src[10]);
          Size = 172;
LABEL_290:
          BootGraphicsInformation = 0;
          goto LABEL_641;
        case 0x2Du:
          SystemBasicInformation = ExpGetLookasideInformation(a4, Length, &Size);
          goto LABEL_640;
        case 0x32u:
          if ( Length == 8 )
          {
            *(_QWORD *)a4 = 0xFFFF800000000000uLL;
            goto LABEL_116;
          }
          if ( a6 )
            *a6 = 8;
          return -1073741820;
        case 0x33u:
          if ( Length >= 0x90 )
            goto LABEL_307;
          if ( a6 )
            *a6 = 144;
          return -1073741820;
        case 0x35u:
          if ( Length >= 0x10 )
          {
            v137 = *(_DWORD *)a4;
            v160 = *(int **)(a4 + 8);
            v144 = *(_DWORD *)(a4 + 4);
            ProbeForWrite(v160, v144, 4u);
            SystemBasicInformation = ExpGetProcessInformation(v160, v144, &Size, &v137, 5);
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x37u:
          SystemBasicInformation = ExpQueryNumaProcessorMap(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0x38u:
          SystemBasicInformation = PfSnQueryPrefetcherInformation(0x140000000LL, (__int128 *)a4, Length, v9, &Size);
          goto LABEL_640;
        case 0x3Au:
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = KeGetRecommendedSharedDataAlignment();
            goto LABEL_160;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x3Bu:
          if ( Length != 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          if ( MEMORY[0xFFFFF780000002E0] == -1 )
          {
            result = ExpReadComPlusPackage();
            BootGraphicsInformation = result;
            if ( result < 0 )
              return result;
          }
          else
          {
            BootGraphicsInformation = Size_4;
          }
          *(_DWORD *)a4 = MEMORY[0xFFFFF780000002E0];
          Size = 4;
          goto LABEL_641;
        case 0x3Cu:
          SystemBasicInformation = ExpQueryNumaAvailableMemory(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0x3Du:
          Size = 80 * v13;
          if ( Length < 80 * (int)v13 )
            goto LABEL_104;
          while ( v8 < (unsigned int)v13 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            v50 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            PoGetPerfStateAndParkingInfo(&ProcNumber, (__int64)Src, 0LL, &v159);
            *(_OWORD *)a4 = 0LL;
            *(_OWORD *)(a4 + 16) = 0LL;
            *(_OWORD *)(a4 + 32) = 0LL;
            *(_OWORD *)(a4 + 48) = 0LL;
            *(_OWORD *)(a4 + 64) = 0LL;
            *(_QWORD *)(a4 + 40) = KeMaximumIncrement
                                 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v50 + 32388) + *(_DWORD *)(v50 + 32392));
            *(_QWORD *)(a4 + 48) = KeMaximumIncrement
                                 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v50 + 24) + 652LL);
            if ( BYTE12(Src[1]) )
            {
              *(_BYTE *)a4 = BYTE8(Src[0]);
              *(_BYTE *)(a4 + 7) = BYTE12(Src[0]);
              *(_BYTE *)(a4 + 8) = Src[1];
              *(_DWORD *)(a4 + 12) = 1;
            }
            *(_QWORD *)(a4 + 72) = v159;
            a4 += 80LL;
            v150 = (_QWORD *)a4;
            ++v8;
            LODWORD(v13) = v140;
            v14 = v130;
          }
          goto LABEL_62;
        case 0x3Eu:
          if ( Length != 64 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          SystemBasicInformation = ExpGetSystemEmulationBasicInformation(a4);
LABEL_639:
          Size = 64;
          goto LABEL_640;
        case 0x3Fu:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemEmulationProcessorInformation(a4);
            Size = 12;
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 0x40u:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( (a4 & 7) != 0 )
            return -2147483646;
          if ( !ExIsRestrictedCaller(v9) )
          {
            SystemBasicInformation = ExpGetHandleInformationEx(a4, Length, &Size);
            goto LABEL_640;
          }
          return -1073741790;
        case 0x41u:
          if ( Length < 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          if ( (_DWORD)v13 )
          {
            v85 = KiProcessorBlock;
            v86 = (unsigned int)v13;
            do
            {
              v8 += *(_DWORD *)(*v85++ + 32700);
              --v86;
            }
            while ( v86 );
          }
          *(_DWORD *)a4 = v8;
          goto LABEL_160;
        case 0x42u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( ExIsRestrictedCaller(v9) )
            return -1073741790;
          SystemBasicInformation = ExGetBigPoolInfo((_DWORD *)a4, Length, 1, &Size);
          goto LABEL_640;
        case 0x43u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          v137 = *(_DWORD *)a4;
          v160 = *(int **)(a4 + 8);
          v67 = *(_DWORD *)(a4 + 4);
          v144 = v67;
          if ( ((unsigned __int8)v160 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = ExGetSessionPoolTagInformation((unsigned __int64)v160, v67, &Size, &v137);
          goto LABEL_640;
        case 0x44u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          v137 = *(_DWORD *)(a4 + 8);
          if ( (a4 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = MmGetSessionMappedViewInformation(a4, Length, &Size, &v137);
          goto LABEL_640;
        case 0x45u:
          goto LABEL_419;
        case 0x46u:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = ObpObjectSecurityMode;
            goto LABEL_160;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x48u:
          if ( Length != 8 )
            return -1073741811;
          v87 = (unsigned int)(v15 - 7);
          if ( (_DWORD)v87 )
          {
            if ( (_DWORD)v87 != 1 )
              return -1073741637;
            *(_DWORD *)a4 = 8;
            *(_DWORD *)(a4 + 4) = ((unsigned __int8 (__fastcall *)(unsigned __int64, __int64, __int64, __int64))off_140C008D0[0])(
                                    0x140000000uLL,
                                    v20,
                                    v87,
                                    v13);
          }
          else
          {
            *(_DWORD *)a4 = 7;
            LOBYTE(v8) = off_140C008D8[0] != xKdEnumerateDebuggingDevices;
            *(_DWORD *)(a4 + 4) = v8;
          }
          goto LABEL_116;
        case 0x49u:
          BootGraphicsInformation = KeBuildLogicalProcessorSystemInformation(v14, a4, Length, &Size);
          Size_4 = BootGraphicsInformation;
          goto LABEL_641;
        case 0x4Cu:
          SystemBasicInformation = ExpGetSystemFirmwareTableInformation((char *)a4, v9, Length, &Size);
          goto LABEL_640;
        case 0x4Du:
          if ( ExIsRestrictedCaller(v9) )
            return -1073741790;
          if ( SeSinglePrivilegeCheck(SeLoadDriverPrivilege, v9) )
            v10 = 0;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          ModuleInformation = ExpQueryModuleInformationEx(v63, a4, Length, v10, (__int64)&Size);
LABEL_167:
          BootGraphicsInformation = ModuleInformation;
          ExReleaseResourceLite(&PsLoadedModuleResource);
          KeLeaveCriticalRegion();
          goto LABEL_641;
        case 0x4Fu:
          SystemBasicInformation = PfQuerySuperfetchInformation(0x40000000u, a4, Length, v9, (__int64)&Size);
          goto LABEL_640;
        case 0x50u:
          SystemBasicInformation = MmQueryMemoryListInformation(
                                     (ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL,
                                     (_OWORD *)a4,
                                     Length,
                                     v13,
                                     &Size);
          goto LABEL_640;
        case 0x53u:
          v90 = 8 * v13;
          Size = 8 * v13;
          if ( Length < 8 )
            goto LABEL_383;
          v91 = Length >> 3;
          if ( Length >= v90 )
            v91 = v13;
          BootGraphicsInformation = Length < v90 ? 0xC0000004 : 0;
          v150 = (_QWORD *)a4;
          KeFlushProcessWriteBuffers(1);
          for ( j = v130; ; j = v129 )
          {
            v131 = v8;
            if ( v8 >= v91 )
              break;
            ProcNumber.Group = j;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            v93 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 24) + 72LL);
            v94 = v150;
            *v150 = v93;
            v150 = v94 + 1;
            v8 = v131 + 1;
          }
          goto LABEL_641;
        case 0x56u:
          SystemBasicInformation = ObQueryRefTraceInformation((volatile void *)a4, Length);
          goto LABEL_640;
        case 0x57u:
          Size = 8;
          if ( Length == 8 )
          {
            *(_DWORD *)a4 = MmSpecialPoolTag;
            LOBYTE(v8) = MmSpecialPoolCatchOverruns != 0;
            *(_DWORD *)(a4 + 4) = v8;
            BootGraphicsInformation = Size_4;
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0x58u:
          Size = 24;
          if ( Length != 24 )
          {
            BootGraphicsInformation = -1073741820;
            goto LABEL_641;
          }
          *(_OWORD *)ProcessId = *(_OWORD *)a4;
          v158 = *(char **)(a4 + 16);
          if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
            return -1073741811;
          if ( v9 && WORD1(ProcessId[1]) )
          {
            if ( ((unsigned __int8)v158 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v56 = &v158[WORD1(ProcessId[1])];
            if ( (unsigned __int64)v56 > 0x7FFFFFFF0000LL || v56 < v158 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          CurrentThread = KeGetCurrentThread();
          v149 = WORD1(ProcessId[1]);
          KeEnterCriticalRegionThread((__int64)CurrentThread);
          v58 = PsLookupProcessByProcessId(ProcessId[0], &Process);
          if ( v58 < 0 )
          {
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            return v58;
          }
          BootGraphicsInformation = PsQueryFullProcessImageName((__int64)Process, (_OWORD *)(a4 + 8), v158, &v149);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          if ( BootGraphicsInformation == -1073741820 )
            *(_WORD *)(a4 + 10) = v149;
          goto LABEL_641;
        case 0x5Au:
          Size = 32;
          if ( Length < 0x14 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          *(_OWORD *)a4 = ExpBootEnvironmentInformation;
          *(_DWORD *)(a4 + 16) = dword_140C197B0;
          if ( Length < Size )
          {
LABEL_279:
            Size = 20;
            BootGraphicsInformation = Size_4;
          }
          else
          {
            *(_QWORD *)(a4 + 24) = qword_140C197B8;
            BootGraphicsInformation = Size_4;
          }
          goto LABEL_641;
        case 0x5Bu:
          SystemBasicInformation = HvlQueryEnlightenmentInfo(a4, Length, v9, &Size);
          goto LABEL_640;
        case 0x5Cu:
          if ( Length != 40 )
          {
            if ( a6 )
              *a6 = 40;
            return -1073741820;
          }
          SystemBasicInformation = VfGetVerifierInformationEx(a4, v20, v15, v13);
          if ( SystemBasicInformation >= 0 )
            v8 = 40;
          Size = v8;
          goto LABEL_640;
        case 0x5Fu:
          if ( !v9 || !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
            return -1073741790;
          if ( Length >= 0x40 )
          {
            SystemBasicInformation = ExpCovQueryInformation(a4, Length, &Size);
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 0x62u:
          SystemBasicInformation = IoQuerySystemDeviceName(98);
          goto LABEL_640;
        case 0x63u:
          SystemBasicInformation = IoQuerySystemDeviceName(99);
          goto LABEL_640;
        case 0x64u:
          WORD4(v163) = v14;
          *(_QWORD *)&v163 = KeQueryGroupAffinity(v14);
          v46 = (0x101010101010101LL
               * (((((_QWORD)v163 - (((unsigned __int64)v163 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + ((((unsigned __int64)v163 - (((unsigned __int64)v163 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + (((((_QWORD)v163 - (((unsigned __int64)v163 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + ((((unsigned __int64)v163 - (((unsigned __int64)v163 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          BootGraphicsInformation = PpmCapturePerformanceDistribution(
                                      0LL,
                                      0,
                                      (unsigned int)((0x101010101010101LL
                                                    * (((((_QWORD)v163
                                                        - (((unsigned __int64)v163 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + ((((unsigned __int64)v163
                                                         - (((unsigned __int64)v163 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                      + (((((_QWORD)v163
                                                          - (((unsigned __int64)v163 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                        + ((((unsigned __int64)v163
                                                           - (((unsigned __int64)v163 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                                      (__int64)&v163,
                                      (int *)&NumberOfBytes);
          if ( BootGraphicsInformation != -1073741820 )
            goto LABEL_641;
          v47 = NumberOfBytes;
          if ( (unsigned int)NumberOfBytes > Length )
          {
            BootGraphicsInformation = -1073741820;
            goto LABEL_97;
          }
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x744D5050u);
          v49 = PoolWithTag;
          *(_QWORD *)v135 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, (unsigned int)NumberOfBytes);
            BootGraphicsInformation = PpmCapturePerformanceDistribution(
                                        v49,
                                        NumberOfBytes,
                                        v46,
                                        (__int64)&v163,
                                        (int *)&Size);
            if ( BootGraphicsInformation >= 0 )
              memmove((void *)a4, v49, Size);
            ExFreePoolWithTag(v49, 0x744D5050u);
          }
          else
          {
            BootGraphicsInformation = -1073741670;
          }
          goto LABEL_641;
        case 0x65u:
          SystemBasicInformation = ExpQueryNumaProximityNode(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0x66u:
          if ( Length >= 0x1B0 )
          {
            v79 = (_OWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals(0x140000000LL, v20) + 133);
            LOBYTE(v80) = 1;
            ExAcquireTimeRefreshLock(v80);
            v81 = Src;
            v82 = 3LL;
            v83 = 3LL;
            do
            {
              *v81 = *v79;
              v81[1] = v79[1];
              v81[2] = v79[2];
              v81[3] = v79[3];
              v81[4] = v79[4];
              v81[5] = v79[5];
              v81[6] = v79[6];
              v81 += 8;
              *(v81 - 1) = v79[7];
              v79 += 8;
              --v83;
            }
            while ( v83 );
            *v81 = *v79;
            v81[1] = v79[1];
            v81[2] = v79[2];
            ExReleaseTimeRefreshLock();
            v84 = Src;
            do
            {
              *(_OWORD *)a4 = *v84;
              *(_OWORD *)(a4 + 16) = v84[1];
              *(_OWORD *)(a4 + 32) = v84[2];
              *(_OWORD *)(a4 + 48) = v84[3];
              *(_OWORD *)(a4 + 64) = v84[4];
              *(_OWORD *)(a4 + 80) = v84[5];
              *(_OWORD *)(a4 + 96) = v84[6];
              a4 += 128LL;
              *(_OWORD *)(a4 - 16) = v84[7];
              v84 += 8;
              --v82;
            }
            while ( v82 );
            *(_OWORD *)a4 = *v84;
            *(_OWORD *)(a4 + 16) = v84[1];
            *(_OWORD *)(a4 + 32) = v84[2];
            Size = 432;
            BootGraphicsInformation = 0;
            goto LABEL_641;
          }
          if ( a6 )
            *a6 = 432;
          return -1073741820;
        case 0x67u:
          SystemBasicInformation = SeCodeIntegrityQueryInformation(a4, Length, (__int64)&Size);
          goto LABEL_640;
        case 0x69u:
          BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_140C00A68[0])(
                                      23LL,
                                      0LL,
                                      0LL,
                                      &NumberOfBytes);
          if ( BootGraphicsInformation != -1073741820 )
            goto LABEL_419;
          v99 = (unsigned int)NumberOfBytes;
          if ( Length < (unsigned int)NumberOfBytes || !a4 )
          {
            Size = NumberOfBytes;
            goto LABEL_641;
          }
          if ( v9 )
          {
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)NumberOfBytes, 0x6F666E49u);
            *(_QWORD *)v135 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              BootGraphicsInformation = -1073741670;
              goto LABEL_641;
            }
            v99 = (unsigned int)NumberOfBytes;
          }
          else
          {
            PoolWithQuotaTag = (_DWORD *)a4;
            *(_QWORD *)v135 = a4;
          }
          v101 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, unsigned int *))off_140C00A68[0])(
                   23LL,
                   v99,
                   PoolWithQuotaTag,
                   &Size);
          BootGraphicsInformation = v101;
          if ( !v9 )
            goto LABEL_641;
          if ( v101 < 0 )
            goto LABEL_430;
          goto LABEL_429;
        case 0x6Au:
          BootGraphicsInformation = -1073741821;
          goto LABEL_641;
        case 0x6Bu:
          Size = Length;
          BootGraphicsInformation = KeQueryLogicalProcessorRelationship(
                                      0LL,
                                      RelationshipType,
                                      (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)a4,
                                      &Size);
          Size_4 = BootGraphicsInformation;
          goto LABEL_641;
        case 0x6Cu:
          v97 = 8 * v13;
          Size = 8 * v13;
          if ( Length < 8 )
            goto LABEL_383;
          v98 = Length >> 3;
          if ( Length >= v97 )
            v98 = v13;
          BootGraphicsInformation = Length < v97 ? 0xC0000004 : 0;
          while ( v8 < v98 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            *(_QWORD *)a4 = *(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 32568);
            a4 += 8LL;
            v150 = (_QWORD *)a4;
            ++v8;
            v14 = v130;
          }
          goto LABEL_641;
        case 0x6Du:
          SystemBasicInformation = SmQueryStoreInformation(0x40000000, a4, Length, v9, &Size);
          goto LABEL_640;
        case 0x70u:
          SystemBasicInformation = IoQueryVhdBootInformation(0x140000000uLL, a4, Length, &Size);
          goto LABEL_640;
        case 0x71u:
          SystemBasicInformation = PsQueryCpuQuotaInformation((_DWORD *)a4, Length, v9, &Size);
          goto LABEL_640;
        case 0x73u:
          if ( (_DWORD)v20 )
          {
            BootGraphicsInformation = -1073741820;
          }
          else
          {
            Size = 8;
            if ( Length >= 8 )
            {
              *(_DWORD *)a4 = DbgkErrorPortStartTimeout;
              *(_DWORD *)(a4 + 4) = DbgkErrorPortCommTimeout;
              BootGraphicsInformation = Size_4;
            }
            else
            {
              BootGraphicsInformation = -1073741820;
            }
          }
          goto LABEL_641;
        case 0x74u:
          SystemBasicInformation = IoQueryLowPriorityIoInformation(0x140000000LL, (_DWORD *)a4, Length, &Size);
          goto LABEL_640;
        case 0x75u:
          Size = 1096;
          if ( Length != 1096 )
          {
            BootGraphicsInformation = -1073741820;
            goto LABEL_641;
          }
          if ( v9 )
            return -1073741790;
          SystemBasicInformation = ExQueryBootEntropyInformation(a4, v20, v15, v13);
          goto LABEL_640;
        case 0x76u:
          if ( Length >= 0x110 )
          {
LABEL_307:
            SystemBasicInformation = VfGetVerifierInformation((void *)a4, Length);
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = 272;
          return -1073741820;
        case 0x79u:
          Size = 4 * (unsigned __int16)KeNumberNodes;
          if ( Length >= Size )
          {
            v131 = 0;
            v88 = 0;
            v89 = v139;
            while ( v88 < (unsigned __int16)KeNumberNodes )
            {
              *(_DWORD *)(a4 + 4LL * v88++) = *((_DWORD *)KeNodeDistance + v8 + v89 * (unsigned __int16)KeNumberNodes);
              v8 = v88;
              v131 = v88;
            }
            BootGraphicsInformation = Size_4;
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0x7Au:
          Size = 8;
          if ( Length != 8 || !a4 )
            goto LABEL_104;
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 8uLL, 0x6F666E49u);
          v152 = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
            BootGraphicsInformation = -1073741670;
            goto LABEL_641;
          }
          BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, unsigned int *))off_140C00A68[0])(
                                      26LL,
                                      8LL,
                                      PoolWithQuotaTag,
                                      &Size);
          if ( BootGraphicsInformation >= 0 )
          {
            *(_DWORD *)a4 = *PoolWithQuotaTag;
            *(_DWORD *)(a4 + 4) ^= (PoolWithQuotaTag[1] ^ *(_DWORD *)(a4 + 4)) & 1;
            v102 = *(_DWORD *)(a4 + 4) ^ ((unsigned __int8)*(_DWORD *)(a4 + 4) ^ (unsigned __int8)PoolWithQuotaTag[1]) & 2;
            *(_DWORD *)(a4 + 4) = v102;
            *(_DWORD *)(a4 + 4) = v102 ^ (PoolWithQuotaTag[1] ^ v102) & 4;
          }
          goto LABEL_430;
        case 0x7Bu:
          if ( Length != 32 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          CurrentProcess = PsGetCurrentProcess();
          ProcessPartitionId = MmGetProcessPartitionId((__int64)CurrentProcess);
          *(_QWORD *)&Src[0] = MmGetAvailablePages(ProcessPartitionId);
          *((_QWORD *)&Src[0] + 1) = MmGetTotalCommittedPages(v38);
          *(_QWORD *)&Src[1] = MmGetTotalCommitLimit(v39);
          *((_QWORD *)&Src[1] + 1) = MmGetPeakCommitment(v40);
          v41 = *((_QWORD *)&Src[1] + 1);
          if ( *((_QWORD *)&Src[1] + 1) < *((_QWORD *)&Src[0] + 1) )
            v41 = *((_QWORD *)&Src[0] + 1);
          *((_QWORD *)&Src[1] + 1) = v41;
          *(_OWORD *)a4 = Src[0];
          *(_OWORD *)(a4 + 16) = Src[1];
          Size = 32;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0x7Cu:
          Size = 12;
          if ( Length >= 4 )
          {
            v164 = *(_DWORD *)a4;
            if ( v164 == 1 )
            {
              if ( Length >= 0xC )
              {
                *(_DWORD *)(a4 + 8) = 0;
                *(_DWORD *)(a4 + 4) = 0;
                *(_DWORD *)(a4 + 8) |= 1u;
                *(_DWORD *)(a4 + 4) |= 1u;
                if ( MEMORY[0xFFFFF780000003C6] )
                  *(_DWORD *)(a4 + 4) &= ~1u;
                BootGraphicsInformation = Size_4;
              }
              else
              {
                BootGraphicsInformation = -1073741820;
              }
            }
            else
            {
              BootGraphicsInformation = -1073741637;
            }
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0x7Du:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          v137 = *(_DWORD *)a4;
          v160 = *(int **)(a4 + 8);
          v68 = *(_DWORD *)(a4 + 4);
          v144 = v68;
          if ( ((unsigned __int8)v160 & 7) != 0 )
            return -2147483646;
          if ( !ExIsRestrictedCaller(v9) )
          {
            SystemBasicInformation = ExGetSessionBigPoolInformation(v160, v68, &Size, &v137);
            goto LABEL_640;
          }
          return -1073741790;
        case 0x7Eu:
          Size = 32;
          if ( Length == 32 )
          {
            BootGraphicsInformation = BgkQueryBootGraphicsInformation(0LL, Src, v15, v13);
            if ( BootGraphicsInformation >= 0 )
            {
              v103 = *(_QWORD *)&Src[0];
              if ( v9 )
                v103 = 0LL;
              *(_QWORD *)&Src[0] = v103;
              memmove((void *)a4, Src, Size);
            }
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0x80u:
          if ( (_DWORD)v20 )
          {
            BootGraphicsInformation = -1073741820;
          }
          else
          {
            BootGraphicsInformation = MmEnumerateBadPages(&v154);
            v108 = v154;
            if ( v154 )
              v8 = 8 * *(_DWORD *)v154;
            Size = v8;
            if ( Length < v8 )
              BootGraphicsInformation = -1073741820;
            if ( v154 )
            {
              if ( BootGraphicsInformation >= 0 )
                memmove((void *)a4, (char *)v154 + 8, v8);
              ExFreePoolWithTag(v108, 0);
            }
          }
          goto LABEL_641;
        case 0x85u:
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
            return -1073741727;
          SystemBasicInformation = ExpGetSystemPlatformBinary(a4, Length, v9);
          goto LABEL_640;
        case 0x86u:
          Size = 32;
          if ( Length != 32 )
          {
            BootGraphicsInformation = -1073741820;
            goto LABEL_641;
          }
          SystemBasicInformation = ExHandleSPCall2(0x140000000LL, a4);
          goto LABEL_640;
        case 0x87u:
          Size = 8;
          if ( Length >= 8 )
          {
            if ( (unsigned int)HvlQueryActiveProcessors(&v145, 0LL) )
            {
              BootGraphicsInformation = -1073741637;
            }
            else
            {
              BootGraphicsInformation = HvlQueryProcessorTopologyCount(0LL, &v146);
              if ( BootGraphicsInformation )
              {
                BootGraphicsInformation = -1073741637;
              }
              else
              {
                *(_DWORD *)a4 = v145;
                *(_DWORD *)(a4 + 4) = v146;
              }
            }
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0x88u:
        case 0x89u:
          if ( Length == 48 )
            return ExpGetDeviceDataInformation(v16, a4, 48LL, v13);
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x8Au:
          SystemBasicInformation = ExpQueryMemoryTopologyInformation((void *)a4);
          goto LABEL_640;
        case 0x8Bu:
          SystemBasicInformation = ExpQueryChannelInformation((void *)a4);
          goto LABEL_640;
        case 0x8Cu:
          if ( a6 || Length >= 8 )
          {
            BootGraphicsInformation = BgkQueryBootGraphicsInformation(2LL, &Size, v15, v13);
            if ( BootGraphicsInformation >= 0 )
            {
              if ( Size )
              {
                if ( Length >= Size )
                {
                  BootGraphicsInformation = BgkQueryBootGraphicsInformation(1LL, &P, v104, v105);
                  if ( BootGraphicsInformation >= 0 )
                  {
                    v106 = P;
                    if ( P )
                    {
                      memmove((void *)a4, P, Size);
                      ExFreePoolWithTag(v106, 0x4B494742u);
                    }
                    else
                    {
                      BootGraphicsInformation = -1073741670;
                    }
                  }
                }
                else
                {
                  BootGraphicsInformation = -1073741789;
                }
              }
              else
              {
                BootGraphicsInformation = -1073741670;
              }
            }
          }
          else
          {
            BootGraphicsInformation = -1073741811;
          }
          goto LABEL_641;
        case 0x8Fu:
        case 0x91u:
        case 0xABu:
        case 0xB3u:
          SystemBasicInformation = SeSecureBootQueryInformation(v16, a4, Length, &Size);
          goto LABEL_640;
        case 0x93u:
          SystemBasicInformation = ExpQueryPortableWorkspaceEfiLauncherInformation(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0x95u:
          if ( Length >= 3 )
          {
            *(_BYTE *)a4 = KdpBootedNodebug == 0;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
            v10 = 3;
            goto LABEL_259;
          }
          if ( a6 )
            *a6 = 3;
          return -1073741820;
        case 0x96u:
          if ( !ExBootLoaderMetadata )
            goto LABEL_62;
          v107 = *(_DWORD *)ExBootLoaderMetadata;
          Size = *(_DWORD *)ExBootLoaderMetadata;
          if ( !a4 )
            goto LABEL_62;
          if ( Length < v107 )
          {
            BootGraphicsInformation = -1073741820;
            goto LABEL_641;
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
            return -1073741727;
          memmove((void *)a4, (const void *)(ExBootLoaderMetadata + 4), Size);
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0x97u:
          Size = 4;
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = ExSoftRebootFlags;
            BootGraphicsInformation = Size_4;
            goto LABEL_641;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x99u:
          if ( (_DWORD)v20 )
          {
            BootGraphicsInformation = -1073741820;
            goto LABEL_641;
          }
          Size = 32;
          if ( Length >= 0x20 )
          {
            *(_QWORD *)a4 = PoOffCrashConfigTable;
            *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
            *(_QWORD *)(a4 + 16) = xmmword_140C251F0;
            *(_DWORD *)(a4 + 24) = DWORD2(xmmword_140C251F0);
LABEL_521:
            BootGraphicsInformation = Size_4;
            goto LABEL_641;
          }
          if ( Length >= 0xC )
          {
            Size = 12;
            *(_QWORD *)a4 = PoOffCrashConfigTable;
            *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
            goto LABEL_521;
          }
          BootGraphicsInformation = -1073741820;
          Size_4 = -1073741820;
LABEL_641:
          if ( a6 )
            *a6 = Size;
          result = BootGraphicsInformation;
          break;
        case 0x9Au:
          if ( Length >= 0x20 )
          {
            BootGraphicsInformation = ExpGetSystemProcessorFeaturesInformation(a4, v20, v15, v13);
            Size = 32;
            goto LABEL_641;
          }
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        case 0x9Cu:
          Size = 128;
          if ( Length == 128 )
          {
            BootGraphicsInformation = BgkQueryBootGraphicsInformation(3LL, Src, v15, v13);
            if ( BootGraphicsInformation >= 0 )
              memmove((void *)a4, Src, Size);
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0x9Du:
          Size = WORD5(ExpManufacturingInformation) + 24;
          if ( Length >= Size )
          {
            v109 = (void *)(a4 + 24);
            *(_OWORD *)a4 = 0LL;
            *(_QWORD *)(a4 + 16) = 0LL;
            *(_DWORD *)a4 = ExpManufacturingInformation;
            *(_DWORD *)(a4 + 8) = DWORD2(ExpManufacturingInformation);
            if ( WORD4(ExpManufacturingInformation) )
            {
              *(_QWORD *)(a4 + 16) = v109;
              memmove(v109, ::Data, WORD5(ExpManufacturingInformation));
            }
            BootGraphicsInformation = Size_4;
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0x9Eu:
          Size = 1;
          if ( Length )
          {
            *(_BYTE *)a4 = PoEnergyEstimationEnabled();
            BootGraphicsInformation = Size_4;
            goto LABEL_641;
          }
          if ( a6 )
            *a6 = 1;
          goto LABEL_104;
        case 0x9Fu:
          SystemBasicInformation = HvlQueryDetailInfo(a4, Length, v15, &Size);
          goto LABEL_640;
        case 0xA0u:
          v110 = (_DWORD)v13 << 6;
          Size = (_DWORD)v13 << 6;
          if ( Length < 0x40 )
            goto LABEL_383;
          v111 = Length >> 6;
          if ( Length >= v110 )
            v111 = v13;
          BootGraphicsInformation = Length < v110 ? 0xC0000004 : 0;
          while ( v8 < v111 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            v112 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            KeQueryCycleTimeStatsProcessor(v112, (_QWORD *)a4);
            a4 += 64LL;
            v150 = (_QWORD *)a4;
            ++v8;
            v14 = v130;
          }
          goto LABEL_641;
        case 0xA2u:
          SystemBasicInformation = SeQueryTrustedPlatformModuleInformation((int *)a4, Length, &Size);
          goto LABEL_640;
        case 0xA3u:
          if ( !Length )
          {
            if ( a6 )
              *a6 = 1;
            return -1073741820;
          }
          *(_BYTE *)a4 = KdIgnoreUmExceptions;
LABEL_259:
          Size = v10;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0xA4u:
        case 0xACu:
        case 0xBDu:
        case 0xBEu:
        case 0xC7u:
        case 0xD1u:
          SystemBasicInformation = SeCodeIntegrityQueryPolicyInformation(v16);
          goto LABEL_640;
        case 0xA5u:
          Size = 16;
          if ( Length != 16 )
          {
            if ( a6 )
              *a6 = 16;
            goto LABEL_104;
          }
          LOBYTE(Src[0]) ^= (LOBYTE(Src[0]) ^ (16 * ExpFirmwarePageProtectionSupported)) & 0x10;
          if ( VslIsSecureKernelRunning() )
          {
            v132[0] = 0;
            LOBYTE(Src[0]) = v113 | 1;
            NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
            v115 = Src[0];
            if ( (NestedPageProtectionFlags & 2) != 0 )
            {
              v115 = LOBYTE(Src[0]) | 2;
              LOBYTE(Src[0]) |= 2u;
            }
            if ( (NestedPageProtectionFlags & 0x20) != 0 )
            {
              v115 |= 4u;
              LOBYTE(Src[0]) = v115;
            }
            if ( (NestedPageProtectionFlags & 0x10) != 0 )
              LOBYTE(Src[0]) = v115 | 8;
            if ( (NestedPageProtectionFlags & 0x200) != 0 )
              BYTE1(Src[0]) |= 2u;
            if ( v155 )
            {
              BootGraphicsInformation = VslIsTrustletRunning(v155, v132);
              BYTE1(Src[0]) ^= (v132[0] ^ BYTE1(Src[0])) & 1;
            }
            else
            {
              BootGraphicsInformation = Size_4;
            }
            LOBYTE(Src[0]) ^= (LOBYTE(Src[0]) ^ (32 * ExpIsIumEncryptionKeyAvailable())) & 0x20;
          }
          else
          {
            BootGraphicsInformation = Size_4;
          }
          *(_OWORD *)a4 = Src[0];
          goto LABEL_641;
        case 0xA6u:
          SystemBasicInformation = SeQueryHSTIResults(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0xA7u:
          SystemBasicInformation = ExpQuerySingleModuleInformation(a4, Length, v9, &Size);
          goto LABEL_640;
        case 0xA9u:
          SystemBasicInformation = HvlQueryVsmProtectionInfo((void *)a4, Length);
          goto LABEL_640;
        case 0xADu:
          result = ExCpuSetResourceManagerAccessCheck(v9);
          if ( result < 0 )
            return result;
          Size = 168;
          if ( Length != 168 )
          {
            BootGraphicsInformation = -1073741820;
            goto LABEL_641;
          }
          SystemBasicInformation = KeGetAffinitizedInterruptsInfo((_WORD *)a4);
          goto LABEL_640;
        case 0xAEu:
          SystemBasicInformation = PsRootSiloInformation(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0xAFu:
          if ( Handle )
          {
            Object = 0LL;
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, &Object, 0LL);
            v120 = (struct _DMA_ADAPTER *)Object;
            if ( result < 0 )
              return result;
          }
          else
          {
            v120 = (struct _DMA_ADAPTER *)Process;
          }
          CpuSetInformation = KeQueryCpuSetInformation((void *)a4);
          goto LABEL_583;
        case 0xB2u:
          if ( !Length )
          {
            BootGraphicsInformation = -1073741789;
            goto LABEL_641;
          }
          if ( v9 && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, v9) )
            return -1073741727;
          v122 = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, Length, 0x6F666E49u);
          v123 = v122;
          *(_QWORD *)v135 = v122;
          if ( v122 )
          {
            memset(v122, 0, Length);
            BootGraphicsInformation = VslQuerySecureKernelProfileInformation(v162, v123, Length, &Size);
            if ( BootGraphicsInformation >= 0 )
              memmove((void *)a4, v123, Size);
            ExFreePoolWithTag(v123, 0x6F666E49u);
          }
          else
          {
            BootGraphicsInformation = -1073741670;
          }
          goto LABEL_641;
        case 0xB4u:
          SystemBasicInformation = ExpQueryInterruptSteeringInformation(v135[0], v20, a4, Length, (__int64)&Size);
          goto LABEL_640;
        case 0xB5u:
          if ( Handle )
          {
            v152 = 0LL;
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, &v152, 0LL);
            v120 = (struct _DMA_ADAPTER *)v152;
            if ( result < 0 )
              return result;
          }
          else
          {
            v120 = (struct _DMA_ADAPTER *)Process;
          }
          CpuSetInformation = PsWow64GetSupportedArchitectures((_DWORD *)a4, Length, &Size, (__int64)v120);
LABEL_583:
          BootGraphicsInformation = CpuSetInformation;
          if ( v120 )
            HalPutDmaAdapter(v120);
          goto LABEL_641;
        case 0xB6u:
          if ( Length != 56 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          v23 = PsGetCurrentProcess();
          v24 = MmGetProcessPartitionId((__int64)v23);
          *(_QWORD *)&Src[0] = MmGetNumberOfPhysicalPages(v24) << 12;
          *((_QWORD *)&Src[0] + 1) = MmGetAvailablePages(v24) << 12;
          *(_QWORD *)&Src[1] = MmGetResidentAvailablePages(v25) << 12;
          *((_QWORD *)&Src[1] + 1) = MmGetTotalCommittedPages(v26) << 12;
          *((_QWORD *)&Src[2] + 1) = MmGetTotalCommitLimit(v27) << 12;
          *(_QWORD *)&Src[3] = MmGetPeakCommitment(v28) << 12;
          *(_QWORD *)&Src[2] = MmGetSharedCommit() << 12;
          v29 = *(_QWORD *)&Src[0];
          if ( *(_QWORD *)&Src[0] < *((_QWORD *)&Src[0] + 1) )
            v29 = *((_QWORD *)&Src[0] + 1);
          *(_QWORD *)&Src[0] = v29;
          v30 = *((_QWORD *)&Src[2] + 1);
          if ( *((_QWORD *)&Src[2] + 1) < *((_QWORD *)&Src[1] + 1) )
            v30 = *((_QWORD *)&Src[1] + 1);
          *((_QWORD *)&Src[2] + 1) = v30;
          v31 = *(_QWORD *)&Src[3];
          if ( *(_QWORD *)&Src[3] < *((_QWORD *)&Src[1] + 1) )
            v31 = *((_QWORD *)&Src[1] + 1);
          *(_QWORD *)&Src[3] = v31;
          *(_OWORD *)a4 = Src[0];
          *(_OWORD *)(a4 + 16) = Src[1];
          *(_OWORD *)(a4 + 32) = Src[2];
          *(_QWORD *)(a4 + 48) = *(_QWORD *)&Src[3];
          Size = 56;
LABEL_62:
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0xB7u:
          if ( Length != 16 )
            return -1073741820;
          SystemBasicInformation = ExpQueryCodeIntegrityCertificateInfo(
                                     *(_QWORD *)a4,
                                     *(unsigned int *)(a4 + 8),
                                     v15,
                                     v13);
          goto LABEL_640;
        case 0xB8u:
          if ( Length != 24 )
          {
            if ( a6 )
              *a6 = 24;
            return -1073741820;
          }
          v33 = PsGetCurrentProcess();
          v34 = MmGetProcessPartitionId((__int64)v33);
          *(_QWORD *)&Src[0] = MmGetNumberOfPhysicalPages(v34) << 12;
          *((_QWORD *)&Src[0] + 1) = MmGetLowestPhysicalPage(v34) << 12;
          *(_QWORD *)&Src[1] = (MmGetHighestPhysicalPage(v35) << 12) + 4095;
          *(_OWORD *)a4 = Src[0];
          *(_QWORD *)(a4 + 16) = *(_QWORD *)&Src[1];
LABEL_67:
          Size = 24;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0xB9u:
          SystemBasicInformation = WbDispatchOperation((char *)a4, Length);
          goto LABEL_640;
        case 0xBAu:
          if ( !Length )
          {
            Data[0] = 1;
            return ZwFilterBootOption(FilterBootOptionOperationSetElement, 0x10200003u, 0x260000A0u, Data, 1u);
          }
          if ( a6 )
            *a6 = 0;
          return -1073741820;
        case 0xBCu:
          if ( Length != 8 )
            return -1073741820;
          BootGraphicsInformation = PsQueryActivityModerationUserSettings(Src);
          if ( BootGraphicsInformation >= 0 )
            *(_QWORD *)a4 = *(_QWORD *)&Src[0];
          goto LABEL_641;
        case 0xC0u:
          if ( Length >= 0x20 )
          {
            BootGraphicsInformation = ExpGetSystemFlushInformation(a4);
            Size = 32;
            goto LABEL_641;
          }
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        case 0xC1u:
          v95 = 8 * KeQueryActiveGroupCount();
          Size = v95;
          if ( Length >= v95 )
          {
            memset((void *)a4, 0, v95);
            v131 = 0;
            while ( v8 < (unsigned __int16)KeNumberNodes )
            {
              v96 = KeNodeBlock[v8];
              v129 = *(_WORD *)(v96 + 144);
              *(_QWORD *)(a4 + 8LL * v129) |= *(_QWORD *)(v96 + 24);
              v8 = ++v131;
            }
            BootGraphicsInformation = Size_4;
          }
          else
          {
LABEL_383:
            BootGraphicsInformation = -1073741789;
          }
          goto LABEL_641;
        case 0xC3u:
          if ( Length < 8 )
          {
            if ( a6 )
              *a6 = 8;
            return -1073741820;
          }
          SystemBasicInformation = ExpGetSystemWriteConstraintInformation(a4, v20, v15, v13);
          Size = 8;
LABEL_640:
          BootGraphicsInformation = SystemBasicInformation;
          goto LABEL_641;
        case 0xC4u:
          SystemBasicInformation = KeQueryKvaShadowInformation(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0xC5u:
          Size = 8;
          if ( Length >= 8 )
          {
            v125 = qword_140C4DE48;
            *(_QWORD *)a4 = 0LL;
            *(_QWORD *)a4 = v125;
            BootGraphicsInformation = Size_4;
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0xC6u:
          BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_140C00A68[0])(
                                      34LL,
                                      0LL,
                                      0LL,
                                      &NumberOfBytes);
          if ( BootGraphicsInformation != -1073741820 )
            return -1073741637;
          v47 = NumberOfBytes;
          if ( Length < (unsigned int)NumberOfBytes || !a4 )
          {
LABEL_97:
            Size = v47;
            goto LABEL_641;
          }
          if ( v9 )
          {
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)NumberOfBytes, 0x6F666E49u);
            *(_QWORD *)v135 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              BootGraphicsInformation = -1073741670;
              goto LABEL_641;
            }
            v47 = NumberOfBytes;
          }
          else
          {
            PoolWithQuotaTag = (_DWORD *)a4;
            *(_QWORD *)v135 = a4;
          }
          v124 = ((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, unsigned int *))off_140C00A68[0])(
                   34LL,
                   v47,
                   PoolWithQuotaTag,
                   &Size);
          BootGraphicsInformation = v124;
          if ( v9 )
          {
            if ( v124 >= 0 )
LABEL_429:
              memmove((void *)a4, PoolWithQuotaTag, Size);
LABEL_430:
            ExFreePoolWithTag(PoolWithQuotaTag, 0x6F666E49u);
          }
          goto LABEL_641;
        case 0xC8u:
          SystemBasicInformation = IoQuerySystemDeviceName(200);
          goto LABEL_640;
        case 0xC9u:
          SystemBasicInformation = KeQuerySpeculationControlInformation((void *)a4, Length);
          goto LABEL_640;
        case 0xCAu:
          Size = 1;
          if ( Length != 1 )
          {
            if ( a6 )
              *a6 = 1;
            goto LABEL_104;
          }
          v148 = 0;
          BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, __int64, _OWORD *, int *))off_140C00A68[0])(
                                      47LL,
                                      1LL,
                                      Src,
                                      &v148);
          if ( BootGraphicsInformation >= 0 && v148 == 1 )
            *(_BYTE *)a4 = Src[0];
          else
LABEL_419:
            BootGraphicsInformation = -1073741637;
          goto LABEL_641;
        case 0xCEu:
          if ( Length != 8 )
          {
            if ( a6 )
              *a6 = 8;
            return -1073741820;
          }
          *(_BYTE *)a4 = *(_BYTE *)ExLeapSecondData != 0;
          *(_DWORD *)(a4 + 4) = 0;
LABEL_116:
          Size = 8;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0xCFu:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = NtGlobalFlag2;
            goto LABEL_160;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xD0u:
          SystemBasicInformation = SeSecurityModelQueryInformation(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0xD2u:
          SystemBasicInformation = CmQuerySingleFeatureConfiguration(v135[0], v20, a4, Length, (__int64)&Size);
          goto LABEL_640;
        case 0xD3u:
          SystemBasicInformation = CmQueryFeatureConfigurationSections(
                                     *(__int128 **)v135,
                                     v20,
                                     (_OWORD *)a4,
                                     Length,
                                     &Size,
                                     KeGetCurrentThread()->PreviousMode);
          goto LABEL_640;
        case 0xD5u:
          SystemBasicInformation = KeQuerySecureSpeculationInformation((unsigned int *)a4, Length, &Size);
          goto LABEL_640;
        case 0xDDu:
          if ( Length != 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          *(_DWORD *)a4 = 0;
          if ( !PsIsCurrentThreadInServerSilo(0x140000000LL, v20) )
          {
            *(_DWORD *)a4 ^= (*(_DWORD *)a4 ^ KeIsCetCapable()) & 1;
            IsUserCetAllowed = KeIsUserCetAllowed();
            *(_DWORD *)a4 = v117 ^ ((unsigned __int8)v117 ^ (unsigned __int8)(2 * IsUserCetAllowed)) & 2;
            IsKTMCommitCoordinator = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator();
            *(_DWORD *)a4 = v119 ^ ((unsigned __int16)v119 ^ (unsigned __int16)(IsKTMCommitCoordinator << 8)) & 0x100;
          }
LABEL_160:
          Size = 4;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0xE3u:
          Size = 1;
          if ( Length == 1 )
          {
            *(_BYTE *)a4 = 1;
            BootGraphicsInformation = Size_4;
          }
          else
          {
            if ( a6 )
              *a6 = 1;
LABEL_104:
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        default:
          return -1073741821;
      }
      return result;
    case 0xAFu:
    case 0xB5u:
      v20 = (unsigned int)v133;
      if ( v133 != 8 )
        return -1073741811;
      Handle = **(HANDLE **)v135;
      goto LABEL_35;
    case 0xB2u:
      v20 = (unsigned int)v133;
      if ( v133 != 8 )
        return -1073741811;
      v162 = **(_QWORD **)v135;
      goto LABEL_35;
    default:
      goto LABEL_34;
  }
}
