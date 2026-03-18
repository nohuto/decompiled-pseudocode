/*
 * XREFs of BuildGetLogPageCommandForTelemetryLog @ 0x1C001A0C4
 * Callers:
 *     NVMeGetDeviceTelemetryData @ 0x1C001CFA8 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C001D238 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C001D870 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1C0022CC0 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C0022DEC (NVMeGetControllerInitiatedTelemetryLog.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0005458 (BuildGetLogPageCommand.c)
 */

__int64 __fastcall BuildGetLogPageCommandForTelemetryLog(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned __int64 a7,
        char a8,
        unsigned __int8 a9)
{
  __int64 result; // rax

  BuildGetLogPageCommand(a1, a2, a3, a4, a5, -1, a7, 0);
  if ( a8 && a3 == 7 )
    *(_DWORD *)(a2 + 4136) = *(_DWORD *)(a2 + 4136) & 0xFFFFF0FF | 0x100;
  result = (*(_DWORD *)(a2 + 4136) ^ (a9 << 15)) & 0x8000;
  *(_DWORD *)(a2 + 4136) ^= result;
  return result;
}
