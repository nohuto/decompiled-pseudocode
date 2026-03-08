/*
 * XREFs of SepAddLuidToIndexEntry @ 0x14070B8C0
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x14070B6C4 (SepSetProcessUniqueAttribute.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 *     SepInitSingletonEntry @ 0x140298864 (SepInitSingletonEntry.c)
 *     RtlInsertEntryHashTable @ 0x1402989F0 (RtlInsertEntryHashTable.c)
 *     RtlClearAllBits @ 0x1402B24A0 (RtlClearAllBits.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1402B7F18 (SepCleanupMarkedForDeletionEntries.c)
 *     SepExpandSingletonArrays @ 0x1403022EC (SepExpandSingletonArrays.c)
 *     RtlFindClearBitsAndSet @ 0x14030CEE0 (RtlFindClearBitsAndSet.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     RtlNumberOfSetBits @ 0x14035C520 (RtlNumberOfSetBits.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAddLuidToIndexEntry(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  ULONG_PTR *v4; // rbx
  __int64 Pool2; // rbp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // r12
  RTL_BITMAP *v8; // r15
  ULONG ClearBitsAndSet; // edi
  int v10; // ebx
  __int64 v11; // rax
  volatile signed __int64 *v12; // rdi
  char v13; // r14
  ULONG v15; // esi
  void *v16; // rdi
  _BYTE *v17; // rsi
  struct _RTL_DYNAMIC_HASH_TABLE *HashTable; // [rsp+70h] [rbp+18h]

  *a3 = 0LL;
  v4 = (ULONG_PTR *)a1;
  Pool2 = ExAllocatePool2(256LL, 56LL, 1950639443LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(SeLuidToIndexMapping, 0LL);
  v7 = 1LL;
  v8 = (RTL_BITMAP *)(SeLuidToIndexMapping + 16);
  HashTable = *(struct _RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(SeLuidToIndexMapping + 16), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    SepCleanupMarkedForDeletionEntries();
    ClearBitsAndSet = RtlFindClearBitsAndSet(v8, 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v15 = RtlNumberOfSetBits(v8) + 64;
      v16 = (void *)ExAllocatePool2(256LL, (unsigned __int64)v15 >> 3, 1950639443LL);
      if ( !v16 )
      {
LABEL_16:
        v10 = -1073741801;
LABEL_17:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
        goto LABEL_7;
      }
      v10 = SepExpandSingletonArrays();
      if ( v10 < 0 )
        goto LABEL_17;
      ExFreePoolWithTag(v8->Buffer, 0);
      v8->SizeOfBitMap = v15;
      v8->Buffer = (unsigned int *)v16;
      RtlClearAllBits(v8);
      RtlSetBits(v8, 0, v15 - 64);
      v4 = (ULONG_PTR *)a1;
      ClearBitsAndSet = RtlFindClearBitsAndSet(v8, 1u, 0);
    }
  }
  *(_QWORD *)(Pool2 + 24) = 1LL;
  *(_QWORD *)(Pool2 + 40) = ClearBitsAndSet;
  *(_QWORD *)(Pool2 + 32) = *v4;
  *(_BYTE *)(Pool2 + 48) = 0;
  if ( *v4 )
    v7 = *v4;
  if ( !RtlInsertEntryHashTable(HashTable, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Pool2, v7, 0LL) )
  {
    v17 = (char *)v8->Buffer + ((unsigned __int64)ClearBitsAndSet >> 3);
    *v17 &= ~(1 << (ClearBitsAndSet & 7));
    v16 = 0LL;
    goto LABEL_16;
  }
  v10 = 0;
  SepInitSingletonEntry(ClearBitsAndSet, *a1);
  v11 = *(_QWORD *)(Pool2 + 40);
  *a3 = Pool2;
  *a2 = v11;
LABEL_7:
  v12 = (volatile signed __int64 *)SeLuidToIndexMapping;
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)SeLuidToIndexMapping, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(v12);
  KeAbPostRelease((ULONG_PTR)v12);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v10;
}
