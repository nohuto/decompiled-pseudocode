/*
 * XREFs of RtlpHpVaMgrCtxAllocatorReference @ 0x14037B760
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x14037B678 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxStart @ 0x14039D9A8 (RtlpHpVaMgrCtxStart.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x14037B878 (RtlpHpVaMgrCtxAllocatorFind.c)
 *     RtlpHpVaMgrStart @ 0x1403A5854 (RtlpHpVaMgrStart.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorReference(__int64 a1, __int64 a2, unsigned int a3)
{
  volatile LONG *v3; // rbp
  unsigned int v5; // ebx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int16 v12; // cx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0LL;
  v3 = (volatile LONG *)(a1 + 2144);
  v5 = a3 >> 20;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2144));
  v9 = RtlpHpVaMgrCtxAllocatorFind(a1, a2, v5, &v18);
  v10 = v9;
  if ( v9 )
  {
    v12 = *(_WORD *)(v9 + 42);
    if ( v12 != -1 )
    {
      *(_WORD *)(v9 + 42) = v12 + 1;
      goto LABEL_5;
    }
    goto LABEL_10;
  }
  if ( v18 )
  {
    v10 = v18;
    if ( (int)RtlpHpVaMgrStart(v18, a1, a2, a3, ((int)v18 - (int)a1 - 2160) / 48) >= 0 )
    {
      ++*(_DWORD *)(a1 + 2152);
      goto LABEL_5;
    }
LABEL_10:
    v10 = 0LL;
  }
LABEL_5:
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
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
  }
  __writecr8(v8);
  if ( v10 )
    return *(unsigned __int8 *)(v10 + 44);
  else
    return 0xFFFFFFFFLL;
}
