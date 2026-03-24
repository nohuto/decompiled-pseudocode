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

__int64 __fastcall NtSetSystemInformation(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  size_t v3; // r15
  unsigned __int64 v4; // rsi
  int v5; // r14d
  __int64 v6; // rdi
  int v7; // r13d
  __int64 v8; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v10; // rax
  unsigned int updated; // ebx
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
  __int64 result; // rax
  int v27; // r14d
  unsigned int v28; // eax
  __int128 *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // r14d
  int v33; // r14d
  int v34; // r14d
  int SystemImage; // eax
  int v36; // edx
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // rsi
  PADAPTER_OBJECT v43; // r14
  struct _DMA_ADAPTER *v44; // rcx
  int v45; // r14d
  int v46; // r14d
  int v47; // r14d
  int v48; // r14d
  int v49; // r14d
  int v50; // r14d
  int v51; // r14d
  unsigned int v52; // ebx
  bool v53; // zf
  unsigned __int64 v54; // rcx
  __int16 v55; // ax
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // r14d
  int v62; // r14d
  int v63; // r14d
  int v64; // r14d
  int v65; // r14d
  int v66; // r14d
  int v67; // r14d
  int v68; // r14d
  __int64 v69; // rcx
  int v70; // r14d
  int v71; // r14d
  int v72; // r14d
  int v73; // r14d
  int v74; // r14d
  int v75; // r14d
  int v76; // r14d
  int v77; // r14d
  int v78; // r15d
  char v79; // bl
  __m128i v80; // xmm1
  unsigned __int16 v81; // bx
  char *v82; // rcx
  PVOID PoolWithTag; // rax
  PVOID v84; // r15
  __int64 v85; // rcx
  struct _DMA_ADAPTER *v86; // rdi
  _KPROCESS *CurrentProcess; // rdi
  unsigned int v88; // r15d
  __int64 v89; // r14
  unsigned int v90; // r15d
  int v91; // r8d
  char *v92; // rdx
  __int64 v93; // rcx
  unsigned int v94; // r15d
  unsigned __int64 v95; // r14
  bool v96; // [rsp+30h] [rbp-358h] BYREF
  char v97[3]; // [rsp+31h] [rbp-357h] BYREF
  int SessionId; // [rsp+34h] [rbp-354h] BYREF
  __int64 v99; // [rsp+40h] [rbp-348h] BYREF
  void *Buf1[2]; // [rsp+48h] [rbp-340h] BYREF
  unsigned __int64 v101; // [rsp+58h] [rbp-330h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-328h] BYREF
  LUID PrivilegeValue; // [rsp+68h] [rbp-320h] BYREF
  int v104; // [rsp+70h] [rbp-318h]
  PVOID Object; // [rsp+78h] [rbp-310h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-308h] BYREF
  __int64 v107; // [rsp+88h] [rbp-300h] BYREF
  PVOID v108; // [rsp+90h] [rbp-2F8h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+98h] [rbp-2F0h] BYREF
  int v110; // [rsp+A8h] [rbp-2E0h]
  int v111; // [rsp+ACh] [rbp-2DCh]
  char v112; // [rsp+B0h] [rbp-2D8h] BYREF
  int v113; // [rsp+B4h] [rbp-2D4h]
  int v114; // [rsp+BCh] [rbp-2CCh]
  HANDLE v115; // [rsp+C0h] [rbp-2C8h]
  HANDLE v116; // [rsp+F8h] [rbp-290h]
  unsigned __int64 v117; // [rsp+100h] [rbp-288h]
  __int128 v118; // [rsp+110h] [rbp-278h] BYREF
  void *Src[2]; // [rsp+120h] [rbp-268h]
  __int128 v120; // [rsp+130h] [rbp-258h] BYREF
  __int128 v121; // [rsp+140h] [rbp-248h] BYREF
  __int128 v122; // [rsp+150h] [rbp-238h]
  char v123[160]; // [rsp+160h] [rbp-228h] BYREF
  _BYTE v124[160]; // [rsp+200h] [rbp-188h] BYREF
  _BYTE v125[160]; // [rsp+2A0h] [rbp-E8h] BYREF

  v3 = (unsigned int)a3;
  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v96 = 0;
  *(_OWORD *)Buf1 = 0LL;
  v99 = 0LL;
  v7 = 1;
  v8 = 1LL;
  PrivilegeValue = 0LL;
  v107 = 0LL;
  BugCheckParameter2 = 0LL;
  DmaAdapter = 0LL;
  v101 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 1LL;
    if ( (_DWORD)a1 != 89 )
      v10 = 3LL;
    if ( (_DWORD)a3 )
    {
      if ( (a2 & v10) != 0 )
        ExRaiseDatatypeMisalignment();
      a1 = a2 + (unsigned int)a3;
      if ( a1 > 0x7FFFFFFF0000LL || a1 < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  updated = 0;
  if ( v5 > 97 )
  {
    if ( v5 <= 159 )
    {
      if ( v5 == 159 )
        return (unsigned int)-1073741637;
      if ( v5 > 129 )
      {
        v70 = v5 - 130;
        if ( !v70 )
        {
          if ( (((_DWORD)a3 - 16) & 0xFFFFFFE7) == 0 && (_DWORD)a3 != 40 )
          {
            if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            {
              memmove(&v120, (const void *)v4, v3);
              if ( (_DWORD)v3 == 32 )
                v6 = *((_QWORD *)&v121 + 1);
              updated = MmCombineIdenticalPages(v120, (unsigned int)v121, v6, &v107);
              SessionId = updated;
              *(_QWORD *)(v4 + 8) = v107;
              return updated;
            }
            return 3221225569LL;
          }
          return 3221225476LL;
        }
        v71 = v70 - 1;
        if ( !v71 )
        {
          if ( PreviousMode )
            return 3221225506LL;
          if ( (_DWORD)a3 == 24 )
            return (unsigned int)KeInitializeEntropySystem(
                                   *(_QWORD *)a2,
                                   *(_QWORD *)(a2 + 8),
                                   *(_QWORD *)(a2 + 16),
                                   1LL);
          return 3221225476LL;
        }
        v72 = v71 - 1;
        if ( !v72 )
        {
          if ( (_DWORD)a3 == 4 )
          {
            *(_QWORD *)&DriverServiceName.Length = 7733364LL;
            DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
            if ( (*(_BYTE *)a2 & 1) != 0 )
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
              return (unsigned int)ZwUnloadDriver(&DriverServiceName);
            return 3221225569LL;
          }
          return 3221225476LL;
        }
        v73 = v72 - 2;
        if ( !v73 )
        {
          if ( (_DWORD)a3 == 32 )
            return (unsigned int)ExHandleSPCall2(a1, a2);
          return 3221225476LL;
        }
        v74 = v73 - 8;
        if ( v74 )
        {
          v75 = v74 - 8;
          if ( !v75 )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return 3221225569LL;
            if ( !(_DWORD)v3 )
            {
              if ( ExBootLoaderMetadata )
                _InterlockedExchange((volatile __int32 *)ExBootLoaderMetadata, 0);
              return updated;
            }
            return 3221225476LL;
          }
          v76 = v75 - 1;
          if ( !v76 )
          {
            PrivilegeValue = (LUID)19LL;
            if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
              return 3221225569LL;
            v78 = v3 - 1;
            if ( v78 )
            {
              if ( v78 != 3 )
                return 3221225476LL;
              v7 = *(_DWORD *)v4;
              v114 = *(_DWORD *)v4;
            }
            else
            {
              v79 = *(_BYTE *)v4;
              if ( *(_BYTE *)v4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return 3221225569LL;
              if ( !v79 )
                v7 = 5;
            }
            return (unsigned int)ExpSetSoftRebootFlags(v7);
          }
          v77 = v76 - 1;
          if ( !v77 )
          {
            if ( (_DWORD)a3 == 8 )
            {
              if ( PreviousMode )
                return (unsigned int)ExpQueryElamCertInfo(*(_QWORD *)a2, a2, a3, 1LL);
              return 3221225485LL;
            }
            return 3221225476LL;
          }
          if ( v77 == 3 )
            return (unsigned int)CmReconcileAndValidateAllHives(a1, a2, a3, 1LL);
          return (unsigned int)-1073741821;
        }
        if ( (_DWORD)a3 != 48 )
          return 3221225476LL;
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
          return 3221225569LL;
        if ( CriticalProcessExceptionData )
          return 0LL;
        v120 = *(_OWORD *)v4;
        v80 = *(__m128i *)(v4 + 16);
        v122 = *(_OWORD *)(v4 + 32);
        *(__m128i *)Src = v80;
        v121 = 0LL;
        v81 = _mm_cvtsi128_si32(v80);
        if ( v81 && (v81 & 1) == 0 )
        {
          if ( ((__int64)Src[1] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v82 = (char *)Src[1] + v81;
          if ( (unsigned __int64)v82 > 0x7FFFFFFF0000LL || v82 < Src[1] )
            MEMORY[0x7FFFFFFF0000] = 0;
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)9, v81, 0x50535845u);
          v84 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, Src[1], v81);
            *((_QWORD *)&v121 + 1) = v84;
            LOWORD(v121) = v81;
            WORD1(v121) = v81;
          }
        }
        *(_OWORD *)&CriticalProcessExceptionData = v120;
        xmmword_140C19770 = v121;
        xmmword_140C19780 = v122;
        return 0;
      }
      if ( v5 == 129 )
        return (unsigned int)KeProcessorProfileControlArea(a2, a3, PreviousMode);
      v61 = v5 - 102;
      if ( v61 )
      {
        v62 = v61 - 2;
        if ( !v62 )
        {
          LOBYTE(a3) = PreviousMode;
          return (unsigned int)ExpSetProcessorMicrocodeUpdateInformation(a2, (unsigned int)v3, a3, 1LL);
        }
        v63 = v62 - 2;
        if ( !v63 )
          return (unsigned int)-1073741821;
        v64 = v63 - 3;
        if ( !v64 )
          return (unsigned int)SmSetStoreInformation(a1, (__int128 *)a2, a3, PreviousMode);
        v65 = v64 - 1;
        if ( !v65 )
          return (unsigned int)-1073741822;
        v66 = v65 - 1;
        if ( !v66 )
        {
          if ( (_DWORD)a3 != 4 )
            return 3221225476LL;
          if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            return 3221225506LL;
          MEMORY[0xFFFFF78000000248] = *(_DWORD *)v4;
          return 0;
        }
        v67 = v66 - 2;
        if ( !v67 )
          return (unsigned int)PsSetCpuQuotaInformation(a2, a3, PreviousMode);
        v68 = v67 - 13;
        if ( !v68 )
        {
          if ( PreviousMode )
            return 3221225569LL;
          if ( (_DWORD)a3 == 32 )
            return (unsigned int)BgkSetBootGraphicsInformation(a1, a2, a3, 1LL);
          return (unsigned int)-1073741820;
        }
        if ( v68 != 1 )
          return (unsigned int)-1073741821;
        if ( (_DWORD)a3 != 16 )
          return 3221225476LL;
        if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
          return 3221225569LL;
        v115 = *(HANDLE *)v4;
        updated = MmScrubMemory(v69, v115, &PrivilegeValue);
        SessionId = updated;
        *(LUID *)(v4 + 8) = PrivilegeValue;
        return updated;
      }
      v52 = 432;
      if ( (_DWORD)a3 != 432 )
        return 3221225476LL;
      if ( !PreviousMode || (unsigned __int8)ExpCapabilityCheck(&TimeZoneCapability) )
        return (unsigned int)ExpSetTimeZoneInformation(v4, v52);
      v53 = SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) == 0;
LABEL_220:
      if ( v53 )
        return 3221225569LL;
      return (unsigned int)ExpSetTimeZoneInformation(v4, v52);
    }
    if ( v5 > 194 )
    {
      if ( v5 == 199 )
        return (unsigned int)SeCodeIntegritySetInformation((unsigned int)v5, a2, (unsigned int)a3, 1LL);
      if ( v5 != 204 )
      {
        v93 = (unsigned int)(v5 - 206);
        switch ( v5 )
        {
          case 206:
            if ( (_DWORD)a3 != 8 )
              return 3221225476LL;
            if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
              return 3221225569LL;
            if ( PsIsCurrentThreadInServerSilo(v93, a2) )
              return 3221225506LL;
            v96 = (unsigned __int8)*(_QWORD *)v4 != 0;
            result = ExSetLeapSecondEnabled();
            updated = result;
            if ( (int)result >= 0 )
            {
              *(_BYTE *)ExLeapSecondData = v96;
              return updated;
            }
            return result;
          case 207:
            if ( (_DWORD)a3 == 4 )
            {
              if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              {
                v104 = 0;
                NtGlobalFlag2 = *(_DWORD *)v4;
                *(_DWORD *)v4 = NtGlobalFlag2;
                return updated;
              }
              return 3221225506LL;
            }
            return 3221225476LL;
          case 210:
            return (unsigned int)CmUpdateFeatureConfiguration((void *)a2, (unsigned int)a3, PreviousMode);
          case 212:
            return (unsigned int)CmUpdateFeatureUsageSubscription((void *)a2, (unsigned int)a3, PreviousMode);
        }
        if ( (unsigned int)(v5 - 224) > 1 )
          return (unsigned int)-1073741821;
        return (unsigned int)SeCodeIntegritySetInformation((unsigned int)v5, a2, (unsigned int)a3, 1LL);
      }
      if ( (unsigned int)a3 < 8 )
        return 3221225476LL;
      v94 = a3 - 8;
      if ( (((_BYTE)a3 - 8) & 7) != 0 || v94 > 0xA0 )
        return 3221225476LL;
      v95 = *(_QWORD *)a2;
      memmove(v125, (const void *)(a2 + 8), v94);
      if ( v95 >= 2 )
        return 3221225485LL;
      updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( (updated & 0x80000000) != 0 )
        return updated;
      v90 = v94 >> 3;
      v91 = v95;
      v92 = v125;
    }
    else
    {
      switch ( v5 )
      {
        case 194:
          if ( !(_DWORD)a3 )
          {
            if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return (unsigned int)VslProvisionDumpEncryption();
            return 3221225569LL;
          }
          return (unsigned int)-1073741811;
        case 161:
          if ( PreviousMode )
            return 3221225506LL;
          if ( (_DWORD)a3 == 8 )
            return (unsigned int)KdInitialize(3LL, a2, &KdpContext, 1LL);
          return 3221225476LL;
        case 164:
          return (unsigned int)SeCodeIntegritySetInformation((unsigned int)v5, a2, (unsigned int)a3, 1LL);
      }
      if ( v5 != 168 )
      {
        switch ( v5 )
        {
          case 170:
            if ( (_DWORD)a3 == 16 )
            {
              if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
                return (unsigned int)KeIntSteerAssignCpuSetForGsiv(
                                       *(_OWORD *)v4,
                                       WORD2(*(_QWORD *)v4),
                                       *(_QWORD *)(v4 + 8));
              return 3221225569LL;
            }
            return 3221225476LL;
          case 176:
            if ( (unsigned int)a3 < 8 )
              return 3221225476LL;
            v88 = a3 - 8;
            if ( (((_BYTE)a3 - 8) & 7) != 0 || v88 > 0xA0 )
              return 3221225476LL;
            v89 = *(_QWORD *)a2;
            v117 = *(_QWORD *)a2;
            memmove(v123, (const void *)(a2 + 8), v88);
            updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
            if ( (updated & 0x80000000) == 0 )
              return (unsigned int)KeSetTagCpuSets(v88 >> 3, v123, v89);
            return updated;
          case 177:
            if ( (_DWORD)a3 == 8 )
            {
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return 3221225569LL;
              v116 = *(HANDLE *)v4;
              v108 = 0LL;
              updated = ObReferenceObjectByHandle(v116, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v108, 0LL);
              if ( (updated & 0x80000000) == 0 )
              {
                v86 = (struct _DMA_ADAPTER *)v108;
                SessionId = MmGetSessionIdEx((__int64)v108);
                if ( SessionId != -1 )
                  updated = PsInvokeWin32Callout(32, (__int64)v86, 1, (__int64)&SessionId);
                v44 = v86;
                goto LABEL_199;
              }
            }
            else
            {
              if ( (_DWORD)a3 )
                return 3221225476LL;
              updated = 0;
              CurrentProcess = PsGetCurrentProcess();
              SessionId = MmGetSessionIdEx((__int64)CurrentProcess);
              if ( SessionId != -1 )
                return (unsigned int)PsInvokeWin32Callout(32, (__int64)CurrentProcess, 1, (__int64)&SessionId);
            }
            return updated;
          case 187:
            if ( (_DWORD)a3 != 24 )
              return 3221225476LL;
            v120 = *(_OWORD *)a2;
            *(_QWORD *)&v121 = *(_QWORD *)(a2 + 16);
            result = VfProbeAndCaptureUnicodeStringBuffer(&v120, 1LL, a3, 1LL);
            if ( (int)result < 0 )
              return result;
            updated = PsSetExeModerationState((__int64)&v120, v121, DWORD1(v121));
            v29 = &v120;
            goto LABEL_101;
        }
        v85 = (unsigned int)(v5 - 190);
        if ( v5 != 190 )
        {
          if ( v5 != 191 )
            return (unsigned int)-1073741821;
          if ( !(_DWORD)a3 )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return (unsigned int)VslRelaxQuotas(v85, a2, a3, v8);
            return 3221225569LL;
          }
          return (unsigned int)-1073741811;
        }
        return (unsigned int)SeCodeIntegritySetInformation((unsigned int)v5, a2, (unsigned int)a3, 1LL);
      }
      if ( (a3 & 7) != 0 || (unsigned int)a3 > 0xA0 )
        return 3221225476LL;
      memmove(v124, (const void *)a2, (unsigned int)a3);
      result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( (int)result < 0 )
        return result;
      v90 = (unsigned int)v3 >> 3;
      v91 = 0;
      v92 = v124;
    }
    return (unsigned int)KeSetSystemAllowedCpuSets(v90, v92, v91);
  }
  if ( v5 == 97 )
  {
    if ( (_DWORD)a3 != 40 )
      return 3221225476LL;
    if ( PreviousMode )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225569LL;
      v120 = *(_OWORD *)v4;
      v121 = *(_OWORD *)(v4 + 16);
      *(_QWORD *)&v122 = *(_QWORD *)(v4 + 32);
      result = VfProbeAndCaptureUnicodeStringBuffer((char *)&v120 + 8, 1LL, v57, v58);
      if ( (int)result < 0 )
        return result;
      updated = VfProbeAndCaptureUnicodeStringBuffer((char *)&v121 + 8, 1LL, v59, v60);
      if ( (updated & 0x80000000) != 0 )
      {
        v29 = (__int128 *)((char *)&v120 + 8);
        goto LABEL_101;
      }
      v4 = (unsigned __int64)&v120;
    }
    updated = VfFaultsSetParameters(v4, a2, a3, v8);
    if ( !PreviousMode )
      return updated;
    VfFreeCapturedUnicodeString(v4 + 8);
    v29 = (__int128 *)(v4 + 24);
    goto LABEL_101;
  }
  if ( v5 > 56 )
  {
    if ( v5 <= 82 )
    {
      if ( v5 != 82 )
      {
        if ( v5 == 59 )
        {
          if ( (_DWORD)a3 == 4 )
          {
            v42 = *(unsigned int *)a2;
            updated = ExpUpdateComPlusPackage(v42, a2, a3, 1LL);
            if ( (updated & 0x80000000) == 0 )
              MEMORY[0xFFFFF780000002E0] = v42;
            return updated;
          }
          return 3221225476LL;
        }
        if ( v5 != 69 )
        {
          if ( v5 == 71 )
            return 3221225659LL;
          if ( v5 != 72 )
          {
            if ( v5 != 74 )
            {
              switch ( v5 )
              {
                case 'K':
                  LOBYTE(a3) = PreviousMode;
                  return (unsigned int)ExpRegisterFirmwareTableInformationHandler(a2, (unsigned int)v3, a3, 1LL);
                case 'O':
                  LOBYTE(v8) = PreviousMode;
                  return (unsigned int)PfSetSuperfetchInformation(0LL, a2, (unsigned int)a3, v8);
                case 'P':
                  LOBYTE(a3) = PreviousMode;
                  return (unsigned int)MmIssueMemoryListCommand(a2, (unsigned int)v3, a3, 1LL);
                case 'Q':
                  goto LABEL_154;
              }
              return (unsigned int)-1073741821;
            }
            return 3221225474LL;
          }
          if ( PreviousMode || !a2 || (_DWORD)a3 != 8 )
            return 3221225485LL;
          if ( *(_DWORD *)a2 )
          {
            switch ( *(_DWORD *)a2 )
            {
              case 1:
                ((void (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64))off_140C008C0[0])(
                  (unsigned int)(*(_DWORD *)a2 - 1),
                  a2,
                  a3,
                  1LL);
                return 0;
              case 2:
                ((void (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64))off_140C008C8[0])(
                  (unsigned int)(*(_DWORD *)a2 - 2),
                  a2,
                  a3,
                  1LL);
                return 0;
              case 3:
                ((void (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64))off_140C008B8[0])(
                  (unsigned int)(*(_DWORD *)a2 - 3),
                  a2,
                  a3,
                  1LL);
                return 0;
            }
            if ( *(_DWORD *)a2 != 4 )
            {
              v41 = (unsigned int)(*(_DWORD *)a2 - 6);
              if ( *(_DWORD *)a2 == 6 )
              {
                LODWORD(v41) = 1;
                return ((unsigned int (__fastcall *)(__int64, unsigned __int64, __int64, __int64))off_140C008D8[0])(
                         v41,
                         a2,
                         a3,
                         1LL);
              }
              if ( *(_DWORD *)a2 == 7 )
              {
                updated = 0;
                if ( off_140C008D8[0] == xKdEnumerateDebuggingDevices )
                  return (unsigned int)-1073741822;
                return updated;
              }
              return (unsigned int)-1073741811;
            }
          }
        }
        return (unsigned int)-1073741637;
      }
      if ( (unsigned int)a3 < 0x18 )
        return 3221225476LL;
      if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
        return 3221225569LL;
      if ( PreviousMode )
      {
        v120 = *(_OWORD *)v4;
        *(_QWORD *)&v121 = *(_QWORD *)(v4 + 16);
        v4 = (unsigned __int64)&v120;
      }
      if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) > 0x1E )
        return 3221225485LL;
      v118 = *(_OWORD *)v4;
      updated = PsLookupProcessThreadByCid((__int64)&v118, 0LL, &DmaAdapter);
      if ( (updated & 0x80000000) == 0 )
      {
        v43 = DmaAdapter;
        if ( *((_BYTE *)&DmaAdapter->Size + 2) )
        {
          updated = -1073741749;
        }
        else
        {
          KeSetActualBasePriorityThread((__int64)DmaAdapter, *(_DWORD *)(v4 + 16));
          updated = 259;
        }
        v44 = v43;
LABEL_199:
        HalPutDmaAdapter(v44);
        return updated;
      }
      return updated;
    }
    v45 = v5 - 86;
    if ( !v45 )
      return (unsigned int)ObSetRefTraceInformation(a2, (unsigned int)a3, a3, 1LL);
    v46 = v45 - 1;
    if ( !v46 )
    {
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      {
        if ( (_DWORD)v3 == 8 )
        {
          v56 = *(_QWORD *)v4;
          MmSpecialPoolTag = *(_QWORD *)v4;
          MmSpecialPoolCatchOverruns = BYTE4(v56) & 1;
          return updated;
        }
        return (unsigned int)-1073741820;
      }
      return (unsigned int)-1073741790;
    }
    v47 = v46 - 2;
    if ( !v47 )
    {
      if ( PreviousMode == 1 )
      {
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
          return (unsigned int)-1073741727;
        v54 = PsGetCurrentProcess()[1].AffinityPadding[10];
        if ( !v54 )
          return (unsigned int)DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
        v55 = *(_WORD *)(v54 + 8);
        if ( v55 != 332 && v55 != 452 )
          return (unsigned int)DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
      }
      return (unsigned int)-1073741637;
    }
    v48 = v47 - 2;
    if ( !v48 )
    {
      LOBYTE(v8) = PreviousMode;
      return (unsigned int)HvlSetEnlightenmentInfo(a1, a2, (unsigned int)a3, v8);
    }
    v49 = v48 - 1;
    if ( !v49 )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225506LL;
      if ( (_DWORD)v3 == 40 )
        return (unsigned int)VfSetVerifierInformationEx(v4);
      return 3221225476LL;
    }
    v50 = v49 - 1;
    if ( v50 )
    {
      v51 = v50 - 1;
      if ( v51 )
      {
        if ( v51 == 1 )
        {
          if ( !PreviousMode || !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return 3221225506LL;
          if ( (unsigned int)v3 >= 0x18 )
            return (unsigned int)ExpCovResetInformation(v4, (unsigned int)v3);
          return 3221225476LL;
        }
        return (unsigned int)-1073741821;
      }
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        if ( (_DWORD)v3 == 8 )
        {
          *(_QWORD *)&v120 = *(_QWORD *)v4;
          _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, v120);
          _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~DWORD1(v120));
          return updated;
        }
        return (unsigned int)-1073741820;
      }
      return (unsigned int)-1073741790;
    }
    v52 = 172;
    if ( (_DWORD)a3 != 172 )
      return 3221225476LL;
    if ( PreviousMode
      && !(unsigned __int8)ExpCapabilityCheck(&TimeZoneCapability)
      && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
    {
      return 3221225569LL;
    }
    v53 = *((_BYTE *)PsGetCurrentServerSiloGlobals(a1, a2) + 1049) == 0;
    goto LABEL_220;
  }
  if ( v5 == 56 )
  {
    LOBYTE(v8) = PreviousMode;
    return (unsigned int)PfSnSetPrefetcherInformation(a1, a2, (unsigned int)a3, v8);
  }
  if ( v5 <= 37 )
  {
    if ( v5 == 37 )
    {
      if ( (_DWORD)a3 == 16 )
      {
        if ( !PreviousMode || SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
          return (unsigned int)CmSetRegistryQuotaInformation(v4, a2, a3, v8);
        return 3221225569LL;
      }
      return 3221225476LL;
    }
    if ( v5 != 9 )
    {
      if ( v5 != 21 )
      {
        if ( v5 == 24 )
        {
          if ( (_DWORD)a3 == 20 )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
            {
              v120 = *(_OWORD *)v4;
              LODWORD(v121) = *(_DWORD *)(v4 + 16);
              KiMinimumDpcRate = DWORD2(v120);
              KiMaximumDpcQueueDepth = DWORD1(v120);
              KiAdjustDpcThreshold = HIDWORD(v120);
              KiIdealDpcRate = v121;
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
            return 3221225569LL;
          }
          return 3221225476LL;
        }
        if ( v5 != 26 )
        {
          if ( v5 != 27 )
          {
            v12 = (unsigned int)(v5 - 28);
            if ( v5 != 28 )
            {
              if ( v5 == 30 )
                return (unsigned int)MmCreateMirror();
              v13 = (unsigned int)(v5 - 31);
              if ( v5 == 31 )
                return (unsigned int)EtwSetPerformanceTraceInformation(
                                       (volatile void *)a2,
                                       (unsigned int)a3,
                                       PreviousMode);
              if ( v5 == 34 )
              {
                if ( (!PreviousMode || SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode))
                  && !PsIsCurrentThreadInServerSilo(v13, a2) )
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
                    v110 = *(_DWORD *)v4;
                  }
                  else
                  {
                    v16 = *(_DWORD *)v4;
                  }
                  if ( !v16 )
                  {
                    v14 = 0LL;
                    return (unsigned int)IoConfigureCrashDump(v14, 0);
                  }
                  v17 = v16 - 1;
                  if ( !v17 )
                  {
LABEL_28:
                    v14 = 1LL;
                    return (unsigned int)IoConfigureCrashDump(v14, 0);
                  }
                  if ( v17 == 1 )
                    return (unsigned int)WheaCrashDumpInitializationComplete();
                  return 3221225485LL;
                }
                return 3221225569LL;
              }
              return (unsigned int)-1073741821;
            }
            if ( (((_DWORD)a3 - 8) & 0xFFFFFFF7) == 0 )
            {
              if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
                return 3221225569LL;
              if ( !PsIsCurrentThreadInServerSilo(v12, a2) )
              {
                if ( (_DWORD)v3 == 16 )
                {
                  v19 = *(_BYTE *)(v4 + 8);
                  v96 = v19;
                  v101 = *(_QWORD *)v4;
                }
                else
                {
                  v19 = *(_BYTE *)(v4 + 4);
                  v96 = v19;
                  v20 = *(unsigned int *)v4;
                  v101 = v20;
                  if ( v20 )
                    v101 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)(unsigned int)KeMaximumIncrement / v20;
                }
                if ( v19 )
                  v101 = MEMORY[0xFFFFF78000000300];
                LOBYTE(v18) = 1;
                ExAcquireTimeRefreshLock(v18);
                updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v101, (__int64)&v96);
                ExReleaseTimeRefreshLock();
                return updated;
              }
              return 3221225506LL;
            }
            return 3221225476LL;
          }
          if ( (_DWORD)a3 != 8 )
            return 3221225476LL;
          if ( PreviousMode )
            return 3221225569LL;
          MmUnloadSystemImage(*(_QWORD *)a2);
          return 0;
        }
LABEL_132:
        if ( (_DWORD)a3 == 56 )
        {
          if ( !PreviousMode )
          {
            *(_OWORD *)Buf1 = *(_OWORD *)a2;
            SystemImage = MmLoadSystemImage((unsigned int)Buf1, 0, 0, v8, (__int64)&BugCheckParameter2, (__int64)&v99);
            updated = SystemImage;
            if ( SystemImage < 0 )
            {
              if ( SystemImage == -1073741411 )
                return (unsigned int)-1073741554;
            }
            else
            {
              LOBYTE(v36) = 1;
              v37 = RtlImageDirectoryEntryToData(v99, v36, 0, (int)&v112);
              v38 = RtlImageNtHeader(v99);
              *(_QWORD *)(v4 + 40) = v37;
              v39 = v99 + *(unsigned int *)(v38 + 40);
              *(_QWORD *)(v4 + 16) = v99;
              *(_QWORD *)(v4 + 24) = BugCheckParameter2;
              *(_QWORD *)(v4 + 32) = v39;
              *(_DWORD *)(v4 + 48) = *(_DWORD *)(v38 + 80);
            }
            return updated;
          }
          return 3221225569LL;
        }
        return 3221225476LL;
      }
LABEL_154:
      v97[0] = 0;
      if ( (unsigned int)a3 >= 0x40 )
      {
        if ( v5 == 21 )
        {
          v40 = 0;
        }
        else
        {
          v113 = *(_DWORD *)(a2 + 60);
          v40 = v113;
          if ( (v113 & 0xFFFFFFF0) != 0 || (v113 & 0xC) == 0xC || (v113 & 3) == 3 )
            return 3221225712LL;
        }
        if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
          return MmAdjustWorkingSetSizeEx(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 32), 2, 1, v40, v97);
        return 3221225506LL;
      }
      return 3221225476LL;
    }
    if ( (_DWORD)a3 == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      {
        NtGlobalFlag = *(_DWORD *)v4 ^ (NtGlobalFlag ^ *(_DWORD *)v4) & 0x6DCE640F;
        *(_DWORD *)v4 = NtGlobalFlag;
        return updated;
      }
      return (unsigned int)-1073741790;
    }
    return (unsigned int)-1073741820;
  }
  if ( v5 > 47 )
  {
    v32 = v5 - 48;
    if ( v32 )
    {
      v33 = v32 - 3;
      if ( !v33 )
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return (unsigned int)VfSetVerifierInformation(v4, (unsigned int)v3, 0LL);
        return 3221225506LL;
      }
      v34 = v33 - 1;
      if ( !v34 )
      {
        if ( !PreviousMode )
          return (unsigned int)MmAddVerifierThunks((PVOID)a2, a3);
        return 3221225569LL;
      }
      if ( v34 == 2 )
      {
        LODWORD(v8) = 0;
        goto LABEL_132;
      }
      return (unsigned int)-1073741821;
    }
    return 3221225474LL;
  }
  if ( v5 == 47 )
    return 3221225474LL;
  if ( v5 != 38 )
  {
    if ( v5 != 39 )
    {
      if ( v5 > 41 )
      {
        if ( v5 == 46 )
        {
          if ( (_DWORD)a3 != 8 )
            return 3221225476LL;
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
            return 3221225569LL;
          if ( PsIsCurrentThreadInServerSilo(a1, a2) )
            return 3221225506LL;
          v115 = *(HANDLE *)v4;
          if ( v115 )
          {
            Object = 0LL;
            updated = ObReferenceObjectByHandle(v115, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
            v25 = Object;
            if ( (updated & 0x80000000) != 0 )
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
        return (unsigned int)-1073741821;
      }
      if ( (_DWORD)a3 != 16 )
        return 3221225476LL;
      if ( PreviousMode )
      {
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return 3221225569LL;
        result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
        if ( (int)result < 0 )
          return result;
        v4 = (unsigned __int64)Buf1;
        if ( !LOWORD(Buf1[0]) )
          return 3221225711LL;
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
          v29 = (__int128 *)v4;
LABEL_101:
          VfFreeCapturedUnicodeString(v29);
          return updated;
        }
        v28 = VfRemoveVerifierEntry(v4, a2, a3, v8);
      }
      else
      {
        v28 = VfAddVerifierEntry((PCUNICODE_STRING)v4);
      }
      updated = v28;
      goto LABEL_99;
    }
    if ( (_DWORD)a3 != 4 )
      return 3221225476LL;
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      return 3221225569LL;
    v111 = *(_DWORD *)v4;
    LOBYTE(v30) = 1;
    PsChangeQuantumTable(v30);
    return 0;
  }
  if ( (_DWORD)a3 != 16 )
    return 3221225476LL;
  if ( PreviousMode )
  {
    if ( (PsGetCurrentProcess()[1].IdealProcessorPadding[10] & 0x100) == 0
      || !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
    {
      return 3221225569LL;
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
        return ZwSetSystemInformation(38LL, (__int64)Buf1);
      }
      else
      {
        return 3221225569LL;
      }
    }
    else
    {
      return 3221225569LL;
    }
  }
  else
  {
    *(_OWORD *)Buf1 = *(_OWORD *)a2;
    if ( !memcmp(
            (const void *)_mm_srli_si128(*(__m128i *)Buf1, 8).m128i_i64[0],
            L"\\SystemRoot\\System32\\win32k.sys",
            0x3EuLL) )
      v7 = -2147483643;
    result = MmLoadSystemImageEx((unsigned int)Buf1, 0, 0, v7, (__int64)&BugCheckParameter2, (__int64)&v99);
    if ( (int)result >= 0 )
    {
      v31 = RtlImageNtHeader(v99);
      if ( !v31 )
      {
        MmUnloadSystemImage(BugCheckParameter2);
        return 3221225595LL;
      }
      updated = ExpInitializeSessionDriver(v99 + *(unsigned int *)(v31 + 40));
      if ( (updated & 0x80000000) != 0 )
        MmUnloadSystemImage(BugCheckParameter2);
      return updated;
    }
    if ( (_DWORD)result == -1073741411 )
      return 3221225742LL;
  }
  return result;
}
