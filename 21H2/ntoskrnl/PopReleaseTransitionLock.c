/*
 * XREFs of PopReleaseTransitionLock @ 0x14081CF98
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PoInitHiberServices @ 0x1408288D4 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x140858C40 (PopNotifyPolicyDevice.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x14098C27C (PopDirectedDripsReleaseTransitionLock.c)
 *     PopWnfHibernatePolicyCallback @ 0x14098FB30 (PopWnfHibernatePolicyCallback.c)
 *     PopUnlockAfterSleepWorker @ 0x140A4E3A0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x140811764 (PopDirectedDripsNotify.c)
 */

LONG __fastcall PopReleaseTransitionLock(int a1)
{
  LONG result; // eax

  PopTransitionLockOwnerThread = 0LL;
  PopTransitionLockAcquireReason = 0;
  result = KeSetEvent(&PopTransitionLock, 0, 0);
  if ( a1 != 7 )
    return PopDirectedDripsNotify(9, 0LL);
  return result;
}
