/*
 * XREFs of VslpEnterIumSecureMode @ 0x1402624F0
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x140284A0C (MiFlushEntireTbDueToAttributeChange.c)
 *     VslGetNestedPageProtectionFlags @ 0x140340410 (VslGetNestedPageProtectionFlags.c)
 *     KeRequestTerminationThread @ 0x14035BD28 (KeRequestTerminationThread.c)
 *     VslFastFlushSecureRangeList @ 0x14038FEF4 (VslFastFlushSecureRangeList.c)
 *     VslValidateSecureImagePages @ 0x140393820 (VslValidateSecureImagePages.c)
 *     VslSetPlaceholderPages @ 0x140394678 (VslSetPlaceholderPages.c)
 *     VslExchangeEntropy @ 0x14039A450 (VslExchangeEntropy.c)
 *     KeBalanceSetManager @ 0x1403B8A80 (KeBalanceSetManager.c)
 *     VslpIumPhase4Initialize @ 0x1403CE6D8 (VslpIumPhase4Initialize.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403CF3F8 (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403CF530 (VslGetSecurePciEnabled.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1404F59C0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x1404F5BDC (HvlPrepareForRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x1404F7D94 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x1404F8898 (HvlCollectLivedump.c)
 *     VslAbortLiveDump @ 0x1404FBA10 (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x1404FBA70 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x1404FBC40 (VslApplyHotPatch.c)
 *     VslApplySecureImageFixups @ 0x1404FBD28 (VslApplySecureImageFixups.c)
 *     VslConfigureDynamicMemory @ 0x1404FBDB4 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x1404FBE50 (VslEndSecurePageIteration.c)
 *     VslFinalizeLiveDumpInSk @ 0x1404FBED8 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1404FBFF4 (VslFinishStartSecureProcessor.c)
 *     VslFlushSecureAddressSpace @ 0x1404FC108 (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x1404FC1DC (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x1404FC350 (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1404FC3F0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslInitializeSecureKernelCfg @ 0x1404FC548 (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x1404FC61C (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x1404FC694 (VslInitializeSecureProcess.c)
 *     VslIsTrustletRunning @ 0x1404FC7A4 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x1404FC820 (VslIumEfiRuntimeService.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x1404FCA30 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslMakeProtectedPageExecutable @ 0x1404FCAB8 (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x1404FCB54 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x1404FCBE4 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x1404FCC4C (VslPrepareDriverForPatch.c)
 *     VslProvisionDumpEncryption @ 0x1404FCCD4 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FCD30 (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x1404FCE40 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x1404FCEDC (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemProcess @ 0x1404FD084 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x1404FD120 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x1404FD280 (VslRetrieveMailbox.c)
 *     VslRevertHotPatch @ 0x1404FD3AC (VslRevertHotPatch.c)
 *     VslSetupLiveDumpBufferInSk @ 0x1404FD458 (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x1404FD560 (VslSlowFlushSecureRangeList.c)
 *     VslStartSecurePageIteration @ 0x1404FD64C (VslStartSecurePageIteration.c)
 *     VslSvcEnterIumSecureMode @ 0x1404FD6F8 (VslSvcEnterIumSecureMode.c)
 *     VslTestRoutine @ 0x1404FD7C0 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x1404FD820 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1404FD8BC (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x1404FDB20 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x1404FDBE0 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x1404FDC6C (VslpSetupLiveDumpBuffer.c)
 *     VslpSkStopProfiling @ 0x1404FDD6C (VslpSkStopProfiling.c)
 *     VslCloseSecureHandle @ 0x1404FDF40 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x1404FDFB0 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x1404FE040 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1404FE140 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x1404FE270 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x1404FE370 (VslFinishSecureImageValidation.c)
 *     VslFreeSecureImageIat @ 0x1404FE468 (VslFreeSecureImageIat.c)
 *     VslMakeCodeCatalog @ 0x1404FE4D0 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x1404FE560 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x1404FE780 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x1404FE800 (VslTransferSecureImageVersionResource.c)
 *     VslValidateDynamicCodePages @ 0x1404FE910 (VslValidateDynamicCodePages.c)
 *     KeCopyPrivilegedPage @ 0x140512D10 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x140512DB8 (KeSetPagePrivilege.c)
 *     KeUnsecureProcess @ 0x140513A48 (KeUnsecureProcess.c)
 *     MmWriteSystemImageTracepoint @ 0x14053F638 (MmWriteSystemImageTracepoint.c)
 *     MiWaitForFreePage @ 0x14055C13C (MiWaitForFreePage.c)
 *     PspIumWorker @ 0x1405840C0 (PspIumWorker.c)
 *     ExRebootSystemForRecovery @ 0x1405B2554 (ExRebootSystemForRecovery.c)
 *     DbgkCopyProcessDebugPort @ 0x140607E1C (DbgkCopyProcessDebugPort.c)
 *     PspUserThreadStartup @ 0x1406BFC00 (PspUserThreadStartup.c)
 *     MiMarkKernelImageCfgBits @ 0x140772E64 (MiMarkKernelImageCfgBits.c)
 *     VslReserveProtectedPages @ 0x14077D250 (VslReserveProtectedPages.c)
 *     VslCompleteSecureDriverLoad @ 0x14077D304 (VslCompleteSecureDriverLoad.c)
 *     VslQuerySecureDevice @ 0x1407C8F70 (VslQuerySecureDevice.c)
 *     NtRemoveProcessDebug @ 0x1408861A0 (NtRemoveProcessDebug.c)
 *     VslAllocateSecureHibernateResources @ 0x14088EBAC (VslAllocateSecureHibernateResources.c)
 *     VslCallEnclave @ 0x14088EC44 (VslCallEnclave.c)
 *     VslCapturePgoData @ 0x14088EE60 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x14088EFA0 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x14088F100 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x14088F1A0 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x14088F2C0 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x14088F388 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x14088F460 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x14088F5C0 (VslDeleteSecureSection.c)
 *     VslDetermineHotPatchType @ 0x14088F628 (VslDetermineHotPatchType.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x14088F6D4 (VslDetermineHotPatchUndoTableSize.c)
 *     VslEnableKernelCfgTarget @ 0x14088F754 (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x14088F7BC (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x14088F868 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x14088F8C4 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x14088F9F8 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x14088FA84 (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x14088FB14 (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14088FBEC (VslInitializeEnclave.c)
 *     VslIumEtwEnableCallback @ 0x14088FCE0 (VslIumEtwEnableCallback.c)
 *     VslLiveDumpCaptureProcess @ 0x14088FD9C (VslLiveDumpCaptureProcess.c)
 *     VslLoadEnclaveData @ 0x14088FE0C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x14088FF08 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140890028 (VslObtainHotPatchUndoTable.c)
 *     VslRelaxQuotas @ 0x1408901CC (VslRelaxQuotas.c)
 *     VslRundownSecureProcess @ 0x14089024C (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x1408902B4 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x140890348 (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x14089054C (VslTerminateSecureThread.c)
 *     VslUpdateFreezeTimeBias @ 0x1408905E0 (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x140890670 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140890750 (VslpConnectedStandbyWnfCallback.c)
 *     VslpSkMapBuffers @ 0x1408909A8 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x140890C48 (VslCaptureSecureImageIat.c)
 *     VslSetCodeIntegrityPolicy @ 0x140890D50 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x1408B5544 (PipUnprotectDevice.c)
 *     PsRequestDebugSecureProcess @ 0x14090CB08 (PsRequestDebugSecureProcess.c)
 *     PsRundownVsmEnclave @ 0x14090E208 (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14090E274 (PsTerminateVsmEnclave.c)
 *     PspInitPhase3 @ 0x140A4B0C0 (PspInitPhase3.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4F9F0 (MiReloadBootLoadedDrivers.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140A5054C (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140A506C4 (MiApplyImportOptimizationToBootDrivers.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A564C0 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     VslConnectSwInterrupt @ 0x140A5F044 (VslConnectSwInterrupt.c)
 *     VslApplyDynamicRelocations @ 0x140A8F3E4 (VslApplyDynamicRelocations.c)
 *     VslBindNtIum @ 0x140A8F470 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140A8F5C8 (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseSemaphoreEx @ 0x140262770 (KeReleaseSemaphoreEx.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeAreInterruptsEnabled @ 0x1402D0E60 (KeAreInterruptsEnabled.c)
 *     HvlQueryVsmConnection @ 0x140340478 (HvlQueryVsmConnection.c)
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchToVsmVtl1 @ 0x1403F9860 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x1403F99D0 (VslpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 */

NTSTATUS __fastcall VslpEnterIumSecureMode(unsigned __int8 a1, __int16 a2, int a3, __int64 a4)
{
  __int16 v4; // r15
  bool v5; // bl
  unsigned __int8 CurrentIrql; // r12
  __int16 v8; // dx
  int v9; // ecx
  __int64 v10; // r9
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 v13; // r13
  unsigned int SecureThreadCookie; // eax
  BOOL v15; // ecx
  int v16; // r9d
  char v17; // al
  char v18; // r14
  _DWORD *SchedulerAssist; // r9
  unsigned int v20; // ecx
  struct _KTHREAD *v21; // rax
  unsigned int v22; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v24; // rdx
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // edx
  char v30; // [rsp+38h] [rbp-39h]
  char PreviousMode; // [rsp+38h] [rbp-39h]
  char v32; // [rsp+39h] [rbp-38h]
  _WORD v35[2]; // [rsp+40h] [rbp-31h] BYREF
  _WORD v36[2]; // [rsp+44h] [rbp-2Dh] BYREF
  _WORD v37[2]; // [rsp+48h] [rbp-29h] BYREF
  _WORD v38[2]; // [rsp+4Ch] [rbp-25h] BYREF
  BOOL v39; // [rsp+50h] [rbp-21h]
  __int64 v40; // [rsp+58h] [rbp-19h]
  _WORD *v41; // [rsp+60h] [rbp-11h] BYREF
  int v42; // [rsp+68h] [rbp-9h]
  int v43; // [rsp+6Ch] [rbp-5h]
  _WORD *v44; // [rsp+70h] [rbp-1h] BYREF
  int v45; // [rsp+78h] [rbp+7h]
  int v46; // [rsp+7Ch] [rbp+Bh]
  _QWORD v47[2]; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v48[2]; // [rsp+90h] [rbp+1Fh] BYREF

  v4 = a1;
  v5 = 0;
  v32 = 0;
  CurrentIrql = 15;
  if ( !(unsigned __int8)HvlQueryVsmConnection(0LL) )
    return -1073741667;
  *(_BYTE *)v10 = v4;
  *(_WORD *)(v10 + 2) = v8;
  v40 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  if ( (unsigned __int8)v4 > 2u )
  {
    if ( (BYTE4(xmmword_140CFC490) & 8) != 0 )
    {
      v43 &= v9;
      v35[1] = v8;
      v41 = v35;
      v35[0] = v4;
      v42 = 4;
      v18 = 1;
      EtwTraceKernelEvent((unsigned int)&v41, 1, -1610612728, 1353, 4200706);
    }
    else
    {
      v18 = 0;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v40);
    if ( v18 )
    {
      v46 = 0;
      v36[1] = a2;
      v36[0] = v4;
      v44 = v36;
      v45 = 4;
      EtwTraceKernelEvent((unsigned int)&v44, 1, -1610612728, 1354, 4200706);
    }
    if ( *(char *)(a4 + 1) < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
    }
    return 0;
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
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
        }
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v13 = KeGetCurrentIrql();
  SecureThreadCookie = a3;
  if ( (_BYTE)v4 == 1 )
  {
    *(_DWORD *)(a4 + 4) = a3;
    goto LABEL_14;
  }
  if ( a3 )
  {
LABEL_61:
    *(_DWORD *)(a4 + 4) = SecureThreadCookie;
    goto LABEL_13;
  }
  if ( v13 < 2u )
  {
    SecureThreadCookie = CurrentThread->SecureThreadCookie;
    if ( !SecureThreadCookie )
    {
      *(_DWORD *)(a4 + 4) = 0;
      if ( VslVsmEnabled )
      {
        result = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
        if ( result < 0 )
          return result;
        v32 = 1;
      }
      goto LABEL_13;
    }
    a3 = CurrentThread->SecureThreadCookie;
    goto LABEL_61;
  }
  *(_DWORD *)(a4 + 4) = 0;
  a3 = 1;
LABEL_13:
  v5 = CurrentThread->SecureThreadCookie == 0;
LABEL_14:
  if ( v13 == 1 )
  {
    LOBYTE(v39) = 1;
LABEL_18:
    --CurrentThread->KernelApcDisable;
    goto LABEL_19;
  }
  v15 = 0;
  if ( !v13 )
    v15 = v5;
  v39 = v15;
  if ( v15 )
    goto LABEL_18;
  while ( 1 )
  {
LABEL_19:
    if ( (BYTE4(xmmword_140CFC490) & 8) != 0 )
    {
      v37[1] = a2;
      v30 = 1;
      v47[0] = v37;
      v37[0] = v4;
      v47[1] = 4LL;
      EtwTraceKernelEvent((unsigned int)v47, 1, -1610612728, 1353, 4200706);
    }
    else
    {
      v30 = 0;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v40);
    if ( v30 )
    {
      v38[1] = a2;
      v38[0] = v4;
      v48[0] = v38;
      v48[1] = 4LL;
      EtwTraceKernelEvent((unsigned int)v48, 1, -1610612728, 1354, 4200706);
    }
    v17 = *(_BYTE *)(a4 + 1);
    if ( v17 < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
      v17 = *(_BYTE *)(a4 + 1);
    }
    if ( v17 == 6 )
      break;
    if ( v17 == 1 )
      goto LABEL_27;
    if ( (_BYTE)v4 == 1 )
    {
      v20 = *(_DWORD *)(a4 + 4);
      v21 = CurrentThread;
      if ( !v20 )
        v21 = CurrentThread;
      v21->SecureThreadCookie = v20;
    }
    else if ( !a3 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    switch ( *(_BYTE *)(a4 + 1) )
    {
      case 0:
LABEL_45:
        PsDispatchIumService(a4);
        break;
      case 2:
        if ( !CurrentThread->PreviousMode )
        {
          *(_QWORD *)(a4 + 8) = -1073741776LL;
          break;
        }
LABEL_69:
        v22 = *(unsigned __int16 *)(a4 + 2);
        if ( v22 < (unsigned int)xmmword_140E018D0 )
        {
          PreviousMode = CurrentThread->PreviousMode;
          if ( *(_BYTE *)(a4 + 1) == 3 )
          {
            CurrentThread->PreviousMode = 0;
            LOWORD(v22) = *(_WORD *)(a4 + 2);
          }
          *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                       KeServiceDescriptorTable
                                     + (*(int *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v22) >> 4),
                                       a4 + 8,
                                       *(_DWORD *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v22) & 0xF);
          CurrentThread->PreviousMode = PreviousMode;
        }
        else
        {
          *(_QWORD *)(a4 + 8) = -1073741796LL;
        }
        break;
      case 3:
        goto LABEL_69;
      case 5:
        goto LABEL_45;
    }
    if ( !a3 && (_BYTE)v4 != 1 )
      CurrentThread->SecureThreadCookie = 0;
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v24 = CurrentPrcb->SchedulerAssist;
      v25 = (v24[5] & 0xFFFF0001) == 0;
      v24[5] &= 0xFFFF0001;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(0LL);
LABEL_27:
  if ( v32 )
    KeReleaseSemaphoreEx((unsigned int)&VslpIumThreadSemaphore, 0, 1, v16, 0);
  if ( v39 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( CurrentIrql != 15 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v25 = (v29 & v28[5]) == 0;
          v28[5] &= v29;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return *(_DWORD *)(a4 + 8);
}
