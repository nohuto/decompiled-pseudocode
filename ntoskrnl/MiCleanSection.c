__int64 __fastcall MiCleanSection(__int64 a1, __int64 a2, char a3)
{
  bool v3; // zf
  BOOL v4; // r12d
  unsigned __int64 v6; // rsi
  volatile LONG *v8; // r15
  int v9; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  int v15; // eax
  __int64 inserted; // rdi
  __int64 v17; // rbx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  int v20; // eax
  _DWORD *v21; // r9
  __int128 v22; // [rsp+40h] [rbp-40h] BYREF
  __int128 v23; // [rsp+50h] [rbp-30h] BYREF
  __int128 v24; // [rsp+60h] [rbp-20h] BYREF
  char *v25; // [rsp+70h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 64) == 0LL;
  v25 = 0LL;
  v4 = !v3;
  LOBYTE(v6) = a2;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      goto LABEL_6;
    DWORD1(v24) = 0;
    v8 = (volatile LONG *)(a1 + 72);
    v25 = (char *)&v24 + 8;
    *((_QWORD *)&v23 + 1) = 4LL;
    *((_QWORD *)&v24 + 1) = (char *)&v24 + 8;
    *(_QWORD *)&v23 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v23;
    LOWORD(v24) = 263;
    BYTE2(v24) = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v3 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v3 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8((unsigned __int8)v6);
    v9 = MiFlushSectionInternal(0, 0, (int)a1 + 128, 0, 0LL, 0x80000000, (__int64)&v22);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    MiRemoveWakeListEntry(a1, &v23);
    if ( !HIDWORD(v23) )
      break;
    if ( *(_QWORD *)(a1 + 40) != 1LL || *(_QWORD *)(a1 + 24) )
    {
      v15 = 1;
      goto LABEL_17;
    }
  }
  if ( v9 >= 0 )
  {
LABEL_6:
    *(_QWORD *)(a1 + 40) = 0LL;
    LOBYTE(a2) = v6;
    MiDestroySection(a1, a2, 0LL);
    return 1LL;
  }
  v15 = 2;
LABEL_17:
  --*(_QWORD *)(a1 + 40);
  if ( a3 )
    *(_DWORD *)(a1 + 56) |= 0x40000u;
  inserted = 0LL;
  if ( v15 == 2 && (inserted = MiInsertUnusedSegment(a1)) != 0 )
    v17 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  else
    v17 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  if ( KiIrqlFlags )
  {
    v18 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v18 >= 2u )
    {
      v19 = KeGetCurrentPrcb();
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v21 = v19->SchedulerAssist;
      v3 = (v20 & v21[5]) == 0;
      v21[5] &= v20;
      if ( v3 )
        KiRemoveSystemWorkPriorityKick(v19);
    }
  }
  __writecr8(v6);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v17, v4, inserted);
  return 0LL;
}
