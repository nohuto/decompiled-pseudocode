__int64 __fastcall CategoryMaskFromEvent(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx

  if ( a1 > 0x800C )
  {
    if ( a1 > 0x80000001 )
    {
      if ( a1 != -2147483645 && a1 != -2147483646 )
      {
        if ( a1 == -2147483644 || a1 == -2147483643 )
          return 512LL;
        if ( a1 != -2147483642 )
        {
          result = 256LL;
          if ( a1 != -2147483641 )
            return 0x8000LL;
          return result;
        }
      }
    }
    else if ( a1 != -2147483647 && a1 != 2147483440 && a1 != 0x80000000 && a1 != 2147483408 )
    {
      if ( a1 == 32782 )
        return 16LL;
      if ( a1 != 2147483409 && a1 != 2147483410 && a1 != 2147483424 )
        return 0x8000LL;
    }
    return 256LL;
  }
  if ( a1 == 32780 )
    return 8LL;
  if ( a1 <= 0x4004 )
  {
    if ( a1 != 16388 )
    {
      v7 = a1 - 4;
      if ( !v7 )
        return 1LL;
      v8 = v7 - 1;
      if ( !v8 )
        return 1LL;
      v9 = v8 - 1;
      if ( !v9 )
        return 1LL;
      v10 = v9 - 1;
      if ( !v10 )
        return 1LL;
      v11 = v10 - 16378;
      if ( v11 && v11 - 1 > 1 )
        return 0x8000LL;
    }
    return 2LL;
  }
  v1 = a1 - 16389;
  if ( !v1 )
    return 2LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 16382;
  if ( !v4 )
    return 4LL;
  v5 = v4 - 5;
  if ( !v5 )
    return 32LL;
  if ( v5 != 1 )
    return 0x8000LL;
  return 64LL;
}
