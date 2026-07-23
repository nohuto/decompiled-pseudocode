/*
 * XREFs of RtlBackoff @ 0x1402FDE50
 * Callers:
 *     KiSetDpcRequestFlag @ 0x140211CF8 (KiSetDpcRequestFlag.c)
 *     KiInsertQueueDpc @ 0x1402C4660 (KiInsertQueueDpc.c)
 *     KiCheckForTimerExpiration @ 0x1402C90F0 (KiCheckForTimerExpiration.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     RtlAcquireSwapReference @ 0x1403A6B08 (RtlAcquireSwapReference.c)
 *     RtlReleaseSwapReference @ 0x1403A6ED8 (RtlReleaseSwapReference.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x14058F46C (RtlpFcAddDelayedUsageReportToBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBackoff(unsigned int *a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // [rsp+8h] [rbp+8h]

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
  v4 = 0;
  result = 10 * (((v1 - 1) & (unsigned int)v3) + v1) / MEMORY[0xFFFFF780000002D6];
  if ( (_DWORD)result )
  {
    do
    {
      _mm_pause();
      ++v4;
    }
    while ( v4 < (unsigned int)result );
  }
  return result;
}
