/*
 * XREFs of WheapDeferredRecoveryServiceDpcRoutine @ 0x140610990
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall WheapDeferredRecoveryServiceDpcRoutine(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx
  __int64 v3; // rtt
  __int64 v4; // rtt
  char v5; // al
  KIRQL v6; // al
  unsigned __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  signed __int32 v13; // eax
  bool v14; // cc
  __int64 result; // rax

  v2 = WheaDrsList;
  v3 = WheaDrsList;
  if ( v3 != _InterlockedCompareExchange64(&WheaDrsList, *(_QWORD *)WheaDrsList, WheaDrsList) )
  {
    do
    {
      _mm_pause();
      v2 = WheaDrsList;
      v4 = WheaDrsList;
    }
    while ( v4 != _InterlockedCompareExchange64(&WheaDrsList, *(_QWORD *)WheaDrsList, WheaDrsList) );
  }
  v5 = *(_BYTE *)(v2 + 24);
  if ( v5 == 2 )
  {
    _InterlockedExchange((volatile __int32 *)(v2 + 8), 0);
    (*(void (__fastcall **)(__int64, _QWORD))(v2 + 16))(v2, *(_QWORD *)(v2 + 32));
  }
  else if ( !v5 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&WheaPassiveDrsListLock);
    *(_QWORD *)v2 = WheaPassiveDrsList;
    v7 = v6;
    WheaPassiveDrsList = v2;
    KxReleaseSpinLock((volatile signed __int64 *)&WheaPassiveDrsListLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v7);
    if ( _InterlockedIncrement(&WheaPassiveDrsItemsToProcess) == 1 )
      ExQueueWorkItem(&WheaDrsWorkItem, CriticalWorkQueue);
  }
  v13 = _InterlockedExchangeAdd(&WheaDrsItemsToProcess, 0xFFFFFFFF);
  v14 = v13 <= 1;
  result = (unsigned int)(v13 - 1);
  if ( !v14 )
    return KiInsertQueueDpc(BugCheckParameter2, 0LL, 0LL, 0LL, 0);
  return result;
}
