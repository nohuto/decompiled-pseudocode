bool __fastcall RtlpValidateAsciiStd3AndLength(unsigned __int64 a1, int a2, char a3, char a4)
{
  unsigned __int16 *v4; // rbx
  char v6; // si
  unsigned int v8; // r10d
  unsigned __int16 *v9; // r11
  unsigned __int64 v10; // r9
  unsigned __int16 *i; // r8

  v4 = (unsigned __int16 *)(a1 - 2);
  v6 = a3;
  LOWORD(v8) = 46;
  v9 = (unsigned __int16 *)(a1 + 2LL * a2);
  if ( a3 )
    v10 = a1 + 2LL * (int)FindEmailAt(a1, a2);
  else
    v10 = a1 - 2;
  if ( (unsigned __int16 *)v10 == v9 || a2 <= 0 )
    return 0;
  for ( i = (unsigned __int16 *)a1; i != v9; ++i )
  {
    v8 = *i;
    if ( v8 >= 0x7F )
      return 0;
    if ( v8 == (v6 != 0 ? 64 : 46) )
    {
      if ( v6 )
      {
        if ( i == (unsigned __int16 *)a1 )
          return 0;
        if ( i == (unsigned __int16 *)(v10 - 2) )
          v6 = 0;
      }
      else if ( i == v4 + 1
             || (__int64)(((char *)i - (char *)v4) & 0xFFFFFFFFFFFFFFFEuLL) > 128
             || a4 && (unsigned __int64)i > a1 && *(i - 1) == 45 )
      {
        return 0;
      }
      v4 = i;
    }
    else if ( v6 )
    {
      if ( !(_WORD)v8 )
        return 0;
    }
    else if ( a4 && (v8 == 45 && i == v4 + 1 || !ValidateStd3Range((unsigned __int16)v8)) || v8 < 0x20 )
    {
      return 0;
    }
  }
  if ( v6 )
    return 1;
  if ( (__int64)(((char *)v9 - (char *)v4) & 0xFFFFFFFFFFFFFFFEuLL) > 128
    || (__int64)((__int64)v9 - v10) >> 1 > 256LL - ((_WORD)v8 != 46) )
  {
    return 0;
  }
  if ( a4 )
    return (_WORD)v8 != 45;
  return 1;
}
