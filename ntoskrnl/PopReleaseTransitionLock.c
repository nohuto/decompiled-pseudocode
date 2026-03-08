/*
 * XREFs of PopReleaseTransitionLock @ 0x14082AD60
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PoInitHiberServices @ 0x14082B1B0 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x14084A7A0 (PopNotifyPolicyDevice.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x140980B94 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopWnfHibernatePolicyCallback @ 0x140986410 (PopWnfHibernatePolicyCallback.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA37E0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x140872AF4 (PopDirectedDripsNotify.c)
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
