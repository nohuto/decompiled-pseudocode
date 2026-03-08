/*
 * XREFs of BuildGetLogPageCommandForTelemetryLog @ 0x1C0010F38
 * Callers:
 *     NVMeGetDeviceTelemetryData @ 0x1C0015488 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0015718 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0016120 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1C001DB60 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001DC54 (NVMeGetControllerInitiatedTelemetryLog.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0010E14 (BuildGetLogPageCommand.c)
 */

__int64 __fastcall BuildGetLogPageCommandForTelemetryLog(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned __int64 a7,
        char a8,
        unsigned __int8 a9)
{
  char v9; // di
  __int64 result; // rax

  v9 = a3;
  BuildGetLogPageCommand(a1, a2, a3, a4, a5, -1, a7, 0);
  if ( a8 && v9 == 7 )
    *(_DWORD *)(a2 + 4136) = *(_DWORD *)(a2 + 4136) & 0xFFFFF0FF | 0x100;
  result = (*(_DWORD *)(a2 + 4136) ^ (a9 << 15)) & 0x8000;
  *(_DWORD *)(a2 + 4136) ^= result;
  return result;
}
