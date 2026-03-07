NTSTATUS __stdcall HvlRegisterWheaErrorNotification(PHVL_WHEA_ERROR_NOTIFICATION Callback)
{
  NTSTATUS result; // eax

  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&HvlpWheaErrorNotificationCallback,
         (signed __int64)Callback,
         0LL) )
  {
    return -1073741823;
  }
  result = WheaRegisterInUsePageOfflineNotification(
             (PFN_IN_USE_PAGE_OFFLINE_NOTIFY)HvlWheaInUsePageOfflineNotificationCallback,
             0LL);
  if ( result < 0 )
    _InterlockedExchange64((volatile __int64 *)&HvlpWheaErrorNotificationCallback, 0LL);
  return result;
}
