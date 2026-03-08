/*
 * XREFs of PopAcquireTransitionLock @ 0x14082AD04
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PoInitHiberServices @ 0x14082B1B0 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x14084A7A0 (PopNotifyPolicyDevice.c)
 *     PopDirectedDripsSuspendDevices @ 0x140980E14 (PopDirectedDripsSuspendDevices.c)
 *     PopWnfHibernatePolicyCallback @ 0x140986410 (PopWnfHibernatePolicyCallback.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140AA5EF0 (PopAcquireTransitionLockAfterSleep.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PopDirectedDripsNotify @ 0x140872AF4 (PopDirectedDripsNotify.c)
 */

int __fastcall PopAcquireTransitionLock(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 != 7 )
    PopDirectedDripsNotify(8LL, 0LL);
  LODWORD(CurrentThread) = KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
  PopTransitionLockAcquireReason = a1;
  if ( a1 != 1 )
  {
    CurrentThread = KeGetCurrentThread();
    PopTransitionLockOwnerThread = (__int64)CurrentThread;
  }
  return (int)CurrentThread;
}
