__int64 __fastcall MiInsertPteTracker(__int64 a1, int a2, char a3, char a4)
{
  PSLIST_ENTRY v8; // rdi
  __int64 result; // rax
  PSLIST_ENTRY v10; // rax
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  _SLIST_ENTRY *v20; // rdx
  __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v28; // zf
  ULONG BackTraceHash; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-30h] BYREF

  BackTraceHash = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( LOWORD(stru_140C68000.Alignment) >= 0xAu )
  {
    v10 = RtlpInterlockedFlushSList(&stru_140C68000);
    v8 = v10;
    if ( v10 )
    {
      Next = v10->Next;
      if ( v10->Next )
      {
        do
        {
          v12 = Next->Next;
          ExFreePoolWithTag(Next, 0);
          Next = v12;
        }
        while ( v12 );
      }
      goto LABEL_8;
    }
  }
  else
  {
    v8 = RtlpInterlockedPopEntrySList(&stru_140C68000);
    if ( v8 )
      goto LABEL_8;
  }
  result = (__int64)MiAllocatePool(64, 0x80uLL, 0x79536D4Du);
  v8 = (PSLIST_ENTRY)result;
  if ( !result )
  {
    byte_140C6813D = 1;
    return result;
  }
LABEL_8:
  if ( !a2 )
  {
    v17 = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF;
    v18 = *(unsigned int *)(a1 + 40) + 4095LL;
    v8[1].Next = (_SLIST_ENTRY *)a1;
    v16 = v18 + v17;
    *((_QWORD *)&v8[2].Next + 1) = *(_QWORD *)(a1 + 32);
    LODWORD(v8[3].Next) = *(_DWORD *)(a1 + 44);
    HIDWORD(v8[3].Next) = *(_DWORD *)(a1 + 40);
    goto LABEL_13;
  }
  if ( a2 == 1 )
  {
    v14 = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF;
    v15 = *(_QWORD *)(a1 + 16) + 4095LL;
    v8[1].Next = (_SLIST_ENTRY *)1;
    v16 = v15 + v14;
LABEL_13:
    v13 = v16 >> 12;
    goto LABEL_14;
  }
  v13 = *(_QWORD *)(a1 + 16) >> 12;
  v8[1].Next = 0LL;
LABEL_14:
  v19 = v13 + 1;
  if ( (a3 & 2) == 0 )
    v19 = v13;
  *((_QWORD *)&v8[1].Next + 1) = v19;
  RtlCaptureStackBackTrace(1u, 7u, (PVOID *)&v8[4].Next + 1, &BackTraceHash);
  v20 = *(_SLIST_ENTRY **)(a1 + 24);
  v8[2].Next = v20;
  *((_QWORD *)&v8[3].Next + 1) = *(_QWORD *)(a1 + 48);
  LODWORD(v8[4].Next) = (4 * (a4 & 3)) | a3 & 1 | (__int64)v8[4].Next & 0xFFFFFFE0 | ((a3 & 2) != 0 ? 0x10 : 0);
  v21 = 40543LL * (unsigned int)((unsigned __int64)v20 >> 12);
  KeAcquireInStackQueuedSpinLock(&qword_140C68010, &LockHandle);
  v22 = (char *)&unk_140C69EB0 + 16 * (((unsigned __int8)v21 ^ BYTE4(v21)) & 0xF);
  v23 = *(_QWORD *)v22;
  if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 )
    __fastfail(3u);
  *((_QWORD *)&v8->Next + 1) = v22;
  v8->Next = (_SLIST_ENTRY *)v23;
  *(_QWORD *)(v23 + 8) = v8;
  *(_QWORD *)v22 = v8;
  qword_140C69FB0 += v19;
  v24 = ++qword_140C69FB8;
  if ( qword_140C69FB8 > (unsigned __int64)qword_140C69FC0 )
    qword_140C69FC0 = v24;
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v28 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v28 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
