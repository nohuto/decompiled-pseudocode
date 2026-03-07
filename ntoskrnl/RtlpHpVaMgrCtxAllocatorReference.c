__int64 __fastcall RtlpHpVaMgrCtxAllocatorReference(__int64 a1, __int64 a2, unsigned int a3)
{
  volatile LONG *v3; // rbp
  unsigned int v6; // ebx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int16 v11; // cx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0LL;
  v3 = (volatile LONG *)(a1 + 2144);
  v6 = a3 >> 20;
  v8 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 2144), 1);
  v9 = RtlpHpVaMgrCtxAllocatorFind(a1, a2, v6, &v18);
  v10 = v9;
  if ( !v9 )
  {
    if ( !v18 )
      goto LABEL_4;
    v10 = v18;
    if ( (int)RtlpHpVaMgrStart(v18, a1, a2, a3, ((int)v18 - (int)a1 - 2160) / 48) >= 0 )
    {
      ++*(_DWORD *)(a1 + 2152);
      goto LABEL_4;
    }
LABEL_10:
    v10 = 0LL;
    goto LABEL_4;
  }
  v11 = *(_WORD *)(v9 + 42);
  if ( v11 == -1 )
    goto LABEL_10;
  *(_WORD *)(v9 + 42) = v11 + 1;
LABEL_4:
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v8);
  if ( v10 )
    return *(unsigned __int8 *)(v10 + 44);
  else
    return 0xFFFFFFFFLL;
}
