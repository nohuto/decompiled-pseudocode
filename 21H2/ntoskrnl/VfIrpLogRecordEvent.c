/*
 * XREFs of VfIrpLogRecordEvent @ 0x1409E4898
 * Callers:
 *     IovpCallDriver1 @ 0x1409D0C4C (IovpCallDriver1.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1409D7A4C (IovUtilIsDeviceObjectMarked.c)
 *     VfMajorBuildIrpLogEntry @ 0x1409D89C0 (VfMajorBuildIrpLogEntry.c)
 *     ViIrpLogDatabaseFindPointer @ 0x1409E4EF8 (ViIrpLogDatabaseFindPointer.c)
 */

__int64 __fastcall VfIrpLogRecordEvent(__int16 a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  unsigned __int64 v7; // rdi
  __int64 Pointer; // rax
  _DWORD *v9; // rbp
  unsigned int *v10; // rbx
  _QWORD *v11; // rcx
  unsigned int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  bool v20; // zf
  _DWORD *v21; // [rsp+20h] [rbp-68h] BYREF
  __int128 v22; // [rsp+30h] [rbp-58h] BYREF
  __int128 v23; // [rsp+40h] [rbp-48h]
  __int64 v24; // [rsp+50h] [rbp-38h]

  v21 = 0LL;
  result = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( (a1 & 0x400) == 0 )
    return result;
  if ( ViIrpLogDdiLock != 2 && !_InterlockedCompareExchange(&ViIrpLogDdiLock, 1, 0) )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x77496656u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ViIrpLogExposeWmiCallback;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
    else
    {
      ViIrpLogDdiLock = 0;
    }
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  if ( !(unsigned int)IovUtilIsDeviceObjectMarked((__int64)a2, 0) )
  {
    Pointer = ViIrpLogDatabaseFindPointer(a2, &v21);
    v9 = v21;
    v10 = (unsigned int *)Pointer;
    if ( !*v21 )
    {
      if ( Pointer )
      {
LABEL_14:
        v15 = v10[6];
        if ( (v15 & 6) == 0 )
        {
          v16 = v15 == 1 ? v10[8] : v10[9];
          if ( (unsigned int)VfMajorBuildIrpLogEntry(a3, v16, (__int64)&v10[10 * v10[9] + 10], (__int64)&v22) )
          {
            v17 = 5 * (v10[9] + 1LL);
            *(_OWORD *)&v10[2 * v17] = v22;
            *(_OWORD *)&v10[2 * v17 + 4] = v23;
            *(_QWORD *)&v10[2 * v17 + 8] = v24;
            if ( ++v10[9] == v10[8] )
            {
              v10[6] |= 1u;
              v10[9] = 0;
            }
          }
        }
        goto LABEL_21;
      }
      v10 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x348uLL, 0x65496656u);
      if ( v10 )
      {
        ObfReferenceObject(a2);
        v10[6] = 0;
        v11 = v9 + 2;
        *(_QWORD *)v10 = a2;
        v12 = a2[18];
        v10[9] = 0;
        v10[7] = v12;
        v13 = v10 + 2;
        v10[8] = 20;
        v14 = *((_QWORD *)v9 + 1);
        if ( *(_DWORD **)(v14 + 8) != v9 + 2 )
          __fastfail(3u);
        *v13 = v14;
        *((_QWORD *)v10 + 2) = v11;
        *(_QWORD *)(v14 + 8) = v13;
        *v11 = v13;
        goto LABEL_14;
      }
    }
  }
LABEL_21:
  KxReleaseSpinLock(&ViIrpLogDatabaseLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v20 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v20 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
