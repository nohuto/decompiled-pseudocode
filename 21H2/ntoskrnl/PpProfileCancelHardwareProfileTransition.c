/*
 * XREFs of PpProfileCancelHardwareProfileTransition @ 0x14094FBA0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 *     PipProcessStartPhase2 @ 0x140768EA8 (PipProcessStartPhase2.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140944C08 (PnpRequestHwProfileChangeNotification.c)
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
