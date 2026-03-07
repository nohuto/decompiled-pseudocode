void __fastcall KiDpcRuntimeHistoryHashTableCleanupDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _KPRCB *CurrentPrcb; // r13
  _RTL_HASH_TABLE *DpcRuntimeHistoryHashTable; // r14
  _SINGLE_LIST_ENTRY *Buckets; // rdi
  _SINGLE_LIST_ENTRY *v7; // rbx
  struct _SINGLE_LIST_ENTRY *Next; // rax
  _SINGLE_LIST_ENTRY *v9; // r15
  volatile signed __int32 *SchedulerAssist; // rcx
  _SINGLE_LIST_ENTRY *i; // rcx
  struct _KPRCB *v12; // r8
  signed __int32 *v13; // rdx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int16 v16; // [rsp+40h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  DpcRuntimeHistoryHashTable = CurrentPrcb->DpcRuntimeHistoryHashTable;
  Buckets = DpcRuntimeHistoryHashTable->Buckets;
  v7 = Buckets;
  while ( v7 )
  {
    Next = v7->Next;
    v7 = Next;
    if ( ((unsigned __int8)Next & 1) != 0 )
      break;
LABEL_6:
    if ( !Next )
      return;
    v9 = v7;
    if ( LOBYTE(v7[3].Next) )
    {
      LOBYTE(v7[3].Next) = 0;
    }
    else
    {
      _disable();
      SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( SchedulerAssist )
        _InterlockedOr(SchedulerAssist, 0x200000u);
      KxAcquireSpinLock(&CurrentPrcb->DpcData[0].DpcLock);
      for ( i = Buckets; ((__int64)i->Next & 1) == 0; i = i->Next )
      {
        if ( i->Next == v7 )
        {
          i->Next = v7->Next;
          --DpcRuntimeHistoryHashTable->EntryCount;
          v7->Next = (struct _SINGLE_LIST_ENTRY *)((unsigned __int64)v7->Next | 0x8000000000000002uLL);
          v7 = i;
          break;
        }
      }
      KxReleaseSpinLock((volatile signed __int64 *)&CurrentPrcb->DpcData[0].DpcLock);
      if ( (v16 & 0x200) != 0 )
      {
        v12 = KeGetCurrentPrcb();
        v13 = (signed __int32 *)v12->SchedulerAssist;
        if ( v13 )
        {
          _m_prefetchw(v13);
          v14 = *v13;
          do
          {
            v15 = v14;
            v14 = _InterlockedCompareExchange(v13, v14 & 0xFFDFFFFF, v14);
          }
          while ( v15 != v14 );
          if ( (v14 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
        _enable();
      }
      ExFreePoolWithTag(v9, 0);
    }
  }
  for ( ++Buckets;
        Buckets < &DpcRuntimeHistoryHashTable->Buckets[(unsigned __int64)*((unsigned int *)DpcRuntimeHistoryHashTable + 1) >> 5];
        ++Buckets )
  {
    v7 = Buckets->Next;
    if ( ((__int64)Buckets->Next & 1) == 0 )
    {
      Next = Buckets->Next;
      goto LABEL_6;
    }
  }
}
