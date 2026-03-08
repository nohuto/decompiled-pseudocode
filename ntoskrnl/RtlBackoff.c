/*
 * XREFs of RtlBackoff @ 0x140241660
 * Callers:
 *     KiCheckForTimerExpiration @ 0x14022F940 (KiCheckForTimerExpiration.c)
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KiRetireDpcList @ 0x1402521E0 (KiRetireDpcList.c)
 *     KiSetDpcRequestFlag @ 0x1402B791C (KiSetDpcRequestFlag.c)
 *     RtlReleaseSwapReference @ 0x1402F03F8 (RtlReleaseSwapReference.c)
 *     RtlAcquireSwapReference @ 0x1402F04A0 (RtlAcquireSwapReference.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x1405B25C4 (RtlpFcAddDelayedUsageReportToBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBackoff(unsigned int *a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax
  unsigned __int64 v3; // rax
  unsigned int i; // ecx

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1 < 0x1FFF )
      v1 *= 2;
  }
  else
  {
    result = (unsigned int)KeNumberProcessors_0;
    if ( (_DWORD)KeNumberProcessors_0 == 1 )
      return result;
    v1 = 64;
  }
  *a1 = v1;
  v3 = __rdtsc();
  result = 10 * (((v1 - 1) & (unsigned int)v3) + v1) / MEMORY[0xFFFFF780000002D6];
  for ( i = 0; i < (unsigned int)result; ++i )
    _mm_pause();
  return result;
}
