/*
 * XREFs of UsbhException @ 0x1C004A988
 * Callers:
 *     UsbhCompletePdoWakeIrps @ 0x1C0001010 (UsbhCompletePdoWakeIrps.c)
 *     UsbhCreateDevice @ 0x1C0002364 (UsbhCreateDevice.c)
 *     UsbhInitializeDevice @ 0x1C0002778 (UsbhInitializeDevice.c)
 *     UsbhResetPort @ 0x1C0002918 (UsbhResetPort.c)
 *     UsbhReset2Complete @ 0x1C0002D00 (UsbhReset2Complete.c)
 *     UsbhPdoSetD0 @ 0x1C0003200 (UsbhPdoSetD0.c)
 *     UsbhCheckHubPowerStatus @ 0x1C00047D4 (UsbhCheckHubPowerStatus.c)
 *     UsbhSshResumeUpstream @ 0x1C0004F34 (UsbhSshResumeUpstream.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0009B88 (UsbhSyncSuspendPdoPort.c)
 *     UsbhHubProcessIsr @ 0x1C000B860 (UsbhHubProcessIsr.c)
 *     UsbhFdoD0Worker_Action @ 0x1C000CE60 (UsbhFdoD0Worker_Action.c)
 *     UsbhSshSuspendHub @ 0x1C000DEF0 (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x1C000E1B0 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetD0Cold @ 0x1C000FBD0 (UsbhFdoSetD0Cold.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0013CC0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhQueryPortState @ 0x1C0016540 (UsbhQueryPortState.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0017430 (UsbhHubDispatchPortEvent.c)
 *     UsbhSyncPowerOnPorts @ 0x1C0018A40 (UsbhSyncPowerOnPorts.c)
 *     UsbhSuspendPort @ 0x1C0018E8C (UsbhSuspendPort.c)
 *     UsbhQueryChange @ 0x1C0019300 (UsbhQueryChange.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0019820 (UsbhSyncResetDeviceInternal.c)
 *     UsbhResumeSuspendedPort @ 0x1C001A698 (UsbhResumeSuspendedPort.c)
 *     UsbhPdoSetD0_Finish @ 0x1C001AA00 (UsbhPdoSetD0_Finish.c)
 *     UsbhBusSuspend_Action @ 0x1C001D87C (UsbhBusSuspend_Action.c)
 *     UsbhHubIsr @ 0x1C001D8F0 (UsbhHubIsr.c)
 *     UsbhFdoColdStartPdo @ 0x1C00222BC (UsbhFdoColdStartPdo.c)
 *     UsbhConfigureUsbHub @ 0x1C0029DB0 (UsbhConfigureUsbHub.c)
 *     UsbhFdoDeviceControl @ 0x1C002A630 (UsbhFdoDeviceControl.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002AC9C (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhGetDescriptor @ 0x1C002B9AC (UsbhGetDescriptor.c)
 *     UsbhGetHubClassDescriptor @ 0x1C002C09C (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C002C234 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetHubDeviceInformation @ 0x1C002C4A8 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetStatus @ 0x1C002CC48 (UsbhGetStatus.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C002D5F0 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetHubRemoteWake @ 0x1C002D964 (UsbhSetHubRemoteWake.c)
 *     UsbhSetPortPower @ 0x1C002DBD8 (UsbhSetPortPower.c)
 *     UsbhSetPortIndicator @ 0x1C002F4D8 (UsbhSetPortIndicator.c)
 *     UsbhFdoCyclePdoPort @ 0x1C00303A4 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoRecordFailure @ 0x1C003074C (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C0030944 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003136C (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhParseDescriptors @ 0x1C0032074 (UsbhParseDescriptors.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C0032C40 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetMsOsContainerID @ 0x1C0033048 (UsbhGetMsOsContainerID.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0034FA8 (UsbhQueueSoftConnectChange.c)
 *     UsbhClearTt @ 0x1C003708C (UsbhClearTt.c)
 *     UsbhDisablePort @ 0x1C00377CC (UsbhDisablePort.c)
 *     UsbhFinishStart @ 0x1C00378F4 (UsbhFinishStart.c)
 *     UsbhGetBillboardInfo @ 0x1C0037E7C (UsbhGetBillboardInfo.c)
 *     UsbhGetDeviceInformation @ 0x1C00382CC (UsbhGetDeviceInformation.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0038B00 (UsbhHubResetIrqPipeWorker.c)
 *     UsbhPortResumeTimeout @ 0x1C0038ED0 (UsbhPortResumeTimeout.c)
 *     UsbhQueryHubState @ 0x1C003912C (UsbhQueryHubState.c)
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 *     UsbhSyncResumePort @ 0x1C003A460 (UsbhSyncResumePort.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C003C0B8 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhFdoSetD0Warm @ 0x1C003C220 (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C003D0C8 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C003E3F8 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003EBD8 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C003EF0C (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C003F180 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C003F448 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003F72C (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F9BC (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003FE6C (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0040194 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C00404A8 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0040798 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0040A78 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0040D6C (UsbhIoctlResetStuckHub.c)
 *     UsbhIoctlValidateParameters @ 0x1C0041218 (UsbhIoctlValidateParameters.c)
 *     UsbhFdoPnp_QueryPnpDeviceState @ 0x1C0042E00 (UsbhFdoPnp_QueryPnpDeviceState.c)
 *     UsbhFdoPnp_StartDevice @ 0x1C0043220 (UsbhFdoPnp_StartDevice.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C0043F40 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C0049A80 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhBusIfAddDevice @ 0x1C004BC10 (UsbhBusIfAddDevice.c)
 *     UsbhGetBusInterface @ 0x1C004C410 (UsbhGetBusInterface.c)
 *     UsbhHandleOvercurrent @ 0x1C004CC94 (UsbhHandleOvercurrent.c)
 *     UsbhHardErrorInvalidData @ 0x1C004CED0 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C004CFC0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortConnect @ 0x1C004D100 (UsbhPortConnect.c)
 *     UsbhPortResumeFailed @ 0x1C004D940 (UsbhPortResumeFailed.c)
 *     UsbhReset1DebounceError @ 0x1C004DDA0 (UsbhReset1DebounceError.c)
 *     UsbhReset1Timeout @ 0x1C004E0F0 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C004E300 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C004E8C0 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x1C004E9B8 (UsbhSetEnumerationFailed.c)
 *     UsbhGetLanguageIdString @ 0x1C00503F4 (UsbhGetLanguageIdString.c)
 *     UsbhGetProductIdString @ 0x1C00507E0 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1C00509A4 (UsbhGetSerialNumber.c)
 *     UsbhCheckDeviceErrata @ 0x1C00514D4 (UsbhCheckDeviceErrata.c)
 *     UsbhCheckHubErrata @ 0x1C005182C (UsbhCheckHubErrata.c)
 *     UsbhValidateSerialNumberString @ 0x1C0052FB8 (UsbhValidateSerialNumberString.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C0054A60 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C00551AC (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C0055540 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0055B70 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0056570 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C00018CC (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x1C0002650 (UsbhReferenceListAdd.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhQueueWorkItemEx @ 0x1C001E320 (UsbhQueueWorkItemEx.c)
 *     memmove @ 0x1C0023580 (memmove.c)
 *     UsbhExceptionTrace @ 0x1C004AC64 (UsbhExceptionTrace.c)
 *     UsbhExceptionWorker @ 0x1C004B000 (UsbhExceptionWorker.c)
 *     UsbhGetExceptionDispatch @ 0x1C004B0F4 (UsbhGetExceptionDispatch.c)
 *     UsbhEtwLogHubException @ 0x1C005B93C (UsbhEtwLogHubException.c)
 */

void __fastcall UsbhException(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        int a6,
        int a7,
        _BYTE *a8,
        int a9,
        char a10)
{
  int v11; // esi
  _DWORD *v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // r10
  _DWORD *v18; // r10
  __int64 v19; // r15
  unsigned __int16 v20; // si
  _DWORD *v21; // r10
  unsigned int v22; // ebp
  unsigned int v23; // r13d
  __int64 Pool2; // rax
  _DWORD *v25; // rbx
  char *v26; // rcx
  unsigned int v27; // ecx
  _OWORD *v28; // rdx
  __int64 v29; // rax
  _OWORD *v30; // rax
  __int64 ExceptionDispatch; // [rsp+40h] [rbp-48h]

  v11 = a2;
  v14 = FdoExt(a1);
  v15 = -1LL;
  ExceptionDispatch = UsbhGetExceptionDispatch(a1, a3);
  v16 = -1LL;
  v17 = *(_QWORD *)(ExceptionDispatch + 8);
  do
    ++v16;
  while ( *(_BYTE *)(v17 + v16) );
  UsbhEtwLogHubException(a1, v11, a3, a6, a7, v17, v16 + 1);
  v18 = v14 + 640;
  v19 = 16LL;
  if ( a10 )
  {
    if ( (*v18 & 0x10) != 0 )
      return;
    *v18 |= 0x10u;
  }
  v20 = a5;
  if ( a5 > 0xFFFF || (unsigned __int16)a5 > 0x1000u )
    v20 = 4096;
  Log(a1, 128, 1751480369, (__int64)a4, v20);
  if ( (*v21 & 0x2000) != 0 )
  {
    do
      ++v15;
    while ( a8[v15] );
    v22 = v15 + 1;
    v23 = v22 + v20 + 600;
    Pool2 = ExAllocatePool2(64LL, v23, 1112885333LL);
    v25 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 4) = v23;
      if ( (int)UsbhReferenceListAdd(a1, Pool2, 1381516648) < 0 )
      {
LABEL_23:
        ExFreePoolWithTag(v25, 0);
        return;
      }
      *v25 = 1381516648;
      *((_QWORD *)v25 + 1) = a1;
      *((_WORD *)v25 + 16) = v20;
      if ( v20 )
      {
        *((_QWORD *)v25 + 5) = v25 + 150;
        memmove(v25 + 150, a4, v20);
      }
      v26 = (char *)v25 + v20 + 600;
      *((_QWORD *)v25 + 74) = v26;
      memmove(v26, a8, v22);
      v25[146] = a9;
      v25[6] = a7;
      v25[7] = a6;
      v25[4] = a3;
      *((_WORD *)v25 + 10) = a2;
      *((_QWORD *)v25 + 8) = MEMORY[0xFFFFF78000000014];
      if ( *((_QWORD *)v14 + 111) )
      {
        v27 = v14[220];
        v28 = v25 + 18;
        do
        {
          v29 = v14[221] & v27;
          v27 = v29 + 1;
          v30 = (_OWORD *)(*((_QWORD *)v14 + 111) + 32 * v29);
          *v28 = *v30;
          v28 += 2;
          *(v28 - 1) = v30[1];
          --v19;
        }
        while ( v19 );
      }
      UsbhExceptionTrace(a1, v25, ExceptionDispatch);
      if ( !KeGetCurrentIrql() && !*(_QWORD *)(ExceptionDispatch + 16) )
      {
        UsbhExceptionWorker(a1, a2, v25);
        return;
      }
      if ( (UsbhQueueWorkItemEx(a1, 1u, (int)UsbhExceptionWorker, (__int64)v25, a2, 0x49577865u, 0LL) & 0xC0000000) == 0xC0000000 )
      {
        UsbhReferenceListRemove(a1, (__int64)v25);
        goto LABEL_23;
      }
    }
  }
}
