char __fastcall MatchData_64(unsigned __int64 a1, int a2, unsigned __int64 a3)
{
  char result; // al
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  result = 0;
  if ( !a2 )
    return 1;
  v4 = a2 - 1;
  if ( !v4 )
    return a1 == a3;
  v5 = v4 - 1;
  if ( !v5 )
    return a1 <= a3;
  v6 = v5 - 1;
  if ( !v6 )
    return a1 < a3;
  v7 = v6 - 1;
  if ( !v7 )
    return a1 >= a3;
  if ( v7 == 1 )
    return a1 > a3;
  return result;
}
