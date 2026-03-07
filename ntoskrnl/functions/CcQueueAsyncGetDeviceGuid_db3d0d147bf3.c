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
