/*
 * XREFs of SrbAssignQueueId @ 0x1C0005238
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C00014A0 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoCompletion @ 0x1C0001720 (QueryProtocolInfoCompletion.c)
 *     FirmwareGetInfo @ 0x1C0002AC0 (FirmwareGetInfo.c)
 *     ScsiUnmapRequest @ 0x1C0002F48 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C000335C (ScsiModeSenseRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0003610 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiSyncCacheRequest @ 0x1C000513C (ScsiSyncCacheRequest.c)
 *     ProcessCommandNvmePacket @ 0x1C000DB08 (ProcessCommandNvmePacket.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C000DC80 (ScsiSecurityProtocolInRequest.c)
 *     FirmwareActivate @ 0x1C001A838 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C001AA58 (FirmwareDownload.c)
 *     IoctlQueryEnduranceInformation @ 0x1C001B91C (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C001BD14 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C001BF00 (IoctlSetTemperatureThresholdProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C001C6EC (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C001C8D4 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001CFA8 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C001D238 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C001D870 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeReservationAcquireCommand @ 0x1C001DFE0 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x1C001E16C (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x1C001E2EC (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x1C001E4D0 (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportCapabilities @ 0x1C001E638 (NVMeReservationReportCapabilities.c)
 *     NVMeReservationReportStatus @ 0x1C001E814 (NVMeReservationReportStatus.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C001F3CC (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001F6BC (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C001FAF4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C001FE84 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0020158 (QueryProtocolInfoIdentifyData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0020390 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0020570 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1C0020788 (ScsiModeSelectRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0020C04 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0020E6C (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0020F78 (ScsiStartStopUnitRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C002111C (SetProtocolInfoFeatureData.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C002230C (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C00223F4 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C0022584 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0022678 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0022854 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0022948 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0024584 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSyncHostTime @ 0x1C002492C (NVMeSyncHostTime.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C00031F8 (GetSrbScsiData.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 */

__int64 __fastcall SrbAssignQueueId(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // r14
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int16 v13; // cx
  __int64 v14; // r8
  __int64 v15; // rdx
  _BYTE *SrbScsiData; // rax
  char v17; // al
  unsigned int v18; // r8d
  unsigned __int8 v19; // dl
  __int64 v20; // rcx
  _DWORD *v21; // rcx
  _DWORD *v22; // rdi
  int v23; // edx
  int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // [rsp+30h] [rbp-30h] BYREF
  int v27; // [rsp+34h] [rbp-2Ch] BYREF
  _DWORD v28[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v29; // [rsp+40h] [rbp-20h]
  int v30; // [rsp+48h] [rbp-18h] BYREF

  result = GetSrbExtension(a2);
  v6 = result;
  if ( (*(_BYTE *)(result + 4253) & 1) != 0 )
  {
    v13 = *(_WORD *)(a1 + 352);
    goto LABEL_11;
  }
  if ( *(_BYTE *)(a1 + 20) )
  {
    result = *(_QWORD *)(a1 + 792);
    v13 = *(_WORD *)(result + 40);
    goto LABEL_11;
  }
  v26 = 0;
  v29 = 0LL;
  v30 = 0;
  v28[1] = 20;
  v28[0] = 2;
  StorPortExtendedFunction(15LL, a1, v5, v28);
  v8 = (unsigned __int16)v29;
  if ( (_WORD)v30 == 0xFFFF && BYTE2(v30) == 0xFF )
    StorPortExtendedFunction(17LL, a1, &v30, v7);
  StorPortExtendedFunction(56LL, a1, &v30, &v26);
  v9 = *(unsigned __int16 *)(a1 + 234);
  v10 = v26;
  if ( v26 >= v9 )
  {
    v10 = v26 % v9;
    v26 %= v9;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 264) + 48LL * v10 + 40) )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 24 * v8 + 16);
    v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192)
                    + 8LL
                    * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 184), 1u)
                     % *(_DWORD *)(v14 + 180)));
    *(_QWORD *)(*(_QWORD *)(a1 + 264) + 48LL * v10 + 40) = v15;
    ++*(_WORD *)(v15 + 52);
    v10 = v26;
  }
  if ( !*(_BYTE *)(a1 + 3832) )
  {
    v11 = v10;
LABEL_10:
    v12 = 3 * v11;
    result = *(_QWORD *)(a1 + 264);
    v13 = *(_WORD *)(*(_QWORD *)(result + 16 * v12 + 40) + 40LL);
    goto LABEL_11;
  }
  SrbScsiData = (_BYTE *)GetSrbScsiData(a2, &v27, 0LL, 0LL, 0LL);
  if ( *SrbScsiData != 40
    && *SrbScsiData != 42
    && (unsigned __int8)*SrbScsiData != 136
    && (unsigned __int8)*SrbScsiData != 138 )
  {
    v11 = v26;
    goto LABEL_10;
  }
  v17 = *(_BYTE *)(a2 + 2);
  if ( v17 == 40 )
  {
    v18 = *(_DWORD *)(a2 + 56);
    if ( v18 )
    {
      v19 = 0;
      while ( 1 )
      {
        v20 = *(unsigned int *)(a2 + 4LL * v19 + 120);
        if ( (unsigned int)v20 >= 0x80 && (unsigned int)v20 < *(_DWORD *)(a2 + 16) )
        {
          v21 = (_DWORD *)(a2 + v20);
          if ( *v21 == 128 )
            goto LABEL_29;
        }
        if ( ++v19 >= v18 )
        {
          v21 = 0LL;
          goto LABEL_29;
        }
      }
    }
  }
  v21 = 0LL;
  if ( v17 == 40 )
  {
LABEL_29:
    v22 = (_DWORD *)(a2 + 60);
    goto LABEL_30;
  }
  v22 = (_DWORD *)(a2 + 16);
LABEL_30:
  v23 = *(_DWORD *)(a1 + 3844);
  if ( (v23 & 0x80) != 0 || *v22 <= *(_DWORD *)(a1 + 3840) && v21 && (v21[2] & 2) == 0 )
  {
    if ( (v23 & 0x40) != 0 )
      v25 = *(unsigned __int16 *)(a1 + 306);
    else
      v25 = *(unsigned __int16 *)(a1 + 308);
    v24 = v26 % v25;
  }
  else
  {
    LOWORD(v24) = *(_WORD *)(a1 + 308) + v26 % (unsigned __int16)(*(_WORD *)(a1 + 306) - *(_WORD *)(a1 + 308));
  }
  result = *(_QWORD *)(a1 + 792);
  v13 = *(_WORD *)(136LL * (unsigned __int16)v24 + result + 40);
LABEL_11:
  *(_WORD *)(v6 + 4244) = v13;
  return result;
}
