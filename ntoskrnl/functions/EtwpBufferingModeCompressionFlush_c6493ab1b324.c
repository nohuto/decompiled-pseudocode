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
