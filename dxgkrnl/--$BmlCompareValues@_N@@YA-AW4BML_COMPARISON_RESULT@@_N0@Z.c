__int64 __fastcall BmlCompareValues<bool>(char a1, char a2)
{
  __int64 result; // rax

  if ( a1 == a2 )
    return 0LL;
  result = 0xFFFFFFFFLL;
  if ( a1 == 1 )
    return 1LL;
  return result;
}
