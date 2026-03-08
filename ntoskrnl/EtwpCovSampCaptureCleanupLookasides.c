/*
 * XREFs of EtwpCovSampCaptureCleanupLookasides @ 0x140600B88
 * Callers:
 *     EtwpCovSampCaptureCleanupDpc @ 0x140600B70 (EtwpCovSampCaptureCleanupDpc.c)
 *     EtwpCovSampCaptureContextStop @ 0x140600CB8 (EtwpCovSampCaptureContextStop.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1406014D8 (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 */

__int64 __fastcall EtwpCovSampCaptureCleanupLookasides(__int64 a1)
{
  volatile signed __int64 *v1; // r15
  int v3; // ebp
  unsigned __int64 v4; // rsi
  _QWORD *i; // rdi
  __int64 *v6; // rdx
  bool v7; // cf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v1 = (volatile signed __int64 *)(a1 + 632);
  v3 = 1;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 632));
  if ( !*(_DWORD *)(a1 + 1280) && !*(_DWORD *)(a1 + 1288) )
  {
    for ( i = *(_QWORD **)(a1 + 944); i != (_QWORD *)(a1 + 944); i = (_QWORD *)*i )
      EtwpCovSampLookasideFlushFreeListToCleanupList(i - 2);
    v6 = *(__int64 **)(a1 + 960);
    if ( v6 == (__int64 *)(a1 + 960) )
      goto LABEL_11;
    do
    {
      v7 = *((_DWORD *)v6 + 15) < *((_DWORD *)v6 + 14);
      v6 = (__int64 *)*v6;
      if ( v7 )
        v3 = 0;
    }
    while ( v6 != (__int64 *)(a1 + 960) );
    if ( v3 )
    {
LABEL_11:
      *(_DWORD *)(a1 + 1288) = 1;
      KeSetEvent((PRKEVENT)(a1 + 1256), 0, 0);
    }
  }
  result = KxReleaseSpinLock(v1);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  return result;
}
