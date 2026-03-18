/*
 * XREFs of WmipBuildTraceDeviceList @ 0x1403B423C
 * Callers:
 *     WmiTraceRundownNotify @ 0x14081AA90 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x1409DE1A0 (WmiSetNetworkNotify.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     WmipFreeTraceDeviceList @ 0x14081AB2C (WmipFreeTraceDeviceList.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipBuildTraceDeviceList(int a1, _QWORD *a2, unsigned int *a3)
{
  KIRQL v6; // al
  unsigned int v7; // ebp
  unsigned __int64 v8; // rsi
  PVOID PoolWithTag; // rax
  void *v10; // rdi
  _UNKNOWN **v11; // rdx
  _DWORD *v12; // r8
  unsigned int v13; // ebx
  int v14; // r9d
  unsigned int v15; // ebx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v25; // eax

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v6 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  v7 = WmipInUseRegEntryCount;
  v8 = v6;
  if ( WmipInUseRegEntryCount )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (unsigned int)WmipInUseRegEntryCount, 0x70696D57u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      v11 = (_UNKNOWN **)WmipInUseRegEntryHead;
      v12 = PoolWithTag;
      v13 = 0;
      while ( v11 != &WmipInUseRegEntryHead )
      {
        v14 = (*((int *)v11 + 12) >> 4) & 0xF00000;
        if ( (v14 & a1) != 0 && ((_DWORD)v11[6] & 0x40000000) != 0 && v11[2] && v13 < v7 )
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
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v21 = (v25 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v25;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
      KeReleaseMutex(&WmipSMMutex, 0);
      if ( v13 )
      {
        *a3 = v13;
        v15 = 0;
        *a2 = v10;
      }
      else
      {
        v15 = -1073741632;
        WmipFreeTraceDeviceList(v10);
      }
      return v15;
    }
    v15 = -1073741670;
  }
  else
  {
    v15 = -1073741632;
  }
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  __writecr8(v8);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v15;
}
