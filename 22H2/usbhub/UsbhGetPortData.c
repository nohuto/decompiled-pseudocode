/*
 * XREFs of UsbhGetPortData @ 0x1C0016CA0
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C000F090 (UsbhHubProcessIsr.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C00162A8 (UsbhSyncResetDeviceInternal.c)
 *     UsbhQueryChange @ 0x1C00167EC (UsbhQueryChange.c)
 *     UsbhPCE_HardwareWake @ 0x1C0016910 (UsbhPCE_HardwareWake.c)
 *     UsbhPCE_QueueChange @ 0x1C00169C4 (UsbhPCE_QueueChange.c)
 *     UsbhPCE_Suspend @ 0x1C0016A98 (UsbhPCE_Suspend.c)
 *     UsbhLatchPdo @ 0x1C0016B5C (UsbhLatchPdo.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0018840 (UsbhPCE_QueueDriverReset.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x1C002A6F4 (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002B61C (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C002BA04 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhGetExtendedHubInformation @ 0x1C002C8F8 (UsbhGetExtendedHubInformation.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C002E250 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C002E4CC (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhDisablePortIndicators @ 0x1C002F9D0 (UsbhDisablePortIndicators.c)
 *     UsbhEnablePortIndicators @ 0x1C002FBA8 (UsbhEnablePortIndicators.c)
 *     UsbhPindicatorWorker @ 0x1C002FE50 (UsbhPindicatorWorker.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C0030500 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C00305A4 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C0030670 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x1C0030700 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C0030970 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C0030AF0 (UsbhQueueOvercurrentReset.c)
 *     UsbhFdoRecordFailure @ 0x1C0031110 (UsbhFdoRecordFailure.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0034C58 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Disable @ 0x1C0034EE0 (UsbhPCE_Disable.c)
 *     UsbhPCE_Enable @ 0x1C0035028 (UsbhPCE_Enable.c)
 *     UsbhPCE_HW_Stop @ 0x1C00350FC (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C00351DC (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_Resume @ 0x1C00352EC (UsbhPCE_Resume.c)
 *     UsbhPCE_ResumeDone @ 0x1C00353C0 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0035494 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C0035634 (UsbhPCE_SoftDisconnect.c)
 *     UsbhQueuePauseChange @ 0x1C0035820 (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0035938 (UsbhQueueSoftConnectChange.c)
 *     UsbhCycleDevicePort @ 0x1C0037B3C (UsbhCycleDevicePort.c)
 *     UsbhDeregisterPdo @ 0x1C0037DEC (UsbhDeregisterPdo.c)
 *     UsbhFinishStart @ 0x1C0038168 (UsbhFinishStart.c)
 *     UsbhSoftDisconnectPdo @ 0x1C003AA6C (UsbhSoftDisconnectPdo.c)
 *     UsbhSyncResumePort @ 0x1C003AD40 (UsbhSyncResumePort.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C003B290 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C003B41C (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C003B5CC (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003BADC (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003BD38 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoSetD0Warm @ 0x1C003CBD0 (UsbhFdoSetD0Warm.c)
 *     UsbhResetNotifyCompletion @ 0x1C003DE40 (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0040078 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C00407B8 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0040AF8 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C00413E4 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhDriverNotFoundWorker @ 0x1C00432A0 (UsbhDriverNotFoundWorker.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C0044B0C (UsbhResetNotifyDownstreamHub.c)
 *     UsbhSetSqmEnumerationData @ 0x1C0047998 (UsbhSetSqmEnumerationData.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C0049BBC (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C0049E58 (UsbhGetHubNodeInfo.c)
 *     UsbhWmiDoNothing @ 0x1C004AB90 (UsbhWmiDoNothing.c)
 *     UsbhWmiEnumerationFailure @ 0x1C004AD90 (UsbhWmiEnumerationFailure.c)
 *     UsbhWmiInsufficentBandwidth @ 0x1C004AE10 (UsbhWmiInsufficentBandwidth.c)
 *     UsbhWmiInsufficentPower @ 0x1C004AE90 (UsbhWmiInsufficentPower.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x1C004BE90 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x1C004BF20 (UsbhNotEnoughPowerPopup.c)
 *     UsbhResetPortData @ 0x1C0058588 (UsbhResetPortData.c)
 *     UsbhSetPortData @ 0x1C0058624 (UsbhSetPortData.c)
 *     UsbhEtwLogPortInformation @ 0x1C005CB0C (UsbhEtwLogPortInformation.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
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
