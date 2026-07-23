/*
 * XREFs of WmipBuildTraceDeviceList @ 0x1403C6010
 * Callers:
 *     WmiTraceRundownNotify @ 0x1407C1A64 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x140933714 (WmiSetNetworkNotify.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     WmipFreeTraceDeviceList @ 0x1407C1B00 (WmipFreeTraceDeviceList.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipBuildTraceDeviceList(int a1, _QWORD *a2, unsigned int *a3)
{
  void *v6; // rdi
  KIRQL v7; // al
  unsigned int v8; // ebp
  unsigned __int64 v9; // rsi
  PVOID PoolWithTag; // rax
  _UNKNOWN **v11; // rdx
  _DWORD *v12; // r8
  unsigned int v13; // ebx
  int v14; // r9d
  unsigned int v15; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r8
  int v25; // eax

  v6 = 0LL;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v7 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  v8 = WmipInUseRegEntryCount;
  v9 = v7;
  if ( !WmipInUseRegEntryCount )
  {
    v15 = -1073741632;
    goto LABEL_16;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (unsigned int)WmipInUseRegEntryCount, 0x70696D57u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = -1073741670;
LABEL_16:
    KxReleaseSpinLock(&WmipRegistrationSpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v21 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    KeReleaseMutex(&WmipSMMutex, 0);
    goto LABEL_31;
  }
  v11 = (_UNKNOWN **)WmipInUseRegEntryHead;
  v12 = PoolWithTag;
  v13 = 0;
  while ( v11 != &WmipInUseRegEntryHead )
  {
    v14 = (*((int *)v11 + 12) >> 4) & 0xF00000;
    if ( (v14 & a1) != 0 && ((_DWORD)v11[6] & 0x40000000) != 0 && v11[2] && v13 < v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 12);
      *(_QWORD *)v12 = v11;
      v12[2] = v14;
      v12 += 4;
      ++v13;
    }
    v11 = (_UNKNOWN **)*v11;
  }
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v21 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
  }
  __writecr8(v9);
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( v13 )
  {
    *a3 = v13;
    v15 = 0;
    *a2 = v6;
    return v15;
  }
  v15 = -1073741632;
LABEL_31:
  if ( v6 )
    WmipFreeTraceDeviceList(v6);
  return v15;
}
