/*
 * XREFs of NtSetSystemInformation @ 0x140707C50
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x140A73644 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     RtlImageDirectoryEntryToData @ 0x140252B30 (RtlImageDirectoryEntryToData.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     PsGetCurrentProcess @ 0x1402BBC90 (PsGetCurrentProcess.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     KeEnterCriticalRegion @ 0x1402D19A0 (KeEnterCriticalRegion.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140316414 (ExCpuSetResourceManagerAccessCheck.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14031711C (MmAdjustWorkingSetSizeEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140344620 (KeQueryActiveProcessorCountEx.c)
 *     ExpUpdateTimerConfiguration @ 0x14035C460 (ExpUpdateTimerConfiguration.c)
 *     KeSetSystemAllowedCpuSets @ 0x14035F238 (KeSetSystemAllowedCpuSets.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     IoConfigureCrashDump @ 0x1403BFA60 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memcmp @ 0x1403D22E0 (memcmp.c)
 *     ZwLoadDriver @ 0x1403FBAE0 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x1403FCFA0 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x1403FD320 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     VslProvisionDumpEncryption @ 0x1404FCCD4 (VslProvisionDumpEncryption.c)
 *     KdUpdateTimeSlipEvent @ 0x14051117C (KdUpdateTimeSlipEvent.c)
 *     KeProcessorProfileControlArea @ 0x14051420C (KeProcessorProfileControlArea.c)
 *     KeSetTagCpuSets @ 0x14051CEEC (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x14052255C (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x140580F48 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x14058137C (PsSetExeModerationState.c)
 *     ExpSetSoftRebootFlags @ 0x1405B20B8 (ExpSetSoftRebootFlags.c)
 *     PsInvokeWin32Callout @ 0x14061B5A0 (PsInvokeWin32Callout.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     PsLookupProcessThreadByCid @ 0x1406839D0 (PsLookupProcessThreadByCid.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x14068C184 (KeSynchronizeWithDynamicProcessors.c)
 *     SmSetStoreInformation @ 0x1406A1334 (SmSetStoreInformation.c)
 *     ExHandleSPCall2 @ 0x1406C8260 (ExHandleSPCall2.c)
 *     ExReleaseTimeRefreshLock @ 0x1407095C0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407095E4 (ExAcquireTimeRefreshLock.c)
 *     PfSetSuperfetchInformation @ 0x140709624 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x140709C3C (PfSnSetPrefetcherInformation.c)
 *     MmCombineIdenticalPages @ 0x140726820 (MmCombineIdenticalPages.c)
 *     MmLoadSystemImage @ 0x14075B2B0 (MmLoadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x14075B2EC (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x140771E10 (MmUnloadSystemImage.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     PsChangeQuantumTable @ 0x14078C6B8 (PsChangeQuantumTable.c)
 *     MmIssueMemoryListCommand @ 0x14078CE24 (MmIssueMemoryListCommand.c)
 *     ExpInitializeSessionDriver @ 0x14078E0BC (ExpInitializeSessionDriver.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407CB578 (ExpRegisterFirmwareTableInformationHandler.c)
 *     KeInitializeEntropySystem @ 0x1407D2094 (KeInitializeEntropySystem.c)
 *     WheaCrashDumpInitializationComplete @ 0x1407D43E4 (WheaCrashDumpInitializationComplete.c)
 *     ExSystemExceptionFilter @ 0x1407D4E30 (ExSystemExceptionFilter.c)
 *     CmUpdateFeatureConfiguration @ 0x14086B380 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14086B518 (CmUpdateFeatureUsageSubscription.c)
 *     CmSetRegistryQuotaInformation @ 0x14086B69C (CmSetRegistryQuotaInformation.c)
 *     CmReconcileAndValidateAllHives @ 0x1408725F0 (CmReconcileAndValidateAllHives.c)
 *     DbgkRegisterErrorPort @ 0x140886A94 (DbgkRegisterErrorPort.c)
 *     HvlSetEnlightenmentInfo @ 0x14088E600 (HvlSetEnlightenmentInfo.c)
 *     VslRelaxQuotas @ 0x1408901CC (VslRelaxQuotas.c)
 *     MmAddVerifierThunks @ 0x1408C6600 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x1408C7360 (MmCreateMirror.c)
 *     MmScrubMemory @ 0x1408DC16C (MmScrubMemory.c)
 *     ObSetRefTraceInformation @ 0x1408DE31C (ObSetRefTraceInformation.c)
 *     SeCodeIntegritySetInformation @ 0x14091BEA8 (SeCodeIntegritySetInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409385B0 (EtwSetPerformanceTraceInformation.c)
 *     ExpQueryElamCertInfo @ 0x14094A928 (ExpQueryElamCertInfo.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x14094B364 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x14094B3CC (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x14094B7BC (ExpUpdateComPlusPackage.c)
 *     ExSetLeapSecondEnabled @ 0x14094B868 (ExSetLeapSecondEnabled.c)
 *     ExpCapabilityCheck @ 0x14094F584 (ExpCapabilityCheck.c)
 *     ExpCovResetInformation @ 0x1409580B4 (ExpCovResetInformation.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     VfFreeCapturedUnicodeString @ 0x1409C5FCC (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x1409C6194 (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x1409C61CC (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfFaultsSetParameters @ 0x1409DC9D8 (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x1409EC9E8 (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x1409ECBD4 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1409ECBFC (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x1409ECD04 (VfSetVerifierInformationEx.c)
 *     BgkSetBootGraphicsInformation @ 0x1409F64C4 (BgkSetBootGraphicsInformation.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  size_t v3; // r15
  unsigned __int64 v4; // rsi
  SYSTEM_INFORMATION_CLASS v5; // r14d
  __int64 v6; // rdi
  int v7; // r13d
  __int64 v8; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v10; // rax
  NTSTATUS updated; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rcx
  char v19; // cl
  unsigned __int64 v20; // r9
  ULONG ActiveProcessorCount; // eax
  __int64 *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  PVOID v25; // rcx
  NTSTATUS result; // eax
  __int32 v27; // r14d
  NTSTATUS v28; // eax
  char *v29; // rcx
  __int64 v30; // rcx
  PIMAGE_NT_HEADERS v31; // rax
  __int32 v32; // r14d
  __int32 v33; // r14d
  __int32 v34; // r14d
  int SystemImage; // eax
  PVOID v36; // rdi
  PIMAGE_NT_HEADERS v37; // rax
  char *v38; // rdx
  int v39; // ebx
  __int64 v40; // rcx
  __int64 v41; // rsi
  PADAPTER_OBJECT v42; // r14
  struct _DMA_ADAPTER *v43; // rcx
  __int32 v44; // r14d
  __int32 v45; // r14d
  __int32 v46; // r14d
  int v47; // r14d
  int v48; // r14d
  int v49; // r14d
  int v50; // r14d
  unsigned int v51; // ebx
  bool v52; // zf
  unsigned __int64 v53; // rcx
  __int16 v54; // ax
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // r9
  __int32 v60; // r14d
  __int32 v61; // r14d
  __int32 v62; // r14d
  int v63; // r14d
  int v64; // r14d
  int v65; // r14d
  int v66; // r14d
  int v67; // r14d
  __int64 v68; // rcx
  __int32 v69; // r14d
  __int32 v70; // r14d
  __int32 v71; // r14d
  int v72; // r14d
  int v73; // r14d
  int v74; // r14d
  int v75; // r14d
  int v76; // r14d
  int v77; // r15d
  char v78; // bl
  __m128i v79; // xmm1
  unsigned __int16 v80; // bx
  char *v81; // rcx
  PVOID PoolWithTag; // rax
  PVOID v83; // r15
  __int64 v84; // rcx
  struct _DMA_ADAPTER *v85; // rdi
  _KPROCESS *CurrentProcess; // rdi
  ULONG v87; // r15d
  __int64 v88; // r14
  unsigned int v89; // r15d
  int v90; // r8d
  char *v91; // rdx
  __int64 v92; // rcx
  ULONG v93; // r15d
  unsigned __int64 v94; // r14
  bool v95; // [rsp+30h] [rbp-358h] BYREF
  char v96[3]; // [rsp+31h] [rbp-357h] BYREF
  int SessionId; // [rsp+34h] [rbp-354h] BYREF
  PVOID BaseOfImage; // [rsp+40h] [rbp-348h] BYREF
  void *Buf1[2]; // [rsp+48h] [rbp-340h] BYREF
  unsigned __int64 v100; // [rsp+58h] [rbp-330h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-328h] BYREF
  LUID PrivilegeValue; // [rsp+68h] [rbp-320h] BYREF
  int v103; // [rsp+70h] [rbp-318h]
  PVOID Object; // [rsp+78h] [rbp-310h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-308h] BYREF
  __int64 v106; // [rsp+88h] [rbp-300h] BYREF
  PVOID v107; // [rsp+90h] [rbp-2F8h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+98h] [rbp-2F0h] BYREF
  int v109; // [rsp+A8h] [rbp-2E0h]
  int v110; // [rsp+ACh] [rbp-2DCh]
  ULONG Size; // [rsp+B0h] [rbp-2D8h] BYREF
  int v112; // [rsp+B4h] [rbp-2D4h]
  int v113; // [rsp+BCh] [rbp-2CCh]
  HANDLE v114; // [rsp+C0h] [rbp-2C8h]
  HANDLE v115; // [rsp+F8h] [rbp-290h]
  unsigned __int64 v116; // [rsp+100h] [rbp-288h]
  __int128 v117; // [rsp+110h] [rbp-278h] BYREF
  void *Src[2]; // [rsp+120h] [rbp-268h]
  __int128 v119; // [rsp+130h] [rbp-258h] BYREF
  __int128 v120; // [rsp+140h] [rbp-248h] BYREF
  __int128 v121; // [rsp+150h] [rbp-238h]
  char v122[160]; // [rsp+160h] [rbp-228h] BYREF
  _BYTE v123[160]; // [rsp+200h] [rbp-188h] BYREF
  _BYTE v124[160]; // [rsp+2A0h] [rbp-E8h] BYREF

  v3 = SystemInformationLength;
  v4 = (unsigned __int64)SystemInformation;
  v5 = SystemInformationClass;
  v6 = 0LL;
  v95 = 0;
  *(_OWORD *)Buf1 = 0LL;
  BaseOfImage = 0LL;
  v7 = 1;
  v8 = 1LL;
  PrivilegeValue = 0LL;
  v106 = 0LL;
  BugCheckParameter2 = 0LL;
  DmaAdapter = 0LL;
  v100 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 1LL;
    if ( SystemInformationClass != SystemErrorPortInformation )
      v10 = 3LL;
    if ( SystemInformationLength )
    {
      if ( ((unsigned __int64)SystemInformation & v10) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_QWORD *)&SystemInformationClass = (char *)SystemInformation + SystemInformationLength;
      if ( *(_QWORD *)&SystemInformationClass > 0x7FFFFFFF0000uLL
        || *(_QWORD *)&SystemInformationClass < (unsigned __int64)SystemInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  updated = 0;
  if ( v5 > SystemVerifierFaultsInformation )
  {
    if ( v5 <= SystemHypervisorDetailInformation )
    {
      if ( v5 == SystemHypervisorDetailInformation )
        return -1073741637;
      if ( v5 > SystemProcessorProfileControlArea )
      {
        v69 = v5 - 130;
        if ( !v69 )
        {
          if ( ((SystemInformationLength - 16) & 0xFFFFFFE7) == 0 && SystemInformationLength != 40 )
          {
            if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            {
              memmove(&v119, (const void *)v4, v3);
              if ( (_DWORD)v3 == 32 )
                v6 = *((_QWORD *)&v120 + 1);
              updated = MmCombineIdenticalPages(v119, (unsigned int)v120, v6, &v106);
              SessionId = updated;
              *(_QWORD *)(v4 + 8) = v106;
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        v70 = v69 - 1;
        if ( !v70 )
        {
          if ( PreviousMode )
            return -1073741790;
          if ( SystemInformationLength == 24 )
            return KeInitializeEntropySystem(
                     *(_QWORD *)SystemInformation,
                     *((_QWORD *)SystemInformation + 1),
                     *((_QWORD *)SystemInformation + 2),
                     1LL);
          return -1073741820;
        }
        v71 = v70 - 1;
        if ( !v71 )
        {
          if ( SystemInformationLength == 4 )
          {
            *(_QWORD *)&DriverServiceName.Length = 7733364LL;
            DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
            if ( (*(_BYTE *)SystemInformation & 1) != 0 )
            {
              KeEnterCriticalRegion();
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpConDrvLoadLock, 0LL);
              updated = ZwLoadDriver(&DriverServiceName);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)&ExpConDrvLoadLock);
              KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
              KeLeaveCriticalRegion();
              return updated;
            }
            if ( SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
              return ZwUnloadDriver(&DriverServiceName);
            return -1073741727;
          }
          return -1073741820;
        }
        v72 = v71 - 2;
        if ( !v72 )
        {
          if ( SystemInformationLength == 32 )
            return ExHandleSPCall2(*(__int64 *)&SystemInformationClass, (unsigned __int64)SystemInformation);
          return -1073741820;
        }
        v73 = v72 - 8;
        if ( v73 )
        {
          v74 = v73 - 8;
          if ( !v74 )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return -1073741727;
            if ( !(_DWORD)v3 )
            {
              if ( ExBootLoaderMetadata )
                _InterlockedExchange((volatile __int32 *)ExBootLoaderMetadata, 0);
              return updated;
            }
            return -1073741820;
          }
          v75 = v74 - 1;
          if ( !v75 )
          {
            PrivilegeValue = (LUID)19LL;
            if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
              return -1073741727;
            v77 = v3 - 1;
            if ( v77 )
            {
              if ( v77 != 3 )
                return -1073741820;
              v7 = *(_DWORD *)v4;
              v113 = *(_DWORD *)v4;
            }
            else
            {
              v78 = *(_BYTE *)v4;
              if ( *(_BYTE *)v4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return -1073741727;
              if ( !v78 )
                v7 = 5;
            }
            return ExpSetSoftRebootFlags(v7);
          }
          v76 = v75 - 1;
          if ( !v76 )
          {
            if ( SystemInformationLength == 8 )
            {
              if ( PreviousMode )
                return ExpQueryElamCertInfo(
                         *(_QWORD *)SystemInformation,
                         SystemInformation,
                         SystemInformationLength,
                         1LL);
              return -1073741811;
            }
            return -1073741820;
          }
          if ( v76 == 3 )
            return CmReconcileAndValidateAllHives(
                     *(_QWORD *)&SystemInformationClass,
                     SystemInformation,
                     SystemInformationLength,
                     1LL);
          return -1073741821;
        }
        if ( SystemInformationLength != 48 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
          return -1073741727;
        if ( CriticalProcessExceptionData )
          return 0;
        v119 = *(_OWORD *)v4;
        v79 = *(__m128i *)(v4 + 16);
        v121 = *(_OWORD *)(v4 + 32);
        *(__m128i *)Src = v79;
        v120 = 0LL;
        v80 = _mm_cvtsi128_si32(v79);
        if ( v80 && (v80 & 1) == 0 )
        {
          if ( ((__int64)Src[1] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v81 = (char *)Src[1] + v80;
          if ( (unsigned __int64)v81 > 0x7FFFFFFF0000LL || v81 < Src[1] )
            MEMORY[0x7FFFFFFF0000] = 0;
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)9, v80, 0x50535845u);
          v83 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, Src[1], v80);
            *((_QWORD *)&v120 + 1) = v83;
            LOWORD(v120) = v80;
            WORD1(v120) = v80;
          }
        }
        *(_OWORD *)&CriticalProcessExceptionData = v119;
        xmmword_140C19770 = v120;
        xmmword_140C19780 = v121;
        return 0;
      }
      if ( v5 == SystemProcessorProfileControlArea )
        return KeProcessorProfileControlArea((__int64)SystemInformation, SystemInformationLength, PreviousMode);
      v60 = v5 - 102;
      if ( v60 )
      {
        v61 = v60 - 2;
        if ( !v61 )
        {
          LOBYTE(SystemInformationLength) = PreviousMode;
          return ExpSetProcessorMicrocodeUpdateInformation(
                   SystemInformation,
                   (unsigned int)v3,
                   SystemInformationLength,
                   1LL);
        }
        v62 = v61 - 2;
        if ( !v62 )
          return -1073741821;
        v63 = v62 - 3;
        if ( !v63 )
          return SmSetStoreInformation(
                   *(__int64 *)&SystemInformationClass,
                   (__int128 *)SystemInformation,
                   SystemInformationLength,
                   PreviousMode);
        v64 = v63 - 1;
        if ( !v64 )
          return -1073741822;
        v65 = v64 - 1;
        if ( !v65 )
        {
          if ( SystemInformationLength != 4 )
            return -1073741820;
          if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            return -1073741790;
          MEMORY[0xFFFFF78000000248] = *(_DWORD *)v4;
          return 0;
        }
        v66 = v65 - 2;
        if ( !v66 )
          return PsSetCpuQuotaInformation((unsigned __int64)SystemInformation, SystemInformationLength, PreviousMode);
        v67 = v66 - 13;
        if ( !v67 )
        {
          if ( PreviousMode )
            return -1073741727;
          if ( SystemInformationLength == 32 )
            return BgkSetBootGraphicsInformation(*(_QWORD *)&SystemInformationClass, SystemInformation, 32, 1LL);
          return -1073741820;
        }
        if ( v67 != 1 )
          return -1073741821;
        if ( SystemInformationLength != 16 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
          return -1073741727;
        v114 = *(HANDLE *)v4;
        updated = MmScrubMemory(v68, v114, &PrivilegeValue);
        SessionId = updated;
        *(LUID *)(v4 + 8) = PrivilegeValue;
        return updated;
      }
      v51 = 432;
      if ( SystemInformationLength != 432 )
        return -1073741820;
      if ( !PreviousMode || (unsigned __int8)ExpCapabilityCheck((PUNICODE_STRING)&TimeZoneCapability) )
        return ExpSetTimeZoneInformation(v4, v51);
      v52 = SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) == 0;
LABEL_220:
      if ( v52 )
        return -1073741727;
      return ExpSetTimeZoneInformation(v4, v51);
    }
    if ( v5 > SystemSecureDumpEncryptionInformation )
    {
      if ( v5 == SystemCodeIntegrityVerificationInformation )
        return SeCodeIntegritySetInformation((unsigned int)v5, SystemInformation, SystemInformationLength, 1LL);
      if ( v5 != SystemWorkloadAllowedCpuSetsInformation )
      {
        v92 = (unsigned int)(v5 - 206);
        switch ( v5 )
        {
          case SystemLeapSecondInformation:
            if ( SystemInformationLength != 8 )
              return -1073741820;
            if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
              return -1073741727;
            if ( PsIsCurrentThreadInServerSilo(v92, (__int64)SystemInformation) )
              return -1073741790;
            v95 = (unsigned __int8)*(_QWORD *)v4 != 0;
            result = ExSetLeapSecondEnabled();
            updated = result;
            if ( result >= 0 )
            {
              *(_BYTE *)ExLeapSecondData = v95;
              return updated;
            }
            return result;
          case SystemFlags2Information:
            if ( SystemInformationLength == 4 )
            {
              if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              {
                v103 = 0;
                NtGlobalFlag2 = *(_DWORD *)v4;
                *(_DWORD *)v4 = NtGlobalFlag2;
                return updated;
              }
              return -1073741790;
            }
            return -1073741820;
          case SystemFeatureConfigurationInformation:
            return CmUpdateFeatureConfiguration(SystemInformation, SystemInformationLength, PreviousMode);
          case SystemFeatureUsageSubscriptionInformation:
            return CmUpdateFeatureUsageSubscription(SystemInformation, SystemInformationLength, PreviousMode);
        }
        if ( (unsigned int)(v5 - 224) > 1 )
          return -1073741821;
        return SeCodeIntegritySetInformation((unsigned int)v5, SystemInformation, SystemInformationLength, 1LL);
      }
      if ( SystemInformationLength < 8 )
        return -1073741820;
      v93 = SystemInformationLength - 8;
      if ( (((_BYTE)SystemInformationLength - 8) & 7) != 0 || v93 > 0xA0 )
        return -1073741820;
      v94 = *(_QWORD *)SystemInformation;
      memmove(v124, (char *)SystemInformation + 8, v93);
      if ( v94 >= 2 )
        return -1073741811;
      updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( updated < 0 )
        return updated;
      v89 = v93 >> 3;
      v90 = v94;
      v91 = v124;
    }
    else
    {
      switch ( v5 )
      {
        case SystemSecureDumpEncryptionInformation:
          if ( !SystemInformationLength )
          {
            if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return VslProvisionDumpEncryption();
            return -1073741727;
          }
          return -1073741811;
        case SystemVmGenerationCountInformation:
          if ( PreviousMode )
            return -1073741790;
          if ( SystemInformationLength == 8 )
            return KdInitialize(3LL, SystemInformation, &KdpContext, 1LL);
          return -1073741820;
        case SystemCodeIntegrityPolicyInformation:
          return SeCodeIntegritySetInformation((unsigned int)v5, SystemInformation, SystemInformationLength, 1LL);
      }
      if ( v5 != SystemAllowedCpuSetsInformation )
      {
        switch ( v5 )
        {
          case SystemInterruptCpuSetsInformation:
            if ( SystemInformationLength == 16 )
            {
              if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
                return KeIntSteerAssignCpuSetForGsiv(*(_OWORD *)v4, WORD2(*(_QWORD *)v4), *(_QWORD *)(v4 + 8));
              return -1073741727;
            }
            return -1073741820;
          case SystemCpuSetTagInformation:
            if ( SystemInformationLength < 8 )
              return -1073741820;
            v87 = SystemInformationLength - 8;
            if ( (((_BYTE)SystemInformationLength - 8) & 7) != 0 || v87 > 0xA0 )
              return -1073741820;
            v88 = *(_QWORD *)SystemInformation;
            v116 = *(_QWORD *)SystemInformation;
            memmove(v122, (char *)SystemInformation + 8, v87);
            updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
            if ( updated >= 0 )
              return KeSetTagCpuSets(v87 >> 3, v122, v88);
            return updated;
          case SystemWin32WerStartCallout:
            if ( SystemInformationLength == 8 )
            {
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return -1073741727;
              v115 = *(HANDLE *)v4;
              v107 = 0LL;
              updated = ObReferenceObjectByHandle(v115, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v107, 0LL);
              if ( updated >= 0 )
              {
                v85 = (struct _DMA_ADAPTER *)v107;
                SessionId = MmGetSessionIdEx((__int64)v107);
                if ( SessionId != -1 )
                  updated = PsInvokeWin32Callout(32, (__int64)v85, 1, (__int64)&SessionId);
                v43 = v85;
                goto LABEL_199;
              }
            }
            else
            {
              if ( SystemInformationLength )
                return -1073741820;
              updated = 0;
              CurrentProcess = PsGetCurrentProcess();
              SessionId = MmGetSessionIdEx((__int64)CurrentProcess);
              if ( SessionId != -1 )
                return PsInvokeWin32Callout(32, (__int64)CurrentProcess, 1, (__int64)&SessionId);
            }
            return updated;
          case SystemActivityModerationExeState:
            if ( SystemInformationLength != 24 )
              return -1073741820;
            v119 = *(_OWORD *)SystemInformation;
            *(_QWORD *)&v120 = *((_QWORD *)SystemInformation + 2);
            result = VfProbeAndCaptureUnicodeStringBuffer(&v119, 1LL, 24, 1LL);
            if ( result < 0 )
              return result;
            updated = PsSetExeModerationState((__int64)&v119, v120, DWORD1(v120));
            v29 = (char *)&v119;
            goto LABEL_101;
        }
        v84 = (unsigned int)(v5 - 190);
        if ( v5 != SystemCodeIntegrityUnlockInformation )
        {
          if ( v5 != SystemIntegrityQuotaInformation )
            return -1073741821;
          if ( !SystemInformationLength )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return VslRelaxQuotas(v84, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
            return -1073741727;
          }
          return -1073741811;
        }
        return SeCodeIntegritySetInformation((unsigned int)v5, SystemInformation, SystemInformationLength, 1LL);
      }
      if ( (SystemInformationLength & 7) != 0 || SystemInformationLength > 0xA0 )
        return -1073741820;
      memmove(v123, SystemInformation, SystemInformationLength);
      result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( result < 0 )
        return result;
      v89 = (unsigned int)v3 >> 3;
      v90 = 0;
      v91 = v123;
    }
    return KeSetSystemAllowedCpuSets(v89, v91, v90);
  }
  if ( v5 == SystemVerifierFaultsInformation )
  {
    if ( SystemInformationLength != 40 )
      return -1073741820;
    if ( PreviousMode )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741727;
      v119 = *(_OWORD *)v4;
      v120 = *(_OWORD *)(v4 + 16);
      *(_QWORD *)&v121 = *(_QWORD *)(v4 + 32);
      result = VfProbeAndCaptureUnicodeStringBuffer((char *)&v119 + 8, 1LL, v56, v57);
      if ( result < 0 )
        return result;
      updated = VfProbeAndCaptureUnicodeStringBuffer((char *)&v120 + 8, 1LL, v58, v59);
      if ( updated < 0 )
      {
        v29 = (char *)&v119 + 8;
        goto LABEL_101;
      }
      v4 = (unsigned __int64)&v119;
    }
    updated = VfFaultsSetParameters(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
    if ( !PreviousMode )
      return updated;
    VfFreeCapturedUnicodeString(v4 + 8);
    v29 = (char *)(v4 + 24);
    goto LABEL_101;
  }
  if ( v5 > SystemPrefetcherInformation )
  {
    if ( v5 <= SystemThreadPriorityClientIdInformation )
    {
      if ( v5 != SystemThreadPriorityClientIdInformation )
      {
        if ( v5 == SystemComPlusPackage )
        {
          if ( SystemInformationLength == 4 )
          {
            v41 = *(unsigned int *)SystemInformation;
            updated = ExpUpdateComPlusPackage(v41, SystemInformation, 4, 1LL);
            if ( updated >= 0 )
              MEMORY[0xFFFFF780000002E0] = v41;
            return updated;
          }
          return -1073741820;
        }
        if ( v5 != SystemHotpatchInformation )
        {
          if ( v5 == SystemWatchdogTimerHandler )
            return -1073741637;
          if ( v5 != SystemWatchdogTimerInformation )
          {
            if ( v5 != SystemWow64SharedInformationObsolete )
            {
              switch ( v5 )
              {
                case SystemRegisterFirmwareTableInformationHandler:
                  LOBYTE(SystemInformationLength) = PreviousMode;
                  return ExpRegisterFirmwareTableInformationHandler(
                           SystemInformation,
                           (unsigned int)v3,
                           SystemInformationLength,
                           1LL);
                case SystemSuperfetchInformation:
                  LOBYTE(v8) = PreviousMode;
                  return PfSetSuperfetchInformation(0LL, SystemInformation, SystemInformationLength, v8);
                case SystemMemoryListInformation:
                  LOBYTE(SystemInformationLength) = PreviousMode;
                  return MmIssueMemoryListCommand(SystemInformation, (unsigned int)v3, SystemInformationLength, 1LL);
                case SystemFileCacheInformationEx:
                  goto LABEL_154;
              }
              return -1073741821;
            }
            return -1073741822;
          }
          if ( PreviousMode || !SystemInformation || SystemInformationLength != 8 )
            return -1073741811;
          if ( *(_DWORD *)SystemInformation )
          {
            switch ( *(_DWORD *)SystemInformation )
            {
              case 1:
                ((void (__fastcall *)(_QWORD, PVOID, ULONG, __int64))off_140C008C0[0])(
                  (unsigned int)(*(_DWORD *)SystemInformation - 1),
                  SystemInformation,
                  SystemInformationLength,
                  1LL);
                return 0;
              case 2:
                ((void (__fastcall *)(_QWORD, PVOID, ULONG, __int64))off_140C008C8[0])(
                  (unsigned int)(*(_DWORD *)SystemInformation - 2),
                  SystemInformation,
                  SystemInformationLength,
                  1LL);
                return 0;
              case 3:
                ((void (__fastcall *)(_QWORD, PVOID, ULONG, __int64))off_140C008B8[0])(
                  (unsigned int)(*(_DWORD *)SystemInformation - 3),
                  SystemInformation,
                  SystemInformationLength,
                  1LL);
                return 0;
            }
            if ( *(_DWORD *)SystemInformation != 4 )
            {
              v40 = (unsigned int)(*(_DWORD *)SystemInformation - 6);
              if ( *(_DWORD *)SystemInformation == 6 )
              {
                LODWORD(v40) = 1;
                return ((__int64 (__fastcall *)(__int64, PVOID, ULONG, __int64))off_140C008D8[0])(
                         v40,
                         SystemInformation,
                         SystemInformationLength,
                         1LL);
              }
              if ( *(_DWORD *)SystemInformation == 7 )
              {
                updated = 0;
                if ( off_140C008D8[0] == xKdEnumerateDebuggingDevices )
                  return -1073741822;
                return updated;
              }
              return -1073741811;
            }
          }
        }
        return -1073741637;
      }
      if ( SystemInformationLength < 0x18 )
        return -1073741820;
      if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
        return -1073741727;
      if ( PreviousMode )
      {
        v119 = *(_OWORD *)v4;
        *(_QWORD *)&v120 = *(_QWORD *)(v4 + 16);
        v4 = (unsigned __int64)&v119;
      }
      if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) > 0x1E )
        return -1073741811;
      v117 = *(_OWORD *)v4;
      updated = PsLookupProcessThreadByCid((__int64)&v117, 0LL, &DmaAdapter);
      if ( updated >= 0 )
      {
        v42 = DmaAdapter;
        if ( *((_BYTE *)&DmaAdapter->Size + 2) )
        {
          updated = -1073741749;
        }
        else
        {
          KeSetActualBasePriorityThread((__int64)DmaAdapter, *(_DWORD *)(v4 + 16));
          updated = 259;
        }
        v43 = v42;
LABEL_199:
        HalPutDmaAdapter(v43);
        return updated;
      }
      return updated;
    }
    v44 = v5 - 86;
    if ( !v44 )
      return ObSetRefTraceInformation(SystemInformation, SystemInformationLength, SystemInformationLength, 1LL);
    v45 = v44 - 1;
    if ( !v45 )
    {
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      {
        if ( (_DWORD)v3 == 8 )
        {
          v55 = *(_QWORD *)v4;
          MmSpecialPoolTag = *(_QWORD *)v4;
          MmSpecialPoolCatchOverruns = BYTE4(v55) & 1;
          return updated;
        }
        return -1073741820;
      }
      return -1073741790;
    }
    v46 = v45 - 2;
    if ( !v46 )
    {
      if ( PreviousMode == 1 )
      {
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
          return -1073741727;
        v53 = PsGetCurrentProcess()[1].AffinityPadding[10];
        if ( !v53 )
          return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
        v54 = *(_WORD *)(v53 + 8);
        if ( v54 != 332 && v54 != 452 )
          return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
      }
      return -1073741637;
    }
    v47 = v46 - 2;
    if ( !v47 )
    {
      LOBYTE(v8) = PreviousMode;
      return HvlSetEnlightenmentInfo(*(_QWORD *)&SystemInformationClass, SystemInformation, SystemInformationLength, v8);
    }
    v48 = v47 - 1;
    if ( !v48 )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741790;
      if ( (_DWORD)v3 == 40 )
        return VfSetVerifierInformationEx(v4);
      return -1073741820;
    }
    v49 = v48 - 1;
    if ( v49 )
    {
      v50 = v49 - 1;
      if ( v50 )
      {
        if ( v50 == 1 )
        {
          if ( !PreviousMode || !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741790;
          if ( (unsigned int)v3 >= 0x18 )
            return ExpCovResetInformation(v4, (unsigned int)v3);
          return -1073741820;
        }
        return -1073741821;
      }
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        if ( (_DWORD)v3 == 8 )
        {
          *(_QWORD *)&v119 = *(_QWORD *)v4;
          _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, v119);
          _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~DWORD1(v119));
          return updated;
        }
        return -1073741820;
      }
      return -1073741790;
    }
    v51 = 172;
    if ( SystemInformationLength != 172 )
      return -1073741820;
    if ( PreviousMode
      && !(unsigned __int8)ExpCapabilityCheck((PUNICODE_STRING)&TimeZoneCapability)
      && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
    {
      return -1073741727;
    }
    v52 = *((_BYTE *)PsGetCurrentServerSiloGlobals(*(__int64 *)&SystemInformationClass, (__int64)SystemInformation)
          + 1049) == 0;
    goto LABEL_220;
  }
  if ( v5 == SystemPrefetcherInformation )
  {
    LOBYTE(v8) = PreviousMode;
    return PfSnSetPrefetcherInformation(
             *(_QWORD *)&SystemInformationClass,
             SystemInformation,
             SystemInformationLength,
             v8);
  }
  if ( v5 <= SystemRegistryQuotaInformation )
  {
    if ( v5 == SystemRegistryQuotaInformation )
    {
      if ( SystemInformationLength == 16 )
      {
        if ( !PreviousMode || SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
          return CmSetRegistryQuotaInformation(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
        return -1073741727;
      }
      return -1073741820;
    }
    if ( v5 != SystemFlagsInformation )
    {
      if ( v5 != SystemFileCacheInformation )
      {
        if ( v5 == SystemDpcBehaviorInformation )
        {
          if ( SystemInformationLength == 20 )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
            {
              v119 = *(_OWORD *)v4;
              LODWORD(v120) = *(_DWORD *)(v4 + 16);
              KiMinimumDpcRate = DWORD2(v119);
              KiMaximumDpcQueueDepth = DWORD1(v119);
              KiAdjustDpcThreshold = HIDWORD(v119);
              KiIdealDpcRate = v120;
              KeSynchronizeWithDynamicProcessors();
              ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
              if ( ActiveProcessorCount )
              {
                v22 = KiProcessorBlock;
                v23 = ActiveProcessorCount;
                do
                {
                  v24 = *v22;
                  *(_DWORD *)(v24 + 12568) = KiMaximumDpcQueueDepth;
                  *(_DWORD *)(v24 + 12576) = KiMinimumDpcRate;
                  ++v22;
                  --v23;
                }
                while ( v23 );
              }
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        if ( v5 != SystemLoadGdiDriverInformation )
        {
          if ( v5 != SystemUnloadGdiDriverInformation )
          {
            v12 = (unsigned int)(v5 - 28);
            if ( v5 != SystemTimeAdjustmentInformation )
            {
              if ( v5 == SystemMirrorMemoryInformation )
                return MmCreateMirror();
              v13 = (unsigned int)(v5 - 31);
              if ( v5 == SystemPerformanceTraceInformation )
                return EtwSetPerformanceTraceInformation(SystemInformation, SystemInformationLength, PreviousMode);
              if ( v5 == SystemCrashDumpStateInformation )
              {
                if ( (!PreviousMode || SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode))
                  && !PsIsCurrentThreadInServerSilo(v13, (__int64)SystemInformation) )
                {
                  if ( (_DWORD)v3 != 4 )
                    goto LABEL_28;
                  if ( PreviousMode )
                  {
                    if ( (v4 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( v4 + 4 > 0x7FFFFFFF0000LL || v4 + 4 < v4 )
                      MEMORY[0x7FFFFFFF0000] = 0;
                    v16 = *(_DWORD *)v4;
                    v109 = *(_DWORD *)v4;
                  }
                  else
                  {
                    v16 = *(_DWORD *)v4;
                  }
                  if ( !v16 )
                  {
                    v14 = 0LL;
                    return IoConfigureCrashDump(v14, 0);
                  }
                  v17 = v16 - 1;
                  if ( !v17 )
                  {
LABEL_28:
                    v14 = 1LL;
                    return IoConfigureCrashDump(v14, 0);
                  }
                  if ( v17 == 1 )
                    return WheaCrashDumpInitializationComplete();
                  return -1073741811;
                }
                return -1073741727;
              }
              return -1073741821;
            }
            if ( ((SystemInformationLength - 8) & 0xFFFFFFF7) == 0 )
            {
              if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
                return -1073741727;
              if ( !PsIsCurrentThreadInServerSilo(v12, (__int64)SystemInformation) )
              {
                if ( (_DWORD)v3 == 16 )
                {
                  v19 = *(_BYTE *)(v4 + 8);
                  v95 = v19;
                  v100 = *(_QWORD *)v4;
                }
                else
                {
                  v19 = *(_BYTE *)(v4 + 4);
                  v95 = v19;
                  v20 = *(unsigned int *)v4;
                  v100 = v20;
                  if ( v20 )
                    v100 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v20;
                }
                if ( v19 )
                  v100 = MEMORY[0xFFFFF78000000300];
                LOBYTE(v18) = 1;
                ExAcquireTimeRefreshLock(v18);
                updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v100, (__int64)&v95);
                ExReleaseTimeRefreshLock();
                return updated;
              }
              return -1073741790;
            }
            return -1073741820;
          }
          if ( SystemInformationLength != 8 )
            return -1073741820;
          if ( PreviousMode )
            return -1073741727;
          MmUnloadSystemImage(*(_QWORD *)SystemInformation);
          return 0;
        }
LABEL_132:
        if ( SystemInformationLength == 56 )
        {
          if ( !PreviousMode )
          {
            *(_OWORD *)Buf1 = *(_OWORD *)SystemInformation;
            SystemImage = MmLoadSystemImage(
                            (unsigned int)Buf1,
                            0,
                            0,
                            v8,
                            (__int64)&BugCheckParameter2,
                            (__int64)&BaseOfImage);
            updated = SystemImage;
            if ( SystemImage < 0 )
            {
              if ( SystemImage == -1073741411 )
                return -1073741554;
            }
            else
            {
              v36 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0, &Size);
              v37 = RtlImageNtHeader(BaseOfImage);
              *(_QWORD *)(v4 + 40) = v36;
              v38 = (char *)BaseOfImage + v37->OptionalHeader.AddressOfEntryPoint;
              *(_QWORD *)(v4 + 16) = BaseOfImage;
              *(_QWORD *)(v4 + 24) = BugCheckParameter2;
              *(_QWORD *)(v4 + 32) = v38;
              *(_DWORD *)(v4 + 48) = v37->OptionalHeader.SizeOfImage;
            }
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      }
LABEL_154:
      v96[0] = 0;
      if ( SystemInformationLength >= 0x40 )
      {
        if ( v5 == SystemFileCacheInformation )
        {
          v39 = 0;
        }
        else
        {
          v112 = *((_DWORD *)SystemInformation + 15);
          v39 = v112;
          if ( (v112 & 0xFFFFFFF0) != 0 || (v112 & 0xC) == 0xC || (v112 & 3) == 3 )
            return -1073741584;
        }
        if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
          return MmAdjustWorkingSetSizeEx(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 32), 2, 1, v39, v96);
        return -1073741790;
      }
      return -1073741820;
    }
    if ( SystemInformationLength == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      {
        NtGlobalFlag = *(_DWORD *)v4 ^ (NtGlobalFlag ^ *(_DWORD *)v4) & 0x6DCE640F;
        *(_DWORD *)v4 = NtGlobalFlag;
        return updated;
      }
      return -1073741790;
    }
    return -1073741820;
  }
  if ( v5 > SystemSessionCreate )
  {
    v32 = v5 - 48;
    if ( v32 )
    {
      v33 = v32 - 3;
      if ( !v33 )
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return VfSetVerifierInformation(v4, (unsigned int)v3, 0LL);
        return -1073741790;
      }
      v34 = v33 - 1;
      if ( !v34 )
      {
        if ( !PreviousMode )
          return MmAddVerifierThunks(SystemInformation, SystemInformationLength);
        return -1073741727;
      }
      if ( v34 == 2 )
      {
        LODWORD(v8) = 0;
        goto LABEL_132;
      }
      return -1073741821;
    }
    return -1073741822;
  }
  if ( v5 == SystemSessionCreate )
    return -1073741822;
  if ( v5 != SystemExtendServiceTableInformation )
  {
    if ( v5 != SystemPrioritySeperation )
    {
      if ( v5 > SystemVerifierRemoveDriverInformation )
      {
        if ( v5 == SystemTimeSlipNotification )
        {
          if ( SystemInformationLength != 8 )
            return -1073741820;
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
            return -1073741727;
          if ( PsIsCurrentThreadInServerSilo(*(__int64 *)&SystemInformationClass, (__int64)SystemInformation) )
            return -1073741790;
          v114 = *(HANDLE *)v4;
          if ( v114 )
          {
            Object = 0LL;
            updated = ObReferenceObjectByHandle(v114, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
            v25 = Object;
            if ( updated < 0 )
              return updated;
          }
          else
          {
            v25 = 0LL;
            updated = 0;
          }
          KdUpdateTimeSlipEvent(v25);
          return updated;
        }
        return -1073741821;
      }
      if ( SystemInformationLength != 16 )
        return -1073741820;
      if ( PreviousMode )
      {
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
        if ( result < 0 )
          return result;
        v4 = (unsigned __int64)Buf1;
        if ( !LOWORD(Buf1[0]) )
          return -1073741585;
      }
      v27 = v5 - 40;
      if ( v27 )
      {
        if ( v27 != 1 )
        {
          updated = -1073741821;
LABEL_99:
          if ( !PreviousMode )
            return updated;
          v29 = (char *)v4;
LABEL_101:
          VfFreeCapturedUnicodeString(v29);
          return updated;
        }
        v28 = VfRemoveVerifierEntry(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
      }
      else
      {
        v28 = VfAddVerifierEntry((PCUNICODE_STRING)v4);
      }
      updated = v28;
      goto LABEL_99;
    }
    if ( SystemInformationLength != 4 )
      return -1073741820;
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      return -1073741727;
    v110 = *(_DWORD *)v4;
    LOBYTE(v30) = 1;
    PsChangeQuantumTable(v30);
    return 0;
  }
  if ( SystemInformationLength != 16 )
    return -1073741820;
  if ( PreviousMode )
  {
    if ( (PsGetCurrentProcess()[1].IdealProcessorPadding[10] & 0x100) == 0
      || !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
    {
      return -1073741727;
    }
    if ( v4 >= 0x7FFFFFFF0000LL )
      v4 = 0x7FFFFFFF0000LL;
    LODWORD(Buf1[0]) = *(_DWORD *)v4;
    Buf1[1] = *(void **)(v4 + 8);
    if ( LOWORD(Buf1[0]) == 62 )
    {
      if ( !memcmp(Buf1[1], L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
      {
        Buf1[1] = L"\\SystemRoot\\System32\\win32k.sys";
        WORD1(Buf1[0]) = 62;
        return ZwSetSystemInformation(SystemExtendServiceTableInformation, Buf1, 0x10u);
      }
      else
      {
        return -1073741727;
      }
    }
    else
    {
      return -1073741727;
    }
  }
  else
  {
    *(_OWORD *)Buf1 = *(_OWORD *)SystemInformation;
    if ( !memcmp(
            (const void *)_mm_srli_si128(*(__m128i *)Buf1, 8).m128i_i64[0],
            L"\\SystemRoot\\System32\\win32k.sys",
            0x3EuLL) )
      v7 = -2147483643;
    result = MmLoadSystemImageEx((unsigned int)Buf1, 0, 0, v7, (__int64)&BugCheckParameter2, (__int64)&BaseOfImage);
    if ( result >= 0 )
    {
      v31 = RtlImageNtHeader(BaseOfImage);
      if ( !v31 )
      {
        MmUnloadSystemImage(BugCheckParameter2);
        return -1073741701;
      }
      updated = ExpInitializeSessionDriver((char *)BaseOfImage + v31->OptionalHeader.AddressOfEntryPoint);
      if ( updated < 0 )
        MmUnloadSystemImage(BugCheckParameter2);
      return updated;
    }
    if ( result == -1073741411 )
      return -1073741554;
  }
  return result;
}
