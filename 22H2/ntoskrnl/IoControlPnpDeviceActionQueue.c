/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x1403C381C
 * Callers:
 *     WmipRegistrationWorker @ 0x14086F590 (WmipRegistrationWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x1408A5EF0 (PopDiagDeviceRundownWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x140983798 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PnpLockDeviceActionQueue @ 0x1403C383C (PnpLockDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403C38B4 (PnpUnlockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
