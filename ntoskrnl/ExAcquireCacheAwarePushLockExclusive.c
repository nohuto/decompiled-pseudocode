/*
 * XREFs of ExAcquireCacheAwarePushLockExclusive @ 0x140239E80
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x140239F00 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExAcquireCacheAwarePushLockExclusive(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = KeAbPreAcquire(a1, 0LL, 0LL);
  result = ExfAcquireCacheAwarePushLockExclusiveEx(a1, v2, a1);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
