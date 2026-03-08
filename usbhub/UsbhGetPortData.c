/*
 * XREFs of UsbhGetPortData @ 0x1C0019550
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C000B860 (UsbhHubProcessIsr.c)
 *     UsbhPCE_Suspend @ 0x1C00190B4 (UsbhPCE_Suspend.c)
 *     UsbhPCE_HardwareWake @ 0x1C0019178 (UsbhPCE_HardwareWake.c)
 *     UsbhPCE_QueueChange @ 0x1C001922C (UsbhPCE_QueueChange.c)
 *     UsbhQueryChange @ 0x1C0019300 (UsbhQueryChange.c)
 *     UsbhLatchPdo @ 0x1C0019420 (UsbhLatchPdo.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0019754 (UsbhPCE_QueueDriverReset.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0019820 (UsbhSyncResetDeviceInternal.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x1C0029D6C (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002AC9C (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C002B084 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhGetExtendedHubInformation @ 0x1C002BEBC (UsbhGetExtendedHubInformation.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C002D820 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C002DA9C (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhDisablePortIndicators @ 0x1C002EFC0 (UsbhDisablePortIndicators.c)
 *     UsbhEnablePortIndicators @ 0x1C002F198 (UsbhEnablePortIndicators.c)
 *     UsbhPindicatorWorker @ 0x1C002F440 (UsbhPindicatorWorker.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C002FB00 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C002FBA4 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C002FC70 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x1C002FD00 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C002FF70 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C00300F0 (UsbhQueueOvercurrentReset.c)
 *     UsbhFdoRecordFailure @ 0x1C003074C (UsbhFdoRecordFailure.c)
 *     UsbhPCE_BusDisconnect @ 0x1C00342C8 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Disable @ 0x1C0034550 (UsbhPCE_Disable.c)
 *     UsbhPCE_Enable @ 0x1C0034698 (UsbhPCE_Enable.c)
 *     UsbhPCE_HW_Stop @ 0x1C003476C (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C003484C (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_Resume @ 0x1C003495C (UsbhPCE_Resume.c)
 *     UsbhPCE_ResumeDone @ 0x1C0034A30 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0034B04 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C0034CA4 (UsbhPCE_SoftDisconnect.c)
 *     UsbhQueuePauseChange @ 0x1C0034E90 (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0034FA8 (UsbhQueueSoftConnectChange.c)
 *     UsbhCycleDevicePort @ 0x1C003725C (UsbhCycleDevicePort.c)
 *     UsbhDeregisterPdo @ 0x1C0037578 (UsbhDeregisterPdo.c)
 *     UsbhFinishStart @ 0x1C00378F4 (UsbhFinishStart.c)
 *     UsbhSoftDisconnectPdo @ 0x1C003A19C (UsbhSoftDisconnectPdo.c)
 *     UsbhSyncResumePort @ 0x1C003A460 (UsbhSyncResumePort.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C003A9B8 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C003AB58 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C003AD1C (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003B22C (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003B488 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoSetD0Warm @ 0x1C003C220 (UsbhFdoSetD0Warm.c)
 *     UsbhResetNotifyCompletion @ 0x1C003D4F0 (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003F72C (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003FE6C (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0040194 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0040A78 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhDriverNotFoundWorker @ 0x1C00428B0 (UsbhDriverNotFoundWorker.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C0044104 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhSetSqmEnumerationData @ 0x1C0046EC8 (UsbhSetSqmEnumerationData.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004910C (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C00493A8 (UsbhGetHubNodeInfo.c)
 *     UsbhWmiDoNothing @ 0x1C004A0C0 (UsbhWmiDoNothing.c)
 *     UsbhWmiEnumerationFailure @ 0x1C004A2A0 (UsbhWmiEnumerationFailure.c)
 *     UsbhWmiInsufficentBandwidth @ 0x1C004A320 (UsbhWmiInsufficentBandwidth.c)
 *     UsbhWmiInsufficentPower @ 0x1C004A3A0 (UsbhWmiInsufficentPower.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x1C004B390 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x1C004B420 (UsbhNotEnoughPowerPopup.c)
 *     UsbhResetPortData @ 0x1C0057774 (UsbhResetPortData.c)
 *     UsbhSetPortData @ 0x1C0057810 (UsbhSetPortData.c)
 *     UsbhEtwLogPortInformation @ 0x1C005BD4C (UsbhEtwLogPortInformation.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhGetPortData(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // rdx

  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v3 = *(_QWORD *)(a1 + 64);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v3 + 880)) & *(_DWORD *)(v3 + 884));
        *(_DWORD *)v4 = 1413771367;
        *(_QWORD *)(v4 + 16) = a2;
        *(_QWORD *)(v4 + 8) = 0LL;
        *(_QWORD *)(v4 + 24) = 0LL;
      }
    }
  }
  if ( !a2 )
    return 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 > *(unsigned __int8 *)(v5 + 2938) )
    return 0LL;
  v6 = *(_QWORD *)(v5 + 3056);
  if ( !v6 )
    return 0LL;
  v7 = a2;
  v8 = v6 + 2928LL * a2 - 2928;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v9 = *(_QWORD *)(v5 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
    *(_DWORD *)v9 = 1044672615;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = v7;
    *(_QWORD *)(v9 + 24) = v8;
  }
  return v8;
}
