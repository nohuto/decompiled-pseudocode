/*
 * XREFs of PopFxNotifyPreDIrpIssue @ 0x1402BA338
 * Callers:
 *     PopRequestPowerIrp @ 0x1402BA570 (PopRequestPowerIrp.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxNextParentRelationSafe @ 0x1402E4C58 (PopFxNextParentRelationSafe.c)
 *     PopFxActivateComponent @ 0x140305D50 (PopFxActivateComponent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall PopFxNotifyPreDIrpIssue(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  volatile signed __int64 *v5; // r14
  KIRQL v6; // al
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  KIRQL v15; // al
  unsigned __int64 v16; // rsi
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  int v19; // eax
  _DWORD *v20; // r8
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 72LL * *(char *)(a2 + 66) + 200) + 192LL) == 1 )
  {
    v5 = (volatile signed __int64 *)(a1 + 1240);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1240));
    v7 = 0LL;
    v8 = v6;
    v21 = 0LL;
    while ( (unsigned __int8)PopFxNextParentRelationSafe(a1 + 1264, v7, &v21) )
    {
      v7 = v21;
      if ( (*(_DWORD *)(v21 + 16) & 2) == 0 )
      {
        v9 = *(_QWORD *)(v21 + 24);
        PopFxActivateComponent(*(_QWORD *)(v9 + 80), v9, 10LL);
        v7 = v21;
        if ( *(int *)(v9 + 88) < 0 )
        {
          *(_DWORD *)(v21 + 16) |= 2u;
        }
        else
        {
          *(_DWORD *)(v21 + 16) |= 1u;
          ++*(_DWORD *)(a1 + 1248);
        }
      }
    }
    if ( *(_DWORD *)(a1 + 1248) )
    {
      *(_QWORD *)(a1 + 1256) = v2;
      v2 = 0LL;
    }
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0) & 0x20) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 32), 0) & 0x2000) != 0 )
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1152));
      *(_DWORD *)(a1 + 1180) |= 1u;
      v16 = v15;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 1160));
      KxReleaseSpinLock((volatile signed __int64 *)(a1 + 1152));
      if ( KiIrqlFlags )
      {
        v17 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v20 = v18->SchedulerAssist;
          v14 = (v19 & v20[5]) == 0;
          v20[5] &= v19;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
      __writecr8(v16);
    }
  }
  return v2 != 0;
}
