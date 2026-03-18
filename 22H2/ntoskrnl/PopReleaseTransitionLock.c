/*
 * XREFs of PopReleaseTransitionLock @ 0x140802F44
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 *     PoInitHiberServices @ 0x14080406C (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x14084DF30 (PopNotifyPolicyDevice.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x140983C44 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopWnfHibernatePolicyCallback @ 0x1409894C0 (PopWnfHibernatePolicyCallback.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA6A10 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x1408759B4 (PopDirectedDripsNotify.c)
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
