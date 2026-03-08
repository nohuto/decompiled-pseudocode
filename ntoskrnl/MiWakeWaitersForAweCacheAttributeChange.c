/*
 * XREFs of MiWakeWaitersForAweCacheAttributeChange @ 0x140649E3C
 * Callers:
 *     MiIncrementAweMapCount @ 0x140648524 (MiIncrementAweMapCount.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiWakeWaitersForAweCacheAttributeChange(__int64 a1, __int64 a2)
{
  _QWORD **v3; // r14
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  int v9; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  _QWORD *v13; // rbx

  v3 = (_QWORD **)(a1 + 56);
  v5 = 0LL;
  v6 = (unsigned __int8)MiLockPageInline(a2);
  *(_BYTE *)(a2 + 34) &= ~0x20u;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
  v7 = *v3;
  if ( *v3 )
  {
    do
    {
      v8 = (_QWORD *)*v7;
      if ( v7[1] == a2 )
      {
        *v7 = v5;
        v5 = v7;
        *v3 = v8;
      }
      else
      {
        v3 = (_QWORD **)v7;
      }
      v7 = v8;
    }
    while ( v8 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
  LOBYTE(v9) = -1;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)v9 <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && (unsigned __int8)v9 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v12 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v12 )
        LOBYTE(v9) = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
  if ( v5 )
  {
    do
    {
      v13 = (_QWORD *)*v5;
      LOBYTE(v9) = KeSignalGate((__int64)(v5 + 2), 1u);
      v5 = v13;
    }
    while ( v13 );
  }
  return v9;
}
