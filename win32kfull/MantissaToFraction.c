__int64 __fastcall MantissaToFraction(__int16 a1, unsigned int a2)
{
  unsigned __int16 v2; // r11
  unsigned int v3; // ebx
  __int16 v4; // r10
  __int64 result; // rax
  unsigned __int16 v6; // dx
  __int16 v7; // cx
  __int16 v8; // r9
  bool v9; // zf
  unsigned __int16 v10; // bx
  unsigned __int16 v11; // r8
  unsigned __int16 i; // r8

  v2 = (unsigned __int16)a2 >> 9;
  v3 = HIWORD(a2);
  v4 = a2 & 0x1FF;
  result = 0LL;
  v6 = (a2 & 0x1FF) + (((unsigned __int16)a2 >> 9) & 7);
  v7 = a1 - v6;
  v8 = 1;
  v9 = v7 == 0;
  if ( v7 > 0 )
  {
    v8 = 2;
    v6 = v4 + ((v2 >> 3) & 7);
    v7 -= v6;
    v9 = v7 == 0;
    if ( v7 > 0 )
    {
      v8 = 3;
      v6 = v4 + (v3 & 7);
      v7 -= v6;
      v9 = v7 == 0;
      if ( v7 > 0 )
      {
        v10 = (unsigned __int16)v3 >> 3;
        v8 = 4;
        v11 = v10 | 0x2000;
        v6 = v4 + (v10 & 7);
        if ( (v2 & 0x40) == 0 )
          v11 = v10;
        for ( i = v11 >> 1; ; v6 = v4 + (i & 3) )
        {
          v7 -= v6;
          v9 = v7 == 0;
          if ( v7 <= 0 )
            break;
          i >>= 2;
          ++v8;
        }
      }
    }
  }
  if ( !v9 )
  {
    --v8;
    result = (100000 * (v6 + v7) + (v6 >> 1)) / (unsigned int)v6;
  }
  if ( v8 )
    return (unsigned int)(dword_1C0327B20[v8 - 1] + result);
  return result;
}
