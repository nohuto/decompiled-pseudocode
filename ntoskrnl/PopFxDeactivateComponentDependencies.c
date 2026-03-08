/*
 * XREFs of PopFxDeactivateComponentDependencies @ 0x140306C70
 * Callers:
 *     PopFxIdleWorkerTail @ 0x140306748 (PopFxIdleWorkerTail.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxNextParentRelationSafe @ 0x1402E4C58 (PopFxNextParentRelationSafe.c)
 *     PopFxIdleComponent @ 0x140306A50 (PopFxIdleComponent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxDeactivateComponentDependencies(__int64 a1)
{
  volatile signed __int64 *v1; // rbp
  KIRQL v3; // al
  ULONG_PTR v4; // r14
  __int64 v5; // rbx
  unsigned __int64 i; // rsi
  __int64 v7; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = (volatile signed __int64 *)(a1 + 128);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v4 = *(_QWORD *)(a1 + 80);
  v5 = 0LL;
  for ( i = v3; (unsigned int)v5 < *(_DWORD *)(a1 + 172); v5 = (unsigned int)(v5 + 1) )
    PopFxIdleComponent(v4, *(unsigned int *)(*(_QWORD *)(a1 + 176) + 8 * v5), 2);
  v7 = 0LL;
  v12 = 0LL;
  while ( PopFxNextParentRelationSafe((_QWORD **)(a1 + 456), v7, &v12) )
  {
    v7 = v12;
    PopFxIdleComponent(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 80LL), *(unsigned int *)(*(_QWORD *)(v12 + 24) + 16LL), 2);
    *(_DWORD *)(v7 + 16) &= ~2u;
  }
  result = KxReleaseSpinLock(v1);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)i <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)i + 1));
      v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(i);
  return result;
}
