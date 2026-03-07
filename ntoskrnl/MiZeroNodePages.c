void __fastcall MiZeroNodePages(ULONG_PTR a1)
{
  __int64 v2; // r14
  int v3; // r12d
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // rsi
  KIRQL v7; // al
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  volatile LONG *v15; // r15
  unsigned __int64 v16; // rdi
  unsigned __int8 v17; // cl
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  unsigned __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rax
  int v24; // edi
  __int64 v25; // rcx
  ULONG_PTR v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  unsigned __int8 v30; // cl
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax

  v2 = *(_QWORD *)(a1 + 88);
  v3 = 1;
  v4 = *(_QWORD *)(v2 + 168);
  *(_QWORD *)(a1 + 80) = KeGetCurrentThread();
  v5 = *(_QWORD *)(v4 + 48);
  v6 = *(_QWORD *)(v5 + 16) + 25408LL * *(unsigned int *)(v4 + 56);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v2 + 200) + 23160LL));
  v8 = *(_QWORD *)(v2 + 200);
  ++*(_DWORD *)(v2 + 12);
  v9 = v7;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 23160));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
  MiSelectBestZeroingProcessor(v2, a1);
  v15 = (volatile LONG *)(v6 + 23160);
  v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 23160));
  *(_DWORD *)(a1 + 136) |= 1u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 23160));
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v17 >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
      v14 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  __writecr8(v16);
  do
  {
    MiZeroLocalPages(a1);
    MiDereferenceAnyActiveHugeContext(a1);
    if ( v3 )
    {
      MiSignalZeroingPassComplete(v2);
      v3 = 0;
    }
    v21 = ExAcquireSpinLockExclusive(v15);
    if ( (*(_DWORD *)(a1 + 136) & 2) == 0 )
    {
      *(_DWORD *)(a1 + 136) |= 2u;
      MiDecrementZeroEngineThread(v2);
    }
    v22 = *(_QWORD *)(a1 + 392);
    *(_QWORD *)(a1 + 392) = 0LL;
    if ( *(_DWORD *)(v5 + 108) && (*(_DWORD *)(a1 + 136) & 4) == 0 )
      *(_DWORD *)(a1 + 136) |= 4u;
    if ( (*(_DWORD *)(a1 + 136) & 4) != 0 )
    {
      KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 12);
      v23 = *(unsigned int *)(a1 + 96);
      v24 = 1;
      if ( (_DWORD)v23 != -1 )
      {
        v25 = 48 * v23;
        v26 = a1 + 184;
        v27 = *(_QWORD *)(v2 + 128) + v25;
        if ( *(_QWORD *)(a1 + 184) )
        {
          --*(_DWORD *)(v27 + 32);
          v28 = *(_QWORD *)v26;
          v29 = *(_QWORD **)(a1 + 192);
          if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 || *v29 != v26 )
            __fastfail(3u);
          *v29 = v28;
          *(_QWORD *)(v28 + 8) = v29;
          *(_QWORD *)v26 = 0LL;
        }
      }
    }
    else
    {
      v24 = 0;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v15);
    if ( KiIrqlFlags )
    {
      v30 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v14 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
    __writecr8(v21);
    if ( v22 )
      MiDereferencePageRunsEx(v22, 1);
  }
  while ( !v24 );
}
