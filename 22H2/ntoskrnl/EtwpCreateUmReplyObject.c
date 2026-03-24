/*
 * XREFs of EtwpCreateUmReplyObject @ 0x14068051C
 * Callers:
 *     EtwpNotifyGuid @ 0x1407150A4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140715CA4 (EtwpEnableGuid.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KeInitializeQueue @ 0x140310CC0 (KeInitializeQueue.c)
 *     memset @ 0x140413800 (memset.c)
 *     EtwpReferenceGuidEntry @ 0x1405EBAA4 (EtwpReferenceGuidEntry.c)
 *     ObCreateObjectEx @ 0x140651EA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1406520B0 (ObInsertObjectEx.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCreateUmReplyObject(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2, PADAPTER_OBJECT *a3)
{
  struct _KQUEUE *PoolWithTag; // rax
  struct _KQUEUE *v7; // rdi
  int inserted; // ebx
  PADAPTER_OBJECT v9; // rbx
  __int64 v10; // rax
  char v11; // al
  PADAPTER_OBJECT v12; // rax
  PADAPTER_OBJECT v13; // rdi
  char *v15; // [rsp+20h] [rbp-39h]
  __int64 v16; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v17[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v18; // [rsp+60h] [rbp+7h]
  __int64 v19; // [rsp+68h] [rbp+Fh]
  int v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+74h] [rbp+1Bh]
  __int128 v22; // [rsp+78h] [rbp+1Fh]
  PADAPTER_OBJECT DmaAdapter; // [rsp+D8h] [rbp+7Fh] BYREF

  v17[1] = 0;
  v21 = 0;
  v16 = 0LL;
  DmaAdapter = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v17[0] = 48;
  v20 = 64;
  v22 = 0LL;
  PoolWithTag = (struct _KQUEUE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x71777445u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    KeInitializeQueue(v7, 0);
    inserted = ObCreateObjectEx(0, EtwpRegistrationObjectType, (int)v17, 1u, v15, 112, 0, 0, &DmaAdapter, 0LL);
    if ( inserted < 0 )
    {
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      v9 = DmaAdapter;
      memset(DmaAdapter, 0, 0x70uLL);
      v9[6].Size = 4;
      *(_QWORD *)&v9[3].Version = v7;
      EtwpReferenceGuidEntry(BugCheckParameter2);
      *(_QWORD *)&v9[2].Version = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpReplyListLock, 0LL);
      v10 = EtwpReplyListHead;
      if ( *(__int64 **)(EtwpReplyListHead + 8) != &EtwpReplyListHead )
        __fastfail(3u);
      *(_QWORD *)&v9->Version = EtwpReplyListHead;
      v9->DmaOperations = (_DMA_OPERATIONS *)&EtwpReplyListHead;
      *(_QWORD *)(v10 + 8) = v9;
      EtwpReplyListHead = (__int64)v9;
      v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
      KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
      v12 = DmaAdapter + 1;
      DmaAdapter[1].DmaOperations = (_DMA_OPERATIONS *)&DmaAdapter[1];
      *(_QWORD *)&v12->Version = v12;
      _InterlockedOr16((volatile signed __int16 *)&v9[6].Size, 0x80u);
      v13 = DmaAdapter;
      inserted = ObInsertObjectEx(DmaAdapter, 0LL, 0x804u, 1, 0, (__int64)&v16, a2);
      if ( inserted >= 0 )
        *a3 = v13;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
