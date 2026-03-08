/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x1C0001718
 * Callers:
 *     DriverCleanup @ 0x1C00021B0 (DriverCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS McGenEventUnregister_EtwUnregister()
{
  NTSTATUS result; // eax

  if ( !MS_USBHUB3_ETW_PROVIDER_Context )
    return 0;
  result = EtwUnregister(MS_USBHUB3_ETW_PROVIDER_Context);
  MS_USBHUB3_ETW_PROVIDER_Context = 0LL;
  return result;
}
