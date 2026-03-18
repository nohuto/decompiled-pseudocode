/*
 * XREFs of ObpLockDirectoryExclusive @ 0x140697B24
 * Callers:
 *     NtSetInformationObject @ 0x140697640 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14069794C (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpCloseHandle @ 0x1406E7730 (ObpCloseHandle.c)
 *     ObpLookupObjectName @ 0x1406ED7D0 (ObpLookupObjectName.c)
 *     ObpDeleteNameCheck @ 0x140740650 (ObpDeleteNameCheck.c)
 *     ObCreateObjectTypeEx @ 0x140821770 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140B4E9F8 (ObInitSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall ObpLockDirectoryExclusive(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 21) = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 296, 0LL);
}
