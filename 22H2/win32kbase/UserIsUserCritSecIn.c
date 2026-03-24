/*
 * XREFs of UserIsUserCritSecIn @ 0x1C004AA80
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C004AA44 (CheckOrAcquireDwmStateLock.c)
 *     GreGetDCPoint @ 0x1C00722C0 (GreGetDCPoint.c)
 *     DrvNotifySessionStateChange @ 0x1C007E8B0 (DrvNotifySessionStateChange.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x1C00B65C0 (DrvIsNotUsingGraphicsDevice.c)
 *     DrvSessionHasAnyGraphicsDevice @ 0x1C00C4E80 (DrvSessionHasAnyGraphicsDevice.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C0146B18 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C0148398 (DrvUpdateRemoteGraphicsDeviceList.c)
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
