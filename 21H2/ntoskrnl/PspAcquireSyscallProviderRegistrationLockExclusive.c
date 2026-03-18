/*
 * XREFs of PspAcquireSyscallProviderRegistrationLockExclusive @ 0x140419D3C
 * Callers:
 *     PspDestroySyscallProvider @ 0x1406596A0 (PspDestroySyscallProvider.c)
 *     PspInsertSyscallProvider @ 0x14065994C (PspInsertSyscallProvider.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void PspAcquireSyscallProviderRegistrationLockExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSyscallProviderRegistrationLock, 0LL);
}
