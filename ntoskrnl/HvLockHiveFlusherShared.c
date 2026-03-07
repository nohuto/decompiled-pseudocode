signed __int64 __fastcall HvLockHiveFlusherShared(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  __int64 v2; // rbx
  signed __int64 result; // rax

  v1 = (volatile signed __int64 *)(a1 + 72);
  v2 = KeAbPreAcquire(a1 + 72, 0LL);
  result = _InterlockedCompareExchange64(v1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v1, 0, v2, (__int64)v1);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
