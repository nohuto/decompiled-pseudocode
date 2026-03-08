/*
 * XREFs of HvlUnregisterWheaErrorNotification @ 0x14093E1D0
 * Callers:
 *     <none>
 * Callees:
 *     WheaUnregisterInUsePageOfflineNotification @ 0x140A05460 (WheaUnregisterInUsePageOfflineNotification.c)
 */

NTSTATUS __stdcall HvlUnregisterWheaErrorNotification(PHVL_WHEA_ERROR_NOTIFICATION Callback)
{
  if ( Callback == (PHVL_WHEA_ERROR_NOTIFICATION)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)&HvlpWheaErrorNotificationCallback,
                                                   0LL,
                                                   (signed __int64)Callback) )
    return WheaUnregisterInUsePageOfflineNotification((PFN_IN_USE_PAGE_OFFLINE_NOTIFY)HvlWheaInUsePageOfflineNotificationCallback);
  else
    return -1073741823;
}
