/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x14032038C
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x14056F120 (PopUpdateWakeSourceWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x140697570 (PopDiagDeviceRundownWorker.c)
 *     WmipRegistrationWorker @ 0x14076C580 (WmipRegistrationWorker.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x1408E339C (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x1403203AC (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140320450 (PnpLockDeviceActionQueue.c)
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
