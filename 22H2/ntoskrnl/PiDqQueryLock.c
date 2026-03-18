/*
 * XREFs of PiDqQueryLock @ 0x14095C5C8
 * Callers:
 *     PiDqIrpCancel @ 0x140561B80 (PiDqIrpCancel.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PiDqQueryLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
}
