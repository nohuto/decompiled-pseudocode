__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  __int64 v7; // rdi
  unsigned int v8; // ebp
  int v9; // r15d
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v11; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v13; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  char v17; // si
  volatile signed __int64 *i; // rdi
  volatile signed __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // eax
  unsigned __int8 v22; // r9
  signed __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // r11d
  volatile signed __int64 *v26; // r8
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  signed __int64 v30; // rax
  volatile signed __int64 v31; // rtt
  unsigned int v32; // eax
  unsigned int v33; // eax
  volatile LONG *v34; // rcx
  unsigned __int8 v35; // bl
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  bool v40; // zf
  __int64 v41; // [rsp+48h] [rbp-60h] BYREF
  __int64 v42; // [rsp+58h] [rbp-50h]
  __int64 CurrentIrql; // [rsp+60h] [rbp-48h]
  unsigned int v44; // [rsp+B0h] [rbp+8h]
  __int128 *v45; // [rsp+B8h] [rbp+10h]

  v45 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v7 = 0LL;
  LOBYTE(a2) = a3;
  v41 = 0LL;
  LOBYTE(a1) = a5;
  v42 = v5;
  v8 = 0;
  v9 = ComputeEventEntryHash(a1, a2, a4);
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
  }
  else
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v11 = (volatile signed __int64 *)(v5 + 272);
      _disable();
      AbEntrySummary = CurrentThread->AbEntrySummary;
      if ( CurrentThread->AbEntrySummary
        || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v5 + 272, (__int64)CurrentThread)) != 0 )
      {
        _BitScanForward(&v13, AbEntrySummary);
        v44 = v13;
        CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v13);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v28 = *SchedulerAssist;
          do
          {
            v29 = v28;
            v28 = _InterlockedCompareExchange(SchedulerAssist, v28 & 0xFFDFFFFF, v28);
          }
          while ( v29 != v28 );
          if ( (v28 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
        v7 = (__int64)(&CurrentThread[1].Process + 12 * v44);
        if ( (unsigned __int64)v11 - qword_140C65668 < 0x8000000000LL )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v7 + 8) = SessionId;
        *(_QWORD *)v7 = (unsigned __int64)v11 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v5 + 272), 0, v7, v5 + 272);
      if ( v7 )
        *(_BYTE *)(v7 + 18) = 1;
      v17 = 0;
      v8 = 0;
      goto LABEL_13;
    }
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
  }
  v17 = 1;
LABEL_13:
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v9 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v21 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v19 + 32) )
  {
    if ( !*i )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v8 = -1073741789;
        goto LABEL_24;
      }
      if ( !v41 )
      {
        v32 = CreateNewEventEntry(*(_BYTE *)(v5 + 373), v45, a3, a4, a5, v9, &v41);
        v8 = v32;
        if ( !v41 )
        {
          if ( v32 == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_24;
        }
      }
      if ( !_InterlockedCompareExchange64(i, v41, 0LL) )
      {
        v41 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
        v33 = *(_DWORD *)(v5 + 256);
        if ( *(_DWORD *)(v5 + 304) < v33 )
          *(_DWORD *)(v5 + 304) = v33;
        goto LABEL_24;
      }
    }
    v19 = *i;
    v20 = *(unsigned int *)(v19 + 40);
    if ( v9 == (_DWORD)v20 )
    {
      LOBYTE(v20) = a3;
      v21 = CompareEventEntry(v20, a4, v19);
    }
    else
    {
      v21 = v9 - v20;
    }
    if ( !v21 )
      break;
  }
  if ( v19 )
  {
    v22 = 2;
    if ( a5 )
    {
      do
      {
        v23 = **(_QWORD **)(a4 + 16LL * v22);
        v24 = *(_QWORD *)(v19 + 16);
        v25 = *(unsigned __int8 *)(v24 + 16LL * v22 + 13);
        v26 = *(volatile signed __int64 **)(v24 + 16LL * v22);
        if ( v25 == 113 )
        {
          _InterlockedExchangeAdd64(v26, v23);
        }
        else if ( (unsigned int)*(unsigned __int8 *)(v24 + 16LL * v22 + 13) - 114 <= 1 )
        {
          do
          {
            v30 = *v26;
            if ( v25 == 114 )
            {
              if ( v23 >= v30 )
                break;
            }
            else if ( v23 <= v30 )
            {
              break;
            }
            v31 = *v26;
          }
          while ( v31 != _InterlockedCompareExchange64(v26, v23, v30) );
        }
        ++v22;
      }
      while ( v22 < (unsigned int)a5 + 2 );
      v5 = v42;
    }
  }
LABEL_24:
  if ( v17 )
  {
    v34 = (volatile LONG *)(v5 + 280);
    v35 = CurrentIrql;
    ExReleaseSpinLockSharedFromDpcLevel(v34);
    if ( v35 < 2u )
    {
      if ( KiIrqlFlags )
      {
        v36 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v36 - 2) <= 0xDu )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << (v35 + 1));
          v40 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v40 )
            KiRemoveSystemWorkPriorityKick(v37);
        }
      }
      __writecr8(v35);
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 272));
    KeAbPostRelease(v5 + 272);
  }
  if ( v41 )
    ExFreePoolWithTag(*(PVOID *)(v41 + 16), 0);
  return v8;
}
