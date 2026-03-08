/*
 * XREFs of NtSetSystemInformation @ 0x1407E1F30
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x140B546C8 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14020C61C (MmAdjustWorkingSetSizeEx.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     RtlCheckTokenMembership @ 0x1402BDFD0 (RtlCheckTokenMembership.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     MiGetThreadPartition @ 0x14036CC9C (MiGetThreadPartition.c)
 *     KeModifySystemAllowedCpuSets @ 0x140399138 (KeModifySystemAllowedCpuSets.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403AB15C (ExCpuSetResourceManagerAccessCheck.c)
 *     ExpUpdateTimerConfiguration @ 0x1403BCFE8 (ExpUpdateTimerConfiguration.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     ZwLoadDriver @ 0x140414490 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x140415A30 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x140415DD0 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     VslProvisionDumpEncryption @ 0x140549A08 (VslProvisionDumpEncryption.c)
 *     IoConfigureCrashDump @ 0x14054D564 (IoConfigureCrashDump.c)
 *     IoProvisionCrashDumpKey @ 0x14054E504 (IoProvisionCrashDumpKey.c)
 *     KdUpdateTimeSlipEvent @ 0x1405655C8 (KdUpdateTimeSlipEvent.c)
 *     KeUpdateDpcWatchdogConfiguration @ 0x140568BB0 (KeUpdateDpcWatchdogConfiguration.c)
 *     KeProcessorProfileControlArea @ 0x14056A18C (KeProcessorProfileControlArea.c)
 *     KeSetTagCpuSets @ 0x140573EE8 (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x140577890 (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x1405A1524 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x1405A198C (PsSetExeModerationState.c)
 *     ExpSetBootLoaderMetadata @ 0x1406034C0 (ExpSetBootLoaderMetadata.c)
 *     ExpSetSoftRebootFlags @ 0x1406035F0 (ExpSetSoftRebootFlags.c)
 *     ExPoolSetLimit @ 0x140605324 (ExPoolSetLimit.c)
 *     MmLoadSystemImage @ 0x14072CDE0 (MmLoadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     ExHandleSPCall2 @ 0x140769A60 (ExHandleSPCall2.c)
 *     PsLookupProcessThreadByCid @ 0x14076A3D0 (PsLookupProcessThreadByCid.c)
 *     PsChangeQuantumTable @ 0x14076EDA4 (PsChangeQuantumTable.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140773F48 (KeSynchronizeWithDynamicProcessors.c)
 *     SmSetStoreInformation @ 0x1407990D4 (SmSetStoreInformation.c)
 *     ExpInitializeSessionDriver @ 0x14079B72C (ExpInitializeSessionDriver.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     PsInvokeWin32Callout @ 0x1407D2D10 (PsInvokeWin32Callout.c)
 *     ExAcquireTimeRefreshLock @ 0x1407E2A54 (ExAcquireTimeRefreshLock.c)
 *     PfSetSuperfetchInformation @ 0x1407E2A94 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x1407E2E70 (PfSnSetPrefetcherInformation.c)
 *     MmUnloadSystemImage @ 0x1407F5FA0 (MmUnloadSystemImage.c)
 *     MiCombineIdenticalPages @ 0x1407F7D84 (MiCombineIdenticalPages.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1408584B4 (ExpRegisterFirmwareTableInformationHandler.c)
 *     MmIssueMemoryListCommand @ 0x14085E358 (MmIssueMemoryListCommand.c)
 *     KeInitializeEntropySystem @ 0x14085E4DC (KeInitializeEntropySystem.c)
 *     WheaCrashDumpInitializationComplete @ 0x14086086C (WheaCrashDumpInitializationComplete.c)
 *     DbgkRegisterErrorPort @ 0x1409369A4 (DbgkRegisterErrorPort.c)
 *     HvlQuerySetBootPagesInfo @ 0x14093E004 (HvlQuerySetBootPagesInfo.c)
 *     VslRelaxQuotas @ 0x14093FE98 (VslRelaxQuotas.c)
 *     PnpIommuBlockUnblockDevice @ 0x14096BFE8 (PnpIommuBlockUnblockDevice.c)
 *     ObSetRefTraceInformation @ 0x1409798A0 (ObSetRefTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DF094 (EtwSetPerformanceTraceInformation.c)
 *     ExpQueryElamCertInfo @ 0x1409F3CC0 (ExpQueryElamCertInfo.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x1409F47E4 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1409F484C (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x1409F4C98 (ExpUpdateComPlusPackage.c)
 *     ExSetLeapSecondEnabled @ 0x1409F4D44 (ExSetLeapSecondEnabled.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovResetInformation @ 0x140A04414 (ExpCovResetInformation.c)
 *     CmSetRegistryQuotaInformation @ 0x140A0CDF8 (CmSetRegistryQuotaInformation.c)
 *     CmUpdateFeatureConfiguration @ 0x140A0F190 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140A0F4A0 (CmUpdateFeatureUsageSubscription.c)
 *     CmReconcileAndValidateAllHives @ 0x140A105DC (CmReconcileAndValidateAllHives.c)
 *     MmAddVerifierThunks @ 0x140A2A850 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x140A2C460 (MmCreateMirror.c)
 *     MmScrubMemory @ 0x140A43E64 (MmScrubMemory.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     VfFreeCapturedUnicodeString @ 0x140ABF0C4 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140ABF240 (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140ABF27C (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfFaultsSetParameters @ 0x140AD3148 (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x140ADA630 (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x140ADA7C0 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140ADA7E8 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140ADA920 (VfSetVerifierInformationEx.c)
 *     VfVolatileApplyDifVerification @ 0x140ADAA10 (VfVolatileApplyDifVerification.c)
 *     VfVolatileClearDifRuleClass @ 0x140ADAA7C (VfVolatileClearDifRuleClass.c)
 *     VfVolatileRemoveDifVerification @ 0x140ADAB38 (VfVolatileRemoveDifVerification.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADABEC (VfVolatileSetDifRuleClass.c)
 *     VfPtGenerateTraceInformation @ 0x140ADB7D8 (VfPtGenerateTraceInformation.c)
 *     BgkSetBootGraphicsInformation @ 0x140AEE0F4 (BgkSetBootGraphicsInformation.c)
 */

__int64 __fastcall NtSetSystemInformation(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  size_t v3; // r15
  unsigned __int64 v4; // r14
  int v5; // ebx
  __int64 v6; // rsi
  unsigned int v7; // r13d
  __int64 v8; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v10; // rax
  ULONG updated; // edi
  __int64 v12; // rcx
  char v13; // cl
  unsigned __int64 v14; // r9
  __int64 result; // rax
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  PVOID v21; // rbx
  __int64 ThreadPartition; // rax
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  __int64 v27; // rcx
  int SystemImage; // eax
  int v29; // edx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // ebx
  __int64 v35; // r8
  unsigned int v36; // r15d
  int v37; // r9d
  _BYTE *v38; // rdx
  int v39; // ebx
  int v40; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v42; // ecx
  int v43; // ecx
  int v44; // ebx
  __int64 v45; // rcx
  unsigned int v46; // r15d
  unsigned __int64 v47; // rbx
  ULONG ActiveProcessorCount; // eax
  __int64 *v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  PVOID v54; // rcx
  int v55; // ebx
  ULONG v56; // eax
  __int64 v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // ebx
  _KPROCESS *v61; // rcx
  __int16 v62; // ax
  int v63; // ebx
  int v64; // ebx
  int v65; // ebx
  int v66; // ebx
  unsigned int v67; // ebx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // ebx
  UNICODE_STRING *v73; // rcx
  int v74; // ebx
  int v75; // ebx
  int v76; // ebx
  __int64 v77; // rcx
  int v78; // ebx
  __m128i v79; // xmm1
  unsigned __int16 v80; // bx
  char *v81; // rcx
  void *Pool2; // rax
  void *v83; // r14
  int v84; // ebx
  int v85; // ebx
  int v86; // ebx
  int v87; // ebx
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  int v91; // r15d
  char v92; // bl
  int v93; // ebx
  int v94; // ebx
  _KPROCESS *Process; // rbx
  unsigned int v96; // r15d
  __int64 v97; // rbx
  int v98; // ebx
  int v99; // ebx
  int v100; // ebx
  int v101; // ebx
  __int64 v102; // rcx
  bool v103; // [rsp+40h] [rbp-588h] BYREF
  char v104[9]; // [rsp+41h] [rbp-587h] BYREF
  char v105[22]; // [rsp+4Ah] [rbp-57Eh] BYREF
  PVOID v106; // [rsp+60h] [rbp-568h] BYREF
  void *Buf1[2]; // [rsp+68h] [rbp-560h] BYREF
  __int64 v109; // [rsp+80h] [rbp-548h] BYREF
  LUID PrivilegeValue; // [rsp+88h] [rbp-540h]
  int v111; // [rsp+90h] [rbp-538h]
  unsigned __int64 v112; // [rsp+98h] [rbp-530h] BYREF
  unsigned int *v113; // [rsp+A0h] [rbp-528h] BYREF
  int v114; // [rsp+A8h] [rbp-520h]
  PVOID Object; // [rsp+B0h] [rbp-518h] BYREF
  __int64 v116; // [rsp+B8h] [rbp-510h] BYREF
  __int64 v117; // [rsp+C0h] [rbp-508h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+C8h] [rbp-500h] BYREF
  __int128 v119; // [rsp+D8h] [rbp-4F0h]
  int v120; // [rsp+E8h] [rbp-4E0h]
  HANDLE v121; // [rsp+148h] [rbp-480h]
  __int64 v122; // [rsp+1C0h] [rbp-408h]
  int v123; // [rsp+1ECh] [rbp-3DCh]
  UNICODE_STRING v124; // [rsp+1F8h] [rbp-3D0h] BYREF
  void *Src[2]; // [rsp+208h] [rbp-3C0h]
  HANDLE v126; // [rsp+220h] [rbp-3A8h]
  __int64 v127; // [rsp+228h] [rbp-3A0h]
  UNICODE_STRING v128; // [rsp+248h] [rbp-380h] BYREF
  __int128 v129; // [rsp+258h] [rbp-370h] BYREF
  __int128 v130; // [rsp+268h] [rbp-360h]
  char v131[256]; // [rsp+280h] [rbp-348h] BYREF
  _BYTE v132[256]; // [rsp+380h] [rbp-248h] BYREF
  _BYTE v133[256]; // [rsp+480h] [rbp-148h] BYREF

  v3 = (unsigned int)a3;
  v4 = a2;
  v5 = a1;
  v124 = 0LL;
  v6 = 0LL;
  v103 = 0;
  *(_OWORD *)Buf1 = 0LL;
  v109 = 0LL;
  v7 = 1;
  v8 = 1LL;
  v116 = 0LL;
  v117 = 0LL;
  v113 = 0LL;
  Object = 0LL;
  v112 = 0LL;
  v128 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (_DWORD)a1 == 89 )
    {
      v10 = 1LL;
    }
    else if ( (_DWORD)a1 != 151 || (v10 = 0LL, (_DWORD)a3 != 1) )
    {
      v10 = 3LL;
    }
    if ( (_DWORD)a3 )
    {
      if ( (v10 & a2) != 0 )
        ExRaiseDatatypeMisalignment();
      a1 = a2 + (unsigned int)a3;
      if ( a1 > 0x7FFFFFFF0000LL || a1 < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  updated = 0;
  if ( v5 > 110 )
  {
    if ( v5 <= 187 )
    {
      if ( v5 == 187 )
      {
        if ( (_DWORD)a3 != 24 )
          return 3221225476LL;
        v128 = *(UNICODE_STRING *)a2;
        *(_QWORD *)&v129 = *(_QWORD *)(a2 + 16);
        result = VfProbeAndCaptureUnicodeStringBuffer(&v128, 1LL, a3, 1LL);
        if ( (int)result < 0 )
          return result;
        updated = PsSetExeModerationState((__int64)&v128, v129, DWORD1(v129));
        v73 = &v128;
        goto LABEL_450;
      }
      if ( v5 <= 150 )
      {
        if ( v5 == 150 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return 3221225569LL;
          return (unsigned int)ExpSetBootLoaderMetadata((void *)v4, (unsigned int)v3);
        }
        if ( v5 > 130 )
        {
          v39 = v5 - 131;
          if ( v39 )
          {
            v40 = v39 - 1;
            if ( v40 )
            {
              v78 = v40 - 2;
              if ( v78 )
              {
                if ( v78 == 8 )
                {
                  *(_OWORD *)Src = 0LL;
                  if ( (_DWORD)a3 != 48 )
                    return 3221225476LL;
                  if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
                    return 3221225569LL;
                  if ( CriticalProcessExceptionData )
                    return 0LL;
                  v128 = *(UNICODE_STRING *)v4;
                  v79 = *(__m128i *)(v4 + 16);
                  v130 = *(_OWORD *)(v4 + 32);
                  *(__m128i *)Src = v79;
                  v129 = 0LL;
                  v80 = _mm_cvtsi128_si32(v79);
                  if ( v80 && (v80 & 1) == 0 )
                  {
                    if ( ((__int64)Src[1] & 1) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v81 = (char *)Src[1] + v80;
                    if ( (unsigned __int64)v81 > 0x7FFFFFFF0000LL || v81 < Src[1] )
                      MEMORY[0x7FFFFFFF0000] = 0;
                    Pool2 = (void *)ExAllocatePool2(257LL, v80, 1347639365LL);
                    v83 = Pool2;
                    if ( Pool2 )
                    {
                      memmove(Pool2, Src[1], v80);
                      *((_QWORD *)&v129 + 1) = v83;
                      LOWORD(v129) = v80;
                      WORD1(v129) = v80;
                    }
                  }
                  *(UNICODE_STRING *)&CriticalProcessExceptionData = v128;
                  xmmword_140C317B0 = v129;
                  xmmword_140C317C0 = v130;
                  return 0;
                }
                return (ULONG)-1073741821;
              }
              if ( (_DWORD)a3 != 32 )
                return 3221225476LL;
              return (unsigned int)ExHandleSPCall2(a1, a2);
            }
            else
            {
              if ( (_DWORD)a3 != 4 )
                return 3221225476LL;
              *(_QWORD *)&DriverServiceName.Length = 7733364LL;
              DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
              if ( *(_BYTE *)a2 & 1 )
              {
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpConDrvLoadLock, 0LL);
                updated = ZwLoadDriver(&DriverServiceName);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)&ExpConDrvLoadLock);
                KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
                goto LABEL_31;
              }
              if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
                return 3221225569LL;
              return (unsigned int)ZwUnloadDriver(&DriverServiceName);
            }
          }
          else
          {
            if ( PreviousMode )
              return 3221225506LL;
            if ( (_DWORD)a3 != 24 )
              return 3221225476LL;
            return (unsigned int)KeInitializeEntropySystem(
                                   *(_QWORD *)a2,
                                   *(_QWORD *)(a2 + 8),
                                   *(_QWORD *)(a2 + 16),
                                   1LL);
          }
        }
        else
        {
          if ( v5 == 130 )
          {
            if ( (((_DWORD)a3 - 16) & 0xFFFFFFE7) == 0 && (_DWORD)a3 != 40 )
            {
              if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
              {
                memmove(&v128, (const void *)v4, v3);
                if ( (_DWORD)v3 == 32 )
                  v6 = *((_QWORD *)&v129 + 1);
                ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
                updated = MiCombineIdenticalPages(
                            ThreadPartition,
                            *(_QWORD *)&v128.Length,
                            (unsigned int)v129,
                            v6,
                            KeGetCurrentThread()->PreviousMode,
                            &v117);
                PrivilegeValue.LowPart = updated;
                *(_QWORD *)(v4 + 8) = v117;
                return updated;
              }
              return 3221225569LL;
            }
            return 3221225476LL;
          }
          v44 = v5 - 111;
          if ( !v44 )
          {
            if ( (_DWORD)a3 != 4 )
              return 3221225476LL;
            if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
              return 3221225506LL;
            *(_DWORD *)(MmWriteableSharedUserData + 584) = *(_DWORD *)v4;
            return 0;
          }
          v74 = v44 - 2;
          if ( v74 )
          {
            v75 = v74 - 13;
            if ( v75 )
            {
              v76 = v75 - 1;
              if ( !v76 )
              {
                if ( (_DWORD)a3 == 16 )
                {
                  if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
                  {
                    v121 = *(HANDLE *)v4;
                    updated = MmScrubMemory(v77, v121, &v116);
                    PrivilegeValue.LowPart = updated;
                    *(_QWORD *)(v4 + 8) = v116;
                    return updated;
                  }
                  return 3221225569LL;
                }
                return 3221225476LL;
              }
              if ( v76 != 2 )
                return (ULONG)-1073741821;
              return (unsigned int)KeProcessorProfileControlArea(a2, a3, PreviousMode);
            }
            else
            {
              if ( PreviousMode )
                return 3221225569LL;
              if ( (_DWORD)a3 != 32 )
                return (ULONG)-1073741820;
              return (unsigned int)BgkSetBootGraphicsInformation(a1, a2, a3, 1LL);
            }
          }
          else
          {
            return (unsigned int)PsSetCpuQuotaInformation(a2, a3, PreviousMode);
          }
        }
      }
      if ( v5 > 164 )
      {
        v34 = v5 - 168;
        if ( v34 )
        {
          v93 = v34 - 2;
          if ( !v93 )
          {
            v119 = 0LL;
            if ( (_DWORD)a3 != 16 )
              return 3221225476LL;
            if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
              return 3221225569LL;
            return (unsigned int)KeIntSteerAssignCpuSetForGsiv(*(_OWORD *)v4, WORD2(*(_QWORD *)v4), *(_QWORD *)(v4 + 8));
          }
          v94 = v93 - 6;
          if ( !v94 )
          {
            if ( (unsigned int)a3 < 8 )
              return 3221225476LL;
            v96 = a3 - 8;
            if ( (((_BYTE)a3 - 8) & 7) != 0 || v96 > 0x100 )
              return 3221225476LL;
            v97 = *(_QWORD *)a2;
            v127 = *(_QWORD *)a2;
            memmove(v131, (const void *)(a2 + 8), v96);
            updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
            if ( (updated & 0x80000000) != 0 )
              return updated;
            return (unsigned int)KeSetTagCpuSets(v96 >> 3, v131, v97);
          }
          if ( v94 != 1 )
            return (ULONG)-1073741821;
          if ( (_DWORD)a3 != 8 )
          {
            if ( (_DWORD)a3 )
              return 3221225476LL;
            updated = 0;
            Process = KeGetCurrentThread()->ApcState.Process;
            LODWORD(v106) = MmGetSessionIdEx((__int64)Process);
            if ( (_DWORD)v106 == -1 )
              return updated;
            return (unsigned int)PsInvokeWin32Callout(32, (__int64)Process, 1, (unsigned int *)&v106);
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return 3221225569LL;
          v126 = *(HANDLE *)v4;
          v106 = 0LL;
          updated = ObReferenceObjectByHandle(v126, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v106, 0LL);
          if ( (updated & 0x80000000) != 0 )
            return updated;
          v21 = v106;
          LODWORD(v106) = MmGetSessionIdEx((__int64)v106);
          if ( (_DWORD)v106 != -1 )
            updated = PsInvokeWin32Callout(32, (__int64)v21, 1, (unsigned int *)&v106);
          goto LABEL_58;
        }
        if ( (a3 & 7) != 0 || (unsigned int)a3 > 0x100 )
          return 3221225476LL;
        memmove(v132, (const void *)a2, (unsigned int)a3);
        result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( (int)result < 0 )
          return result;
        v36 = (unsigned int)v3 >> 3;
        v37 = 0;
        v38 = v132;
        return (unsigned int)KeModifySystemAllowedCpuSets(v36, (int)v38, v35, v37);
      }
      if ( v5 != 164 )
      {
        v84 = v5 - 151;
        if ( !v84 )
        {
          PrivilegeValue = (LUID)19LL;
          if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
            return 3221225569LL;
          v91 = v3 - 1;
          if ( v91 )
          {
            if ( v91 != 3 )
              return 3221225476LL;
            v7 = *(_DWORD *)v4;
            v123 = *(_DWORD *)v4;
          }
          else
          {
            v92 = *(_BYTE *)v4;
            if ( *(_BYTE *)v4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return 3221225569LL;
            if ( !v92 )
              v7 = 5;
          }
          return (unsigned int)ExpSetSoftRebootFlags(v7, v88, v89, v90);
        }
        v85 = v84 - 1;
        if ( !v85 )
        {
          if ( (_DWORD)a3 != 8 )
            return 3221225476LL;
          if ( PreviousMode )
            return (unsigned int)ExpQueryElamCertInfo(*(_QWORD *)a2, a2, a3, 1LL);
          return 3221225485LL;
        }
        v86 = v85 - 3;
        if ( !v86 )
          return (unsigned int)CmReconcileAndValidateAllHives(a1, a2, a3, 1LL);
        v87 = v86 - 4;
        if ( v87 )
        {
          if ( v87 != 2 )
            return (ULONG)-1073741821;
          if ( PreviousMode )
            return 3221225506LL;
          if ( (_DWORD)a3 != 8 )
            return 3221225476LL;
          return (unsigned int)KdInitialize(3LL, a2, &KdpContext, 1LL);
        }
        return (ULONG)-1073741637;
      }
      goto LABEL_432;
    }
    if ( v5 > 218 )
    {
      if ( v5 > 226 )
      {
        switch ( v5 )
        {
          case 228:
          case 229:
            v104[0] = 0;
            if ( (int)RtlCheckTokenMembership(0LL, SeAliasAdminsSid, v104) < 0 || !v104[0] )
              return 3221225569LL;
            return (unsigned int)KeUpdateDpcWatchdogConfiguration((void *)v4, (unsigned int)v3);
          case 233:
            return (unsigned int)PnpIommuBlockUnblockDevice(a2, (unsigned int)a3, a3, 1LL);
          case 235:
            return (unsigned int)HvlQuerySetBootPagesInfo((void *)a2, 0LL);
          default:
            return (ULONG)-1073741821;
        }
      }
      switch ( v5 )
      {
        case 226:
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return 3221225569LL;
          LOBYTE(v102) = (_DWORD)v3 == 0;
          return (unsigned int)VfPtGenerateTraceInformation(v102);
        case 219:
        case 220:
          if ( (_DWORD)a3 != 16 )
            return 3221225476LL;
          if ( !PreviousMode )
            goto LABEL_440;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return 3221225569LL;
          result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
          if ( (int)result < 0 )
            return result;
          v4 = (unsigned __int64)Buf1;
          if ( LOWORD(Buf1[0]) )
          {
LABEL_440:
            v101 = v5 - 219;
            if ( !v101 )
            {
              v56 = VfVolatileApplyDifVerification(v4, a2, a3, v8);
              goto LABEL_447;
            }
            if ( v101 == 1 )
            {
              v56 = VfVolatileRemoveDifVerification(v4, a2, a3, v8);
              goto LABEL_447;
            }
            goto LABEL_445;
          }
          return 3221225711LL;
        case 223:
          return (unsigned int)ExPoolSetLimit((void *)a2, (unsigned int)a3, PreviousMode);
      }
      if ( (unsigned int)(v5 - 224) > 1 )
        return (ULONG)-1073741821;
      goto LABEL_432;
    }
    if ( v5 == 218 )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225506LL;
      return (unsigned int)VfVolatileClearDifRuleClass();
    }
    if ( v5 > 206 )
    {
      v98 = v5 - 207;
      if ( !v98 )
      {
        if ( (_DWORD)a3 != 4 )
          return 3221225476LL;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return 3221225506LL;
        v111 = 0;
        if ( (*(_DWORD *)v4 & 4) == 0 )
        {
          NtGlobalFlag2 = NtGlobalFlag2 & 4 | *(_DWORD *)v4;
          *(_DWORD *)v4 = NtGlobalFlag2;
          return updated;
        }
        return 3221225485LL;
      }
      v99 = v98 - 3;
      if ( v99 )
      {
        v100 = v99 - 2;
        if ( v100 )
        {
          if ( v100 != 5 )
            return (ULONG)-1073741821;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return 3221225506LL;
          return (unsigned int)VfVolatileSetDifRuleClass((void *)v4, (unsigned int)v3);
        }
        else
        {
          return (unsigned int)CmUpdateFeatureUsageSubscription((void *)a2, (unsigned int)a3, PreviousMode);
        }
      }
      else
      {
        return (unsigned int)CmUpdateFeatureConfiguration((void *)a2, (unsigned int)a3, PreviousMode);
      }
    }
    if ( v5 == 206 )
    {
      if ( (_DWORD)a3 != 8 )
        return 3221225476LL;
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
        return 3221225569LL;
      if ( PsIsCurrentThreadInServerSilo(a1, a2) )
        return 3221225506LL;
      v103 = (unsigned __int8)*(_QWORD *)v4 != 0;
      result = ExSetLeapSecondEnabled();
      updated = result;
      if ( (int)result >= 0 )
      {
        *(_BYTE *)ExLeapSecondData = v103;
        return updated;
      }
      return result;
    }
    if ( v5 != 190 )
    {
      v45 = (unsigned int)(v5 - 191);
      switch ( v5 )
      {
        case 191:
          if ( !(_DWORD)a3 )
          {
            if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return 3221225569LL;
            return (unsigned int)VslRelaxQuotas(v45, a2, a3, v8);
          }
          break;
        case 194:
          if ( !(_DWORD)a3 )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return 3221225569LL;
            updated = VslProvisionDumpEncryption();
            if ( (updated & 0x80000000) != 0 )
              return updated;
            return (unsigned int)IoProvisionCrashDumpKey();
          }
          break;
        case 199:
          goto LABEL_432;
        case 204:
          v122 = 0LL;
          if ( (unsigned int)a3 < 8 )
            return 3221225476LL;
          v46 = a3 - 8;
          if ( (((_BYTE)a3 - 8) & 7) != 0 || v46 > 0x100 )
            return 3221225476LL;
          v47 = *(_QWORD *)a2;
          memmove(v133, (const void *)(a2 + 8), v46);
          if ( v47 >= 2 )
            return 3221225485LL;
          updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( (updated & 0x80000000) != 0 )
            return updated;
          v36 = v46 >> 3;
          v37 = v47;
          v38 = v133;
          return (unsigned int)KeModifySystemAllowedCpuSets(v36, (int)v38, v35, v37);
        default:
          return (ULONG)-1073741821;
      }
      return (ULONG)-1073741811;
    }
LABEL_432:
    if ( qword_140C37660 )
      return (unsigned int)qword_140C37660((unsigned int)v5, a2, (unsigned int)a3, 1LL);
    return (ULONG)-1073741637;
  }
  if ( v5 == 110 )
    return (ULONG)-1073741822;
  if ( v5 > 69 )
  {
    if ( v5 <= 89 )
    {
      if ( v5 == 89 )
      {
        if ( PreviousMode == 1 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
            return (ULONG)-1073741727;
          v61 = KeGetCurrentThread()->ApcState.Process;
          if ( !v61[1].Affinity.StaticBitmap[30] )
            return (unsigned int)DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
          v62 = WORD2(v61[2].Affinity.StaticBitmap[20]);
          if ( v62 != 332 && v62 != 452 )
            LOBYTE(v7) = 0;
          if ( !(_BYTE)v7 )
            return (unsigned int)DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
        }
        return (ULONG)-1073741637;
      }
      if ( v5 <= 80 )
      {
        if ( v5 == 80 )
        {
          LOBYTE(a3) = PreviousMode;
          return (unsigned int)MmIssueMemoryListCommand(a2, (unsigned int)v3, a3, 1LL);
        }
        v16 = v5 - 71;
        if ( !v16 )
          return 3221225659LL;
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              if ( v19 != 4 )
                return (ULONG)-1073741821;
              LOBYTE(v8) = PreviousMode;
              return (unsigned int)PfSetSuperfetchInformation(a1, a2, (unsigned int)a3, v8);
            }
            else
            {
              LOBYTE(a3) = PreviousMode;
              return (unsigned int)ExpRegisterFirmwareTableInformationHandler(a2, (unsigned int)v3, a3, 1LL);
            }
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
              ((void (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64))off_140C01CD0[0])(
                (unsigned int)(*(_DWORD *)a2 - 1),
                a2,
                a3,
                1LL);
              return 0;
            case 2:
              ((void (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64))off_140C01CD8[0])(
                (unsigned int)(*(_DWORD *)a2 - 2),
                a2,
                a3,
                1LL);
              return 0;
            case 3:
              ((void (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64))off_140C01CC8[0])(
                (unsigned int)(*(_DWORD *)a2 - 3),
                a2,
                a3,
                1LL);
              return 0;
          }
          if ( *(_DWORD *)a2 != 4 )
          {
            v58 = (unsigned int)(*(_DWORD *)a2 - 6);
            if ( *(_DWORD *)a2 == 6 )
            {
              LODWORD(v58) = 1;
              return ((unsigned int (__fastcall *)(__int64, unsigned __int64, __int64, __int64))off_140C01CE8[0])(
                       v58,
                       a2,
                       a3,
                       1LL);
            }
            if ( *(_DWORD *)a2 == 7 )
            {
              updated = 0;
              if ( off_140C01CE8[0] == xKdEnumerateDebuggingDevices )
                return (ULONG)-1073741822;
              return updated;
            }
            return (ULONG)-1073741811;
          }
        }
        return (ULONG)-1073741637;
      }
      if ( v5 == 81 )
        goto LABEL_259;
      if ( v5 == 82 )
      {
        if ( (unsigned int)a3 < 0x18 )
          return 3221225476LL;
        if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
          return 3221225569LL;
        if ( PreviousMode )
        {
          v128 = *(UNICODE_STRING *)v4;
          *(_QWORD *)&v129 = *(_QWORD *)(v4 + 16);
          v4 = (unsigned __int64)&v128;
        }
        if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) > 0x1E )
          return 3221225485LL;
        v124 = *(UNICODE_STRING *)v4;
        updated = PsLookupProcessThreadByCid((__int64)&v124, 0LL, &Object);
        if ( (updated & 0x80000000) != 0 )
          return updated;
        v21 = Object;
        if ( *((_BYTE *)Object + 4) )
        {
          updated = -1073741749;
        }
        else
        {
          KeSetActualBasePriorityThread((ULONG_PTR)Object, *(_DWORD *)(v4 + 16));
          updated = 259;
        }
LABEL_58:
        ObfDereferenceObject(v21);
        return updated;
      }
      if ( v5 != 86 )
      {
        if ( v5 != 87 )
          return (ULONG)-1073741821;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return (ULONG)-1073741790;
        if ( (_DWORD)v3 == 8 )
        {
          v59 = *(_QWORD *)v4;
          MmSpecialPoolTag = *(_QWORD *)v4;
          MmSpecialPoolCatchOverruns = BYTE4(v59) & 1;
          return updated;
        }
        return (ULONG)-1073741820;
      }
      return (unsigned int)ObSetRefTraceInformation(a2, (unsigned int)a3, a3, 1LL);
    }
    if ( v5 > 97 )
    {
      if ( v5 != 102 )
      {
        if ( v5 == 104 )
        {
          LOBYTE(a3) = PreviousMode;
          return (unsigned int)ExpSetProcessorMicrocodeUpdateInformation(a2, (unsigned int)v3, a3, 1LL);
        }
        else
        {
          if ( v5 != 109 )
            return (ULONG)-1073741821;
          return (unsigned int)SmSetStoreInformation(a1, a2, a3, PreviousMode);
        }
      }
      v67 = 432;
      goto LABEL_292;
    }
    if ( v5 != 97 )
    {
      v63 = v5 - 91;
      if ( !v63 )
      {
        if ( !PreviousMode )
        {
          if ( (_DWORD)a3 )
            return (ULONG)-1073741584;
          else
            return HvlHypervisorConnected == 0 ? 0xC0351000 : 0;
        }
        return (ULONG)-1073741790;
      }
      v64 = v63 - 1;
      if ( !v64 )
      {
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return 3221225506LL;
        if ( (_DWORD)v3 != 40 )
          return 3221225476LL;
        return (unsigned int)VfSetVerifierInformationEx(v4);
      }
      v65 = v64 - 1;
      if ( v65 )
      {
        v66 = v65 - 1;
        if ( !v66 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return (ULONG)-1073741790;
          if ( (_DWORD)v3 == 8 )
          {
            *(_QWORD *)&v128.Length = *(_QWORD *)v4;
            _InterlockedOr((volatile signed __int32 *)(MmWriteableSharedUserData + 928), *(unsigned int *)&v128.Length);
            _InterlockedAnd(
              (volatile signed __int32 *)(MmWriteableSharedUserData + 928),
              ~*(_DWORD *)(&v128.MaximumLength + 1));
            return updated;
          }
          return (ULONG)-1073741820;
        }
        if ( v66 != 1 )
          return (ULONG)-1073741821;
        if ( !PreviousMode || !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return 3221225506LL;
        if ( (unsigned int)v3 < 0x18 )
          return 3221225476LL;
        return (unsigned int)ExpCovResetInformation(v4, (unsigned int)v3);
      }
      v67 = 172;
LABEL_292:
      if ( (_DWORD)a3 != v67 )
        return 3221225476LL;
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
        return 3221225569LL;
      return (unsigned int)ExpSetTimeZoneInformation(v4, v67, a3, v8);
    }
    if ( (_DWORD)a3 != 40 )
      return 3221225476LL;
    if ( PreviousMode )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225569LL;
      v128 = *(UNICODE_STRING *)v4;
      v129 = *(_OWORD *)(v4 + 16);
      *(_QWORD *)&v130 = *(_QWORD *)(v4 + 32);
      result = VfProbeAndCaptureUnicodeStringBuffer(&v128.Buffer, 1LL, v68, v69);
      if ( (int)result < 0 )
        return result;
      v72 = VfProbeAndCaptureUnicodeStringBuffer((char *)&v129 + 8, 1LL, v70, v71);
      if ( v72 < 0 )
      {
        VfFreeCapturedUnicodeString(&v128.Buffer);
        return (unsigned int)v72;
      }
      v4 = (unsigned __int64)&v128;
    }
    updated = VfFaultsSetParameters(v4, a2, a3, v8);
    if ( !PreviousMode )
      return updated;
    VfFreeCapturedUnicodeString(v4 + 8);
    v73 = (UNICODE_STRING *)(v4 + 24);
LABEL_450:
    VfFreeCapturedUnicodeString(v73);
    return updated;
  }
  if ( v5 == 69 )
    return (ULONG)-1073741637;
  if ( v5 > 39 )
  {
    if ( v5 > 51 )
    {
      switch ( v5 )
      {
        case '8':
          LOBYTE(v8) = PreviousMode;
          return (unsigned int)PfSnSetPrefetcherInformation(a1, a2, (unsigned int)a3, v8);
        case '6':
          LODWORD(v8) = 0;
          goto LABEL_94;
        case '4':
          if ( PreviousMode )
            return 3221225569LL;
          return (unsigned int)MmAddVerifierThunks((PVOID)a2, a3);
        case ';':
          if ( (_DWORD)a3 == 4 )
          {
            v57 = *(unsigned int *)a2;
            updated = ExpUpdateComPlusPackage(v57, a2, a3, 1LL);
            if ( (updated & 0x80000000) == 0 )
              *(_DWORD *)(MmWriteableSharedUserData + 736) = v57;
            return updated;
          }
          return 3221225476LL;
        default:
          return (ULONG)-1073741821;
      }
    }
    if ( v5 == 51 )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225506LL;
      return (unsigned int)VfSetVerifierInformation(v4, (unsigned int)v3, 0LL);
    }
    if ( v5 != 40 && v5 != 41 )
    {
      v53 = (unsigned int)(v5 - 46);
      if ( v5 == 46 )
      {
        if ( (_DWORD)a3 == 8 )
        {
          if ( !PreviousMode || SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
          {
            if ( !PsIsCurrentThreadInServerSilo(v53, a2) )
            {
              v121 = *(HANDLE *)v4;
              if ( v121 )
              {
                v106 = 0LL;
                updated = ObReferenceObjectByHandle(v121, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v106, 0LL);
                v54 = v106;
                if ( (updated & 0x80000000) != 0 )
                  return updated;
              }
              else
              {
                v54 = 0LL;
                updated = 0;
              }
              KdUpdateTimeSlipEvent(v54);
              return updated;
            }
            return 3221225506LL;
          }
          return 3221225569LL;
        }
        return 3221225476LL;
      }
      if ( (unsigned int)(v5 - 47) > 1 )
        return (ULONG)-1073741821;
      return 3221225474LL;
    }
    if ( (_DWORD)a3 != 16 )
      return 3221225476LL;
    if ( !PreviousMode )
      goto LABEL_220;
    if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      return 3221225569LL;
    result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
    if ( (int)result < 0 )
      return result;
    v4 = (unsigned __int64)Buf1;
    if ( LOWORD(Buf1[0]) )
    {
LABEL_220:
      v55 = v5 - 40;
      if ( !v55 )
      {
        v56 = VfAddVerifierEntry((PCUNICODE_STRING)v4);
        goto LABEL_447;
      }
      if ( v55 == 1 )
      {
        v56 = VfRemoveVerifierEntry(v4, a2, a3, v8);
LABEL_447:
        updated = v56;
        goto LABEL_448;
      }
LABEL_445:
      updated = -1073741821;
LABEL_448:
      if ( !PreviousMode )
        return updated;
      v73 = (UNICODE_STRING *)v4;
      goto LABEL_450;
    }
    return 3221225711LL;
  }
  if ( v5 == 39 )
  {
    if ( (_DWORD)a3 != 4 )
      return 3221225476LL;
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      return 3221225569LL;
    PsChangeQuantumTable(1, *(_DWORD *)v4);
    return 0;
  }
  if ( v5 <= 28 )
  {
    if ( v5 == 28 )
    {
      if ( (((_DWORD)a3 - 8) & 0xFFFFFFF7) == 0 )
      {
        if ( !PreviousMode || SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
        {
          if ( !PsIsCurrentThreadInServerSilo(a1, a2) )
          {
            if ( (_DWORD)v3 == 16 )
            {
              v13 = *(_BYTE *)(v4 + 8);
              v103 = v13;
              v112 = *(_QWORD *)v4;
            }
            else
            {
              v13 = *(_BYTE *)(v4 + 4);
              v103 = v13;
              v14 = *(unsigned int *)v4;
              v112 = v14;
              if ( v14 )
                v112 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)(unsigned int)KeMaximumIncrement / v14;
            }
            if ( v13 )
              v112 = MEMORY[0xFFFFF78000000300];
            LOBYTE(v12) = 1;
            ExAcquireTimeRefreshLock(v12);
            updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v112, (__int64)&v103);
            ExReleaseResourceLite(&ExpTimeRefreshLock);
LABEL_31:
            KeLeaveCriticalRegion();
            return updated;
          }
          return 3221225506LL;
        }
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
              v128 = *(UNICODE_STRING *)v4;
              LODWORD(v129) = *(_DWORD *)(v4 + 16);
              KiMinimumDpcRate = (int)v128.Buffer;
              KiMaximumDpcQueueDepth = *(_DWORD *)(&v128.MaximumLength + 1);
              KiAdjustDpcThreshold = HIDWORD(v128.Buffer);
              KiIdealDpcRate = v129;
              KeSynchronizeWithDynamicProcessors();
              ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
              if ( ActiveProcessorCount )
              {
                v49 = KiProcessorBlock;
                v50 = ActiveProcessorCount;
                do
                {
                  v51 = *v49;
                  *(_DWORD *)(v51 + 13224) = KiMaximumDpcQueueDepth;
                  *(_DWORD *)(v51 + 13232) = KiMinimumDpcRate;
                  ++v49;
                  --v50;
                }
                while ( v50 );
              }
              return updated;
            }
            return 3221225569LL;
          }
          return 3221225476LL;
        }
        if ( v5 != 26 )
        {
          if ( v5 == 27 )
          {
            if ( (_DWORD)a3 != 8 )
              return 3221225476LL;
            if ( PreviousMode )
              return 3221225569LL;
            MmUnloadSystemImage(*(_QWORD *)a2);
            return 0;
          }
          return (ULONG)-1073741821;
        }
LABEL_94:
        if ( (_DWORD)a3 == 56 )
        {
          if ( !PreviousMode )
          {
            *(_OWORD *)Buf1 = *(_OWORD *)a2;
            SystemImage = MmLoadSystemImage((int)Buf1, 0, 0, v8, (__int64)&v113, (__int64)&v109);
            updated = SystemImage;
            if ( SystemImage < 0 )
            {
              if ( SystemImage == -1073741411 )
                return (ULONG)-1073741554;
            }
            else
            {
              LOBYTE(v29) = 1;
              v30 = RtlImageDirectoryEntryToData(v109, v29, 0, (int)&v106);
              v31 = RtlImageNtHeader(v109);
              *(_QWORD *)(v4 + 40) = v30;
              v32 = v109 + *(unsigned int *)(v31 + 40);
              *(_QWORD *)(v4 + 16) = v109;
              *(_QWORD *)(v4 + 24) = v113;
              *(_QWORD *)(v4 + 32) = v32;
              *(_DWORD *)(v4 + 48) = *(_DWORD *)(v31 + 80);
            }
            return updated;
          }
          return 3221225569LL;
        }
        return 3221225476LL;
      }
LABEL_259:
      v105[0] = 0;
      if ( (unsigned int)a3 >= 0x40 )
      {
        if ( v5 == 21 )
        {
          v60 = 0;
          v114 = 0;
        }
        else
        {
          v114 = *(_DWORD *)(a2 + 60);
          v60 = v114;
          if ( (v114 & 0xFFFFFFF0) != 0 || (v114 & 0xC) == 0xC || (v114 & 3) == 3 )
            return 3221225712LL;
        }
        if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
          return MmAdjustWorkingSetSizeEx(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 32), 2LL, 1, v60, v105);
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
      return (ULONG)-1073741790;
    }
    return (ULONG)-1073741820;
  }
  v23 = v5 - 30;
  if ( !v23 )
    return (unsigned int)MmCreateMirror();
  v24 = v23 - 1;
  if ( !v24 )
    return (unsigned int)EtwSetPerformanceTraceInformation((volatile void *)a2, (unsigned int)a3, PreviousMode);
  v25 = v24 - 3;
  if ( !v25 )
  {
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode)
      || PsIsCurrentThreadInServerSilo(a1, a2) )
    {
      return 3221225569LL;
    }
    if ( (_DWORD)v3 == 4 )
    {
      if ( PreviousMode )
      {
        if ( (v4 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v4 + 4 > 0x7FFFFFFF0000LL || v4 + 4 < v4 )
          MEMORY[0x7FFFFFFF0000] = 0;
        v42 = *(_DWORD *)v4;
        v120 = *(_DWORD *)v4;
      }
      else
      {
        v42 = *(_DWORD *)v4;
      }
      if ( !v42 )
      {
        v52 = 0LL;
        return (unsigned int)IoConfigureCrashDump(v52, 0);
      }
      v43 = v42 - 1;
      if ( v43 )
      {
        if ( v43 == 1 )
          return (unsigned int)WheaCrashDumpInitializationComplete();
        return 3221225485LL;
      }
    }
    v52 = 1LL;
    return (unsigned int)IoConfigureCrashDump(v52, 0);
  }
  v26 = v25 - 3;
  if ( !v26 )
  {
    if ( (_DWORD)a3 != 16 )
      return 3221225476LL;
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
      return 3221225569LL;
    return (unsigned int)CmSetRegistryQuotaInformation(v4, a2, a3, v8);
  }
  if ( v26 != 1 )
    return (ULONG)-1073741821;
  if ( (_DWORD)a3 != 16 )
    return 3221225476LL;
  if ( PreviousMode )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[30] & 0x100) == 0
      || !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
    {
      return 3221225569LL;
    }
    v27 = 0x7FFFFFFF0000LL;
    if ( v4 < 0x7FFFFFFF0000LL )
      v27 = v4;
    LODWORD(Buf1[0]) = *(_DWORD *)v27;
    Buf1[1] = *(void **)(v27 + 8);
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
    result = MmLoadSystemImageEx((__int64)Buf1, 0LL, 0LL, 0LL, v7, &v113, (unsigned __int64 *)&v109);
    if ( (int)result >= 0 )
    {
      v33 = RtlImageNtHeader(v109);
      if ( !v33 )
      {
        MmUnloadSystemImage((ULONG_PTR)v113);
        return 3221225595LL;
      }
      updated = ExpInitializeSessionDriver(
                  (__int64 (__fastcall *)(_QWORD *, _QWORD))(v109 + *(unsigned int *)(v33 + 40)),
                  v109);
      if ( (updated & 0x80000000) != 0 )
        MmUnloadSystemImage((ULONG_PTR)v113);
      return updated;
    }
    if ( (_DWORD)result == -1073741411 )
      return 3221225742LL;
  }
  return result;
}
