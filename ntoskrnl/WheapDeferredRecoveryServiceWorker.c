/*
 * XREFs of WheapDeferredRecoveryServiceWorker @ 0x140610AF0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 WheapDeferredRecoveryServiceWorker()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf
  signed __int32 v8; // eax
  bool v9; // cc
  __int64 result; // rax

  do
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&WheaPassiveDrsListLock);
    v1 = WheaPassiveDrsList;
    v2 = v0;
    WheaPassiveDrsList = *(_QWORD *)WheaPassiveDrsList;
    KxReleaseSpinLock((volatile signed __int64 *)&WheaPassiveDrsListLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = (v6 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v2);
    _InterlockedExchange((volatile __int32 *)(v1 + 8), 0);
    (*(void (__fastcall **)(__int64, _QWORD))(v1 + 16))(v1, *(_QWORD *)(v1 + 32));
    v8 = _InterlockedExchangeAdd(&WheaPassiveDrsItemsToProcess, 0xFFFFFFFF);
    v9 = v8 <= 1;
    result = (unsigned int)(v8 - 1);
  }
  while ( !v9 );
  return result;
}
