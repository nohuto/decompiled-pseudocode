char __fastcall MiInsertVad(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r15
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  int v11; // ecx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  int v15; // ebp
  KIRQL v16; // r14
  __int64 **v17; // rdx
  __int64 *v18; // rax
  $C71981A45BEB2B45F82C232A7085991E *v19; // rax
  __int64 *v20; // rax
  _QWORD *v21; // rsi
  __int64 v22; // rbp
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v24; // r14
  unsigned int AbEntrySummary; // eax
  unsigned int v26; // ecx
  struct _KPRCB *v27; // rcx
  signed __int32 *v28; // r8
  int SessionId; // eax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  struct _KTHREAD *v32; // rsi
  bool v33; // zf
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  __int64 v36; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v40; // eax
  unsigned int v42; // [rsp+60h] [rbp+18h]

  v3 = 0LL;
  v7 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v8 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v9 = *(unsigned int *)(a1 + 24);
  v10 = 0LL;
  v11 = *(_DWORD *)(a1 + 48);
  v12 = v9 | v8;
  if ( (v11 & 0x180000) == 0x80000 )
  {
    v36 = *(_QWORD *)(a2 + 1680);
    if ( (v11 & 0x200000) != 0 )
      ++*(_QWORD *)(v36 + 408);
    else
      ++*(_QWORD *)(v36 + 416);
  }
  if ( v7 <= *(_QWORD *)(a2 + 1496) >> 12 && (a3 & 2) == 0 )
  {
    v13 = *(_QWORD *)(a2 + 1176) + ((v7 - v12 + 1) << 12);
    *(_QWORD *)(a2 + 1176) = v13;
    if ( *(_QWORD *)(a2 + 1168) < v13 )
      *(_QWORD *)(a2 + 1168) = v13;
  }
  if ( (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 && (*(_DWORD *)(a1 + 48) & 0x6200000) != 0x4200000 )
    v10 = MiLocateLockedVadEvent(a1, 256) + 8;
  if ( (unsigned int)MiIsVadLargePrivate(a1) )
    ++*(_DWORD *)(a2 + 2140);
  if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x10 )
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1680) + 296LL);
  ++*(_QWORD *)(a2 + 2024);
  v15 = a3 & 1;
  if ( v15 )
    v16 = 17;
  else
    v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                   + 284));
  *(_QWORD *)(a2 + 2016) = a1;
  LOBYTE(v14) = 0;
  v17 = *(__int64 ***)(a2 + 2008);
  if ( v17 )
  {
    while ( 1 )
    {
      v14 = *((unsigned int *)v17 + 7) | ((unsigned __int64)*((unsigned __int8 *)v17 + 33) << 32);
      if ( v12 <= v14 && v12 < (*((unsigned int *)v17 + 6) | ((unsigned __int64)*((unsigned __int8 *)v17 + 32) << 32)) )
      {
        v18 = *v17;
        if ( !*v17 )
        {
          LOBYTE(v14) = 0;
          break;
        }
      }
      else
      {
        v18 = v17[1];
        if ( !v18 )
        {
          LOBYTE(v14) = 1;
          break;
        }
      }
      v17 = (__int64 **)v18;
    }
  }
  LOBYTE(v19) = RtlAvlInsertNodeEx(a2 + 2008, v17, v14, a1);
  if ( v16 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                         + 284));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v16 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v40 = ~(unsigned __int16)(-1LL << (v16 + 1));
        v33 = (v40 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v40;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    LOBYTE(v19) = v16;
    __writecr8(v16);
  }
  if ( !v15 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
    {
      v20 = *(__int64 **)(a1 + 72);
      *(_QWORD *)(a1 + 112) = (__int64)KeGetCurrentThread()->ApcState.Process | 1;
      v21 = (_QWORD *)(a1 + 96);
      v22 = *v20;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v24 = KeGetCurrentThread();
      _disable();
      AbEntrySummary = v24->AbEntrySummary;
      if ( v24->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v22 + 104, v24)) != 0 )
      {
        _BitScanForward(&v26, AbEntrySummary);
        v42 = v26;
        v24->AbEntrySummary = AbEntrySummary & ~(1 << v26);
        v27 = KeGetCurrentPrcb();
        v28 = (signed __int32 *)v27->SchedulerAssist;
        if ( v28 )
        {
          _m_prefetchw(v28);
          v34 = *v28;
          do
          {
            v35 = v34;
            v34 = _InterlockedCompareExchange(v28, v34 & 0xFFDFFFFF, v34);
          }
          while ( v35 != v34 );
          if ( (v34 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
        _enable();
        v3 = (__int64)(&v24[1].Process + 12 * v42);
        if ( (unsigned __int64)(v22 + 104 - qword_140C65668) < 0x8000000000LL )
          SessionId = MmGetSessionIdEx(v24->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v3 + 8) = SessionId;
        *(_QWORD *)v3 = (v22 + 104) & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 104), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v22 + 104), v3, v22 + 104);
      if ( v3 )
        *(_BYTE *)(v3 + 18) = 1;
      if ( (*(_DWORD *)(v22 + 56) & 0x400) == 0 )
      {
        v30 = *(_QWORD *)(v22 + 8);
        v31 = (_QWORD *)(v22 + 8);
        if ( *(_QWORD *)(v30 + 8) != v22 + 8 )
          __fastfail(3u);
        *v21 = v30;
        v21[1] = v31;
        *(_QWORD *)(v30 + 8) = v21;
        *v31 = v21;
      }
      v32 = KeGetCurrentThread();
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v22 + 104));
      LOBYTE(v19) = KeAbPostRelease(v22 + 104);
      v33 = v32->SpecialApcDisable++ == -1;
      if ( v33 )
      {
        v19 = &v32->152;
        if ( ($C71981A45BEB2B45F82C232A7085991E *)v19->ApcState.ApcListHead[0].Flink != v19 )
          LOBYTE(v19) = KiCheckForKernelApcDelivery();
      }
    }
    if ( v10 )
      LOBYTE(v19) = MiAweViewInserter(KeGetCurrentThread()->ApcState.Process, v10);
  }
  return (char)v19;
}
