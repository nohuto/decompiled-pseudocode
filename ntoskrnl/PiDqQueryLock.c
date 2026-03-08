/*
 * XREFs of PiDqQueryLock @ 0x1409595A8
 * Callers:
 *     PiDqIrpCancel @ 0x14055F6E0 (PiDqIrpCancel.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PiDqQueryLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
}
