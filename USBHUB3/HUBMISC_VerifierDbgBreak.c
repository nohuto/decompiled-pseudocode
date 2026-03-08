/*
 * XREFs of HUBMISC_VerifierDbgBreak @ 0x1C0032FCC
 * Callers:
 *     HUBHTX_HubControlTransferComplete @ 0x1C0003330 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x1C0003CC0 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_PortControlTransferComplete @ 0x1C0003E90 (HUBHTX_PortControlTransferComplete.c)
 *     HUBHTX_Get20PortChangeEvent @ 0x1C0004C30 (HUBHTX_Get20PortChangeEvent.c)
 *     HUBHTX_CheckAndSelectIfAny20PortChangeSet @ 0x1C0005000 (HUBHTX_CheckAndSelectIfAny20PortChangeSet.c)
 *     HUBHTX_CheckAndSelectIfAny30PortChangeSet @ 0x1C0005168 (HUBHTX_CheckAndSelectIfAny30PortChangeSet.c)
 *     HUBHTX_GetPortLostChangeEvent @ 0x1C00052EC (HUBHTX_GetPortLostChangeEvent.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C000569C (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset @ 0x1C00061A8 (HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x1C0007900 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBHSM_CheckIfThereIsAValidHubChange @ 0x1C00084D0 (HUBHSM_CheckIfThereIsAValidHubChange.c)
 *     HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes @ 0x1C0008620 (HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x1C000F068 (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0015D60 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C0016970 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0018550 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x1C00237F0 (HUBDSM_ComparingSerialNumberOnReEnumeration.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C0025AA0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C0029900 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability @ 0x1C002A628 (HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability.c)
 *     HUBMISC_LogDeviceReEnumeration @ 0x1C002E978 (HUBMISC_LogDeviceReEnumeration.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C002EA10 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x1C0031244 (HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode.c)
 *     HUBMISC_LogResetTimeout @ 0x1C0033E44 (HUBMISC_LogResetTimeout.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C0033F70 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     HUBMISC_LogDescriptorValidationWarningForDevice @ 0x1C0034010 (HUBMISC_LogDescriptorValidationWarningForDevice.c)
 *     FWUPDATE_HubVendorControlTransferComplete @ 0x1C00409D0 (FWUPDATE_HubVendorControlTransferComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_sq @ 0x1C002E630 (WPP_RECORDER_SF_sq.c)
 */

BOOLEAN __fastcall HUBMISC_VerifierDbgBreak(const char *a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // eax
  BOOLEAN result; // al
  int v7; // [rsp+20h] [rbp-28h]

  DbgPrint("USB Hardware Verifier Break for %s\n", a1);
  v5 = *(_DWORD *)(a2 + 984);
  switch ( v5 )
  {
    case 2000:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sq(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 2520LL), v4, 3u, 0x57u, v7, a1);
      DbgPrint("Run !rcdrlogdump usbhub3 -a 0x%p, !hub_info 0x%p\n", *(_QWORD *)(*(_QWORD *)(a2 + 960) + 2520LL));
      break;
    case 3000:
LABEL_5:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sq(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 1432LL), v4, 4u, 0x58u, v7, a1);
      DbgPrint("Run !rcdrlogdump usbhub3 -a 0x%p, !port_info 0x%p\n", *(_QWORD *)(*(_QWORD *)(a2 + 960) + 1432LL));
      break;
    case 4000:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sq(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 8LL) + 1432LL), v4, 4u, 0x59u, v7, a1);
      DbgPrint(
        "Run !rcdrlogdump usbhub3 -a 0x%p, !device_info 0x%p\n",
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 8LL) + 1432LL));
      break;
    case 5000:
      goto LABEL_5;
    default:
      break;
  }
  result = KdRefreshDebuggerNotPresent();
  if ( !result )
    __debugbreak();
  return result;
}
