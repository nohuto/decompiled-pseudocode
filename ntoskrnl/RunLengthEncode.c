char __fastcall RunLengthEncode(int *a1, unsigned int a2)
{
  int v2; // r9d
  int v3; // r8d
  unsigned int v4; // edx
  _DWORD *i; // rcx

  if ( a2 && ((unsigned __int8)a1 & 3) == 0 && (a2 & 3) == 0 )
  {
    v2 = *a1;
    v3 = 1;
    v4 = a2 >> 2;
    if ( v4 <= 1 )
      return 1;
    for ( i = a1 + 1; *i == v2; ++i )
    {
      if ( ++v3 >= v4 )
        return 1;
    }
  }
  return 0;
}
