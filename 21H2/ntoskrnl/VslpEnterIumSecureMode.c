/*
 * XREFs of VslpEnterIumSecureMode @ 0x140262C90
 * Callers:
 *     VslGetNestedPageProtectionFlags @ 0x140277400 (VslGetNestedPageProtectionFlags.c)
 *     KeRequestTerminationThread @ 0x1402EA7C8 (KeRequestTerminationThread.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14030438C (MiFlushEntireTbDueToAttributeChange.c)
 *     VslFastFlushSecureRangeList @ 0x1403905F4 (VslFastFlushSecureRangeList.c)
 *     VslValidateSecureImagePages @ 0x140393F20 (VslValidateSecureImagePages.c)
 *     VslSetPlaceholderPages @ 0x140394D78 (VslSetPlaceholderPages.c)
 *     VslExchangeEntropy @ 0x14039AB50 (VslExchangeEntropy.c)
 *     KeBalanceSetManager @ 0x1403B90E0 (KeBalanceSetManager.c)
 *     VslpIumPhase4Initialize @ 0x1403CEDD8 (VslpIumPhase4Initialize.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403CFAF8 (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403CFC30 (VslGetSecurePciEnabled.c)
 *     VslTerminateSecureServices @ 0x1403F0ED4 (VslTerminateSecureServices.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1404F5D40 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x1404F5F5C (HvlPrepareForRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x1404F8114 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x1404F8C18 (HvlCollectLivedump.c)
 *     VslAbortLiveDump @ 0x1404FBD90 (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x1404FBDF0 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x1404FBFC0 (VslApplyHotPatch.c)
 *     VslApplySecureImageFixups @ 0x1404FC0A8 (VslApplySecureImageFixups.c)
 *     VslConfigureDynamicMemory @ 0x1404FC134 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x1404FC1D0 (VslEndSecurePageIteration.c)
 *     VslFinalizeLiveDumpInSk @ 0x1404FC258 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1404FC374 (VslFinishStartSecureProcessor.c)
 *     VslFlushSecureAddressSpace @ 0x1404FC488 (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x1404FC55C (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x1404FC6D0 (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1404FC770 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslInitializeSecureKernelCfg @ 0x1404FC8C8 (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x1404FC99C (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x1404FCA14 (VslInitializeSecureProcess.c)
 *     VslIsTrustletRunning @ 0x1404FCB24 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x1404FCBA0 (VslIumEfiRuntimeService.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x1404FCDB0 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslMakeProtectedPageExecutable @ 0x1404FCE38 (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x1404FCED4 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x1404FCF64 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x1404FCFCC (VslPrepareDriverForPatch.c)
 *     VslProvisionDumpEncryption @ 0x1404FD054 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FD0B0 (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x1404FD1C0 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x1404FD25C (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemProcess @ 0x1404FD404 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x1404FD4A0 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x1404FD600 (VslRetrieveMailbox.c)
 *     VslRevertHotPatch @ 0x1404FD72C (VslRevertHotPatch.c)
 *     VslSetupLiveDumpBufferInSk @ 0x1404FD7D8 (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x1404FD8E0 (VslSlowFlushSecureRangeList.c)
 *     VslStartSecurePageIteration @ 0x1404FD9CC (VslStartSecurePageIteration.c)
 *     VslSvcEnterIumSecureMode @ 0x1404FDA78 (VslSvcEnterIumSecureMode.c)
 *     VslTestRoutine @ 0x1404FDB40 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x1404FDBA0 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1404FDC3C (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x1404FDEA0 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x1404FDF60 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x1404FDFEC (VslpSetupLiveDumpBuffer.c)
 *     VslpSkStopProfiling @ 0x1404FE0EC (VslpSkStopProfiling.c)
 *     VslCloseSecureHandle @ 0x1404FE2C0 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x1404FE330 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x1404FE3C0 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1404FE4C0 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x1404FE5F0 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x1404FE6F0 (VslFinishSecureImageValidation.c)
 *     VslFreeSecureImageIat @ 0x1404FE7E8 (VslFreeSecureImageIat.c)
 *     VslMakeCodeCatalog @ 0x1404FE850 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x1404FE8E0 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x1404FEB00 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x1404FEB80 (VslTransferSecureImageVersionResource.c)
 *     VslValidateDynamicCodePages @ 0x1404FEC90 (VslValidateDynamicCodePages.c)
 *     KeCopyPrivilegedPage @ 0x140512DD0 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x140512E78 (KeSetPagePrivilege.c)
 *     KeUnsecureProcess @ 0x140513B08 (KeUnsecureProcess.c)
 *     MmWriteSystemImageTracepoint @ 0x14053F6F8 (MmWriteSystemImageTracepoint.c)
 *     MiWaitForFreePage @ 0x14055C1FC (MiWaitForFreePage.c)
 *     PspIumWorker @ 0x140584180 (PspIumWorker.c)
 *     ExRebootSystemForRecovery @ 0x1405B2614 (ExRebootSystemForRecovery.c)
 *     DbgkCopyProcessDebugPort @ 0x1406079BC (DbgkCopyProcessDebugPort.c)
 *     PspUserThreadStartup @ 0x140646E40 (PspUserThreadStartup.c)
 *     MiMarkKernelImageCfgBits @ 0x1407731A4 (MiMarkKernelImageCfgBits.c)
 *     VslReserveProtectedPages @ 0x14077D350 (VslReserveProtectedPages.c)
 *     VslCompleteSecureDriverLoad @ 0x14077D404 (VslCompleteSecureDriverLoad.c)
 *     VslQuerySecureDevice @ 0x1407C9050 (VslQuerySecureDevice.c)
 *     NtRemoveProcessDebug @ 0x140886150 (NtRemoveProcessDebug.c)
 *     VslAllocateSecureHibernateResources @ 0x14088EB5C (VslAllocateSecureHibernateResources.c)
 *     VslCallEnclave @ 0x14088EBF4 (VslCallEnclave.c)
 *     VslCapturePgoData @ 0x14088EE10 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x14088EF50 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x14088F0B0 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x14088F150 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x14088F270 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x14088F338 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x14088F410 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x14088F570 (VslDeleteSecureSection.c)
 *     VslDetermineHotPatchType @ 0x14088F5D8 (VslDetermineHotPatchType.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x14088F684 (VslDetermineHotPatchUndoTableSize.c)
 *     VslEnableKernelCfgTarget @ 0x14088F704 (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x14088F76C (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x14088F818 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x14088F874 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x14088F9A8 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x14088FA34 (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x14088FAC4 (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14088FB9C (VslInitializeEnclave.c)
 *     VslIumEtwEnableCallback @ 0x14088FC90 (VslIumEtwEnableCallback.c)
 *     VslLiveDumpCaptureProcess @ 0x14088FD4C (VslLiveDumpCaptureProcess.c)
 *     VslLoadEnclaveData @ 0x14088FDBC (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x14088FEB8 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x14088FFD8 (VslObtainHotPatchUndoTable.c)
 *     VslRelaxQuotas @ 0x14089017C (VslRelaxQuotas.c)
 *     VslRundownSecureProcess @ 0x1408901FC (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x140890264 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x1408902F8 (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x1408904FC (VslTerminateSecureThread.c)
 *     VslUpdateFreezeTimeBias @ 0x140890590 (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x140890620 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140890700 (VslpConnectedStandbyWnfCallback.c)
 *     VslpSkMapBuffers @ 0x140890958 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x140890BF8 (VslCaptureSecureImageIat.c)
 *     VslSetCodeIntegrityPolicy @ 0x140890D00 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x1408B54F4 (PipUnprotectDevice.c)
 *     PsRequestDebugSecureProcess @ 0x14090CAB8 (PsRequestDebugSecureProcess.c)
 *     PsRundownVsmEnclave @ 0x14090E1B8 (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14090E224 (PsTerminateVsmEnclave.c)
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
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseSemaphoreEx @ 0x1402631F0 (KeReleaseSemaphoreEx.c)
 *     HvlQueryVsmConnection @ 0x140277468 (HvlQueryVsmConnection.c)
 *     EtwTraceKernelEvent @ 0x1402EAC90 (EtwTraceKernelEvent.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     KeAreInterruptsEnabled @ 0x1403506D0 (KeAreInterruptsEnabled.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchToVsmVtl1 @ 0x1403FA1E0 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x1403FA350 (VslpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x140582CF4 (PsDispatchIumService.c)
 */

NTSTATUS __fastcall VslpEnterIumSecureMode(unsigned __int8 a1, __int16 a2, int a3, __int64 a4)
{
  __int16 v4; // r14
  bool v5; // bl
  unsigned __int8 CurrentIrql; // r12
  __int16 v9; // dx
  int v10; // ecx
  __int64 v11; // r9
  __int32 v12; // esi
  __int32 v13; // eax
  __int16 v14; // bx
  int v15; // r14d
  NTSTATUS result; // eax
  _DWORD *SchedulerAssist; // r9
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v19; // r15
  unsigned int SecureThreadCookie; // eax
  BOOL v21; // ecx
  char v22; // r15
  int v23; // r9d
  char v24; // al
  unsigned int v25; // ecx
  struct _KTHREAD *v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // eax
  char PreviousMode; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v31; // rdx
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // edx
  char v37; // [rsp+38h] [rbp-39h]
  _WORD v39[2]; // [rsp+3Ch] [rbp-35h] BYREF
  _WORD v40[2]; // [rsp+40h] [rbp-31h] BYREF
  _WORD v41[2]; // [rsp+44h] [rbp-2Dh] BYREF
  _WORD v42[2]; // [rsp+48h] [rbp-29h] BYREF
  BOOL v43; // [rsp+4Ch] [rbp-25h]
  __int64 v44; // [rsp+50h] [rbp-21h]
  _WORD *v45; // [rsp+58h] [rbp-19h] BYREF
  int v46; // [rsp+60h] [rbp-11h]
  int v47; // [rsp+64h] [rbp-Dh]
  _WORD *v48; // [rsp+68h] [rbp-9h] BYREF
  int v49; // [rsp+70h] [rbp-1h]
  int v50; // [rsp+74h] [rbp+3h]
  _QWORD v51[2]; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v52[2]; // [rsp+88h] [rbp+17h] BYREF

  v4 = a1;
  v5 = 0;
  v37 = 0;
  CurrentIrql = 15;
  if ( !(unsigned __int8)HvlQueryVsmConnection(0LL) )
    return -1073741667;
  v12 = v10 + 1;
  if ( v9 == 268 && (_BYTE)v4 == 2 )
    v13 = _InterlockedExchange(&VslpVsmTerminated, v12);
  else
    v13 = VslpVsmTerminated;
  if ( v13 )
    return -1073741667;
  *(_BYTE *)v11 = v4;
  *(_WORD *)(v11 + 2) = v9;
  v44 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  if ( (unsigned __int8)v4 > 2u )
  {
    v14 = v4;
    if ( (BYTE4(xmmword_140CFC490) & 8) != 0 )
    {
      v47 &= v10;
      v39[1] = v9;
      v45 = v39;
      v39[0] = v4;
      v46 = 4;
      v15 = v10 + 1;
      EtwTraceKernelEvent((unsigned int)&v45, v12, -1610612728, 1353, 4200706);
    }
    else
    {
      LOBYTE(v12) = 0;
      v15 = 1;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v44);
    if ( (_BYTE)v12 )
    {
      v50 = 0;
      v40[1] = a2;
      v40[0] = v14;
      v48 = v40;
      v49 = 4;
      EtwTraceKernelEvent((unsigned int)&v48, v15, -1610612728, 1354, 4200706);
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
        if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v12) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (v12 + CurrentIrql)) & 0xFFFC;
        }
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v19 = KeGetCurrentIrql();
  if ( (_BYTE)v4 == 1 )
  {
    *(_DWORD *)(a4 + 4) = a3;
  }
  else
  {
    if ( a3 )
    {
      *(_DWORD *)(a4 + 4) = a3;
    }
    else if ( v19 < 2u )
    {
      SecureThreadCookie = CurrentThread->SecureThreadCookie;
      if ( SecureThreadCookie )
      {
        a3 = CurrentThread->SecureThreadCookie;
        *(_DWORD *)(a4 + 4) = SecureThreadCookie;
      }
      else
      {
        *(_DWORD *)(a4 + 4) = 0;
        if ( VslVsmEnabled )
        {
          result = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
          if ( result < 0 )
            return result;
          v37 = 1;
        }
      }
    }
    else
    {
      *(_DWORD *)(a4 + 4) = 0;
      a3 = 1;
    }
    v5 = CurrentThread->SecureThreadCookie == 0;
  }
  if ( v19 == 1 )
  {
    LOBYTE(v43) = 1;
LABEL_39:
    --CurrentThread->KernelApcDisable;
    goto LABEL_40;
  }
  v21 = 0;
  if ( !v19 )
    v21 = v5;
  v43 = v21;
  if ( v21 )
    goto LABEL_39;
  while ( 1 )
  {
LABEL_40:
    if ( (BYTE4(xmmword_140CFC490) & 8) != 0 )
    {
      v41[1] = a2;
      v41[0] = v4;
      v51[0] = v41;
      v51[1] = 4LL;
      v22 = 1;
      EtwTraceKernelEvent((unsigned int)v51, 1, -1610612728, 1353, 4200706);
    }
    else
    {
      v22 = 0;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v44);
    if ( v22 )
    {
      v42[1] = a2;
      v42[0] = v4;
      v52[0] = v42;
      v52[1] = 4LL;
      EtwTraceKernelEvent((unsigned int)v52, 1, -1610612728, 1354, 4200706);
    }
    v24 = *(_BYTE *)(a4 + 1);
    if ( v24 < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
      v24 = *(_BYTE *)(a4 + 1);
    }
    if ( v24 == 6 )
      break;
    if ( v24 == 1 )
      goto LABEL_77;
    if ( (_BYTE)v4 == 1 )
    {
      v25 = *(_DWORD *)(a4 + 4);
      v26 = CurrentThread;
      if ( !v25 )
        v26 = CurrentThread;
      v26->SecureThreadCookie = v25;
    }
    else if ( !a3 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    v27 = *(unsigned __int8 *)(a4 + 1);
    switch ( *(_BYTE *)(a4 + 1) )
    {
      case 0:
LABEL_59:
        PsDispatchIumService(a4, v27, 0LL);
        break;
      case 2:
        if ( !CurrentThread->PreviousMode )
        {
          *(_QWORD *)(a4 + 8) = -1073741776LL;
          break;
        }
LABEL_66:
        v28 = *(unsigned __int16 *)(a4 + 2);
        if ( v28 < (unsigned int)xmmword_140E018D0 )
        {
          PreviousMode = CurrentThread->PreviousMode;
          if ( (_BYTE)v27 == 3 )
          {
            CurrentThread->PreviousMode = 0;
            LOWORD(v28) = *(_WORD *)(a4 + 2);
          }
          *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                       KeServiceDescriptorTable
                                     + (*(int *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v28) >> 4),
                                       a4 + 8,
                                       *(_DWORD *)(KeServiceDescriptorTable + 4LL * (unsigned __int16)v28) & 0xF);
          CurrentThread->PreviousMode = PreviousMode;
        }
        else
        {
          *(_QWORD *)(a4 + 8) = -1073741796LL;
        }
        break;
      case 3:
        goto LABEL_66;
      case 5:
        goto LABEL_59;
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
      v31 = CurrentPrcb->SchedulerAssist;
      v32 = (v31[5] & 0xFFFF0001) == 0;
      v31[5] &= 0xFFFF0001;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(0LL);
LABEL_77:
  if ( v37 )
    KeReleaseSemaphoreEx((unsigned int)&VslpIumThreadSemaphore, 0, 1, v23, 0);
  if ( v43 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( CurrentIrql != 15 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v32 = (v36 & v35[5]) == 0;
          v35[5] &= v36;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return *(_DWORD *)(a4 + 8);
}
