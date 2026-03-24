/*
 * XREFs of WheaHwErrorReportAbandonDeviceDriver @ 0x1405BBDE0
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x1405BC090 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x1405BC1B0 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapErrorHandleIsValid @ 0x1405BC350 (WheapErrorHandleIsValid.c)
 *     WheapFreeDriverPacketBuffer @ 0x1405BC36C (WheapFreeDriverPacketBuffer.c)
 */

__int64 WheaHwErrorReportAbandonDeviceDriver()
{
  ULONG_PTR v0; // rcx

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  WheapFreeDriverPacketBuffer(v0);
  return 0LL;
}
