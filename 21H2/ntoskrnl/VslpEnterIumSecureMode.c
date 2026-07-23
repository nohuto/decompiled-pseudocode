/*
 * XREFs of VslpEnterIumSecureMode @ 0x1402840D0
 * Callers:
 *     VslGetNestedPageProtectionFlags @ 0x1402653A0 (VslGetNestedPageProtectionFlags.c)
 *     KeRequestTerminationThread @ 0x14029BB18 (KeRequestTerminationThread.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14030F0DC (MiFlushEntireTbDueToAttributeChange.c)
 *     VslFastFlushSecureRangeList @ 0x140390744 (VslFastFlushSecureRangeList.c)
 *     VslValidateSecureImagePages @ 0x140394070 (VslValidateSecureImagePages.c)
 *     VslSetPlaceholderPages @ 0x140394EC8 (VslSetPlaceholderPages.c)
 *     VslExchangeEntropy @ 0x14039ACA0 (VslExchangeEntropy.c)
 *     KeBalanceSetManager @ 0x1403B9250 (KeBalanceSetManager.c)
 *     VslpIumPhase4Initialize @ 0x1403CEF48 (VslpIumPhase4Initialize.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403CFC68 (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403CFDA0 (VslGetSecurePciEnabled.c)
 *     VslTerminateSecureServices @ 0x1403F0E04 (VslTerminateSecureServices.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1404F5CC0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x1404F5EDC (HvlPrepareForRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x1404F8094 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x1404F8B98 (HvlCollectLivedump.c)
 *     VslAbortLiveDump @ 0x1404FBD10 (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x1404FBD70 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x1404FBF40 (VslApplyHotPatch.c)
 *     VslApplySecureImageFixups @ 0x1404FC028 (VslApplySecureImageFixups.c)
 *     VslConfigureDynamicMemory @ 0x1404FC0B4 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x1404FC150 (VslEndSecurePageIteration.c)
 *     VslFinalizeLiveDumpInSk @ 0x1404FC1D8 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1404FC2F4 (VslFinishStartSecureProcessor.c)
 *     VslFlushSecureAddressSpace @ 0x1404FC408 (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x1404FC4DC (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x1404FC650 (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1404FC6F0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslInitializeSecureKernelCfg @ 0x1404FC848 (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x1404FC91C (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x1404FC994 (VslInitializeSecureProcess.c)
 *     VslIsTrustletRunning @ 0x1404FCAA4 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x1404FCB20 (VslIumEfiRuntimeService.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x1404FCD30 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslMakeProtectedPageExecutable @ 0x1404FCDB8 (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x1404FCE54 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x1404FCEE4 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x1404FCF4C (VslPrepareDriverForPatch.c)
 *     VslProvisionDumpEncryption @ 0x1404FCFD4 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FD030 (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x1404FD140 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x1404FD1DC (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemProcess @ 0x1404FD384 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x1404FD420 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x1404FD580 (VslRetrieveMailbox.c)
 *     VslRevertHotPatch @ 0x1404FD6AC (VslRevertHotPatch.c)
 *     VslSetupLiveDumpBufferInSk @ 0x1404FD758 (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x1404FD860 (VslSlowFlushSecureRangeList.c)
 *     VslStartSecurePageIteration @ 0x1404FD94C (VslStartSecurePageIteration.c)
 *     VslSvcEnterIumSecureMode @ 0x1404FD9F8 (VslSvcEnterIumSecureMode.c)
 *     VslTestRoutine @ 0x1404FDAC0 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x1404FDB20 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1404FDBBC (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x1404FDE20 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x1404FDEE0 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x1404FDF6C (VslpSetupLiveDumpBuffer.c)
 *     VslpSkStopProfiling @ 0x1404FE06C (VslpSkStopProfiling.c)
 *     VslCloseSecureHandle @ 0x1404FE240 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x1404FE2B0 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x1404FE340 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1404FE440 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x1404FE570 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x1404FE670 (VslFinishSecureImageValidation.c)
 *     VslFreeSecureImageIat @ 0x1404FE768 (VslFreeSecureImageIat.c)
 *     VslMakeCodeCatalog @ 0x1404FE7D0 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x1404FE860 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x1404FEA80 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x1404FEB00 (VslTransferSecureImageVersionResource.c)
 *     VslValidateDynamicCodePages @ 0x1404FEC10 (VslValidateDynamicCodePages.c)
 *     KeCopyPrivilegedPage @ 0x140513010 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x1405130B8 (KeSetPagePrivilege.c)
 *     KeUnsecureProcess @ 0x140513D48 (KeUnsecureProcess.c)
 *     MmWriteSystemImageTracepoint @ 0x14053F938 (MmWriteSystemImageTracepoint.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
 *     PspIumWorker @ 0x1405843B0 (PspIumWorker.c)
 *     ExRebootSystemForRecovery @ 0x1405B2844 (ExRebootSystemForRecovery.c)
 *     PspUserThreadStartup @ 0x14063BC30 (PspUserThreadStartup.c)
 *     DbgkCopyProcessDebugPort @ 0x14069744C (DbgkCopyProcessDebugPort.c)
 *     MiMarkKernelImageCfgBits @ 0x140773364 (MiMarkKernelImageCfgBits.c)
 *     VslReserveProtectedPages @ 0x14077D510 (VslReserveProtectedPages.c)
 *     VslCompleteSecureDriverLoad @ 0x14077D5C4 (VslCompleteSecureDriverLoad.c)
 *     VslQuerySecureDevice @ 0x1407C9370 (VslQuerySecureDevice.c)
 *     NtRemoveProcessDebug @ 0x1408862B0 (NtRemoveProcessDebug.c)
 *     VslAllocateSecureHibernateResources @ 0x14088ECBC (VslAllocateSecureHibernateResources.c)
 *     VslCallEnclave @ 0x14088ED54 (VslCallEnclave.c)
 *     VslCapturePgoData @ 0x14088EF70 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x14088F0B0 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x14088F210 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x14088F2B0 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x14088F3D0 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x14088F498 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x14088F570 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x14088F6D0 (VslDeleteSecureSection.c)
 *     VslDetermineHotPatchType @ 0x14088F738 (VslDetermineHotPatchType.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x14088F7E4 (VslDetermineHotPatchUndoTableSize.c)
 *     VslEnableKernelCfgTarget @ 0x14088F864 (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x14088F8CC (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x14088F978 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x14088F9D4 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x14088FB08 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x14088FB94 (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x14088FC24 (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14088FCFC (VslInitializeEnclave.c)
 *     VslIumEtwEnableCallback @ 0x14088FDF0 (VslIumEtwEnableCallback.c)
 *     VslLiveDumpCaptureProcess @ 0x14088FEAC (VslLiveDumpCaptureProcess.c)
 *     VslLoadEnclaveData @ 0x14088FF1C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x140890018 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140890138 (VslObtainHotPatchUndoTable.c)
 *     VslRelaxQuotas @ 0x1408902DC (VslRelaxQuotas.c)
 *     VslRundownSecureProcess @ 0x14089035C (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x1408903C4 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x140890458 (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x14089065C (VslTerminateSecureThread.c)
 *     VslUpdateFreezeTimeBias @ 0x1408906F0 (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x140890780 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140890860 (VslpConnectedStandbyWnfCallback.c)
 *     VslpSkMapBuffers @ 0x140890AB8 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x140890D58 (VslCaptureSecureImageIat.c)
 *     VslSetCodeIntegrityPolicy @ 0x140890E60 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x1408B5654 (PipUnprotectDevice.c)
 *     PsRequestDebugSecureProcess @ 0x14090CC18 (PsRequestDebugSecureProcess.c)
 *     PsRundownVsmEnclave @ 0x14090E318 (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14090E384 (PsTerminateVsmEnclave.c)
 *     PspInitPhase3 @ 0x140A4C0C0 (PspInitPhase3.c)
 *     MiReloadBootLoadedDrivers @ 0x140A509F0 (MiReloadBootLoadedDrivers.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140A5154C (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140A516C4 (MiApplyImportOptimizationToBootDrivers.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A574C0 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     VslConnectSwInterrupt @ 0x140A60044 (VslConnectSwInterrupt.c)
 *     VslApplyDynamicRelocations @ 0x140A903E4 (VslApplyDynamicRelocations.c)
 *     VslBindNtIum @ 0x140A90470 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140A905C8 (VslpIumPhase0Initialize.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140265408 (HvlQueryVsmConnection.c)
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAreInterruptsEnabled @ 0x14035B420 (KeAreInterruptsEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchToVsmVtl1 @ 0x1403FA3C0 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x1403FA530 (VslpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
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
  if ( !HvlQueryVsmConnection(0LL) )
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
    KeLeaveCriticalRegionThread(CurrentThread);
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
