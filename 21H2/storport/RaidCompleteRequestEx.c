/*
 * XREFs of RaidCompleteRequestEx @ 0x1C0009080
 * Callers:
 *     RaUnitStoragePowerIdle @ 0x1C000218C (RaUnitStoragePowerIdle.c)
 *     RaUnitStoragePowerActive @ 0x1C0002218 (RaUnitStoragePowerActive.c)
 *     RaUnitStartIo @ 0x1C0003A20 (RaUnitStartIo.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0005C08 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C00067E8 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitAsyncError @ 0x1C0007438 (RaUnitAsyncError.c)
 *     RaidUnitCompleteRequest @ 0x1C0007A70 (RaidUnitCompleteRequest.c)
 *     RaUnitScsiIrp @ 0x1C0009BC0 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C000A020 (RaidStartIoPacket.c)
 *     RaUnitDeviceControlIrp @ 0x1C000B1E8 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C000B738 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitPnpIrp @ 0x1C000BA58 (RaUnitPnpIrp.c)
 *     RaidHandleCreateCloseIrp @ 0x1C00116E4 (RaidHandleCreateCloseIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0011C30 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001281C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterPowerIrp @ 0x1C0012AA8 (RaidAdapterPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0012B78 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C0012C5C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0012DE8 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0013788 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0014E04 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0015244 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0015674 (RaidUnitProcessBusyRequest.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C0015C0C (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C0015DB0 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0016130 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0016310 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C00163C0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaUnitQuiesceDeviceSrb @ 0x1C0016458 (RaUnitQuiesceDeviceSrb.c)
 *     RaidAdapterPnpIrp @ 0x1C00168C4 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0016A64 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001AF20 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C001C880 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001CA00 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidCompleteWmiIrp @ 0x1C001D114 (RaidCompleteWmiIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C001D1EC (RaUnitQueryInterfaceIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C001D28C (RaUnitRemoveDeviceIrp.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C001D328 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitClaimDeviceSrb @ 0x1C001D4E0 (RaUnitClaimDeviceSrb.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C002AD8C (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C002AE1C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C002B7B0 (RaidAdapterCheckWaitTimeout.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C002CEC8 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002CFC0 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002D178 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C002D4CC (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C002D67C (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C002D970 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C002DB30 (RaidAdapterQueryInterfaceIrp.c)
 *     RaidAdapterRpmbRequest @ 0x1C002E6BC (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetAddressIoctl @ 0x1C002E9A4 (RaidAdapterScsiGetAddressIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C002E9FC (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002EA78 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C002F7FC (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterSetLedState @ 0x1C002F8D8 (RaidAdapterSetLedState.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C002FFB0 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C00302F4 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidAdapterStorageDeviceResetIoctl @ 0x1C00303A8 (RaidAdapterStorageDeviceResetIoctl.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x1C00303EC (RaidAdapterStorageResetBusIoctl.c)
 *     RaidAdapterStorageSetPropertyIoctl @ 0x1C0030430 (RaidAdapterStorageSetPropertyIoctl.c)
 *     RaidPnPAsyncStartComplete @ 0x1C00327C0 (RaidPnPAsyncStartComplete.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x1C0032810 (RaidPnPAsyncStartCompleteWorker.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C00334E0 (StorASyncScsiPassThroughCompletion.c)
 *     RaProcessDFxPendingIrp @ 0x1C0034700 (RaProcessDFxPendingIrp.c)
 *     StorExtCompleteServiceIrp @ 0x1C0038B90 (StorExtCompleteServiceIrp.c)
 *     StorpCompleteServiceIrp @ 0x1C003B4B8 (StorpCompleteServiceIrp.c)
 *     RaidCancelIrp @ 0x1C0044D68 (RaidCancelIrp.c)
 *     RaUnitAttributeManagement @ 0x1C0046F64 (RaUnitAttributeManagement.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0047710 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C004779C (RaUnitFlushQueueSrb.c)
 *     RaUnitGetQOSIoctl @ 0x1C0047910 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C0047A20 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C0047A94 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C0047B08 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C0047BB0 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C0047C7C (RaUnitReleaseDeviceSrb.c)
 *     RaUnitSetQOSIoctl @ 0x1C0047E14 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0048360 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C0048618 (RaUnitSmartDataIoctl.c)
 *     RaUnitStartResetIo @ 0x1C0048EB8 (RaUnitStartResetIo.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C0049390 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceNumaPropertyIoctl @ 0x1C00494F4 (RaUnitStorageQueryDeviceNumaPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C004957C (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C00496CC (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0049890 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1C0049A30 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x1C0049B88 (RaUnitStorageSetPropertyIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C004A680 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C004AE80 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitSetLedState @ 0x1C004BECC (RaidUnitSetLedState.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004BF84 (RaidUnitSubmitResetRequest.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C0072480 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C00725AC (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C0072880 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C007298C (RaUnitQueryDeviceRelationsIrp.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C0073704 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C007376C (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C0073CBC (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0073D24 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0074290 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C007479C (RaUnitStartDeviceIrp.c)
 *     RaUnitQueryIdIrp @ 0x1C0074B64 (RaUnitQueryIdIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0074C34 (RaUnitQueryDeviceTextIrp.c)
 *     RaWmiDispatchIrp @ 0x1C0075054 (RaWmiDispatchIrp.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C0075610 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitIgnorePnpIrp @ 0x1C00757C4 (RaUnitIgnorePnpIrp.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0075F14 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0075FEC (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaUnitSucceedPnpIrp @ 0x1C0076080 (RaUnitSucceedPnpIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077B5C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00781BC (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterPassThrough @ 0x1C0078B5C (RaidAdapterPassThrough.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C007901C (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterScsiIrp @ 0x1C00790E8 (RaidAdapterScsiIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C007B180 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C007B1B0 (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C007B1FC (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C007B234 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStopDeviceIrp @ 0x1C007B354 (RaUnitStopDeviceIrp.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C007B380 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C007B44C (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C007B60C (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C007B7B4 (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitUnknownSrb @ 0x1C007B81C (RaUnitUnknownSrb.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001D01C (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C002A438 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x1C002A5D0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1C002A6A8 (McTemplateK0pqd_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidCompleteRequestEx(PIRP Irp, CCHAR a2, unsigned int a3)
{
  bool v3; // zf
  int v7; // edx
  int v8; // r10d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  _DWORD *Information; // rbp
  char v13; // bp
  unsigned __int8 v14; // r13
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  char Flags; // r11
  char LowPart_high; // r12
  char SecurityQos; // r15
  unsigned int v19; // eax
  char *SrbScsiData; // rax
  char v21; // r9
  _ACCESS_STATE *AccessState; // rdx
  unsigned __int8 v23; // r8
  unsigned int v24; // ecx
  char v25; // r14
  char v26; // r9
  unsigned __int8 *v27; // rcx
  unsigned __int8 *p_SecurityEvaluated; // rax
  unsigned int v29; // ecx
  __int64 v30; // rax
  bool v31; // cc
  char *v32; // r8
  char v33; // al
  int v34; // ecx
  char v35; // [rsp+60h] [rbp-68h] BYREF
  char v36[3]; // [rsp+61h] [rbp-67h] BYREF
  int v37; // [rsp+64h] [rbp-64h]
  unsigned int FullCreateOptions; // [rsp+68h] [rbp-60h]
  _ACCESS_STATE *v39; // [rsp+70h] [rbp-58h] BYREF
  __int128 v40; // [rsp+78h] [rbp-50h] BYREF

  v3 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = a3;
  if ( v3 )
    goto LABEL_4;
  v40 = 0LL;
  IoGetActivityIdIrp(Irp, &v40);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction == 15 )
  {
    if ( (byte_1C0069842 & 1) != 0 )
    {
      v13 = 0;
      LOBYTE(v8) = 0;
      v14 = 0;
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      Flags = 0;
      LowPart_high = 0;
      SecurityQos = 0;
      v39 = 0LL;
      v35 = 0;
      v19 = BYTE2(SecurityContext->SecurityQos);
      v36[0] = 0;
      v37 = v8;
      if ( (_BYTE)v19 == 40 )
      {
        FullCreateOptions = SecurityContext->FullCreateOptions;
        SrbScsiData = (char *)GetSrbScsiData(
                                (_DWORD)SecurityContext,
                                0,
                                0,
                                (unsigned int)&v35,
                                (__int64)&v39,
                                (__int64)v36);
        v21 = v35;
        Flags = 0;
        AccessState = v39;
        v23 = v36[0];
        LOBYTE(v8) = v37;
        v24 = FullCreateOptions;
        if ( SrbScsiData )
          SecurityQos = *SrbScsiData;
      }
      else
      {
        v21 = BYTE4(SecurityContext->SecurityQos);
        v24 = v19;
        SecurityQos = (char)SecurityContext[3].SecurityQos;
        AccessState = SecurityContext[1].AccessState;
        v23 = BYTE3(SecurityContext->AccessState);
        v35 = v21;
      }
      if ( !v24 && ((SecurityQos - 8) & 0x5D) == 0 )
      {
        v25 = BYTE3(SecurityContext->SecurityQos);
        if ( v25 == 1 || !AccessState || !v23 )
        {
LABEL_40:
          if ( (byte_1C0069842 & 1) != 0 )
          {
            if ( (_BYTE)v8 )
            {
              v13 = LowPart_high;
              v33 = Flags;
              v34 = v14;
            }
            else
            {
              v33 = 0;
              v34 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v34,
              (_DWORD)AccessState,
              (unsigned int)&v40,
              (_DWORD)Irp,
              Irp->IoStatus.Status,
              v25,
              v21,
              v34,
              v33,
              v13,
              (char)Irp);
          }
          goto LABEL_4;
        }
        v26 = 0;
        v27 = (unsigned __int8 *)AccessState + v23;
        p_SecurityEvaluated = &AccessState->SecurityEvaluated;
        if ( (unsigned __int8)((AccessState->OperationID.LowPart & 0x7F) - 114) <= 1u )
        {
          if ( p_SecurityEvaluated > v27 )
            goto LABEL_38;
          Flags = BYTE2(AccessState->OperationID.LowPart);
          v14 = BYTE1(AccessState->OperationID.LowPart) & 0xF;
          LowPart_high = HIBYTE(AccessState->OperationID.LowPart);
        }
        else
        {
          if ( p_SecurityEvaluated > v27 )
            goto LABEL_38;
          v29 = HIBYTE(AccessState->OperationID.HighPart) + 8;
          v30 = v23;
          v14 = BYTE2(AccessState->OperationID.LowPart) & 0xF;
          v31 = v29 <= v23;
          v32 = (char *)&AccessState->Flags + 1;
          if ( v31 )
            v30 = v29;
          if ( v32 > (char *)AccessState + v30 )
            Flags = 0;
          else
            Flags = AccessState->Flags;
          if ( (char *)&AccessState->Flags + 2 <= (char *)AccessState + (unsigned int)v30 )
            LowPart_high = *v32;
        }
        v26 = 1;
LABEL_38:
        v3 = v26 == 0;
        v21 = v35;
        if ( !v3 )
          LOBYTE(v8) = 1;
        goto LABEL_40;
      }
    }
  }
  else if ( MajorFunction == 14 )
  {
    if ( (byte_1C0069842 & 0x10) != 0 )
      McTemplateK0pd_EtwWriteTransfer(
        CurrentStackLocation,
        &EventNonReadWriteRequestComplete,
        &v40,
        Irp,
        Irp->IoStatus.Status);
  }
  else if ( MajorFunction == 27 )
  {
    if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_1C0069842 & 0x40) != 0 )
      {
        Information = (_DWORD *)Irp->IoStatus.Information;
        if ( Information )
          LODWORD(Information) = *Information;
        McTemplateK0pqd_EtwWriteTransfer(
          (_DWORD)CurrentStackLocation,
          v7,
          (unsigned int)&v40,
          (_DWORD)Irp,
          (char)Information,
          Irp->IoStatus.Status);
      }
    }
    else if ( (byte_1C0069842 & 0x20) != 0 )
    {
      McTemplateK0pd_EtwWriteTransfer(CurrentStackLocation, &EventPnpRequestComplete, &v40, Irp, Irp->IoStatus.Status);
    }
  }
LABEL_4:
  IofCompleteRequest(Irp, a2);
  return a3;
}
