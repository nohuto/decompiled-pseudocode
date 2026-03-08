/*
 * XREFs of ObpLockDirectoryExclusive @ 0x14076F3D0
 * Callers:
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14076F1F8 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     ObpDeleteNameCheck @ 0x1407D85E0 (ObpDeleteNameCheck.c)
 *     NtSetInformationObject @ 0x1407DA9A0 (NtSetInformationObject.c)
 *     ObCreateObjectTypeEx @ 0x14080CB20 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
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
