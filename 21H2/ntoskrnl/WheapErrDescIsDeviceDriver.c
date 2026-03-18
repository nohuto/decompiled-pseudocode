/*
 * XREFs of WheapErrDescIsDeviceDriver @ 0x1406447D0
 * Callers:
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x140644110 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406443F0 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x140644808 (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x140644878 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x140644930 (WheapInitErrorReportDeviceDriver.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A08A50 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     <none>
 */

bool __fastcall WheapErrDescIsDeviceDriver(__int64 a1)
{
  return a1 && *(_DWORD *)(a1 + 8) == 16;
}
