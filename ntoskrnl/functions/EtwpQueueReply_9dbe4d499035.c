__int64 __fastcall EtwpQueueReply(PRKQUEUE Queue, unsigned int *a2)
{
  int v3; // edi
  struct _LIST_ENTRY *Pool2; // rax
  struct _LIST_ENTRY *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v3 = EtwpAllocDataBlock(a2[1], a2, &v6);
  if ( v3 < 0 )
  {
    _InterlockedIncrement(&Queue[1].Header.Lock);
  }
  else
  {
    Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(64LL, 56LL, 1920431173LL);
    if ( Pool2 )
    {
      Pool2[1].Flink = v6;
      KeInsertQueue(Queue, Pool2);
    }
    else
    {
      v3 = -1073741801;
      _InterlockedIncrement(&Queue[1].Header.Lock);
      EtwpUnreferenceDataBlock((volatile signed __int32 *)v6);
    }
  }
  return (unsigned int)v3;
}
