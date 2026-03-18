/*
 * XREFs of EtwpDisableCompression @ 0x1406028E8
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140227E10 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140602778 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9C0 (ObGetCurrentIrql.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     EtwpRelinquishCompressionTarget @ 0x140602AD8 (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpDisableCompression(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 1180) != 1
    && _InterlockedExchange((volatile __int32 *)(a1 + 1168), 0)
    && !*(_DWORD *)(a1 + 1136)
    && ObGetCurrentIrql() < 2u )
  {
    ExAcquirePushLockExclusiveEx(a1 + 1144, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1144), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1144));
    KeAbPostRelease(a1 + 1144);
  }
}
