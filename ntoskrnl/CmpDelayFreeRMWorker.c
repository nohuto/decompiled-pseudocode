/*
 * XREFs of CmpDelayFreeRMWorker @ 0x14079A480
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

__int64 CmpDelayFreeRMWorker()
{
  PERESOURCE *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v7 = 0LL;
  CmpInitializeThreadInfo((__int64)v7);
  ExAcquireFastMutex(&CmpDelayFreeRMLock);
  while ( 1 )
  {
    v0 = (PERESOURCE *)CmpDelayFreeRMListHead;
    if ( CmpDelayFreeRMListHead == &CmpDelayFreeRMListHead )
      break;
    if ( *((PVOID **)CmpDelayFreeRMListHead + 1) != &CmpDelayFreeRMListHead
      || (v1 = *(_QWORD *)CmpDelayFreeRMListHead,
          *(PVOID *)(*(_QWORD *)CmpDelayFreeRMListHead + 8LL) != CmpDelayFreeRMListHead) )
    {
      __fastfail(3u);
    }
    CmpDelayFreeRMListHead = *(PVOID *)CmpDelayFreeRMListHead;
    *(_QWORD *)(v1 + 8) = &CmpDelayFreeRMListHead;
    ExReleaseFastMutex(&CmpDelayFreeRMLock);
    CmpLockRegistryExclusive();
    ExDeleteResourceLite(v0[16]);
    ExFreePoolWithTag(v0[16], 0);
    ExFreePoolWithTag(v0, 0x6D524D43u);
    CmpUnlockRegistry(v3, v2, v4, v5);
    ExAcquireFastMutex(&CmpDelayFreeRMLock);
  }
  CmpDelayFreeRMWorkItemActive = 0;
  ExReleaseFastMutex(&CmpDelayFreeRMLock);
  return CmCleanupThreadInfo(v7);
}
