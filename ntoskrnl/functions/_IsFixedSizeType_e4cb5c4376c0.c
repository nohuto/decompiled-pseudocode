bool __fastcall IsFixedSizeType(__int16 a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  bool result; // al

  v1 = (a1 & 0xFFF) - 18;
  result = 0;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 != 5 )
          return 1;
      }
    }
  }
  return result;
}
