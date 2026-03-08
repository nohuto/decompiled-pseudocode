/*
 * XREFs of CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403CEA10
 * Callers:
 *     CcWaitForCurrentLazyWriterActivityOnPartition @ 0x1403CE98C (CcWaitForCurrentLazyWriterActivityOnPartition.c)
 * Callees:
 *     CcAllocateWorkQueueEntry @ 0x140219880 (CcAllocateWorkQueueEntry.c)
 *     CcScheduleLazyWriteScan @ 0x140242B0C (CcScheduleLazyWriteScan.c)
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14025C890 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140391D54 (CcPerfLogWorkItemEnqueue.c)
 *     Feature_Servicing_FastfatLockFailIncompleteLazyWrite__private_IsEnabledDeviceUsage @ 0x140409ECC (Feature_Servicing_FastfatLockFailIncompleteLazyWrite__private_IsEnabledDeviceUsage.c)
 */

int __fastcall CcWaitForCurrentLazyWriterActivityOnNode(__int64 a1, __int64 a2, __int64 a3)
{
  int result; // eax
  PSLIST_ENTRY v7; // rbx
  _SLIST_ENTRY *v8; // rsi
  __int64 v9; // r8
  PSLIST_ENTRY *v10; // rax
  volatile signed __int32 *v11; // rbx
  PSLIST_ENTRY *v12; // rcx
  __int16 Object; // [rsp+30h] [rbp-50h] BYREF
  char v14; // [rsp+32h] [rbp-4Eh]
  char v15; // [rsp+33h] [rbp-4Dh]
  int v16; // [rsp+34h] [rbp-4Ch]
  _QWORD v17[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  PSLIST_ENTRY v20; // [rsp+B8h] [rbp+38h] BYREF

  v20 = 0LL;
  v15 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v18, 0, sizeof(v18));
  result = CcAllocateWorkQueueEntry(a1, a2, a3, &v20);
  if ( result < 0 )
    return result;
  v7 = v20;
  v8 = (_SLIST_ENTRY *)(a1 + 848);
  LODWORD(v20[8].Next) = 4;
  Object = 0;
  v16 = 0;
  v17[1] = v17;
  v17[0] = v17;
  v14 = 6;
  v7[1].Next = (_SLIST_ENTRY *)&Object;
  if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a1 + 848, (__int64)v7, 0, 0);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  if ( a2 )
  {
    v12 = *(PSLIST_ENTRY **)(a2 + 792);
    if ( *v12 == (PSLIST_ENTRY)(a2 + 784) )
    {
      v7->Next = (_SLIST_ENTRY *)(a2 + 784);
      *((_QWORD *)&v7->Next + 1) = v12;
      *v12 = v7;
      *(_QWORD *)(a2 + 792) = v7;
      v11 = (volatile signed __int32 *)(a2 + 808);
      *(_BYTE *)(a2 + 986) = 1;
      goto LABEL_10;
    }
LABEL_8:
    __fastfail(3u);
  }
  v10 = *(PSLIST_ENTRY **)(a1 + 856);
  if ( *v10 != v8 )
    goto LABEL_8;
  v7->Next = v8;
  *((_QWORD *)&v7->Next + 1) = v10;
  *v10 = v7;
  *(_QWORD *)(a1 + 856) = v7;
  v11 = (volatile signed __int32 *)(a1 + 872);
  *(_BYTE *)(a1 + 1050) = 1;
LABEL_10:
  _InterlockedIncrement(v11);
  LOBYTE(v9) = 1;
  CcScheduleLazyWriteScan((_BYTE *)a1, a2, v9, 1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (unsigned int)Feature_Servicing_FastfatLockFailIncompleteLazyWrite__private_IsEnabledDeviceUsage() )
  {
    while ( 1 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 832), &v18);
      if ( !*(_DWORD *)(a3 + 176) )
        break;
      KeReleaseInStackQueuedSpinLock(&v18);
      KeDelayExecutionThread(0, 0, &Cc5MicroSeconds);
    }
    KeReleaseInStackQueuedSpinLock(&v18);
  }
  result = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  _InterlockedDecrement(v11);
  return result;
}
