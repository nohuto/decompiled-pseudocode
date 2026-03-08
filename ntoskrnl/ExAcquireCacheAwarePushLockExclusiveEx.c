/*
 * XREFs of ExAcquireCacheAwarePushLockExclusiveEx @ 0x14040CBF0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x140239F00 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

volatile signed __int32 *__fastcall ExAcquireCacheAwarePushLockExclusiveEx(volatile signed __int32 **a1, char a2)
{
  __int64 v3; // rbx
  volatile signed __int32 *result; // rax

  if ( (a2 & 2) != 0 )
    v3 = 0LL;
  else
    v3 = KeAbPreAcquire((__int64)a1, 0LL);
  result = ExfAcquireCacheAwarePushLockExclusiveEx(a1, v3, (__int64)a1);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  return result;
}
