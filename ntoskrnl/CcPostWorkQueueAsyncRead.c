/*
 * XREFs of CcPostWorkQueueAsyncRead @ 0x140216768
 * Callers:
 *     CcAsyncCopyRead @ 0x140216AA0 (CcAsyncCopyRead.c)
 *     CcAsyncReadWorker @ 0x1403B8B70 (CcAsyncReadWorker.c)
 * Callees:
 *     CcCompleteAsyncRead @ 0x14020A77C (CcCompleteAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1402169EC (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcFreeWorkQueueEntry @ 0x140219E50 (CcFreeWorkQueueEntry.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140310130 (ExpAllocatePoolWithTagFromNode.c)
 *     ExQueueWorkItemToPartition @ 0x1403439E0 (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140391D54 (CcPerfLogWorkItemEnqueue.c)
 */

__int64 __fastcall CcPostWorkQueueAsyncRead(PSLIST_ENTRY ListEntry, __int64 a2)
{
  _SLIST_ENTRY *Next; // r13
  __int64 v5; // r15
  __int64 Next_high; // r12
  ULONG_PTR v7; // rbp
  __int64 v8; // rdi
  char v9; // r14
  _QWORD *v10; // rax
  __int64 result; // rax
  _QWORD *v12; // r10
  __int64 v13; // r14
  _QWORD *v14; // rcx
  __int64 v15; // r15
  _QWORD *v16; // r12
  __int64 v17; // r9
  __int64 PoolWithTagFromNode; // rax
  ULONG_PTR v19; // r14
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // [rsp+30h] [rbp-48h]
  char v23; // [rsp+80h] [rbp+8h]
  int v24; // [rsp+90h] [rbp+18h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  Next = ListEntry[9].Next;
  BugCheckParameter2 = 0LL;
  v5 = *((_QWORD *)&ListEntry[8].Next + 1);
  Next_high = HIDWORD(ListEntry[7].Next);
  v7 = (ULONG_PTR)(&Next[72].Next + 1);
  v8 = *((_QWORD *)&ListEntry[9].Next + 1);
  v23 = 0;
  v22 = v5;
  v24 = HIDWORD(ListEntry[7].Next);
  if ( !CcEnablePerVolumeLazyWriter )
    v7 = v5 + 1224;
  if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, ListEntry, 0LL, 0LL);
  if ( LODWORD(ListEntry[8].Next) != 5 )
  {
    v13 = 16 * Next_high;
    v14 = (_QWORD *)(16 * Next_high + *(_QWORD *)(v8 + 264));
    v15 = 4 * Next_high;
    v16 = (_QWORD *)(v8 + 248);
    if ( (_QWORD *)*v14 != v14 || *(_DWORD *)(v15 + *v16) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      ExAcquirePushLockExclusiveEx(v7, 0LL);
      v20 = v13 + *(_QWORD *)(v8 + 264);
      if ( *(_QWORD *)v20 != v20 || *(_DWORD *)(v15 + *v16) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
      {
        v21 = *(_QWORD **)(v20 + 8);
        if ( *v21 != v20 )
LABEL_32:
          __fastfail(3u);
        ListEntry->Next = (_SLIST_ENTRY *)v20;
        *((_QWORD *)&ListEntry->Next + 1) = v21;
        *v21 = ListEntry;
        *(_QWORD *)(v20 + 8) = ListEntry;
        v23 = 1;
      }
      result = ExReleasePushLockEx(v7, 0LL);
      if ( v23 )
        return result;
    }
    v17 = *(unsigned int *)(v8 + 24);
    LODWORD(v17) = v17 | 0x80000000;
    PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(512LL, 80LL, 1901552451LL, v17, 0);
    v19 = PoolWithTagFromNode;
    if ( !PoolWithTagFromNode )
    {
      **((_DWORD **)&ListEntry[4].Next + 1) = -1073741670;
      CcCompleteAsyncRead((__int64)ListEntry);
      return CcFreeWorkQueueEntry(ListEntry);
    }
    *(_DWORD *)(PoolWithTagFromNode + 32) = 4;
    *(_QWORD *)(PoolWithTagFromNode + 56) = v22;
    *(_DWORD *)(PoolWithTagFromNode + 36) = v24;
    *(_QWORD *)(PoolWithTagFromNode + 64) = Next;
    *(_QWORD *)(PoolWithTagFromNode + 72) = v8;
    *(_QWORD *)(PoolWithTagFromNode + 48) = ListEntry;
    *(_QWORD *)PoolWithTagFromNode = 0LL;
    *(_QWORD *)(PoolWithTagFromNode + 16) = CcCompleteAsyncReadWorker;
    *(_QWORD *)(PoolWithTagFromNode + 24) = PoolWithTagFromNode;
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    *(_DWORD *)(v19 + 40) = *(_DWORD *)(v15 + *v16);
    ++*(_DWORD *)(*v16 + v15);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v22 + 1296)) <= 1 )
      __fastfail(0xEu);
    if ( Next && _InterlockedIncrement64((volatile signed __int64 *)&Next->Next + 1) <= 1 )
      __fastfail(0xEu);
    ExReleasePushLockEx(v7, 0LL);
    *(_QWORD *)v19 = 0LL;
    result = ExQueueWorkItemToPartition(v19);
    v12 = (_QWORD *)BugCheckParameter2;
LABEL_11:
    if ( v12 )
    {
      *v12 = 0LL;
      return ExQueueWorkItemToPartition((ULONG_PTR)v12);
    }
    return result;
  }
  v9 = 0;
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  v10 = *(_QWORD **)(a2 + 8);
  if ( *v10 != a2 )
    goto LABEL_32;
  *((_QWORD *)&ListEntry->Next + 1) = v10;
  ListEntry->Next = (_SLIST_ENTRY *)a2;
  *v10 = ListEntry;
  *(_QWORD *)(a2 + 8) = ListEntry;
  if ( *(_QWORD *)(*(_QWORD *)(v8 + 264) + 16 * Next_high) == *(_QWORD *)(v8 + 264) + 16 * Next_high
    || *(_DWORD *)(*(_QWORD *)(v8 + 240) + 4 * Next_high) <= 1u )
  {
    KeSetEvent((PRKEVENT)(*(_QWORD *)(v8 + 272) + 24 * Next_high), 0, 0);
  }
  else
  {
    v9 = 1;
  }
  result = ExReleasePushLockEx(v7, 0LL);
  if ( !v9 )
  {
    result = CcShouldSpinAsyncReadWorkerThread(v5, v8, &BugCheckParameter2, (unsigned int)Next_high);
    v12 = (_QWORD *)BugCheckParameter2;
    if ( (_BYTE)result )
    {
      if ( !BugCheckParameter2 )
        return result;
      result = *(_QWORD *)(v8 + 280);
      *(_DWORD *)(result + 4 * (101 * Next_high + *(unsigned int *)(BugCheckParameter2 + 40))) = 0;
    }
    goto LABEL_11;
  }
  return result;
}
