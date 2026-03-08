/*
 * XREFs of KeSetSchedulingGroupWeights @ 0x140200CE0
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1405A1524 (PsSetCpuQuotaInformation.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 * Callees:
 *     KiAssignSchedulingGroupWeights @ 0x1402F1A84 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1402F1B38 (KiUpdateMinimumWeight.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetSchedulingGroupWeights(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  memset(&v18, 0, sizeof(v18));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &v18);
  if ( (_DWORD)v3 )
  {
    v7 = a2;
    v8 = a3 - a2;
    do
    {
      v9 = *(_DWORD *)(*(_QWORD *)v7 + 4LL);
      if ( (v9 & 1) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)v7 + 4LL) = v9 & 0xFFFFFFFE;
        if ( (unsigned __int8)KiUpdateMinimumWeight(1LL, 0LL, *(_QWORD *)(*(_QWORD *)v7 + 96LL)) )
          KiAssignSchedulingGroupWeights(1LL, 0LL, *(_QWORD *)(*(_QWORD *)v7 + 96LL));
      }
      v10 = *(_QWORD **)v7;
      v11 = *(_QWORD *)(v8 + v7);
      v7 += 8LL;
      *v10 = v11;
      --v3;
    }
    while ( v3 );
  }
  LOBYTE(v6) = 1;
  KiUpdateMinimumWeight(0LL, v6, *(_QWORD *)(*(_QWORD *)a2 + 96LL));
  LOBYTE(v12) = 1;
  KiAssignSchedulingGroupWeights(0LL, v12, *(_QWORD *)(*(_QWORD *)a2 + 96LL));
  result = KxReleaseQueuedSpinLock(&v18);
  OldIrql = v18.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v18.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v18.OldIrql + 1));
      v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v17 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
