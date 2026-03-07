void __fastcall vLoadAndConvertRGB24ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4)
{
  unsigned __int8 *v4; // r8
  unsigned __int8 *v5; // rdx
  unsigned __int8 v6; // al
  unsigned int v7; // [rsp+18h] [rbp+18h]

  v4 = &a2[3 * a3];
  v5 = &v4[3 * a4];
  while ( v4 != v5 )
  {
    BYTE2(v7) = *v4;
    BYTE1(v7) = v4[1];
    v6 = v4[2];
    v4 += 3;
    LOBYTE(v7) = v6;
    HIBYTE(v7) = -1;
    *a1++ = v7;
  }
}
