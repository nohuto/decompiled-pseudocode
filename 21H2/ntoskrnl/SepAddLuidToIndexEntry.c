/*
 * XREFs of SepAddLuidToIndexEntry @ 0x140672348
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x140672120 (SepSetProcessUniqueAttribute.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     SepInitSingletonEntry @ 0x14020585C (SepInitSingletonEntry.c)
 *     RtlInsertEntryHashTable @ 0x140205950 (RtlInsertEntryHashTable.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140206780 (SepCleanupMarkedForDeletionEntries.c)
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     SepExpandSingletonArrays @ 0x14025C99C (SepExpandSingletonArrays.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepAddLuidToIndexEntry(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  __int64 *v4; // r13
  __int64 Pool2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // r15
  RTL_BITMAP *v8; // r14
  ULONG ClearBitsAndSet; // edi
  int v10; // ebx
  __int64 v11; // rax
  ULONG_PTR v12; // rdi
  char v13; // bp
  ULONG v15; // r13d
  void *v16; // rdi
  struct _RTL_DYNAMIC_HASH_TABLE *HashTable; // [rsp+70h] [rbp+18h]

  *a3 = 0LL;
  v4 = a1;
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
      v4 = a1;
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
    _bittestandreset((signed __int32 *)v8->Buffer, ClearBitsAndSet);
    v16 = 0LL;
    goto LABEL_16;
  }
  v10 = 0;
  SepInitSingletonEntry(ClearBitsAndSet, *v4);
  v11 = *(_QWORD *)(Pool2 + 40);
  *a3 = Pool2;
  *a2 = v11;
LABEL_7:
  v12 = SeLuidToIndexMapping;
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)SeLuidToIndexMapping, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(v12);
  KeAbPostRelease(v12);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v10;
}
