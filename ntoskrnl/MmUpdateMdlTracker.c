/*
 * XREFs of MmUpdateMdlTracker @ 0x14061AE74
 * Callers:
 *     IopProbeAndLockPages @ 0x14036D5D4 (IopProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x1403CE574 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1405536D0 (IopProbeAndLockPages_1.c)
 *     IopProbeAndLockPages_2 @ 0x1405578DC (IopProbeAndLockPages_2.c)
 *     NtWriteFileGather @ 0x140799670 (NtWriteFileGather.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmUpdateMdlTracker(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  PEPROCESS v3; // r9
  __int64 result; // rax
  unsigned int v5; // edi
  unsigned __int64 i; // rbx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // edx
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(PEPROCESS *)(a1 + 16);
  result = 0LL;
  v5 = 0;
  v16.LockQueue = 0LL;
  if ( !v3 )
    v3 = PsInitialSystemProcess;
  *(_QWORD *)&v16.OldIrql = 0LL;
  i = v3[1].ActiveProcessors.StaticBitmap[11];
  if ( i )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(i + 24), &v16);
LABEL_5:
    for ( i = *(_QWORD *)i; i; i = *(_QWORD *)(i + 8) )
    {
      if ( a1 < *(_QWORD *)(i + 24) )
        goto LABEL_5;
      if ( a1 <= *(_QWORD *)(i + 24) )
        break;
    }
    if ( i && (a2 || a3) )
    {
      *(_QWORD *)(i + 72) = a2;
      *(_QWORD *)(i + 80) = a3;
      *(_OWORD *)(i + 88) = 0LL;
      *(_OWORD *)(i + 104) = 0LL;
      *(_OWORD *)(i + 120) = 0LL;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v16);
    OldIrql = v16.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v16.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (v16.OldIrql + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    LOBYTE(v5) = i != 0;
    return v5;
  }
  return result;
}
