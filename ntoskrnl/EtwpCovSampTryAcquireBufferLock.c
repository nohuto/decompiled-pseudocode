/*
 * XREFs of EtwpCovSampTryAcquireBufferLock @ 0x140462188
 * Callers:
 *     EtwpCovSampSampleBufferReserve @ 0x140461E06 (EtwpCovSampSampleBufferReserve.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140600E90 (EtwpCovSampCaptureFlushSampleBuffers.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x14036B144 (KxTryToAcquireSpinLock.c)
 */

__int64 __fastcall EtwpCovSampTryAcquireBufferLock(volatile signed __int32 *SpinLock, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v5; // cl
  _DWORD *SchedulerAssist; // r10
  int v7; // eax

  CurrentIrql = KeGetCurrentIrql();
  *a2 = CurrentIrql;
  if ( !CurrentIrql || CurrentIrql == 1 )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v5 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v7 = 4;
      if ( v5 != 2 )
        v7 = (-1LL << (v5 + 1)) & 4;
      SchedulerAssist[5] |= v7;
    }
  }
  else if ( CurrentIrql != 2 )
  {
    return (unsigned __int8)KxTryToAcquireSpinLock(SpinLock);
  }
  KxAcquireSpinLock((PKSPIN_LOCK)SpinLock);
  return 1LL;
}
