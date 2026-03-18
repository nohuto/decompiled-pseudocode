/*
 * XREFs of RtlpHpLfhContextCompact @ 0x1403644A4
 * Callers:
 *     RtlpHpHeapCompact @ 0x14036DC90 (RtlpHpHeapCompact.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x1403645A4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpAcquireLockShared @ 0x140364760 (RtlpHpAcquireLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall RtlpHpLfhContextCompact(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  unsigned __int8 v7; // si
  _QWORD *v8; // rbx
  __int64 v9; // r14
  $CEA84C04E3712D858E5667A507841A2A *v10; // rax
  struct _KTHREAD *CurrentThread; // rcx
  bool v12; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax

  v6 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v7 = -1;
  else
    v7 = RtlpHpAcquireLockShared(a1 + 72, *(unsigned __int8 *)(a1 + 57), a3, a4);
  v8 = (_QWORD *)(a1 + 128);
  v9 = 129LL;
  do
  {
    v10 = ($CEA84C04E3712D858E5667A507841A2A *)*v8;
    if ( (*v8 & 1) == 0 )
      LOBYTE(v10) = RtlpHpLfhOwnerCompact(a1, *v8, a2 | 1u);
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( !v6 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (v7 + 1));
            v12 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      LOBYTE(v10) = v7;
      __writecr8(v7);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
      LOBYTE(v10) = KeAbPostRelease(a1 + 72);
      CurrentThread = KeGetCurrentThread();
      v12 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v12 )
      {
        v10 = &CurrentThread->152;
        if ( ($CEA84C04E3712D858E5667A507841A2A *)v10->ApcState.ApcListHead[0].Flink != v10 )
          LOBYTE(v10) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v10;
}
