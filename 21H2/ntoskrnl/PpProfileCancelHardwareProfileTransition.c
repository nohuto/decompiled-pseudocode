/*
 * XREFs of PpProfileCancelHardwareProfileTransition @ 0x1408AB508
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140736AD4 (PnpProcessQueryRemoveAndEject.c)
 *     PipProcessStartPhase2 @ 0x14073DEBC (PipProcessStartPhase2.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140212600 (KeReleaseSemaphore.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14089FEF8 (PnpRequestHwProfileChangeNotification.c)
 */

LONG PpProfileCancelHardwareProfileTransition()
{
  __int64 *i; // rax

  ExAcquireFastMutex(&PiProfileDeviceListLock);
  for ( i = (__int64 *)PiProfileDeviceListHead; i != &PiProfileDeviceListHead; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i - 2) != 1 )
    {
      _InterlockedDecrement(&PiProfileDevicesInTransition);
      *((_DWORD *)i - 2) = 1;
    }
  }
  KeReleaseGuardedMutex(&PiProfileDeviceListLock);
  if ( PiProfileChangeCancelRequired )
    PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_CANCELLED, 2, 0LL, 0LL);
  return KeReleaseSemaphore(&PiProfileChangeSemaphore, 0, 1, 0);
}
