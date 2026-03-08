/*
 * XREFs of RtlpHpLfhContextCompact @ 0x140308C98
 * Callers:
 *     RtlpHpHeapCompact @ 0x1402CC2D4 (RtlpHpHeapCompact.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpLfhOwnerCompact @ 0x140309864 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpAcquireLockShared @ 0x140309A10 (RtlpHpAcquireLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall RtlpHpLfhContextCompact(__int64 a1, int a2)
{
  int v4; // ebp
  unsigned __int8 v5; // si
  _QWORD *v6; // rbx
  __int64 v7; // r14
  $C71981A45BEB2B45F82C232A7085991E *v8; // rax
  struct _KTHREAD *CurrentThread; // rcx
  bool v10; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax

  v4 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v5 = -1;
  else
    v5 = RtlpHpAcquireLockShared(a1 + 72, *(unsigned __int8 *)(a1 + 57));
  v6 = (_QWORD *)(a1 + 128);
  v7 = 129LL;
  do
  {
    v8 = ($C71981A45BEB2B45F82C232A7085991E *)*v6;
    if ( (*v6 & 1) == 0 )
      LOBYTE(v8) = RtlpHpLfhOwnerCompact(a1, *v6, a2 | 1u);
    ++v6;
    --v7;
  }
  while ( v7 );
  if ( !v4 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v10 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      LOBYTE(v8) = v5;
      __writecr8(v5);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
      LOBYTE(v8) = KeAbPostRelease(a1 + 72);
      CurrentThread = KeGetCurrentThread();
      v10 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v10 )
      {
        v8 = &CurrentThread->152;
        if ( ($C71981A45BEB2B45F82C232A7085991E *)v8->ApcState.ApcListHead[0].Flink != v8 )
          LOBYTE(v8) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v8;
}
