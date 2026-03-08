/*
 * XREFs of WheaHwErrorReportAbandonDeviceDriver @ 0x14060EE90
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x14060F150 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x14060F270 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapErrorHandleIsValid @ 0x14060F428 (WheapErrorHandleIsValid.c)
 *     WheapFreeDriverPacketBuffer @ 0x14060F444 (WheapFreeDriverPacketBuffer.c)
 */

__int64 WheaHwErrorReportAbandonDeviceDriver()
{
  void *v0; // rcx

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  WheapFreeDriverPacketBuffer(v0);
  return 0LL;
}
