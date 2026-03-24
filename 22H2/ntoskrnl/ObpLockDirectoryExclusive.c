/*
 * XREFs of ObpLockDirectoryExclusive @ 0x14034D1A0
 * Callers:
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x140642D80 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x1406F6EB0 (ObpDeleteNameCheck.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406F83A8 (ObpMarkDirectoryObjectsTemporary.c)
 *     NtSetInformationObject @ 0x1406F91D0 (NtSetInformationObject.c)
 *     ObCreateObjectTypeEx @ 0x140790780 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140A3D968 (ObInitSystem.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

LONG_PTR __fastcall ObpLockDirectoryExclusive(__int64 a1, void *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  LONG_PTR result; // rax

  *(_DWORD *)(a1 + 32) = -1431694796;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)a2 + 296, 0LL);
  *(_DWORD *)(a1 + 32) = -859041228;
  result = ObfReferenceObjectWithTag(a2, 0x746C6644u);
  *(_QWORD *)a1 = a2;
  *(_WORD *)(a1 + 30) = 257;
  return result;
}
