/*
 * XREFs of WheapErrorHandleIsValid @ 0x14060F428
 * Callers:
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x14060ED50 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportAbandonDeviceDriver @ 0x14060EE90 (WheaHwErrorReportAbandonDeviceDriver.c)
 *     WheaHwErrorReportGetLogDataBufferDeviceDriver @ 0x14060EEC0 (WheaHwErrorReportGetLogDataBufferDeviceDriver.c)
 *     WheaHwErrorReportMarkAsCriticalDeviceDriver @ 0x14060EF10 (WheaHwErrorReportMarkAsCriticalDeviceDriver.c)
 *     WheaHwErrorReportSetFatalSeverityDeviceDriver @ 0x14060EF40 (WheaHwErrorReportSetFatalSeverityDeviceDriver.c)
 *     WheaHwErrorReportSetSeverityDeviceDriver @ 0x14060EFF0 (WheaHwErrorReportSetSeverityDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x14060F030 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     <none>
 */

bool __fastcall WheapErrorHandleIsValid(_DWORD *a1)
{
  return a1 && *a1 == 1095059543;
}
