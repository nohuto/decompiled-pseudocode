signed __int64 __fastcall CmpLockKcbShared(__int64 a1)
{
  __int64 v2; // rdi
  signed __int64 result; // rax

  v2 = KeAbPreAcquire(a1 + 48, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 48), 0, v2, a1 + 48);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
  return result;
}
