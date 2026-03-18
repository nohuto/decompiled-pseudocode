/*
 * XREFs of WheapErrDescIsDeviceDriver @ 0x140611830
 * Callers:
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x140611170 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x140611450 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x140611864 (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x1406118E0 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x140611998 (WheapInitErrorReportDeviceDriver.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A07B50 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     <none>
 */

bool __fastcall WheapErrDescIsDeviceDriver(__int64 a1)
{
  return a1 && *(_DWORD *)(a1 + 8) == 16;
}
