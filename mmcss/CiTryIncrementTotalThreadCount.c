__int64 __fastcall CiTryIncrementTotalThreadCount(volatile signed __int32 *a1, signed __int32 a2)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  v2 = *a1;
  if ( *a1 >= a2 )
    return 3221225769LL;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange(a1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( v2 >= a2 )
      return 3221225769LL;
  }
  return 0LL;
}
