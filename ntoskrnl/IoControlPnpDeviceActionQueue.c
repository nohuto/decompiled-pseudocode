/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x1403BDF5C
 * Callers:
 *     WmipRegistrationWorker @ 0x14086D070 (WmipRegistrationWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x1408A1070 (PopDiagDeviceRundownWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x1409806E8 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PnpLockDeviceActionQueue @ 0x1403BDF7C (PnpLockDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x1403BDFF4 (PnpUnlockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
