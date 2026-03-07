signed __int64 __fastcall ExfTryToWakePushLock(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  volatile signed __int64 v2; // rtt

  result = *a1;
  if ( (*a1 & 4) == 0 && (result & 1) == 0 && (result & 2) != 0 )
  {
    v2 = *a1;
    result = _InterlockedCompareExchange64(a1, result + 4, result);
    if ( v2 == result )
      return ExpWakePushLock();
  }
  return result;
}
