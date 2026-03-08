/*
 * XREFs of IoDiskIoAttributionQuery @ 0x1402946F0
 * Callers:
 *     IoGetIoRateControl @ 0x140294410 (IoGetIoRateControl.c)
 *     IopIoRateStartRateControl @ 0x1402C4400 (IopIoRateStartRateControl.c)
 *     PspQueryJobIoAttribution @ 0x1406F894C (PspQueryJobIoAttribution.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x1402947D0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     IopRecordIoAttribution @ 0x14030C324 (IopRecordIoAttribution.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IoDiskIoAttributionQuery(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  int v15; // [rsp+38h] [rbp-28h] BYREF
  __int128 v16; // [rsp+3Ch] [rbp-24h]
  int v17; // [rsp+4Ch] [rbp-14h]
  unsigned __int64 QpcTimeStamp; // [rsp+50h] [rbp-10h] BYREF

  v15 = 1;
  v17 = 0;
  v16 = 0LL;
  LODWORD(v16) = _mm_cvtsi128_si32((__m128i)0LL) | 0x200;
  memset(&LockHandle, 0, sizeof(LockHandle));
  QpcTimeStamp = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  IopRecordIoAttribution(a1, &v15, 3LL);
  v6 = *(_OWORD *)(a1 + 104);
  *a2 = *(_OWORD *)(a1 + 88);
  v7 = *(_OWORD *)(a1 + 128);
  a2[1] = v6;
  v8 = *(_OWORD *)(a1 + 144);
  *a3 = v7;
  a3[1] = v8;
  result = KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v13 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
