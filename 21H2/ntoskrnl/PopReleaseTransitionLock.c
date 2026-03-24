/*
 * XREFs of PopReleaseTransitionLock @ 0x14078DAD4
 * Callers:
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 *     PoInitHiberServices @ 0x140790C78 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x1407C42E0 (PopNotifyPolicyDevice.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x1408E3850 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopUnlockAfterSleepWorker @ 0x140994FE0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x14078DB18 (PopDirectedDripsNotify.c)
 */

LONG __fastcall PopReleaseTransitionLock(int a1)
{
  LONG result; // eax

  PopTransitionLockOwnerThread = 0LL;
  PopTransitionLockAcquireReason = 0;
  result = KeSetEvent(&PopTransitionLock, 0, 0);
  if ( a1 != 7 )
    return PopDirectedDripsNotify(9LL, 0LL);
  return result;
}
