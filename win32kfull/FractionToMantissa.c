__int64 __fastcall FractionToMantissa(int a1, unsigned int a2)
{
  unsigned int v2; // r8d
  __int16 v3; // r11
  unsigned __int16 v4; // r9
  int v5; // ebx
  __int16 v6; // r10
  int v7; // eax
  unsigned __int16 v8; // cx
  int v9; // edx
  unsigned __int16 v10; // r8
  unsigned __int16 v11; // ax
  unsigned __int16 i; // ax

  v2 = HIWORD(a2);
  v3 = (unsigned __int16)a2 >> 9;
  v4 = 0;
  v5 = a1 % 100000;
  v6 = a2 & 0x1FF;
  v7 = a1 / 100000;
  v8 = (a2 & 0x1FF) + (((unsigned __int16)a2 >> 9) & 7);
  if ( v7 )
  {
    v4 = (a2 & 0x1FF) + (((unsigned __int16)a2 >> 9) & 7);
    v8 = v6 + (((unsigned __int16)a2 >> 12) & 7);
    if ( v7 != 1 )
    {
      v4 += v8;
      v9 = v7 - 3;
      v8 = v6 + (v2 & 7);
      if ( v7 != 2 )
      {
        v10 = (unsigned __int16)v2 >> 3;
        v4 += v8;
        v11 = v10 | 0x2000;
        v8 = v6 + (v10 & 7);
        if ( (v3 & 0x40) == 0 )
          v11 = v10;
        for ( i = v11 >> 1; v9; --v9 )
        {
          v4 += v8;
          i >>= 2;
          v8 = v6 + (i & 3);
        }
      }
    }
  }
  return v4 + (((v5 * (unsigned int)v8) >> 1) + 25000) / 0xC350;
}
