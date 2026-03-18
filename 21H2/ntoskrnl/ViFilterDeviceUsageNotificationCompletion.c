/*
 * XREFs of ViFilterDeviceUsageNotificationCompletion @ 0x140A9E300
 * Callers:
 *     <none>
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x1402332A0 (IoReleaseRemoveLockEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056E8CC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ViFilterDeviceUsageNotificationCompletion(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // r15
  bool v7; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v10; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r9
  int v14; // eax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(a2 + 48) >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 184);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
    if ( *(_BYTE *)(v5 + 8) )
    {
      if ( ++*(_DWORD *)(v4 + 96) == 1 )
        *(_DWORD *)(a1 + 48) &= ~0x2000u;
    }
    else
    {
      v7 = (*(_DWORD *)(v4 + 96))-- == 1;
      if ( v7 )
        *(_DWORD *)(a1 + 48) |= *(_DWORD *)(*(_QWORD *)(v4 + 8) + 48LL) & 0x2000;
    }
    if ( (BYTE6(PerfGlobalGroupMask[0]) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v4 + 88), retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 88), 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = SchedulerAssist[6] - 1;
        SchedulerAssist[6] = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = v12->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v7 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick((__int64)v12);
        }
      }
    }
    __writecr8(v6);
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), (PVOID)a2, 0x20u);
  return 0LL;
}
