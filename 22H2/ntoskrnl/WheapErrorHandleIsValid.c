/*
 * XREFs of WheapErrorHandleIsValid @ 0x140611848
 * Callers:
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x140611170 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportAbandonDeviceDriver @ 0x1406112B0 (WheaHwErrorReportAbandonDeviceDriver.c)
 *     WheaHwErrorReportGetLogDataBufferDeviceDriver @ 0x1406112E0 (WheaHwErrorReportGetLogDataBufferDeviceDriver.c)
 *     WheaHwErrorReportMarkAsCriticalDeviceDriver @ 0x140611330 (WheaHwErrorReportMarkAsCriticalDeviceDriver.c)
 *     WheaHwErrorReportSetFatalSeverityDeviceDriver @ 0x140611360 (WheaHwErrorReportSetFatalSeverityDeviceDriver.c)
 *     WheaHwErrorReportSetSeverityDeviceDriver @ 0x140611410 (WheaHwErrorReportSetSeverityDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x140611450 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     <none>
 */

bool __fastcall WheapErrorHandleIsValid(_DWORD *a1)
{
  return a1 && *a1 == 1095059543;
}
