/*
 * XREFs of SrbAssignQueueId @ 0x1C0001E60
 * Callers:
 *     ScsiToNVMe @ 0x1C00015C0 (ScsiToNVMe.c)
 *     FirmwareActivate @ 0x1C0011740 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C0011984 (FirmwareDownload.c)
 *     FirmwareGetInfo @ 0x1C0011D64 (FirmwareGetInfo.c)
 *     IoctlQueryEnduranceInformation @ 0x1C0013A20 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0013ED8 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C00140D0 (IoctlSetTemperatureThresholdProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0014B84 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0014D70 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C00154F8 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0015788 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0016190 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0016A00 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReservationAcquireCommand @ 0x1C0016D28 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x1C0016ECC (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x1C001705C (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x1C0017250 (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportCapabilities @ 0x1C00173BC (NVMeReservationReportCapabilities.c)
 *     NVMeReservationReportStatus @ 0x1C0017598 (NVMeReservationReportStatus.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C0018138 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001842C (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C0018864 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoCompletion @ 0x1C0018BF0 (QueryProtocolInfoCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0018F40 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0019288 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C00194BC (QueryProtocolInfoLogPageData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0019980 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0019B50 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1C0019E68 (ScsiModeSelectRequest.c)
 *     ScsiModeSenseRequest @ 0x1C001A004 (ScsiModeSenseRequest.c)
 *     ScsiSanitizeRequest @ 0x1C001A864 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C001AAA8 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C001ABCC (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C001ACF0 (ScsiStartStopUnitRequest.c)
 *     ScsiSyncCacheRequest @ 0x1C001ADD0 (ScsiSyncCacheRequest.c)
 *     ScsiUnmapRequest @ 0x1C001AE5C (ScsiUnmapRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C001B1DC (SetProtocolInfoFeatureData.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C001CC78 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C001CD30 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C001CE94 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001CF54 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C001D100 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D1C0 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0023850 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSyncHostTime @ 0x1C00242D8 (NVMeSyncHostTime.c)
 *     ProcessCommandNvmePacket @ 0x1C0024490 (ProcessCommandNvmePacket.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003750 (__security_check_cookie.c)
 *     GetSrbDataBuffer @ 0x1C0007C0C (GetSrbDataBuffer.c)
 *     ProcessorToDedicatedIoSqMapping @ 0x1C0010C70 (ProcessorToDedicatedIoSqMapping.c)
 *     ProcessorToIoSqMappingBase @ 0x1C0010CF4 (ProcessorToIoSqMappingBase.c)
 *     GetSrbScsiData @ 0x1C0012BEC (GetSrbScsiData.c)
 */

__int64 __fastcall SrbAssignQueueId(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // r10d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 result; // rax
  _BYTE *SrbScsiData; // rax
  __int64 v11; // r8
  bool v12; // zf
  unsigned __int8 v13; // cl
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // edx
  int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // [rsp+30h] [rbp-48h]
  _DWORD *v20; // [rsp+38h] [rbp-40h] BYREF
  int v21; // [rsp+40h] [rbp-38h]
  int v22; // [rsp+44h] [rbp-34h]
  __int64 v23; // [rsp+48h] [rbp-30h]
  int v24; // [rsp+50h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  if ( (*(_BYTE *)(v4 + 4253) & 1) != 0 )
  {
    result = *(unsigned __int16 *)(a1 + 384);
    *(_WORD *)(v4 + 4244) = result;
  }
  else if ( *(_BYTE *)(a1 + 20) )
  {
    result = *(_QWORD *)(a1 + 872);
    *(_WORD *)(v4 + 4244) = *(_WORD *)(result + 40);
  }
  else
  {
    v22 = 20;
    v19 = 0;
    v23 = 0LL;
    v24 = 0;
    v21 = 2;
    StorPortExtendedFunction(15LL, a1, a2);
    StorPortExtendedFunction(56LL, a1, &v24);
    v5 = 0;
    if ( !*(_WORD *)(a1 + 242) )
    {
      v5 = 0 % 0u;
      v19 = 0 % 0u;
    }
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v6 = *(_DWORD *)(a2 + 24);
    else
      v6 = *(_DWORD *)(a2 + 12);
    v7 = *(_QWORD *)(a1 + 272);
    if ( (v6 & 0x4000) != 0 )
    {
      if ( !*(_QWORD *)(v7 + 72LL * v5 + 64) )
      {
        ProcessorToDedicatedIoSqMapping(a1, v5, 0LL);
        v5 = v19;
      }
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 272) + 72LL * v5 + 64);
    }
    else
    {
      if ( !*(_QWORD *)(v7 + 72LL * v5 + 56) )
      {
        ProcessorToIoSqMappingBase(a1, v5, 0LL, 0LL);
        v5 = v19;
      }
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 272) + 72LL * v5 + 56);
    }
    if ( *(_BYTE *)(a1 + 4032)
      && ((SrbScsiData = (_BYTE *)GetSrbScsiData(a2, (unsigned int)&v20, 0, 0, 0LL), *SrbScsiData == 40)
       || *SrbScsiData == 42
       || (unsigned __int8)*SrbScsiData == 136
       || (unsigned __int8)*SrbScsiData == 138) )
    {
      v12 = *(_BYTE *)(a2 + 2) == 40;
      v20 = 0LL;
      if ( v12 )
      {
        v11 = *(unsigned int *)(a2 + 56);
        if ( (_DWORD)v11 )
        {
          v13 = 0;
          do
          {
            v14 = *(unsigned int *)(a2 + 4LL * v13 + 120);
            if ( (unsigned int)v14 >= 0x80 && (unsigned int)v14 < *(_DWORD *)(a2 + 16) && *(_DWORD *)(a2 + v14) == 128 )
              break;
            ++v13;
          }
          while ( v13 < (unsigned int)v11 );
        }
      }
      GetSrbDataBuffer(a2, &v20, v11);
      v16 = *(_DWORD *)(a1 + 4044);
      if ( (v16 & 0x80u) != 0 || *v20 <= *(_DWORD *)(a1 + 4040) && v15 && (*(_DWORD *)(v15 + 8) & 2) == 0 )
      {
        if ( (v16 & 0x40) != 0 )
          v18 = *(unsigned __int16 *)(a1 + 338);
        else
          v18 = *(unsigned __int16 *)(a1 + 340);
        v17 = v19 % v18;
      }
      else
      {
        LOWORD(v17) = *(_WORD *)(a1 + 340) + v19 % (unsigned __int16)(*(_WORD *)(a1 + 338) - *(_WORD *)(a1 + 340));
      }
      result = *(_QWORD *)(a1 + 872);
      *(_WORD *)(v4 + 4244) = *(_WORD *)(136LL * (unsigned __int16)v17 + result + 40);
    }
    else
    {
      result = *(unsigned __int16 *)(v8 + 40);
      *(_WORD *)(v4 + 4244) = result;
    }
  }
  return result;
}
