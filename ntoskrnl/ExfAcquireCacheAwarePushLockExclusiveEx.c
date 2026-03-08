/*
 * XREFs of ExfAcquireCacheAwarePushLockExclusiveEx @ 0x140239F00
 * Callers:
 *     ExAcquireCacheAwarePushLockExclusive @ 0x140239E80 (ExAcquireCacheAwarePushLockExclusive.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x14040CBF0 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 */

volatile signed __int32 *__fastcall ExfAcquireCacheAwarePushLockExclusiveEx(
        volatile signed __int32 **a1,
        __int64 a2,
        __int64 a3)
{
  volatile signed __int32 *result; // rax
  volatile signed __int32 **v4; // rbx
  volatile signed __int32 **v6; // rdi

  result = *a1;
  v4 = a1 + 1;
  v6 = a1 + 32;
  if ( _interlockedbittestandset64(*a1, 0LL) )
    result = (volatile signed __int32 *)ExfAcquirePushLockExclusiveEx(*a1, a2, a3);
  while ( v4 < v6 )
  {
    result = *v4;
    if ( _interlockedbittestandset64(*v4, 0LL) )
    {
      result = *--v6;
      if ( _interlockedbittestandset64(result, 0LL) )
        result = (volatile signed __int32 *)ExfAcquirePushLockExclusiveEx(*v6, a2, a3);
    }
    else
    {
      ++v4;
    }
  }
  return result;
}
