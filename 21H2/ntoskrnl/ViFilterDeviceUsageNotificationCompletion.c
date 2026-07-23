/*
 * XREFs of ViFilterDeviceUsageNotificationCompletion @ 0x1409E60C0
 * Callers:
 *     <none>
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x140229AD0 (IoReleaseRemoveLockEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x140516BD8 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ViFilterDeviceUsageNotificationCompletion(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  unsigned __int64 v6; // r15
  int v7; // eax
  int v8; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v11; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v13; // r10
  _DWORD *v14; // r9
  int v15; // eax
  bool v16; // zf
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(a2 + 48) >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 184);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 88));
    v7 = *(_DWORD *)(v4 + 96);
    if ( *(_BYTE *)(v5 + 8) )
    {
      *(_DWORD *)(v4 + 96) = v7 + 1;
      if ( !v7 )
        *(_DWORD *)(a1 + 48) &= ~0x2000u;
    }
    else
    {
      v8 = v7 - 1;
      *(_DWORD *)(v4 + 96) = v8;
      if ( !v8 )
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
        v11 = SchedulerAssist[6] - 1;
        SchedulerAssist[6] = v11;
        if ( !v11 )
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
          v13 = KeGetCurrentPrcb();
          v14 = v13->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v16 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)v13);
        }
      }
    }
    __writecr8(v6);
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), (PVOID)a2, 0x20u);
  return 0LL;
}
