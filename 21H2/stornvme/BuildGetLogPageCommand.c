/*
 * XREFs of BuildGetLogPageCommand @ 0x1C0005458
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C00014A0 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoCompletion @ 0x1C0001720 (QueryProtocolInfoCompletion.c)
 *     FirmwareGetInfo @ 0x1C0002AC0 (FirmwareGetInfo.c)
 *     ScsiModeSenseRequest @ 0x1C000335C (ScsiModeSenseRequest.c)
 *     NVMeGetCommandEffectsLog @ 0x1C00088B0 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C0008A28 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C000F748 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1C001A0C4 (BuildGetLogPageCommandForTelemetryLog.c)
 *     IoctlQueryEnduranceInformation @ 0x1C001B91C (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C001BD14 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C001C6EC (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C001C8D4 (LogSenseTemperature.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C001DC70 (NVMeGetSanitizeLogWorkItem.c)
 *     ProtocolCommandCompletion @ 0x1C001F950 (ProtocolCommandCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00215A0 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1C000556C (SetPrpFromBuffer.c)
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

  v8 = *(_QWORD *)(a1 + 1640);
  v12 = a4;
  if ( a3 <= 9u && (v13 = 954, _bittest(&v13, a3)) || (unsigned __int8)(a3 + 0x80) <= 1u )
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
