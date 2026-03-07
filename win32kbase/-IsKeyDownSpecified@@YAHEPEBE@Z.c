__int64 __fastcall IsKeyDownSpecified(char a1, const unsigned __int8 *a2)
{
  unsigned int v2; // eax

  v2 = 0;
  while ( 1 )
  {
    if ( !*a2 )
      return 0LL;
    if ( a1 == *a2 )
      break;
    ++v2;
    ++a2;
    if ( v2 >= 6 )
      return 0LL;
  }
  return 1LL;
}
