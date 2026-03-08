/*
 * XREFs of KeQuerySchedulingGroupHistory @ 0x14035C6F8
 * Callers:
 *     PspQueryRateControlHistory @ 0x1407E8B5C (PspQueryRateControlHistory.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQuerySchedulingGroupHistory(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v8; // eax
  __int64 *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  LARGE_INTEGER v13; // rax
  unsigned __int64 v14; // r8
  LARGE_INTEGER v15; // rcx
  unsigned __int64 v16; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v21; // zf
  struct _KLOCK_QUEUE_HANDLE v22; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  memset(&v22, 0, sizeof(v22));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &v22);
  v8 = KeNumberProcessors_0;
  *a2 = 0LL;
  if ( v8 )
  {
    v9 = (__int64 *)(a1 + 176);
    v10 = v8;
    v11 = 0LL;
    do
    {
      v12 = *v9;
      v9 += 53;
      v11 |= v12;
      *a2 = v11;
      --v10;
    }
    while ( v10 );
  }
  *a3 = PsDfssGenerationLengthMS;
  v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v14 = (unsigned int)*a3;
  v15 = v13;
  v16 = 1000 * (v13.QuadPart - *(_QWORD *)(a1 + 24));
  *(LARGE_INTEGER *)(a1 + 24) = v15;
  *a4 = v16 / PerformanceFrequency.QuadPart / v14;
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v22);
  OldIrql = v22.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v22.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v22.OldIrql + 1));
      v21 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v21 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
