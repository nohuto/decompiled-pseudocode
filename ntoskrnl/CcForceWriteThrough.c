/*
 * XREFs of CcForceWriteThrough @ 0x1402FD990
 * Callers:
 *     CcPrepareMdlWrite @ 0x1402FD600 (CcPrepareMdlWrite.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1402832C0 (PsGetIoPriorityThread.c)
 *     CcGetPrivateVolumeCacheMapFromFileObject @ 0x140290B30 (CcGetPrivateVolumeCacheMapFromFileObject.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     CcCanIWriteStreamEx @ 0x140363460 (CcCanIWriteStreamEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcForceWriteThrough(__int64 a1, int a2, __int64 a3, char a4)
{
  char v4; // r15
  __int64 v5; // r12
  __int64 v9; // rdi
  unsigned __int64 OldIrql; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int64 v17; // rbx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+58h] [rbp-18h] BYREF
  int v24; // [rsp+B8h] [rbp+48h]

  v24 = a2;
  v4 = 0;
  LODWORD(v5) = 0;
  memset(&v23, 0, sizeof(v23));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    v9 = *(_QWORD *)(a3 + 536);
    v5 = *(_QWORD *)(a3 + 600);
  }
  else
  {
    v9 = *((_QWORD *)PspSystemPartition + 1);
    if ( CcEnablePerVolumeLazyWriter )
    {
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
      LODWORD(v5) = (unsigned int)CcGetPrivateVolumeCacheMapFromFileObject((_QWORD *)a1, v9);
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      v4 = 0;
      a2 = v24;
    }
  }
  if ( (*(_DWORD *)(a1 + 80) & 0x1000000) != 0 && !(unsigned __int8)CcCanIWriteStreamEx(v9, v5, a1, a2, 0, 0, 0LL)
    || a4 && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) <= 0 && (*(_DWORD *)(a1 + 80) & 0x8000) == 0 )
  {
    v4 = 1;
    if ( a4 )
    {
      if ( (*(_DWORD *)(a3 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 768), &v23);
        *(_DWORD *)(a3 + 152) |= 0x400u;
        KxReleaseQueuedSpinLock(&v23);
        v17 = v23.OldIrql;
        if ( KiIrqlFlags )
        {
          v18 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && v23.OldIrql <= 0xFu && v18 >= 2u )
          {
            v19 = KeGetCurrentPrcb();
            v20 = v19->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << (v23.OldIrql + 1));
            v16 = (v21 & v20[5]) == 0;
            v20[5] &= v21;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        __writecr8(v17);
      }
    }
  }
  return v4;
}
