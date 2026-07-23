/*
 * XREFs of PopReleaseTransitionLock @ 0x14078DC94
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 *     PoInitHiberServices @ 0x140792228 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x1407C4800 (PopNotifyPolicyDevice.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x1408E39B0 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopUnlockAfterSleepWorker @ 0x140995FE0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x14078DCD8 (PopDirectedDripsNotify.c)
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
