__int64 __fastcall InputTypeToInertiaSourceType(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = 15;
  v2 = a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 2 )
          return 8;
      }
      else
      {
        return 2;
      }
    }
    else
    {
      return 4;
    }
  }
  else
  {
    return 1;
  }
  return v1;
}
