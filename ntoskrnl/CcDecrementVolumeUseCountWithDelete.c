/*
 * XREFs of CcDecrementVolumeUseCountWithDelete @ 0x14021782C
 * Callers:
 *     CcScanLogHandleList @ 0x1402175F8 (CcScanLogHandleList.c)
 *     CcDeleteSharedCacheMap @ 0x140217A10 (CcDeleteSharedCacheMap.c)
 *     CcGetDeviceGuidAsync @ 0x1403A75C0 (CcGetDeviceGuidAsync.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x1403A89D4 (CcQueueAsyncGetDeviceGuid.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403BC0E4 (CcDeletePrivateVolumeCacheMap.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

int __fastcall CcDecrementVolumeUseCountWithDelete(_DWORD *P, char a2, _BYTE *a3)
{
  int v5; // ebx
  int v6; // eax
  char *v7; // rax
  unsigned __int64 OldIrql; // rbx
  int v9; // ebx
  unsigned int CurrentRunTime; // eax
  int CycleTime; // r9d
  __int64 v12; // rdx
  char **v13; // rcx
  void *v14; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  *a3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a2 & 1;
  if ( (a2 & 1) == 0 )
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v6 = P[1];
  if ( !v6 )
    KeBugCheckEx(0x34u, 0x645uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  LODWORD(v7) = v6 - 1;
  P[1] = (_DWORD)v7;
  if ( !(_DWORD)v7 )
  {
    v7 = (char *)(P + 4);
    *a3 = 1;
    v12 = *((_QWORD *)P + 2);
    v13 = (char **)*((_QWORD *)P + 3);
    if ( *(_DWORD **)(v12 + 8) != P + 4 || *v13 != v7 )
      __fastfail(3u);
    *v13 = (char *)v12;
    *(_QWORD *)(v12 + 8) = v13;
    _InterlockedAdd64(&qword_140C5F508, 0xFFFFFFFFFFFFFFFFuLL);
    v14 = (void *)*((_QWORD *)P + 20);
    if ( v14 )
    {
      LODWORD(v7) = ObfDereferenceObject(v14);
      *((_QWORD *)P + 20) = 0LL;
    }
  }
  if ( !v5 )
  {
    LODWORD(v7) = KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      LODWORD(v7) = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)v7 <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && (unsigned __int8)v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        LODWORD(v7) = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v17 = ((unsigned int)v7 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= (unsigned int)v7;
        if ( v17 )
          LODWORD(v7) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( *a3 )
    {
      v9 = P[51];
      ExFreePoolWithTag(P, 0x6D566343u);
      CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
      CycleTime = KeGetCurrentThread()[1].CycleTime;
      *a3 = 0;
      LODWORD(v7) = DbgPrintEx(
                      0x7Fu,
                      3u,
                      "[%04x:%04x]CcDecrementVolumeUseCountWithDelete: VCM:%p(vid:%2lx) Freed!\n",
                      CycleTime,
                      CurrentRunTime,
                      P,
                      v9);
    }
  }
  return (int)v7;
}
