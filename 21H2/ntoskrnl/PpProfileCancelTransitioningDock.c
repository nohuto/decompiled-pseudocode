/*
 * XREFs of PpProfileCancelTransitioningDock @ 0x14094FC28
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x14076FAB0 (PipProcessEnumeratedChildDevice.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140944C08 (PnpRequestHwProfileChangeNotification.c)
 *     PiProfileUpdateDeviceTree @ 0x14094F804 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14094F96C (PnpProfileUpdateHardwareProfile.c)
 */

void __fastcall PpProfileCancelTransitioningDock(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  LOBYTE(v3) = 0;
  ExAcquireFastMutex(&PiProfileDeviceListLock);
  *(_DWORD *)(a1 + 568) = 1;
  LODWORD(a1) = _InterlockedExchangeAdd(&PiProfileDevicesInTransition, 0xFFFFFFFF);
  KeReleaseGuardedMutex(&PiProfileDeviceListLock);
  if ( (_DWORD)a1 == 1 )
  {
    if ( (int)PnpProfileUpdateHardwareProfile((__int64)&v3) >= 0 && (_BYTE)v3 )
    {
      PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_COMPLETE, 2, 0LL, 0LL);
      PiProfileUpdateDeviceTree();
    }
    else
    {
      PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_CANCELLED, 2, 0LL, 0LL);
    }
    KeReleaseSemaphore(&PiProfileChangeSemaphore, 0, 1, 0);
  }
}
