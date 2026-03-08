/*
 * XREFs of VslpEnterIumSecureMode @ 0x1402D8270
 * Callers:
 *     VslGetNestedPageProtectionFlags @ 0x1402D85B0 (VslGetNestedPageProtectionFlags.c)
 *     MmProtectDriverSection @ 0x140302930 (MmProtectDriverSection.c)
 *     KeRequestTerminationThread @ 0x140354D78 (KeRequestTerminationThread.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036D020 (MiFlushEntireTbDueToAttributeChange.c)
 *     VslGetSecureSpeculationControlInformation @ 0x140384704 (VslGetSecureSpeculationControlInformation.c)
 *     KeBalanceSetManager @ 0x140390D00 (KeBalanceSetManager.c)
 *     VslpIumPhase4Initialize @ 0x1403AB65C (VslpIumPhase4Initialize.c)
 *     VslGetSecurePciEnabled @ 0x1403B1220 (VslGetSecurePciEnabled.c)
 *     VslExchangeEntropy @ 0x1403C0E80 (VslExchangeEntropy.c)
 *     KeSetPagePrivilege @ 0x1403CF124 (KeSetPagePrivilege.c)
 *     VslConfigureSecureAtsDevice @ 0x14040A03C (VslConfigureSecureAtsDevice.c)
 *     VslApplySecureImageFixups @ 0x140456F4C (VslApplySecureImageFixups.c)
 *     VslFastFlushSecureRangeList @ 0x140456FD8 (VslFastFlushSecureRangeList.c)
 *     VslSetPlaceholderPages @ 0x1404570C8 (VslSetPlaceholderPages.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140542AC0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x140542CB4 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1405430E4 (HvlResumeFromRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x14054486C (HvlPrepareForSecureHibernate.c)
 *     VslAbortLiveDump @ 0x140548538 (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x1405485A0 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x140548770 (VslApplyHotPatch.c)
 *     VslCollectLiveDumpInSk @ 0x14054884C (VslCollectLiveDumpInSk.c)
 *     VslConfigureDynamicMemory @ 0x1405488C4 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x140548960 (VslEndSecurePageIteration.c)
 *     VslFinalizeLiveDumpInSk @ 0x1405489E8 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x140548B00 (VslFinishStartSecureProcessor.c)
 *     VslFlushSecureAddressSpace @ 0x140548BFC (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x140548CD0 (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x140548E28 (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x140548ED0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x140548F70 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslInitializeSecureKernelCfg @ 0x14054913C (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x140549210 (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x140549298 (VslInitializeSecureProcess.c)
 *     VslIsTrustletRunning @ 0x140549398 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x140549420 (VslIumEfiRuntimeService.c)
 *     VslKernelShadowStackAssist @ 0x140549640 (VslKernelShadowStackAssist.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x140549744 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslMakeProtectedPageExecutable @ 0x1405497EC (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x140549888 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x140549918 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x140549980 (VslPrepareDriverForPatch.c)
 *     VslProvisionDumpEncryption @ 0x140549A08 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x140549A64 (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x140549B74 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x140549C10 (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemDlls @ 0x140549DB8 (VslRegisterSecureSystemDlls.c)
 *     VslRegisterSecureSystemProcess @ 0x140549E3C (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x140549EE0 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x14054A040 (VslRetrieveMailbox.c)
 *     VslRevertHotPatch @ 0x14054A16C (VslRevertHotPatch.c)
 *     VslSecurePoolAllocate @ 0x14054A218 (VslSecurePoolAllocate.c)
 *     VslSecurePoolFree @ 0x14054A314 (VslSecurePoolFree.c)
 *     VslSecurePoolUpdate @ 0x14054A3B0 (VslSecurePoolUpdate.c)
 *     VslSetupLiveDumpBufferInSk @ 0x14054A4B4 (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x14054A5BC (VslSlowFlushSecureRangeList.c)
 *     VslStartSecurePageIteration @ 0x14054A6A8 (VslStartSecurePageIteration.c)
 *     VslSvcEnterIumSecureMode @ 0x14054A754 (VslSvcEnterIumSecureMode.c)
 *     VslTestRoutine @ 0x14054A820 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x14054A880 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14054A91C (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x14054A9D0 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x14054AA98 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x14054AB24 (VslpSetupLiveDumpBuffer.c)
 *     VslCloseSecureHandle @ 0x14054B4D0 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x14054B540 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x14054B5D0 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14054B6D0 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x14054B800 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x14054B900 (VslFinishSecureImageValidation.c)
 *     VslFreeSecureImageIat @ 0x14054B9F8 (VslFreeSecureImageIat.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14054BA60 (VslInitFunctionOverrideCapabilities.c)
 *     VslMakeCodeCatalog @ 0x14054BB30 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x14054BBC0 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x14054BDE0 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x14054BE60 (VslTransferSecureImageVersionResource.c)
 *     VslValidateSecureImagePages @ 0x14054BF70 (VslValidateSecureImagePages.c)
 *     KeCopyPrivilegedPage @ 0x14056C654 (KeCopyPrivilegedPage.c)
 *     KeUnsecureProcess @ 0x14056D228 (KeUnsecureProcess.c)
 *     KeRebootSystemForRecovery @ 0x140577F2C (KeRebootSystemForRecovery.c)
 *     PspIumWorker @ 0x1405A3FF0 (PspIumWorker.c)
 *     ExCreatePool @ 0x140604890 (ExCreatePool.c)
 *     ExpSecurePoolDestroy @ 0x14060AB84 (ExpSecurePoolDestroy.c)
 *     MiProtectDriverSectionPte @ 0x140618060 (MiProtectDriverSectionPte.c)
 *     MmWriteSystemImageTracepoint @ 0x140640F7C (MmWriteSystemImageTracepoint.c)
 *     MiWaitForFreePage @ 0x140651458 (MiWaitForFreePage.c)
 *     DbgkCopyProcessDebugPort @ 0x14070E820 (DbgkCopyProcessDebugPort.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     MiMarkKernelImageCfgBits @ 0x1407F72E0 (MiMarkKernelImageCfgBits.c)
 *     VslQuerySecureDevice @ 0x1408550C0 (VslQuerySecureDevice.c)
 *     VslValidateDynamicCodePages @ 0x14087A498 (VslValidateDynamicCodePages.c)
 *     VslCompleteSecureDriverLoad @ 0x140881024 (VslCompleteSecureDriverLoad.c)
 *     VslReserveProtectedPages @ 0x140881254 (VslReserveProtectedPages.c)
 *     VslCallEnclave @ 0x1408A00F8 (VslCallEnclave.c)
 *     NtDebugActiveProcess @ 0x140935750 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140935B70 (NtRemoveProcessDebug.c)
 *     VslAllocateKernelShadowStack @ 0x14093E7EC (VslAllocateKernelShadowStack.c)
 *     VslAllocateSecureHibernateResources @ 0x14093E89C (VslAllocateSecureHibernateResources.c)
 *     VslCapturePgoData @ 0x14093E940 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x14093EA80 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x14093EBE0 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x14093EC80 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x14093EDA0 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x14093EE68 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x14093EF40 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x14093F0A0 (VslDeleteSecureSection.c)
 *     VslDetermineHotPatchType @ 0x14093F108 (VslDetermineHotPatchType.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x14093F1B4 (VslDetermineHotPatchUndoTableSize.c)
 *     VslEnableKernelCfgTarget @ 0x14093F234 (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x14093F29C (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeKernelShadowStack @ 0x14093F348 (VslFreeKernelShadowStack.c)
 *     VslFreeSecureHibernateResources @ 0x14093F3B0 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x14093F40C (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x14093F540 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x14093F5CC (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x14093F65C (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14093F734 (VslInitializeEnclave.c)
 *     VslIsEncryptionKeyAvailable @ 0x14093F824 (VslIsEncryptionKeyAvailable.c)
 *     VslIumEtwEnableCallback @ 0x14093F8A0 (VslIumEtwEnableCallback.c)
 *     VslLoadEnclaveData @ 0x14093F95C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x14093FA58 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x14093FB88 (VslObtainHotPatchUndoTable.c)
 *     VslPublishSyscallProviderServiceTables @ 0x14093FD38 (VslPublishSyscallProviderServiceTables.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x14093FDB8 (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslRelaxQuotas @ 0x14093FE98 (VslRelaxQuotas.c)
 *     VslResetKernelShadowStack @ 0x14093FF18 (VslResetKernelShadowStack.c)
 *     VslRundownSecureProcess @ 0x14093FFA0 (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x140940008 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x14094009C (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x1409402FC (VslTerminateSecureThread.c)
 *     VslTransformDumpKey @ 0x140940390 (VslTransformDumpKey.c)
 *     VslUpdateFreezeTimeBias @ 0x14094055C (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x140940680 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140940750 (VslpConnectedStandbyWnfCallback.c)
 *     VslCaptureSecureImageIat @ 0x14094081C (VslCaptureSecureImageIat.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140940924 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslSetCodeIntegrityPolicy @ 0x140940A40 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x14096C668 (PipUnprotectDevice.c)
 *     PspSecureThreadStartup @ 0x1409AE950 (PspSecureThreadStartup.c)
 *     PsRegisterSyscallProvider @ 0x1409B15C0 (PsRegisterSyscallProvider.c)
 *     PspDestroySyscallProvider @ 0x1409B1A30 (PspDestroySyscallProvider.c)
 *     PsRundownVsmEnclave @ 0x1409B4844 (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1409B48B0 (PsTerminateVsmEnclave.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140B3A034 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140B3A7E0 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140B3A948 (MiApplyImportOptimizationToBootDrivers.c)
 *     MiApplyFunctionOverrideToBootDrivers @ 0x140B3AAB0 (MiApplyFunctionOverrideToBootDrivers.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B3ACB4 (MiApplyBootLoadedDriversFixups.c)
 *     VslConnectSwInterrupt @ 0x140B6F5B0 (VslConnectSwInterrupt.c)
 *     VslRegisterBootDrivers @ 0x140B6F694 (VslRegisterBootDrivers.c)
 *     PsInitializeSyscallProviders @ 0x140B72884 (PsInitializeSyscallProviders.c)
 *     VslApplyDynamicRelocations @ 0x140B90128 (VslApplyDynamicRelocations.c)
 *     VslBindNtIum @ 0x140B901B4 (VslBindNtIum.c)
 *     VslReapplyBootIndirectPatches @ 0x140B90324 (VslReapplyBootIndirectPatches.c)
 *     VslpIumPhase0Initialize @ 0x140B903AC (VslpIumPhase0Initialize.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x1402D8618 (HvlQueryVsmConnection.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeAreInterruptsEnabled @ 0x140312C60 (KeAreInterruptsEnabled.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlSwitchToVsmVtl1 @ 0x140412150 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x1404122C0 (VslpDispatchIumSyscall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 */

__int64 __fastcall VslpEnterIumSecureMode(unsigned __int8 a1, __int16 a2, int a3, __int64 a4)
{
  __int16 v4; // r15
  char v7; // r13
  unsigned __int8 CurrentIrql; // r14
  __int16 v9; // dx
  char v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v13; // al
  unsigned int SecureThreadCookie; // ecx
  char v15; // cl
  NTSTATUS v16; // r15d
  __int16 v17; // r12
  _QWORD *v18; // r9
  char v19; // al
  char v21; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v23; // rdx
  char PreviousMode; // r12
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v27; // rdx
  bool v28; // zf
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  char v33; // [rsp+38h] [rbp-39h]
  char v35; // [rsp+3Ah] [rbp-37h]
  int v37; // [rsp+40h] [rbp-31h]
  _WORD v38[2]; // [rsp+44h] [rbp-2Dh] BYREF
  _WORD v39[2]; // [rsp+48h] [rbp-29h] BYREF
  _WORD v40[2]; // [rsp+4Ch] [rbp-25h] BYREF
  _WORD v41[2]; // [rsp+50h] [rbp-21h] BYREF
  int v42; // [rsp+54h] [rbp-1Dh] BYREF
  __int64 v43; // [rsp+58h] [rbp-19h]
  _QWORD v44[2]; // [rsp+60h] [rbp-11h] BYREF
  _WORD *v45; // [rsp+70h] [rbp-1h] BYREF
  int v46; // [rsp+78h] [rbp+7h]
  int v47; // [rsp+7Ch] [rbp+Bh]
  _QWORD v48[2]; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v49[2]; // [rsp+90h] [rbp+1Fh] BYREF

  v4 = a1;
  v37 = a3;
  v7 = 0;
  v35 = 0;
  CurrentIrql = 15;
  if ( !(unsigned __int8)HvlQueryVsmConnection(0LL) )
    return 3221225629LL;
  *(_BYTE *)v11 = v4;
  *(_WORD *)(v11 + 2) = v9;
  v43 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  if ( (unsigned __int8)v4 > 2u )
  {
    if ( (BYTE4(xmmword_140D1EAD0) & 8) != 0 )
    {
      v38[1] = v9;
      v44[0] = v38;
      v38[0] = v4;
      v44[1] = 4LL;
      v21 = 1;
      EtwTraceKernelEvent((unsigned int)v44, 1, -1610612728, 1353, 4200706);
    }
    else
    {
      v21 = v10;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v43);
    if ( v21 )
    {
      v47 = 0;
      v39[1] = a2;
      v39[0] = v4;
      v45 = v39;
      v46 = 4;
      EtwTraceKernelEvent((unsigned int)&v45, 1, -1610612728, 1354, 4200706);
    }
    if ( *(char *)(a4 + 1) < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
    }
    return 0LL;
  }
  if ( !(unsigned __int8)KeAreInterruptsEnabled() )
  {
    if ( VslVsmEnabled )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 15 )
            LODWORD(v23) = 0x8000;
          else
            v23 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
          SchedulerAssist[5] |= v23;
        }
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v13 = KeGetCurrentIrql();
  if ( (_BYTE)v4 == 1 )
  {
    v15 = 0;
    *(_DWORD *)(a4 + 4) = a3;
    goto LABEL_12;
  }
  if ( a3 )
  {
    *(_DWORD *)(a4 + 4) = a3;
  }
  else if ( v13 >= 2u )
  {
    *(_DWORD *)(a4 + 4) = 0;
    v37 = 1;
  }
  else
  {
    SecureThreadCookie = CurrentThread->SecureThreadCookie;
    if ( SecureThreadCookie )
    {
      v37 = CurrentThread->SecureThreadCookie;
      *(_DWORD *)(a4 + 4) = SecureThreadCookie;
    }
    else
    {
      *(_DWORD *)(a4 + 4) = 0;
      if ( VslVsmEnabled )
      {
        v15 = 1;
        goto LABEL_10;
      }
    }
  }
  v15 = 0;
LABEL_10:
  if ( !CurrentThread->SecureThreadCookie )
    v7 = 1;
LABEL_12:
  if ( v13 == 1 )
  {
    v7 = 1;
  }
  else
  {
    if ( v13 >= 2u )
    {
      v7 = 0;
      goto LABEL_15;
    }
    if ( !v7 )
      goto LABEL_15;
  }
  --CurrentThread->KernelApcDisable;
LABEL_15:
  if ( !v15 )
    goto LABEL_18;
  v16 = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
  if ( v16 < 0 )
    goto LABEL_28;
  LOBYTE(v4) = a1;
  v35 = 1;
  while ( 1 )
  {
LABEL_18:
    v17 = (unsigned __int8)v4;
    if ( (BYTE4(xmmword_140D1EAD0) & 8) != 0 )
    {
      v40[1] = a2;
      v33 = 1;
      v48[0] = v40;
      v40[0] = (unsigned __int8)v4;
      v48[1] = 4LL;
      EtwTraceKernelEvent((unsigned int)v48, 1, -1610612728, 1353, 4200706);
    }
    else
    {
      v33 = 0;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v43);
    v18 = (_QWORD *)(a4 + 8);
    v16 = *(_DWORD *)(a4 + 8);
    if ( v33 )
    {
      v41[1] = a2;
      v41[0] = v17;
      v49[0] = v41;
      v49[1] = 4LL;
      EtwTraceKernelEvent((unsigned int)v49, 1, -1610612728, 1354, 4200706);
      v18 = (_QWORD *)(a4 + 8);
    }
    v19 = *(_BYTE *)(a4 + 1);
    if ( v19 < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
      v19 = *(_BYTE *)(a4 + 1);
    }
    if ( v19 == 6 )
      break;
    if ( v19 == 1 )
      goto LABEL_26;
    LOBYTE(v4) = a1;
    if ( a1 == 1 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    else if ( !v37 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    switch ( *(_BYTE *)(a4 + 1) )
    {
      case 0:
LABEL_50:
        PsDispatchIumService(a4);
        break;
      case 2:
        if ( !CurrentThread->PreviousMode )
        {
          *v18 = -1073741776LL;
          break;
        }
LABEL_74:
        if ( *(unsigned __int16 *)(a4 + 2) < (unsigned int)xmmword_140E018D0 )
        {
          PreviousMode = CurrentThread->PreviousMode;
          if ( *(_BYTE *)(a4 + 1) == 3 )
            CurrentThread->PreviousMode = 0;
          *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                       KeServiceDescriptorTable
                                     + (*(int *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) >> 4),
                                       v18,
                                       *(_DWORD *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) & 0xF);
          CurrentThread->PreviousMode = PreviousMode;
        }
        else
        {
          *v18 = -1073741796LL;
        }
        break;
      case 3:
        goto LABEL_74;
      case 5:
        goto LABEL_50;
    }
    if ( !v37 && a1 != 1 )
      CurrentThread->SecureThreadCookie = 0;
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
  if ( KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v25 - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v27 = CurrentPrcb->SchedulerAssist;
      v28 = (v27[5] & 0xFFFF0001) == 0;
      v27[5] &= 0xFFFF0001;
      if ( v28 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(0LL);
LABEL_26:
  if ( v35 )
  {
    v42 = 0;
    KeReleaseSemaphoreEx((unsigned int)&VslpIumThreadSemaphore, 0, 1, (_DWORD)v18, 8, (__int64)&v42);
  }
LABEL_28:
  if ( v7 )
    KeLeaveCriticalRegionThread(CurrentThread);
  if ( CurrentIrql != 15 )
  {
    if ( KiIrqlFlags )
    {
      v29 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
    __writecr8(CurrentIrql);
  }
  return (unsigned int)v16;
}
