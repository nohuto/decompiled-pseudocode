/*
 * XREFs of PopGetCurrentWakeInfos @ 0x14058C028
 * Callers:
 *     PopGetWakeSource @ 0x140984368 (PopGetWakeSource.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopGetCurrentWakeInfos(__int64 *a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 Pool2; // rax
  __int64 v5; // rcx
  __int64 i; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+20h] [rbp-28h] BYREF

  memset(&v14, 0, sizeof(v14));
  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &v14);
  v3 = PopWakeInfoCount;
  if ( PopWakeInfoCount )
  {
    Pool2 = ExAllocatePool2(64LL, 8LL * (unsigned int)PopWakeInfoCount, 544040269LL);
    v2 = Pool2;
    if ( Pool2 )
    {
      v5 = PopWakeInfoList;
      for ( i = 0LL; (__int64 *)v5 != &PopWakeInfoList && (unsigned int)i < v3; i = (unsigned int)(i + 1) )
      {
        *(_QWORD *)(Pool2 + 8 * i) = v5;
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 16));
        v5 = *(_QWORD *)v5;
      }
    }
    else
    {
      v3 = 0;
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v14);
  OldIrql = v14.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v14.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << (v14.OldIrql + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  result = v3;
  *a1 = v2;
  return result;
}
