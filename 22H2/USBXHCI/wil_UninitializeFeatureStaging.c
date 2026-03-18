/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C006D008
 * Callers:
 *     DriverEntry @ 0x1C00743A0 (DriverEntry.c)
 *     DriverCleanup @ 0x1C00798D0 (DriverCleanup.c)
 * Callees:
 *     <none>
 */

__int64 wil_UninitializeFeatureStaging()
{
  __int64 result; // rax

  if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  }
  return result;
}
