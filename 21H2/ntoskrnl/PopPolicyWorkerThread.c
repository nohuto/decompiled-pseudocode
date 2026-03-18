/*
 * XREFs of PopPolicyWorkerThread @ 0x140250220
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopPolicyWorkerNotify @ 0x1406DC970 (PopPolicyWorkerNotify.c)
 *     PopSystemIdleWorker @ 0x140752F30 (PopSystemIdleWorker.c)
 *     PopPolicyWorkerAction @ 0x1407FF440 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140808500 (PopPolicyWorkerActionPromote.c)
 *     PopPolicyTimeChange @ 0x1408088B0 (PopPolicyTimeChange.c)
 *     PopCoalescingNotify @ 0x14098F180 (PopCoalescingNotify.c)
 *     PopPreCriticalBatteryNotify @ 0x140993C50 (PopPreCriticalBatteryNotify.c)
 *     PopPolicySystemIdle @ 0x14099D040 (PopPolicySystemIdle.c)
 */

__int64 __fastcall PopPolicyWorkerThread(int a1)
{
  KIRQL v2; // al
  int v3; // ebp
  int i; // r8d
  KIRQL v5; // di
  int v6; // ebx
  int v7; // eax
  __int64 (*v8)(void); // rax
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
  for ( i = a1 | PopWorkerStatus; ; i = (1 << v6) | PopWorkerStatus )
  {
    v5 = v2;
    PopWorkerStatus = i;
    if ( (PopWorkerPending & i) == 0 )
      break;
    _BitScanForward((unsigned int *)&v6, PopWorkerPending & i);
    v7 = ~(1 << v6);
    PopWorkerStatus = i & v7;
    PopWorkerPending &= v7;
    KxReleaseSpinLock(&PopWorkerSpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    v8 = PopWorkerTypes[v6];
    if ( v8 )
      v3 |= v8();
    v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  }
  PopWorkerPending |= v3;
  KxReleaseSpinLock(&PopWorkerSpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && v5 <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (v5 + 1));
        v14 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
  }
  result = v5;
  __writecr8(v5);
  return result;
}
