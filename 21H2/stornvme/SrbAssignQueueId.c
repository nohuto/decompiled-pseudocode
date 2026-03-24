/*
 * XREFs of SrbAssignQueueId @ 0x1C0005900
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001F7C (QueryProtocolInfoLogPageData.c)
 *     FirmwareGetInfo @ 0x1C000233C (FirmwareGetInfo.c)
 *     ScsiUnmapRequest @ 0x1C0002794 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C000294C (ScsiModeSenseRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0004670 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiSyncCacheRequest @ 0x1C0005848 (ScsiSyncCacheRequest.c)
 *     FirmwareActivate @ 0x1C00117D0 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C00119E4 (FirmwareDownload.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00130A4 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C001348C (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C0013678 (IoctlSetTemperatureThresholdProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0013E64 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C001404C (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001476C (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C001495C (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0015360 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C0015964 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C0015C4C (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C0016084 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0016414 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C001667C (QueryProtocolInfoIdentifyData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C00167E0 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C00169A0 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1C0016BA8 (ScsiModeSelectRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0016E54 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C0016FEC (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C00170F4 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C00171FC (ScsiStartStopUnitRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C001744C (SetProtocolInfoFeatureData.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C001862C (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0018714 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C00188A4 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0018998 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0018B74 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0018C68 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C001B5EC (NVMeSetHostMemoryBuffer.c)
 *     NVMeSyncHostTime @ 0x1C001C0CC (NVMeSyncHostTime.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0004498 (GetSrbScsiData.c)
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     __security_check_cookie @ 0x1C00066D0 (__security_check_cookie.c)
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
  char v17; // r8
  unsigned int v18; // r9d
  unsigned __int8 v19; // dl
  __int64 v20; // rcx
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  int v23; // r8d
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
    v13 = *(_WORD *)(a1 + 336);
    goto LABEL_11;
  }
  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(_QWORD *)(a1 + 776);
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
  v9 = *(unsigned __int16 *)(a1 + 218);
  v10 = v26;
  if ( v26 >= v9 )
  {
    v10 = v26 % v9;
    v26 %= v9;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 248) + 48LL * v10 + 40) )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 24 * v8 + 16);
    v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192)
                    + 8LL
                    * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 184), 1u)
                     % *(_DWORD *)(v14 + 180)));
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 48LL * v10 + 40) = v15;
    ++*(_WORD *)(v15 + 52);
    v10 = v26;
  }
  if ( !*(_BYTE *)(a1 + 3816) )
  {
    v11 = v10;
LABEL_10:
    v12 = 3 * v11;
    result = *(_QWORD *)(a1 + 248);
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
  if ( v17 == 40 && (v18 = *(_DWORD *)(a2 + 56)) != 0 )
  {
    v19 = 0;
    while ( 1 )
    {
      v20 = *(unsigned int *)(a2 + 4LL * v19 + 120);
      if ( (unsigned int)v20 >= 0x80 && (unsigned int)v20 < *(_DWORD *)(a2 + 16) )
      {
        v21 = (_DWORD *)(a2 + v20);
        if ( *v21 == 128 )
          break;
      }
      if ( ++v19 >= v18 )
        goto LABEL_28;
    }
  }
  else
  {
LABEL_28:
    v21 = 0LL;
    if ( v17 != 40 )
    {
      v22 = 16LL;
      goto LABEL_31;
    }
  }
  v22 = 60LL;
LABEL_31:
  v23 = *(_DWORD *)(a1 + 3828);
  if ( (v23 & 0x80) != 0 || *(_DWORD *)(a2 + v22) <= *(_DWORD *)(a1 + 3824) && v21 && (v21[2] & 2) == 0 )
  {
    if ( (v23 & 0x40) != 0 )
      v25 = *(unsigned __int16 *)(a1 + 290);
    else
      v25 = *(unsigned __int16 *)(a1 + 292);
    v24 = v26 % v25;
  }
  else
  {
    LOWORD(v24) = *(_WORD *)(a1 + 292) + v26 % (unsigned __int16)(*(_WORD *)(a1 + 290) - *(_WORD *)(a1 + 292));
  }
  result = *(_QWORD *)(a1 + 776);
  v13 = *(_WORD *)(136LL * (unsigned __int16)v24 + result + 40);
LABEL_11:
  *(_WORD *)(v6 + 4244) = v13;
  return result;
}
