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
