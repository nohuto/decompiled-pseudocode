/*
 * XREFs of HUBSM_AddEvent @ 0x1C000B8CC
 * Callers:
 *     HUBHTX_HubControlTransferComplete @ 0x1C0003330 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x1C00035F0 (HUBHTX_GetHubDescriptorUsingControlTransfer.c)
 *     HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0003880 (HUBHTX_GetHubStatusUsingControlTransfer.c)
 *     HUBHTX_SendInterruptTransfer @ 0x1C00039B0 (HUBHTX_SendInterruptTransfer.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x1C0003CC0 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x1C00062BC (HUBHTX_GetRequestedPortStatusUsingControlTransfer.c)
 *     HUBPARENT_SetHubConfigurationComplete @ 0x1C0007230 (HUBPARENT_SetHubConfigurationComplete.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1C00073A8 (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x1C0007900 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBPARENT_ResetInterruptPipe @ 0x1C0007A80 (HUBPARENT_ResetInterruptPipe.c)
 *     HUBPARENT_ResetHubComplete @ 0x1C0007C30 (HUBPARENT_ResetHubComplete.c)
 *     HUBPARENT_ResetHub @ 0x1C0007D60 (HUBPARENT_ResetHub.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0008000 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C00081BC (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBHSM_QueueingPortStatusChangeEvents @ 0x1C0008D30 (HUBHSM_QueueingPortStatusChangeEvents.c)
 *     HUBHSM_SendingAckForHubChange @ 0x1C0008F40 (HUBHSM_SendingAckForHubChange.c)
 *     HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend @ 0x1C0009490 (HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength @ 0x1C00095A0 (HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength @ 0x1C00096E0 (HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength.c)
 *     HUBHSM_GettingHubStatus @ 0x1C0009850 (HUBHSM_GettingHubStatus.c)
 *     HUBHSM_SettingHubDepth @ 0x1C0009D30 (HUBHSM_SettingHubDepth.c)
 *     HUBHSM_ReadingUsb4DromStatus @ 0x1C0009FD0 (HUBHSM_ReadingUsb4DromStatus.c)
 *     HUBHSM_ReadingUsb4DromDwordOffset @ 0x1C000A320 (HUBHSM_ReadingUsb4DromDwordOffset.c)
 *     HUBHSM_WritingUsb4DromMetaData @ 0x1C000A380 (HUBHSM_WritingUsb4DromMetaData.c)
 *     HUBHSM_WritingUsb4DromReadOpcode @ 0x1C000A3F0 (HUBHSM_WritingUsb4DromReadOpcode.c)
 *     HUBSM_AddHsmEvent @ 0x1C000A6FC (HUBSM_AddHsmEvent.c)
 *     HUBSM_AddPsm20Event @ 0x1C000A720 (HUBSM_AddPsm20Event.c)
 *     HUBSM_AddDsmEvent @ 0x1C000A740 (HUBSM_AddDsmEvent.c)
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000D220 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceD0Exit @ 0x1C000D6A0 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000DA50 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x1C000E000 (HUBFDO_EvtIoInternalDeviceControlFromPDO.c)
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x1C00108AC (HUBMUX_QueuePowerUpEventToPSMs.c)
 *     HUBMUX_QueueStopToAllPSMs @ 0x1C0010974 (HUBMUX_QueueStopToAllPSMs.c)
 *     HUBMUX_AcquirePortPowerReference @ 0x1C0010A18 (HUBMUX_AcquirePortPowerReference.c)
 *     HUBMUX_ReleasePortPowerReference @ 0x1C0010A64 (HUBMUX_ReleasePortPowerReference.c)
 *     HUBMUX_ReleaseResetReference @ 0x1C0010B00 (HUBMUX_ReleaseResetReference.c)
 *     HUBMUX_ReEnableInterruptTransfer @ 0x1C0010C2C (HUBMUX_ReEnableInterruptTransfer.c)
 *     HUBMUX_ReleaseInterruptReference @ 0x1C0010CC8 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C0010ED0 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     HUBMUX_QueuePowerDownEventToDSMs @ 0x1C0010F54 (HUBMUX_QueuePowerDownEventToDSMs.c)
 *     HUBMUX_QueueStopAfterSuspendToAllDSMs @ 0x1C0011188 (HUBMUX_QueueStopAfterSuspendToAllDSMs.c)
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x1C00113FC (HUBMUX_QueuePowerUpEventToDSMs.c)
 *     HUBMUX_UnregisterWithHSM @ 0x1C0011618 (HUBMUX_UnregisterWithHSM.c)
 *     HUBMUX_AcquireDevicePowerReference @ 0x1C0011784 (HUBMUX_AcquireDevicePowerReference.c)
 *     HUBMUX_ReleaseDevicePowerReference @ 0x1C0011810 (HUBMUX_ReleaseDevicePowerReference.c)
 *     HUBMUX_AckStopAfterSuspend @ 0x1C00118B8 (HUBMUX_AckStopAfterSuspend.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0015C30 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C0017EE8 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x1C0018258 (HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0018420 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C0019800 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0019A70 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C001A390 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_PowerSettingCallback @ 0x1C001B030 (HUBPDO_PowerSettingCallback.c)
 *     HUBPDO_NoPingResponse @ 0x1C001CCA0 (HUBPDO_NoPingResponse.c)
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C001FD30 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C001FED0 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice @ 0x1C00212C0 (HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice.c)
 *     HUBDSM_GettingLanguageIdStringDescriptor @ 0x1C0021470 (HUBDSM_GettingLanguageIdStringDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdDescriptor @ 0x1C00217A0 (HUBDSM_GettingMSOSContainerIdDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdHeaderDescriptor @ 0x1C0021840 (HUBDSM_GettingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_GettingMSOSDescriptor @ 0x1C00218E0 (HUBDSM_GettingMSOSDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptor @ 0x1C0021980 (HUBDSM_GettingMSOSExtendedDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x1C0021A80 (HUBDSM_GettingMSOSExtendedDescriptorHeader.c)
 *     HUBDSM_GetMsOs20DescriptorSet @ 0x1C00223E0 (HUBDSM_GetMsOs20DescriptorSet.c)
 *     HUBDSM_GettingAlternateModeStringDescriptor @ 0x1C0022580 (HUBDSM_GettingAlternateModeStringDescriptor.c)
 *     HUBDSM_GettingBillboardStringDescriptor @ 0x1C0022640 (HUBDSM_GettingBillboardStringDescriptor.c)
 *     HUBDSM_SendingDisallowFirmwareUpdateCommand @ 0x1C0022720 (HUBDSM_SendingDisallowFirmwareUpdateCommand.c)
 *     HUBDSM_SendingFirmwareImageHashQuery @ 0x1C0022800 (HUBDSM_SendingFirmwareImageHashQuery.c)
 *     HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1C00228E0 (HUBDSM_SendingUsbFeaturesVendorCmd.c)
 *     HUBDSM_GettingDeviceQualifierDescriptor @ 0x1C0022EC0 (HUBDSM_GettingDeviceQualifierDescriptor.c)
 *     HUBDSM_ConfiguringDevice @ 0x1C0023A50 (HUBDSM_ConfiguringDevice.c)
 *     HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration @ 0x1C0023B50 (HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration.c)
 *     HUBDSM_ArmingDeviceForWake @ 0x1C0024150 (HUBDSM_ArmingDeviceForWake.c)
 *     HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x1C0024380 (HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x1C0024810 (HUBDSM_GettingMSOSExtendedPropertyDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader @ 0x1C00248B0 (HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader.c)
 *     HUBDSM_EnablingLTM @ 0x1C0024BD0 (HUBDSM_EnablingLTM.c)
 *     HUBDSM_SetttingIsochDelay @ 0x1C0024CE0 (HUBDSM_SetttingIsochDelay.c)
 *     HUBDSM_DisablingU1 @ 0x1C0025060 (HUBDSM_DisablingU1.c)
 *     HUBDSM_DisablingU2 @ 0x1C0025190 (HUBDSM_DisablingU2.c)
 *     HUBDSM_EnablingU1 @ 0x1C0025270 (HUBDSM_EnablingU1.c)
 *     HUBDSM_EnablingU2 @ 0x1C0025350 (HUBDSM_EnablingU2.c)
 *     HUBDSM_GettingRemoteWakeCapability @ 0x1C00255C0 (HUBDSM_GettingRemoteWakeCapability.c)
 *     HUBUCX_EvtResetActionCompletion @ 0x1C00258F0 (HUBUCX_EvtResetActionCompletion.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C0025990 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00262CC (HUBUCX_SubmitUcxIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C00267C8 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C0026FE4 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctlComplete @ 0x1C0027770 (HUBUCX_GetRootHubInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C0027854 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete @ 0x1C0027AA0 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C0027B44 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete @ 0x1C0027FA0 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x1C0028044 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C00284C0 (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctlComplete @ 0x1C00287A0 (HUBUCX_UpdateHubInformationUsingUCXIoctlComplete.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C00288A0 (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBUCX_ClientRequestCompleteFromUCX @ 0x1C0029180 (HUBUCX_ClientRequestCompleteFromUCX.c)
 *     HUBUCX_ForwardRequestToUCX @ 0x1C00291CC (HUBUCX_ForwardRequestToUCX.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C00297F0 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x1C002A71C (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x1C002A894 (HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x1C002A954 (HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer.c)
 *     HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x1C002AA58 (HUBDTX_GetDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer @ 0x1C002AAE8 (HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x1C002AB78 (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x1C002AC5C (HUBDTX_GetBOSDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C002B424 (HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer.c)
 *     HUBDTX_GetProductIdStringDescriptorUsingControlTransfer @ 0x1C002B528 (HUBDTX_GetProductIdStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer @ 0x1C002B604 (HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x1C002B6A0 (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x1C002B7B4 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C002C6E8 (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_SetSelUsingControlTransfer @ 0x1C002D438 (HUBDTX_SetSelUsingControlTransfer.c)
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x1C002D6CC (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 *     HUBDTX_GetDeviceDescriptorComplete @ 0x1C002D7B0 (HUBDTX_GetDeviceDescriptorComplete.c)
 *     HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x1C002D8E4 (HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb.c)
 *     HUBMISC_HubEventTimer @ 0x1C002E7E0 (HUBMISC_HubEventTimer.c)
 *     HUBMISC_DsmEventTimer @ 0x1C002E810 (HUBMISC_DsmEventTimer.c)
 *     HUBMISC_AttachDevice @ 0x1C0030FE4 (HUBMISC_AttachDevice.c)
 *     HUBMISC_DetachDevice @ 0x1C0031060 (HUBMISC_DetachDevice.c)
 *     HUBMISC_ReAttachDevice @ 0x1C00310B8 (HUBMISC_ReAttachDevice.c)
 *     FWUPDATE_HubVendorControlTransferComplete @ 0x1C00408C0 (FWUPDATE_HubVendorControlTransferComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000AF68 (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBSM_RunStateMachine @ 0x1C000BDDC (HUBSM_RunStateMachine.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBSM_AddEvent(__int64 a1, int a2)
{
  __int64 v4; // rax
  KIRQL v5; // al
  __int64 v6; // rcx
  KIRQL v7; // si
  unsigned __int8 v8; // cl
  char v9; // r9
  char v10; // al
  unsigned __int8 i; // dl
  int v12; // r8d
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  KIRQL v22; // [rsp+58h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 960));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v4,
    "Add Event Tag",
    1136LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
  v6 = *(unsigned __int8 *)(a1 + 833);
  v7 = v5;
  v22 = v5;
  *(_DWORD *)(a1 + 4 * v6 + 768) = a2;
  *(_BYTE *)(a1 + 833) = (*(_BYTE *)(a1 + 833) + 1) & 0xF;
  if ( a2 == 3039 || a2 == 3043 || a2 == 4055 || a2 == 4059 )
  {
    v8 = *(_BYTE *)(a1 + 948);
    v9 = 0;
    v10 = *(_BYTE *)(a1 + 949);
    for ( i = v8; i != v10; i = (i + 1) & 0xF )
    {
      v12 = *(_DWORD *)(a1 + 4LL * i + 884);
      if ( v12 == a2 )
      {
        v9 = 1;
      }
      else
      {
        v13 = v8;
        v8 = (v8 + 1) & 0xF;
        *(_DWORD *)(a1 + 4 * v13 + 884) = v12;
      }
      v10 = *(_BYTE *)(a1 + 949);
    }
    v14 = v8;
    if ( v8 != v10 )
    {
      do
      {
        v15 = v14 & 0xF;
        v14 = (v14 + 1) & 0xF;
        *(_DWORD *)(a1 + 4 * v15 + 884) = 1000;
      }
      while ( v14 != *(_BYTE *)(a1 + 949) );
    }
    *(_BYTE *)(a1 + 949) = v8;
    if ( v9 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v7);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
      v22 = v7;
    }
  }
  if ( *(_BYTE *)(a1 + 1048) )
  {
    if ( a2 == 1002 )
    {
      *(_BYTE *)(a1 + 1048) = 0;
      v16 = HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(a1);
      if ( v16 != 1003 )
      {
        v17 = v16;
LABEL_21:
        HUBSM_RunStateMachine(a1, v17, &v22, 0LL);
        v7 = v22;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 949) + 884) = a2;
      *(_BYTE *)(a1 + 949) = (*(_BYTE *)(a1 + 949) + 1) & 0xF;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 949) + 884) = a2;
    *(_BYTE *)(a1 + 949) = (*(_BYTE *)(a1 + 949) + 1) & 0xF;
    if ( !*(_BYTE *)(a1 + 848) )
    {
      v18 = *(_QWORD *)(a1 + 960);
      *(_BYTE *)(a1 + 848) = 1;
      v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v18);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v19,
        "State Machine Tag",
        1235LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      v17 = 1000LL;
      goto LABEL_21;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v7);
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 960));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
           WdfDriverGlobals,
           v20,
           "Add Event Tag",
           1252LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
}
