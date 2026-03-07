__int64 __fastcall DispConfigTypes::GetSetterTypeSize(int a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  int v3; // edx

  if ( a1 <= -6 )
  {
    if ( a1 == -6 )
      return 28LL;
    if ( a1 != -30 && a1 != -27 )
    {
      if ( a1 == -23 )
        return 48LL;
      if ( a1 != -19 )
      {
        if ( a1 != -18 )
        {
          v1 = 0;
          if ( a1 == -16 )
            return 68;
          return v1;
        }
        return 28LL;
      }
    }
    return 24LL;
  }
  if ( (unsigned int)(a1 + 4) <= 0xE )
  {
    v3 = 20993;
    if ( _bittest(&v3, a1 + 4) )
      return 24LL;
  }
  result = 312LL;
  if ( a1 != 13 )
    return 0LL;
  return result;
}
