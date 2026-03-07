__int64 __fastcall rimInputTypeFromDeviceTypeAndUsages(int a1, __int16 a2, __int16 a3)
{
  __int64 result; // rax

  if ( !a1 )
    return 1LL;
  if ( a1 == 1 )
    return 2LL;
  if ( a1 != 2 )
    return 0LL;
  if ( a2 != 13 )
    return 32LL;
  result = 4LL;
  if ( (unsigned __int16)(a3 - 1) > 1u )
  {
    if ( a3 == 4 )
      return 16LL;
    if ( a3 == 5 )
      return 8LL;
    return 32LL;
  }
  return result;
}
