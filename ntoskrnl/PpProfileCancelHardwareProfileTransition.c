/*
 * XREFs of PpProfileCancelHardwareProfileTransition @ 0x140960B20
 * Callers:
 *     PipProcessStartPhase2 @ 0x1406817A0 (PipProcessStartPhase2.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     KeReleaseSemaphore @ 0x140292210 (KeReleaseSemaphore.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140953AA8 (PnpRequestHwProfileChangeNotification.c)
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
  ExReleaseFastMutex(&PiProfileDeviceListLock);
  if ( PiProfileChangeCancelRequired )
    PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_CANCELLED, 2, 0LL, 0LL);
  return KeReleaseSemaphore(&PiProfileChangeSemaphore, 0, 1, 0);
}
