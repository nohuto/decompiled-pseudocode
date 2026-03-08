/*
 * XREFs of CcQueueAsyncGetDeviceGuid @ 0x1403A89D4
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x14036D0F0 (CcInitializeVolumeCacheMap.c)
 * Callees:
 *     CcDecrementVolumeUseCountWithDelete @ 0x14021782C (CcDecrementVolumeUseCountWithDelete.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcQueueAsyncGetDeviceGuid(_DWORD *P, PVOID Object)
{
  char *PoolWithTag; // rbx
  char v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x30uLL, 0x65546343u);
  if ( PoolWithTag )
  {
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    *((_QWORD *)PoolWithTag + 1) = Object;
    *(_QWORD *)PoolWithTag = P;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = CcGetDeviceGuidAsync;
    *((_QWORD *)PoolWithTag + 5) = PoolWithTag;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(PoolWithTag + 16), NormalWorkQueue);
    return 0LL;
  }
  else
  {
    CcDecrementVolumeUseCountWithDelete(P, 0, &v6);
    return 3221225626LL;
  }
}
