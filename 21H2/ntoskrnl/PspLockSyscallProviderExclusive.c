/*
 * XREFs of PspLockSyscallProviderExclusive @ 0x140419E30
 * Callers:
 *     PspAttachProcessToSyscallProvider @ 0x1406595AC (PspAttachProcessToSyscallProvider.c)
 *     PspDetachProcessFromSyscallProvider @ 0x140659708 (PspDetachProcessFromSyscallProvider.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockSyscallProviderExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
}
