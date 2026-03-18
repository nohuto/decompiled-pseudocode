/*
 * XREFs of RtlBackoff @ 0x14029F5C0
 * Callers:
 *     KiSetDpcRequestFlag @ 0x14022B9E4 (KiSetDpcRequestFlag.c)
 *     KiEndPartialDpcProcessing @ 0x14023E4B8 (KiEndPartialDpcProcessing.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForTimerExpiration @ 0x140307E90 (KiCheckForTimerExpiration.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     RtlReleaseSwapReference @ 0x1403C7918 (RtlReleaseSwapReference.c)
 *     RtlAcquireSwapReference @ 0x1403C79D4 (RtlAcquireSwapReference.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x1405EE634 (RtlpFcAddDelayedUsageReportToBuffer.c)
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
