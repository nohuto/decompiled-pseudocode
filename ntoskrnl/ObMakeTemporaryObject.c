/*
 * XREFs of ObMakeTemporaryObject @ 0x140791C40
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402F0CC4 (IopCompleteUnloadOrDelete.c)
 *     IoDeleteDevice @ 0x140368010 (IoDeleteDevice.c)
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     NtMakeTemporaryObject @ 0x140791BC0 (NtMakeTemporaryObject.c)
 *     IoCreateDriver @ 0x14081AF70 (IoCreateDriver.c)
 *     IopUnloadDriver @ 0x1408549C8 (IopUnloadDriver.c)
 *     IoDeleteDriver @ 0x1409443B0 (IoDeleteDriver.c)
 *     ObShutdownSystem @ 0x140977E00 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x140A71300 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x140ABEEB8 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140B58C28 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObpDeleteNameCheck @ 0x1407D85E0 (ObpDeleteNameCheck.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (__int64 *)((char *)Object - 48);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
  *((_BYTE *)v2 + 27) &= ~0x10u;
  ExReleasePushLockEx(v2 + 2, 0LL);
  KeLeaveCriticalRegion();
  ObpDeleteNameCheck(v2);
}
