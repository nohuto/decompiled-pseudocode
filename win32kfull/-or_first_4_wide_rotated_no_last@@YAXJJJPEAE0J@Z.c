void __fastcall or_first_4_wide_rotated_no_last(int a1, char a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  unsigned __int8 *v6; // r10
  __int64 v7; // r11
  unsigned __int8 *v8; // r8
  int v9; // eax
  int v10; // edx
  unsigned int v11; // edx

  v6 = &a4[3 * a1];
  if ( a4 != v6 )
  {
    v7 = a3;
    v8 = a5 + 2;
    do
    {
      v9 = a4[2];
      v10 = (a4[1] | (*a4 << 8)) << 8;
      a4 += 3;
      v11 = (v9 | (unsigned int)v10) << 8 >> a2;
      v8[1] = v11;
      *(v8 - 2) |= HIBYTE(v11);
      *(v8 - 1) = BYTE2(v11);
      *v8 = BYTE1(v11);
      v8 += v7;
    }
    while ( a4 != v6 );
  }
}
