/*
 * XREFs of ObMakeTemporaryObject @ 0x1407E1210
 * Callers:
 *     IoDeleteDevice @ 0x140304E10 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140305300 (IopCompleteUnloadOrDelete.c)
 *     IopLoadDriver @ 0x140794AE8 (IopLoadDriver.c)
 *     NtMakeTemporaryObject @ 0x1407E1190 (NtMakeTemporaryObject.c)
 *     IoCreateDriver @ 0x140812780 (IoCreateDriver.c)
 *     IopUnloadDriver @ 0x1408585F4 (IopUnloadDriver.c)
 *     IoDeleteDriver @ 0x1409473D0 (IoDeleteDriver.c)
 *     ObShutdownSystem @ 0x14097AEB0 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x140A74000 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x140AC2EB8 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140B41264 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ObpDeleteNameCheck @ 0x140740650 (ObpDeleteNameCheck.c)
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
  ObpDeleteNameCheck((__int64)v2);
}
