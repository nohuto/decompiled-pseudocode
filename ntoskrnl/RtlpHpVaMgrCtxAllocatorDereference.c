/*
 * XREFs of RtlpHpVaMgrCtxAllocatorDereference @ 0x1405B4520
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x1403759F0 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14030ABA4 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall RtlpHpVaMgrCtxAllocatorDereference(__int64 a1, unsigned int *a2)
{
  volatile LONG *v2; // rbp
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  bool v6; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax

  v2 = (volatile LONG *)(a1 + 2144);
  v4 = a1 + 48 * (*a2 + 45LL);
  v5 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 2144), 1);
  v6 = (*(_WORD *)(v4 + 42))-- == 1;
  if ( v6 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_OWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    --*(_DWORD *)(a1 + 2152);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v6 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v5);
}
