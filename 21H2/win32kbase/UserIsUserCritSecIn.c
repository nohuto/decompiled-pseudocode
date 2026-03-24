/*
 * XREFs of UserIsUserCritSecIn @ 0x1C0049420
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C00493E4 (CheckOrAcquireDwmStateLock.c)
 *     GreGetDCPoint @ 0x1C0071810 (GreGetDCPoint.c)
 *     DrvNotifySessionStateChange @ 0x1C007D1D0 (DrvNotifySessionStateChange.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x1C00B6280 (DrvIsNotUsingGraphicsDevice.c)
 *     DrvSessionHasAnyGraphicsDevice @ 0x1C00C4AF0 (DrvSessionHasAnyGraphicsDevice.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C01467C8 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C0148048 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

__int64 UserIsUserCritSecIn()
{
  ULONG IsResourceAcquiredSharedLite; // eax
  unsigned int v1; // ecx

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 )
    return 1;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(gpresUser);
  v1 = 0;
  if ( IsResourceAcquiredSharedLite )
    return 1;
  return v1;
}
