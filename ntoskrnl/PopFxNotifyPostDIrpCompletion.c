/*
 * XREFs of PopFxNotifyPostDIrpCompletion @ 0x1402BA4B8
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1402BB4F0 (PopHandleDevicePowerIrpCompletion.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxNextParentRelationSafe @ 0x1402E4C58 (PopFxNextParentRelationSafe.c)
 *     PopFxIdleComponent @ 0x140306A50 (PopFxIdleComponent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PopFxNotifyPostDIrpCompletion(__int64 a1, int a2)
{
  volatile signed __int64 *v2; // r14
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 != 1 )
  {
    v2 = (volatile signed __int64 *)(a1 + 1240);
    v5 = 0LL;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1240));
    v12 = 0LL;
    while ( (unsigned __int8)PopFxNextParentRelationSafe(a1 + 1264, v5, &v12) )
    {
      v5 = v12;
      if ( a2 >= ((*(_DWORD *)(v12 + 16) >> 4) & 3) )
      {
        PopFxIdleComponent(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 80LL), *(unsigned int *)(*(_QWORD *)(v12 + 24) + 16LL));
        *(_DWORD *)(v5 + 16) &= ~2u;
      }
    }
    KxReleaseSpinLock(v2);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v6);
  }
}
