__int64 __fastcall CmpLockTwoSecurityCachesExclusiveShared(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rdi
  unsigned __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 *v10; // rdi
  __int64 v11; // rbx

  if ( a1 < a2 )
  {
    v7 = (unsigned __int64 *)(a1 + 1784);
    v8 = KeAbPreAcquire(a1 + 1784, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
    return CmLockHiveSecurityShared(a2);
  }
  else if ( a1 > a2 )
  {
    CmLockHiveSecurityShared(a2);
    v10 = (unsigned __int64 *)(a1 + 1784);
    result = KeAbPreAcquire((__int64)v10, 0LL);
    v11 = result;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      result = ExfAcquirePushLockExclusiveEx(v10, result, (__int64)v10);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
  }
  else
  {
    v4 = (unsigned __int64 *)(a2 + 1784);
    result = KeAbPreAcquire(a2 + 1784, 0LL);
    v6 = result;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      result = ExfAcquirePushLockExclusiveEx(v4, result, (__int64)v4);
    if ( v6 )
      *(_BYTE *)(v6 + 18) = 1;
  }
  return result;
}
