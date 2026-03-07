bool __fastcall IsTrustletCreateAttributeWellFormed(_QWORD *a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // r9
  unsigned int v4; // r8d
  unsigned int v5; // r11d
  unsigned int v6; // eax
  __int64 **v7; // rdi
  unsigned int i; // r10d

  v2 = 0;
  if ( a2 != 8 )
  {
    if ( (a2 & 7) != 0 || (unsigned __int64)(a2 - 24) > 0x70 )
      return 0;
    v3 = 0LL;
    v4 = (unsigned int)(a2 - 8) >> 3;
    v5 = 0;
    if ( v4 )
    {
      while ( 1 )
      {
        v6 = HIDWORD(a1[v3 + 1]);
        if ( (_BYTE)v6 || v6 >= 0x100 || (a1[v3 + 1] & 0xF0000000LL) != 0 )
          return 0;
        v7 = `IsTrustletCreateAttributeWellFormed'::`2'::KnownAttributeTypes;
        for ( i = 0; i < 5; ++i )
        {
          if ( BYTE2(a1[v3 + 1]) == 20 )
            v2 = 1;
          if ( LODWORD(a1[v3 + 1]) == *(_DWORD *)*v7 )
            break;
          ++v7;
        }
        if ( i == 5 )
          return 0;
        ++v5;
        v3 = (unsigned int)BYTE1(a1[v3 + 1]) + (_DWORD)v3 + 1;
        if ( (unsigned int)v3 >= v4 )
        {
          if ( v5 > 4 )
            return 0;
          break;
        }
      }
    }
    if ( (_DWORD)v3 != v4 )
      return 0;
    if ( !v2 )
      return *a1 != 0LL;
  }
  return 1;
}
