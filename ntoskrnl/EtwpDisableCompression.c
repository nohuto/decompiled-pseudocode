/*
 * XREFs of EtwpDisableCompression @ 0x140600498
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x14020620C (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140600328 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140205E10 (ObGetCurrentIrql.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     EtwpRelinquishCompressionTarget @ 0x140600688 (EtwpRelinquishCompressionTarget.c)
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
