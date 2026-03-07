__int64 __fastcall HalpAcpiCalculateCacheSizeForOverrideTables(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rcx
  _BYTE *v5; // r10
  char v6; // al
  __int64 v7; // r11

  v2 = 0;
  if ( a2 )
  {
    while ( a2 >= 0x24 )
    {
      v4 = *(unsigned int *)(a1 + 4);
      if ( (unsigned int)v4 < 0x24 )
        break;
      if ( (unsigned int)v4 > a2 )
        break;
      v5 = (_BYTE *)a1;
      v6 = 0;
      v7 = (unsigned int)v4;
      do
      {
        v6 += *v5++;
        --v7;
      }
      while ( v7 );
      if ( v6 )
        break;
      a1 += v4;
      v2 += (v4 + 31) & 0xFFFFFFF8;
      a2 -= v4;
      if ( !a2 )
        return v2;
    }
    return 0;
  }
  return v2;
}
