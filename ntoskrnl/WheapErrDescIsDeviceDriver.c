/*
 * XREFs of WheapErrDescIsDeviceDriver @ 0x14060F410
 * Callers:
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x14060ED50 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x14060F030 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x14060F444 (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x14060F4C0 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x14060F578 (WheapInitErrorReportDeviceDriver.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A04E60 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     <none>
 */

bool __fastcall WheapErrDescIsDeviceDriver(__int64 a1)
{
  return a1 && *(_DWORD *)(a1 + 8) == 16;
}
