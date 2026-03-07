__int64 __fastcall CmSiRWLockAcquireExclusive(unsigned __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  result = KeAbPreAcquire((__int64)a1, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a1, result, (__int64)a1);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  return result;
}
