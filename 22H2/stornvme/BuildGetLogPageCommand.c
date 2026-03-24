/*
 * XREFs of BuildGetLogPageCommand @ 0x1C0002AA4
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001F7C (QueryProtocolInfoLogPageData.c)
 *     FirmwareGetInfo @ 0x1C000233C (FirmwareGetInfo.c)
 *     ScsiModeSenseRequest @ 0x1C000294C (ScsiModeSenseRequest.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C000778C (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1C00110A8 (BuildGetLogPageCommandForTelemetryLog.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00130A4 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C001348C (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0013E64 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C001404C (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001476C (NVMeGetDeviceTelemetryData.c)
 *     ProtocolCommandCompletion @ 0x1C0015EE0 (ProtocolCommandCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0017780 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C0018FC8 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0019218 (NVMeGetCommandEffectsLog.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1C0002BA8 (SetPrpFromBuffer.c)
 */

__int64 __fastcall BuildGetLogPageCommand(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned __int64 a7,
        unsigned __int16 a8)
{
  __int64 v8; // rbp
  unsigned __int64 v12; // rsi
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // edi
  __int64 result; // rax

  v8 = *(_QWORD *)(a1 + 1624);
  v12 = a4;
  if ( a3 <= 9u && (v13 = 570, _bittest(&v13, a3)) || a3 == 0x80 )
    a6 = -1;
  *(_BYTE *)(a2 + 4136) = a3;
  v14 = *(_DWORD *)(a2 + 4136) & 0xF0007FFF;
  *(_DWORD *)(a2 + 4100) = a6;
  v15 = a4 >> 2;
  *(_BYTE *)(a2 + 4096) = 2;
  *(_DWORD *)(a2 + 4136) = v14 | ((((unsigned __int16)(a4 >> 2) - 1) & 0xFFF) << 16);
  SetPrpFromBuffer(a1, a2, a5, a4);
  result = a8;
  *(_WORD *)(a2 + 4142) = a8;
  if ( (*(_BYTE *)(v8 + 261) & 4) != 0 )
  {
    *(_WORD *)(a2 + 4138) = v15 - 1;
    *(_WORD *)(a2 + 4140) = ((unsigned int)(v12 >> 2) - 1) >> 16;
    result = (unsigned int)a7 & 0xFFFFFFFC;
    *(_DWORD *)(a2 + 4144) = result;
    *(_DWORD *)(a2 + 4148) = (a7 >> 16) & 0xFFFF0000;
  }
  return result;
}
