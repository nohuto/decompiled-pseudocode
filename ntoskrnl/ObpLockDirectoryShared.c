/*
 * XREFs of ObpLockDirectoryShared @ 0x140698E08
 * Callers:
 *     NtQueryDirectoryObject @ 0x1406989A0 (NtQueryDirectoryObject.c)
 *     ObpCreateSymbolicLinkName @ 0x1407612D4 (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ObpLockDirectoryShared(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 21) = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquirePushLockSharedEx(a2 + 296, 0LL);
}
