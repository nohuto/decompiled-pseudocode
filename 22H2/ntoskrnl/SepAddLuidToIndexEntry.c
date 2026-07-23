/*
 * XREFs of SepAddLuidToIndexEntry @ 0x140603C6C
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x140603B5C (SepSetProcessUniqueAttribute.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     RtlFindClearBitsAndSet @ 0x1402509C0 (RtlFindClearBitsAndSet.c)
 *     SepInitSingletonEntry @ 0x140250D60 (SepInitSingletonEntry.c)
 *     RtlInsertEntryHashTable @ 0x140250E50 (RtlInsertEntryHashTable.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1402512F4 (SepCleanupMarkedForDeletionEntries.c)
 *     RtlNumberOfSetBits @ 0x140253090 (RtlNumberOfSetBits.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     RtlSetBits @ 0x1402D9750 (RtlSetBits.c)
 *     RtlClearAllBits @ 0x140361940 (RtlClearAllBits.c)
 *     SepExpandSingletonArrays @ 0x1403CD8C0 (SepExpandSingletonArrays.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepAddLuidToIndexEntry(__int64 *a1, unsigned __int64 *a2, _RTL_DYNAMIC_HASH_TABLE_ENTRY **a3)
{
  __int64 *v4; // r13
  ULONG_PTR v5; // rbp
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *PoolWithTag; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _RTL_BITMAP *v8; // r15
  ULONG ClearBitsAndSet; // r14d
  int v10; // ebx
  unsigned __int64 Signature; // rax
  volatile signed __int64 *v12; // rdi
  char v13; // si
  ULONG v15; // r13d
  unsigned int *v16; // r14
  _RTL_DYNAMIC_HASH_TABLE *HashTable; // [rsp+70h] [rbp+18h]

  *a3 = 0LL;
  v4 = a1;
  v5 = 1LL;
  PoolWithTag = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x74446553u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(SeLuidToIndexMapping, 0LL);
  v8 = (_RTL_BITMAP *)(SeLuidToIndexMapping + 16);
  HashTable = *(_RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(SeLuidToIndexMapping + 16), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    SepCleanupMarkedForDeletionEntries();
    ClearBitsAndSet = RtlFindClearBitsAndSet(v8, 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v15 = RtlNumberOfSetBits(v8) + 64;
      v16 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned __int64)v15 >> 3, 0x74446553u);
      if ( !v16 )
      {
        v10 = -1073741801;
        goto LABEL_17;
      }
      v10 = SepExpandSingletonArrays();
      if ( v10 < 0 )
        goto LABEL_17;
      ExFreePoolWithTag(v8->Buffer, 0);
      v8->SizeOfBitMap = v15;
      v8->Buffer = v16;
      RtlClearAllBits(v8);
      RtlSetBits(v8, 0, v15 - 64);
      v4 = a1;
      ClearBitsAndSet = RtlFindClearBitsAndSet(v8, 1u, 0);
    }
  }
  PoolWithTag[1].Linkage.Flink = (struct _LIST_ENTRY *)1;
  PoolWithTag[1].Signature = ClearBitsAndSet;
  PoolWithTag[1].Linkage.Blink = (struct _LIST_ENTRY *)*v4;
  LOBYTE(PoolWithTag[2].Linkage.Flink) = 0;
  if ( *v4 )
    v5 = *v4;
  if ( !RtlInsertEntryHashTable(HashTable, PoolWithTag, v5, 0LL) )
  {
    v10 = -1073741801;
    _bittestandreset((signed __int32 *)v8->Buffer, ClearBitsAndSet);
    v16 = 0LL;
LABEL_17:
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    goto LABEL_7;
  }
  v10 = 0;
  SepInitSingletonEntry(ClearBitsAndSet, *v4);
  Signature = PoolWithTag[1].Signature;
  *a3 = PoolWithTag;
  *a2 = Signature;
LABEL_7:
  v12 = (volatile signed __int64 *)SeLuidToIndexMapping;
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)SeLuidToIndexMapping, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(v12);
  KeAbPostRelease((ULONG_PTR)v12);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v10;
}
