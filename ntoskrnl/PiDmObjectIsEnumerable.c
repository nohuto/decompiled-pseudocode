/*
 * XREFs of PiDmObjectIsEnumerable @ 0x1406CE0E0
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1406CE130 (PiDmEnumObjectsWithCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140746D28 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

char __fastcall PiDmObjectIsEnumerable(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
  v3 = *(_DWORD *)(BugCheckParameter2 + 32) & 1;
  ExReleasePushLockEx((__int64 *)BugCheckParameter2, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
