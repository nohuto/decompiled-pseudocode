INT __stdcall EngMulDiv(INT a, INT b, INT c)
{
  INT v3; // ebx
  INT v4; // r9d
  signed int v5; // r10d
  __int64 v6; // r11
  __int64 v7; // r8
  unsigned __int64 v8; // rax

  v3 = b;
  v4 = -a;
  if ( a >= 0 )
    v4 = a;
  v5 = ((a >> 31) & 0xFFFFFFFE) + 1;
  if ( b < 0 )
  {
    v5 = -v5;
    v3 = -b;
  }
  if ( c )
  {
    if ( c < 0 )
    {
      v5 = -v5;
      c = -c;
    }
    v6 = c;
    v7 = c / 2 + v3 * (__int64)v4;
    if ( v6 == 96 )
      v8 = v7 / 96;
    else
      v8 = v7 / v6;
    if ( v8 > 0x7FFFFFFF )
    {
      if ( v5 > 0 )
        LODWORD(v8) = 0x7FFFFFFF;
      else
        LODWORD(v8) = 0x80000000;
    }
    else if ( v5 <= 0 )
    {
      LODWORD(v8) = -(int)v8;
    }
  }
  else
  {
    LODWORD(v8) = 0x80000000;
    if ( v5 > 0 )
      LODWORD(v8) = 0x7FFFFFFF;
  }
  return v8;
}
