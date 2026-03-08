/*
 * XREFs of SrbAssignQueueId @ 0x1C0001960
 * Callers:
 *     ScsiToNVMe @ 0x1C00010C0 (ScsiToNVMe.c)
 *     FirmwareActivate @ 0x1C00116D0 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C0011914 (FirmwareDownload.c)
 *     FirmwareGetInfo @ 0x1C0011CF4 (FirmwareGetInfo.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00139B0 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0013E68 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C0014060 (IoctlSetTemperatureThresholdProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0014B14 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0014D00 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0015488 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0015718 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0016120 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0016990 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReservationAcquireCommand @ 0x1C0016CB8 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x1C0016E5C (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x1C0016FEC (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x1C00171E0 (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportCapabilities @ 0x1C001734C (NVMeReservationReportCapabilities.c)
 *     NVMeReservationReportStatus @ 0x1C0017528 (NVMeReservationReportStatus.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C00180C8 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C00183BC (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C00187F4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoCompletion @ 0x1C0018B80 (QueryProtocolInfoCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0018ED0 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0019218 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C001944C (QueryProtocolInfoLogPageData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0019910 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0019AE0 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1C0019DF8 (ScsiModeSelectRequest.c)
 *     ScsiModeSenseRequest @ 0x1C0019F94 (ScsiModeSenseRequest.c)
 *     ScsiSanitizeRequest @ 0x1C001A7F4 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C001AA38 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C001AB5C (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C001AC80 (ScsiStartStopUnitRequest.c)
 *     ScsiSyncCacheRequest @ 0x1C001AD60 (ScsiSyncCacheRequest.c)
 *     ScsiUnmapRequest @ 0x1C001ADEC (ScsiUnmapRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C001B16C (SetProtocolInfoFeatureData.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C001CC08 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C001CCC0 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C001CE24 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001CEE4 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C001D090 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D150 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C00237E0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSyncHostTime @ 0x1C0024318 (NVMeSyncHostTime.c)
 *     ProcessCommandNvmePacket @ 0x1C00244D0 (ProcessCommandNvmePacket.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     ProcessorToDedicatedIoSqMapping @ 0x1C0010C00 (ProcessorToDedicatedIoSqMapping.c)
 *     ProcessorToIoSqMappingBase @ 0x1C0010C84 (ProcessorToIoSqMappingBase.c)
 *     GetSrbScsiData @ 0x1C0012B7C (GetSrbScsiData.c)
 */

__int64 __fastcall SrbAssignQueueId(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  unsigned __int16 v6; // bp
  unsigned int v7; // ecx
  unsigned int v8; // r10d
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 result; // rax
  _BYTE *SrbScsiData; // rax
  bool v14; // zf
  unsigned int v15; // r8d
  unsigned __int8 i; // cl
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // edx
  int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // [rsp+30h] [rbp-48h] BYREF
  _DWORD *v23; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v24[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v25; // [rsp+48h] [rbp-30h]
  int v26; // [rsp+50h] [rbp-28h] BYREF

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
    v24[1] = 20;
    v22 = 0;
    v25 = 0LL;
    v26 = 0;
    v24[0] = 2;
    StorPortExtendedFunction(15LL, a1, a2, v24);
    v6 = v25;
    if ( (_WORD)v26 == 0xFFFF && BYTE2(v26) == 0xFF )
      StorPortExtendedFunction(17LL, a1, &v26, v5);
    StorPortExtendedFunction(56LL, a1, &v26, &v22);
    v7 = *(unsigned __int16 *)(a1 + 242);
    v8 = v22;
    if ( v22 >= v7 )
    {
      v8 = v22 % v7;
      v22 %= v7;
    }
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v9 = *(_DWORD *)(a2 + 24);
    else
      v9 = *(_DWORD *)(a2 + 12);
    v10 = *(_QWORD *)(a1 + 272);
    if ( (v9 & 0x4000) != 0 )
    {
      if ( !*(_QWORD *)(v10 + 72LL * v8 + 64) )
      {
        ProcessorToDedicatedIoSqMapping(a1, v8, v6);
        v8 = v22;
      }
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 272) + 72LL * v8 + 64);
    }
    else
    {
      if ( !*(_QWORD *)(v10 + 72LL * v8 + 56) )
      {
        ProcessorToIoSqMappingBase(a1, v8, v6, 0LL);
        v8 = v22;
      }
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 272) + 72LL * v8 + 56);
    }
    if ( *(_BYTE *)(a1 + 4032)
      && ((SrbScsiData = (_BYTE *)GetSrbScsiData(a2, (unsigned int)&v23, 0, 0, 0LL), *SrbScsiData == 40)
       || *SrbScsiData == 42
       || (unsigned __int8)*SrbScsiData == 136
       || (unsigned __int8)*SrbScsiData == 138) )
    {
      v14 = *(_BYTE *)(a2 + 2) == 40;
      v23 = 0LL;
      if ( v14 )
      {
        v15 = *(_DWORD *)(a2 + 56);
        if ( v15 )
        {
          for ( i = 0; i < v15; ++i )
          {
            v17 = *(unsigned int *)(a2 + 4LL * i + 120);
            if ( (unsigned int)v17 >= 0x80 && (unsigned int)v17 < *(_DWORD *)(a2 + 16) && *(_DWORD *)(a2 + v17) == 128 )
              break;
          }
        }
      }
      GetSrbDataBuffer(a2, &v23);
      v19 = *(_DWORD *)(a1 + 4044);
      if ( (v19 & 0x80u) != 0 || *v23 <= *(_DWORD *)(a1 + 4040) && v18 && (*(_DWORD *)(v18 + 8) & 2) == 0 )
      {
        if ( (v19 & 0x40) != 0 )
          v21 = *(unsigned __int16 *)(a1 + 338);
        else
          v21 = *(unsigned __int16 *)(a1 + 340);
        v20 = v22 % v21;
      }
      else
      {
        LOWORD(v20) = *(_WORD *)(a1 + 340) + v22 % (unsigned __int16)(*(_WORD *)(a1 + 338) - *(_WORD *)(a1 + 340));
      }
      result = *(_QWORD *)(a1 + 872);
      *(_WORD *)(v4 + 4244) = *(_WORD *)(136LL * (unsigned __int16)v20 + result + 40);
    }
    else
    {
      result = *(unsigned __int16 *)(v11 + 40);
      *(_WORD *)(v4 + 4244) = result;
    }
  }
  return result;
}
