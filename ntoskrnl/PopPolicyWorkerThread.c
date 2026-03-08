/*
 * XREFs of PopPolicyWorkerThread @ 0x1402F6DE0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopSystemIdleWorker @ 0x14073B6A0 (PopSystemIdleWorker.c)
 *     PopPolicyWorkerNotify @ 0x14078DE30 (PopPolicyWorkerNotify.c)
 *     PopCoalescingNotify @ 0x140983FE0 (PopCoalescingNotify.c)
 *     PopPolicyWorkerAction @ 0x140987130 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140987320 (PopPolicyWorkerActionPromote.c)
 *     PopPreCriticalBatteryNotify @ 0x14098F6C0 (PopPreCriticalBatteryNotify.c)
 *     PopPolicyTimeChange @ 0x140991540 (PopPolicyTimeChange.c)
 *     PopPolicySystemIdle @ 0x140998EF0 (PopPolicySystemIdle.c)
 */

__int64 __fastcall PopPolicyWorkerThread(int a1)
{
  KIRQL v2; // al
  int v3; // esi
  int v4; // r15d
  KIRQL v5; // bl
  int v6; // eax
  unsigned int v7; // eax
  int v8; // edi
  int v9; // eax
  __int64 (*v10)(void); // rax
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  v3 = PopWorkerStatus | a1;
  v4 = 0;
  v5 = v2;
  PopWorkerStatus = v3;
  v6 = v3;
  while ( 1 )
  {
    v7 = PopWorkerPending & v6;
    if ( !v7 )
      break;
    _BitScanForward((unsigned int *)&v8, v7);
    v9 = ~(1 << v8);
    PopWorkerStatus = v3 & v9;
    PopWorkerPending &= v9;
    KxReleaseSpinLock((volatile signed __int64 *)&PopWorkerSpinLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (v5 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v5);
    v10 = PopWorkerTypes[v8];
    if ( v10 )
      v4 |= v10();
    v5 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
    PopWorkerStatus |= 1 << v8;
    v6 = PopWorkerStatus;
    v3 = PopWorkerStatus;
  }
  PopWorkerPending |= v4;
  KxReleaseSpinLock((volatile signed __int64 *)&PopWorkerSpinLock);
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && v5 <= 0xFu && v17 >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << (v5 + 1));
      v16 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  result = v5;
  __writecr8(v5);
  return result;
}
