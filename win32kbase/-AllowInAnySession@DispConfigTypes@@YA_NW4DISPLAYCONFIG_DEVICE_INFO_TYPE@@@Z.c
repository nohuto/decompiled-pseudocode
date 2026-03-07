bool __fastcall DispConfigTypes::AllowInAnySession(int a1)
{
  if ( a1 > 100 )
    return 0;
  if ( a1 == 100 )
    return 1;
  if ( a1 <= -10 )
    return a1 == -10 || a1 == -21 || a1 == -25 || a1 == -20 || a1 == -13 || a1 == -24 || a1 == -22 || a1 == -11;
  if ( a1 == -2 || a1 == -7 || a1 == 2 || a1 == -8 || a1 == 4 || a1 == 3 )
    return 1;
  return a1 == 6;
}
