/*
 * XREFs of VrpLockJobContextExclusive @ 0x14069186C
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140690CFC (VrpHandleIoctlLoadDifferencingHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall VrpLockJobContextExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
}
