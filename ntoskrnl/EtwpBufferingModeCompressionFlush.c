/*
 * XREFs of EtwpBufferingModeCompressionFlush @ 0x1405FFD08
 * Callers:
 *     EtwpBufferingModeFlush @ 0x1408A3088 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     EtwpCompressPendingBuffers @ 0x1406000F4 (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x140600688 (EtwpRelinquishCompressionTarget.c)
 */

signed __int32 __fastcall EtwpBufferingModeCompressionFlush(__int64 a1)
{
  signed __int32 result; // eax

  result = *(_DWORD *)(a1 + 1168);
  if ( result )
  {
    EtwpCompressPendingBuffers();
    ExAcquirePushLockExclusiveEx(a1 + 1144, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1144), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1144));
    return KeAbPostRelease(a1 + 1144);
  }
  return result;
}
