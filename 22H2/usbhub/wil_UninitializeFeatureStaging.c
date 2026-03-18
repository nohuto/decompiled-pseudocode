/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C0075008
 * Callers:
 *     DriverEntry @ 0x1C00422D8 (DriverEntry.c)
 *     UsbhDriverUnload @ 0x1C00433D0 (UsbhDriverUnload.c)
 * Callees:
 *     <none>
 */

__int64 wil_UninitializeFeatureStaging()
{
  __int64 result; // rax

  if ( WPP_MAIN_CB.Dpc.SystemArgument2 )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    WPP_MAIN_CB.Dpc.SystemArgument2 = 0LL;
  }
  return result;
}
