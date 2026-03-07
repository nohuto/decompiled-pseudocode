void __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(__int64 a1, __int64 a2, char a3)
{
  int v4; // r15d
  unsigned __int64 v7; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 *v20; // r8
  unsigned __int64 v21; // rdx
  __int64 i; // rax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v28; // rax
  KPRIORITY v29; // r14d
  KPRIORITY PriorityThread; // ebx
  int v31; // [rsp+50h] [rbp+8h]

  v4 = *(_DWORD *)a2 & 7;
  if ( v4 == 2 && (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    if ( !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStDirectRead((union _SLIST_HEADER *)a1, (__int128 *)a2) )
    {
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6560));
      *(_QWORD *)a2 = ((**(_QWORD **)(a1 + 6552) & 0xFFFFFFFFFFFFFFF8uLL) + 8) | *(_DWORD *)a2 & 7;
      **(_QWORD **)(a1 + 6552) = a2 | **(_DWORD **)(a1 + 6552) & 7;
      *(_QWORD *)(a1 + 6552) = a2;
      KxReleaseSpinLock((volatile signed __int64 *)(a1 + 6560));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v7);
      KeSetEvent((PRKEVENT)(a1 + 6520), 0, 0);
    }
    return;
  }
  if ( (*(_BYTE *)(a1 + 6021) & 1) != 0 )
    return;
  v13 = a3 & 4;
  if ( (a3 & 4) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 6740));
  v31 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v14 = 6080LL;
  }
  else
  {
    if ( v4 == 2 && (*(_DWORD *)(a2 + 8) & 0x1000000) == 0 )
    {
      v15 = 6096LL;
      v14 = 6048LL;
      goto LABEL_22;
    }
    v14 = 6064LL;
  }
  v15 = 6100LL;
LABEL_22:
  v16 = a1 + v14;
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6040));
  v18 = **(_QWORD **)(v16 + 8);
  v19 = *(_QWORD *)a2 & 7LL;
  if ( (a3 & 2) != 0 )
  {
    *(_QWORD *)a2 = *(_QWORD *)v16 | v19;
    v20 = *(unsigned __int64 **)(v16 + 8);
    v21 = v18 >> 3;
    *(_QWORD *)v16 = a2;
    if ( v20 == (unsigned __int64 *)v16 )
    {
      *(_QWORD *)(v16 + 8) = a2;
      v20 = (unsigned __int64 *)a2;
    }
    *v20 = *(_DWORD *)v20 & 7 | (8 * v21 + 8);
  }
  else
  {
    *(_QWORD *)a2 = ((v18 & 0xFFFFFFFFFFFFFFF8uLL) + 8) | v19;
    **(_QWORD **)(v16 + 8) = a2 | **(_DWORD **)(v16 + 8) & 7;
    *(_QWORD *)(v16 + 8) = a2;
  }
  if ( !*(_DWORD *)(a1 + 6100) && !*(_DWORD *)(a1 + 6096) )
    *(_QWORD *)(a1 + 6112) = MEMORY[0xFFFFF78000000320];
  ++*(_DWORD *)(v15 + a1);
  if ( v4 == 2 && *(_BYTE *)(a1 + 6020) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 3952) + 16LL);
          *(_DWORD *)i < (unsigned __int8)*(_DWORD *)(a2 + 8) << 12;
          i += 32LL )
    {
      ;
    }
    *(_WORD *)(i + 4) = 0;
    *(_QWORD *)(a1 + 6120) += *(_QWORD *)(i + 8);
  }
  KxReleaseSpinLock((volatile signed __int64 *)(a1 + 6040));
  if ( KiIrqlFlags )
  {
    v23 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v23 >= 2u )
    {
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
      v12 = (v26 & v25[5]) == 0;
      v25[5] &= v26;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)v24);
    }
  }
  __writecr8(v17);
  CurrentThread = KeGetCurrentThread();
  if ( !v13 )
  {
    v28 = *(unsigned __int8 *)(a1 + 6022);
    if ( (_DWORD)v28 == 4 )
      v29 = *(_DWORD *)(a1 + 6736);
    else
      v29 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v28);
    if ( v31 )
    {
      PriorityThread = 12;
    }
    else
    {
      if ( v4 != 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
        goto LABEL_53;
      PriorityThread = KeQueryPriorityThread(CurrentThread);
    }
    if ( PriorityThread > v29 )
    {
LABEL_54:
      if ( PriorityThread > KeQueryPriorityThread(*(PKTHREAD *)(a1 + 6200)) )
        KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 6200), PriorityThread);
      KeSetEvent((PRKEVENT)(a1 + 6128), 0, 0);
      _InterlockedAdd((volatile signed __int32 *)(a1 + 6740), 0xFFFFFFFF);
      return;
    }
LABEL_53:
    PriorityThread = v29;
    goto LABEL_54;
  }
}
