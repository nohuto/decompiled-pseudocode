/*
 * XREFs of PopPolicyWorkerThread @ 0x1402434B0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopPolicySystemIdle @ 0x14066D1E0 (PopPolicySystemIdle.c)
 *     PopPolicyWorkerNotify @ 0x14066F310 (PopPolicyWorkerNotify.c)
 *     PopPolicyWorkerAction @ 0x140775A30 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14077A1E0 (PopPolicyWorkerActionPromote.c)
 *     PopPolicyTimeChange @ 0x14077A4B0 (PopPolicyTimeChange.c)
 *     PopCoalescingNotify @ 0x1408E6A10 (PopCoalescingNotify.c)
 *     PopPreCriticalBatteryNotify @ 0x1408EC3F0 (PopPreCriticalBatteryNotify.c)
 *     PopSystemIdleWorker @ 0x1408F1260 (PopSystemIdleWorker.c)
 */

__int64 __fastcall PopPolicyWorkerThread(int a1)
{
  KIRQL v2; // al
  int v3; // ebp
  int i; // r8d
  int v5; // ebx
  int v6; // eax
  __int64 (*v7)(void); // rax
  KIRQL v8; // di
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  v3 = 0;
  for ( i = a1 | PopWorkerStatus; ; i = (1 << v5) | PopWorkerStatus )
  {
    v8 = v2;
    PopWorkerStatus = i;
    if ( (PopWorkerPending & i) == 0 )
      break;
    _BitScanForward((unsigned int *)&v5, PopWorkerPending & i);
    v6 = ~(1 << v5);
    PopWorkerStatus = i & v6;
    PopWorkerPending &= v6;
    KxReleaseSpinLock(&PopWorkerSpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (v8 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    v7 = PopWorkerTypes[v5];
    if ( v7 )
      v3 |= v7();
    v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  }
  PopWorkerPending |= v3;
  KxReleaseSpinLock(&PopWorkerSpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && v8 <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (v8 + 1));
        v14 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
  }
  result = v8;
  __writecr8(v8);
  return result;
}
