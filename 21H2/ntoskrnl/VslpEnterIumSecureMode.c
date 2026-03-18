/*
 * XREFs of VslpEnterIumSecureMode @ 0x140358A20
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026A230 (MiFlushEntireTbDueToAttributeChange.c)
 *     VslGetNestedPageProtectionFlags @ 0x140294CC0 (VslGetNestedPageProtectionFlags.c)
 *     KeRequestTerminationThread @ 0x1402ECD10 (KeRequestTerminationThread.c)
 *     KeSetPagePrivilege @ 0x14039FDB0 (KeSetPagePrivilege.c)
 *     VslValidateSecureImagePages @ 0x1403A0D60 (VslValidateSecureImagePages.c)
 *     VslSetPlaceholderPages @ 0x1403A1494 (VslSetPlaceholderPages.c)
 *     VslExchangeEntropy @ 0x1403A7340 (VslExchangeEntropy.c)
 *     KeBalanceSetManager @ 0x1403C81D0 (KeBalanceSetManager.c)
 *     VslpIumPhase4Initialize @ 0x1403DCCD8 (VslpIumPhase4Initialize.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403DF020 (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403DF160 (VslGetSecurePciEnabled.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x1404176A0 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslFastFlushSecureRangeList @ 0x140459C44 (VslFastFlushSecureRangeList.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1405478E0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x140547AF4 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x140547EA8 (HvlResumeFromRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x140549D4C (HvlPrepareForSecureHibernate.c)
 *     VslAbortLiveDump @ 0x14054D9C4 (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x14054DA20 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x14054DBF0 (VslApplyHotPatch.c)
 *     VslApplySecureImageFixups @ 0x14054DCCC (VslApplySecureImageFixups.c)
 *     VslCollectLiveDumpInSk @ 0x14054DD58 (VslCollectLiveDumpInSk.c)
 *     VslConfigureDynamicMemory @ 0x14054DDD0 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x14054DE6C (VslEndSecurePageIteration.c)
 *     VslFinalizeLiveDumpInSk @ 0x14054DEF4 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14054E00C (VslFinishStartSecureProcessor.c)
 *     VslFlushSecureAddressSpace @ 0x14054E120 (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x14054E1F4 (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x14054E34C (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14054E3F0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslInitializeSecureKernelCfg @ 0x14054E548 (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x14054E61C (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x14054E6A4 (VslInitializeSecureProcess.c)
 *     VslIsTrustletRunning @ 0x14054E7B4 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x14054E830 (VslIumEfiRuntimeService.c)
 *     VslKernelShadowStackAssist @ 0x14054EA40 (VslKernelShadowStackAssist.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x14054EB44 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslMakeProtectedPageExecutable @ 0x14054EBEC (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x14054EC88 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x14054ED18 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x14054ED80 (VslPrepareDriverForPatch.c)
 *     VslProvisionDumpEncryption @ 0x14054EE08 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14054EE64 (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x14054EF74 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x14054F010 (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemProcess @ 0x14054F1B8 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x14054F250 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x14054F3A0 (VslRetrieveMailbox.c)
 *     VslRevertHotPatch @ 0x14054F4CC (VslRevertHotPatch.c)
 *     VslSecurePoolAllocate @ 0x14054F578 (VslSecurePoolAllocate.c)
 *     VslSecurePoolFree @ 0x14054F674 (VslSecurePoolFree.c)
 *     VslSecurePoolUpdate @ 0x14054F710 (VslSecurePoolUpdate.c)
 *     VslSetupLiveDumpBufferInSk @ 0x14054F814 (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x14054F91C (VslSlowFlushSecureRangeList.c)
 *     VslStartSecurePageIteration @ 0x14054FA08 (VslStartSecurePageIteration.c)
 *     VslSvcEnterIumSecureMode @ 0x14054FAB4 (VslSvcEnterIumSecureMode.c)
 *     VslTestRoutine @ 0x14054FB80 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x14054FBE0 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14054FC7C (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x14054FD30 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x14054FDF0 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x14054FE7C (VslpSetupLiveDumpBuffer.c)
 *     VslCloseSecureHandle @ 0x14054FF30 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x14054FFA0 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x140550030 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x140550130 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x140550260 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x140550360 (VslFinishSecureImageValidation.c)
 *     VslFreeSecureImageIat @ 0x140550458 (VslFreeSecureImageIat.c)
 *     VslMakeCodeCatalog @ 0x1405504C0 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x140550550 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x140550770 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x1405507F0 (VslTransferSecureImageVersionResource.c)
 *     VslValidateDynamicCodePages @ 0x140550900 (VslValidateDynamicCodePages.c)
 *     KeCopyPrivilegedPage @ 0x14056B044 (KeCopyPrivilegedPage.c)
 *     KeUnsecureProcess @ 0x14056C780 (KeUnsecureProcess.c)
 *     KeRebootSystemForRecovery @ 0x140578830 (KeRebootSystemForRecovery.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 *     MmWriteSystemImageTracepoint @ 0x1405A40C4 (MmWriteSystemImageTracepoint.c)
 *     MiWaitForFreePage @ 0x1405B8348 (MiWaitForFreePage.c)
 *     PspIumWorker @ 0x1405E2BD0 (PspIumWorker.c)
 *     ExCreatePool @ 0x14063A5F0 (ExCreatePool.c)
 *     ExpSecurePoolDestroy @ 0x14063F6D4 (ExpSecurePoolDestroy.c)
 *     VslPublishSyscallProviderServiceTables @ 0x14065843C (VslPublishSyscallProviderServiceTables.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x1406584BC (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslRevokeSyscallProviderServiceTables @ 0x14065859C (VslRevokeSyscallProviderServiceTables.c)
 *     DbgkCopyProcessDebugPort @ 0x14066D440 (DbgkCopyProcessDebugPort.c)
 *     MiMarkKernelImageCfgBits @ 0x1406EB4B0 (MiMarkKernelImageCfgBits.c)
 *     PspUserThreadStartup @ 0x140702420 (PspUserThreadStartup.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     VslCompleteSecureDriverLoad @ 0x14080C468 (VslCompleteSecureDriverLoad.c)
 *     VslReserveProtectedPages @ 0x14080C778 (VslReserveProtectedPages.c)
 *     VslQuerySecureDevice @ 0x14085C200 (VslQuerySecureDevice.c)
 *     VslCallEnclave @ 0x14088151A (VslCallEnclave.c)
 *     NtDebugActiveProcess @ 0x140928C60 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140929080 (NtRemoveProcessDebug.c)
 *     VslAllocateKernelShadowStack @ 0x140931514 (VslAllocateKernelShadowStack.c)
 *     VslAllocateSecureHibernateResources @ 0x1409315C4 (VslAllocateSecureHibernateResources.c)
 *     VslCapturePgoData @ 0x140931660 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x1409317A0 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x140931900 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x1409319A0 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x140931AC0 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140931B88 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x140931C60 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x140931DC0 (VslDeleteSecureSection.c)
 *     VslDetermineHotPatchType @ 0x140931E28 (VslDetermineHotPatchType.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x140931ED4 (VslDetermineHotPatchUndoTableSize.c)
 *     VslEnableKernelCfgTarget @ 0x140931F54 (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x140931FBC (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeKernelShadowStack @ 0x140932068 (VslFreeKernelShadowStack.c)
 *     VslFreeSecureHibernateResources @ 0x1409320D0 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x14093212C (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x140932260 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x1409322EC (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x14093237C (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x140932454 (VslInitializeEnclave.c)
 *     VslIsEncryptionKeyAvailable @ 0x140932544 (VslIsEncryptionKeyAvailable.c)
 *     VslIumEtwEnableCallback @ 0x1409325C0 (VslIumEtwEnableCallback.c)
 *     VslLoadEnclaveData @ 0x14093267C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x140932778 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x1409328A8 (VslObtainHotPatchUndoTable.c)
 *     VslRelaxQuotas @ 0x140932A4C (VslRelaxQuotas.c)
 *     VslResetKernelShadowStack @ 0x140932ACC (VslResetKernelShadowStack.c)
 *     VslRundownSecureProcess @ 0x140932B54 (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x140932BBC (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x140932C50 (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x140932EB0 (VslTerminateSecureThread.c)
 *     VslTransformDumpKey @ 0x140932F44 (VslTransformDumpKey.c)
 *     VslUpdateFreezeTimeBias @ 0x140933110 (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x1409331A0 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140933280 (VslpConnectedStandbyWnfCallback.c)
 *     VslCaptureSecureImageIat @ 0x14093334C (VslCaptureSecureImageIat.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140933454 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslSetCodeIntegrityPolicy @ 0x140933570 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x14095B55C (PipUnprotectDevice.c)
 *     PsRundownVsmEnclave @ 0x1409B4584 (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1409B45F0 (PsTerminateVsmEnclave.c)
 *     VslInitializeSyscallProviders @ 0x140AF2DE0 (VslInitializeSyscallProviders.c)
 *     MiReloadBootLoadedDrivers @ 0x140B04F8C (MiReloadBootLoadedDrivers.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140B06F28 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140B07074 (MiApplyImportOptimizationToBootDrivers.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140B0A424 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     VslConnectSwInterrupt @ 0x140B12930 (VslConnectSwInterrupt.c)
 *     VslRegisterBootDrivers @ 0x140B129C4 (VslRegisterBootDrivers.c)
 *     PspInitPhase3 @ 0x140B313B8 (PspInitPhase3.c)
 *     VslApplyDynamicRelocations @ 0x140B4EA44 (VslApplyDynamicRelocations.c)
 *     VslBindNtIum @ 0x140B4EAD0 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140B4EC40 (VslpIumPhase0Initialize.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140294D28 (HvlQueryVsmConnection.c)
 *     KeAreInterruptsEnabled @ 0x1402ABBD0 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphoreEx @ 0x14035AD70 (KeReleaseSemaphoreEx.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchToVsmVtl1 @ 0x14041B5A0 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x14041B710 (VslpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 */

__int64 __fastcall VslpEnterIumSecureMode(unsigned __int8 a1, __int16 a2, int a3, __int64 a4)
{
  __int16 v5; // r15
  bool v6; // r14
  unsigned __int8 CurrentIrql; // r12
  __int16 v9; // dx
  char v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v13; // al
  unsigned int SecureThreadCookie; // ecx
  char v15; // cl
  NTSTATUS v16; // r14d
  _QWORD *v17; // r9
  char v18; // al
  char v20; // r14
  _DWORD *SchedulerAssist; // r9
  unsigned int v22; // ecx
  struct _KTHREAD *v23; // rax
  unsigned int v24; // eax
  char PreviousMode; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v27; // rdx
  bool v28; // zf
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  char v33; // [rsp+38h] [rbp-39h]
  char v34; // [rsp+39h] [rbp-38h]
  int v36; // [rsp+3Ch] [rbp-35h]
  char v37; // [rsp+40h] [rbp-31h]
  _WORD v38[2]; // [rsp+44h] [rbp-2Dh] BYREF
  _WORD v39[2]; // [rsp+48h] [rbp-29h] BYREF
  _WORD v40[2]; // [rsp+4Ch] [rbp-25h] BYREF
  _WORD v41[4]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v42; // [rsp+58h] [rbp-19h]
  _QWORD v43[2]; // [rsp+60h] [rbp-11h] BYREF
  _WORD *v44; // [rsp+70h] [rbp-1h] BYREF
  int v45; // [rsp+78h] [rbp+7h]
  int v46; // [rsp+7Ch] [rbp+Bh]
  _QWORD v47[2]; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v48[2]; // [rsp+90h] [rbp+1Fh] BYREF

  v36 = a3;
  v5 = a1;
  v6 = 0;
  v37 = 0;
  v34 = 0;
  CurrentIrql = 15;
  if ( !HvlQueryVsmConnection(0LL) )
    return 3221225629LL;
  *(_BYTE *)v11 = v5;
  *(_WORD *)(v11 + 2) = v9;
  v42 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  if ( (unsigned __int8)v5 > 2u )
  {
    if ( (BYTE4(xmmword_140D06910) & 8) != 0 )
    {
      v38[1] = v9;
      v43[0] = v38;
      v38[0] = v5;
      v43[1] = 4LL;
      v20 = 1;
      EtwTraceKernelEvent((unsigned int)v43, 1, -1610612728, 1353, 4200706);
    }
    else
    {
      v20 = v10;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v42);
    if ( v20 )
    {
      v46 = 0;
      v39[1] = a2;
      v39[0] = v5;
      v44 = v39;
      v45 = 4;
      EtwTraceKernelEvent((unsigned int)&v44, 1, -1610612728, 1354, 4200706);
    }
    if ( *(char *)(a4 + 1) < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
    }
    return 0LL;
  }
  if ( !KeAreInterruptsEnabled() )
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
          SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & 0xFFFC;
        }
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v13 = KeGetCurrentIrql();
  if ( (_BYTE)v5 != 1 )
  {
    if ( a3 )
    {
      *(_DWORD *)(a4 + 4) = a3;
    }
    else if ( v13 >= 2u )
    {
      *(_DWORD *)(a4 + 4) = 0;
      v36 = 1;
    }
    else
    {
      SecureThreadCookie = CurrentThread->SecureThreadCookie;
      if ( SecureThreadCookie )
      {
        v36 = CurrentThread->SecureThreadCookie;
        *(_DWORD *)(a4 + 4) = SecureThreadCookie;
      }
      else
      {
        *(_DWORD *)(a4 + 4) = 0;
        if ( VslVsmEnabled )
        {
          v15 = 1;
LABEL_10:
          v6 = CurrentThread->SecureThreadCookie == 0;
          v37 = v6;
          goto LABEL_11;
        }
      }
    }
    v15 = 0;
    goto LABEL_10;
  }
  v15 = 0;
  *(_DWORD *)(a4 + 4) = a3;
LABEL_11:
  if ( v13 == 1 )
  {
    v37 = 1;
LABEL_14:
    --CurrentThread->KernelApcDisable;
    goto LABEL_15;
  }
  if ( v13 >= 2u )
  {
    v37 = 0;
    goto LABEL_15;
  }
  if ( v6 )
    goto LABEL_14;
LABEL_15:
  if ( !v15 )
    goto LABEL_18;
  v16 = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
  if ( v16 < 0 )
    goto LABEL_28;
  v34 = 1;
  while ( 1 )
  {
LABEL_18:
    if ( (BYTE4(xmmword_140D06910) & 8) != 0 )
    {
      v40[1] = a2;
      v33 = 1;
      v47[0] = v40;
      v40[0] = v5;
      v47[1] = 4LL;
      EtwTraceKernelEvent((unsigned int)v47, 1, -1610612728, 1353, 4200706);
    }
    else
    {
      v33 = 0;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v42);
    v17 = (_QWORD *)(a4 + 8);
    v16 = *(_DWORD *)(a4 + 8);
    if ( v33 )
    {
      v41[1] = a2;
      v41[0] = v5;
      v48[0] = v41;
      v48[1] = 4LL;
      EtwTraceKernelEvent((unsigned int)v48, 1, -1610612728, 1354, 4200706);
      v17 = (_QWORD *)(a4 + 8);
    }
    v18 = *(_BYTE *)(a4 + 1);
    if ( v18 < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
      v18 = *(_BYTE *)(a4 + 1);
    }
    if ( v18 == 6 )
      break;
    if ( v18 == 1 )
      goto LABEL_26;
    if ( (_BYTE)v5 == 1 )
    {
      v22 = *(_DWORD *)(a4 + 4);
      v23 = CurrentThread;
      if ( !v22 )
        v23 = CurrentThread;
      v23->SecureThreadCookie = v22;
    }
    else if ( !v36 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    switch ( *(_BYTE *)(a4 + 1) )
    {
      case 0:
LABEL_47:
        PsDispatchIumService(a4);
        break;
      case 2:
        if ( !CurrentThread->PreviousMode )
        {
          *v17 = -1073741776LL;
          break;
        }
LABEL_71:
        v24 = *(unsigned __int16 *)(a4 + 2);
        if ( v24 < (unsigned int)xmmword_140E018D0 )
        {
          PreviousMode = CurrentThread->PreviousMode;
          if ( *(_BYTE *)(a4 + 1) == 3 )
          {
            CurrentThread->PreviousMode = 0;
            LOWORD(v24) = *(_WORD *)(a4 + 2);
          }
          *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                       KeServiceDescriptorTable
                                     + (*(int *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v24) >> 4),
                                       v17,
                                       *(_DWORD *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v24) & 0xF);
          CurrentThread->PreviousMode = PreviousMode;
        }
        else
        {
          *v17 = -1073741796LL;
        }
        break;
      case 3:
        goto LABEL_71;
      case 5:
        goto LABEL_47;
    }
    if ( !v36 && (_BYTE)v5 != 1 )
      CurrentThread->SecureThreadCookie = 0;
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
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
  if ( v34 )
    KeReleaseSemaphoreEx(&VslpIumThreadSemaphore, 0);
LABEL_28:
  if ( v37 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( CurrentIrql != 15 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
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
    }
    __writecr8(CurrentIrql);
  }
  return (unsigned int)v16;
}
