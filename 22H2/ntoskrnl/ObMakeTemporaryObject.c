/*
 * XREFs of ObMakeTemporaryObject @ 0x1406F62F0
 * Callers:
 *     IoDeleteDevice @ 0x140360200 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140360440 (IopCompleteUnloadOrDelete.c)
 *     NtMakeTemporaryObject @ 0x1406F7590 (NtMakeTemporaryObject.c)
 *     IopLoadDriver @ 0x14073CD08 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x140768DB8 (IopUnloadDriver.c)
 *     IoCreateDriver @ 0x1407A5330 (IoCreateDriver.c)
 *     ObShutdownSystem @ 0x1408DC4E0 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x1409809B0 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x1409C5A28 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A5E618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     ObpDeleteNameCheck @ 0x1406F6EB0 (ObpDeleteNameCheck.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (char *)Object - 48;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
  v2[27] &= ~0x10u;
  ExReleasePushLockEx((ULONG_PTR)(v2 + 16), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObpDeleteNameCheck(v2);
}
