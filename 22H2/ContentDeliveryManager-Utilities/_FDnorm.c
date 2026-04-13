/*
 * XREFs of _FDnorm @ 0x1800CE6E4
 * Callers:
 *     _FDscale @ 0x1800BA380 (_FDscale.c)
 *     _FDunscale @ 0x1800CE918 (_FDunscale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FDnorm(unsigned __int16 *a1)
{
  __int16 v1; // r11
  __int16 v3; // ax
  unsigned __int16 v4; // r10
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // r9
  int v7; // kr00_4
  unsigned __int16 v8; // cx

  v1 = a1[1] & 0x8000;
  v3 = 0;
  v4 = 1;
  v5 = a1[1] & 0x7F;
  if ( v5 || *a1 )
  {
    v6 = a1[1] & 0x7F;
    if ( !v5 )
    {
      v5 = *a1;
      v4 = -15;
      v6 = *a1;
      *a1 = 0;
    }
    while ( v5 < 0x80u )
    {
      v7 = 2 * *a1;
      v5 = HIWORD(v7) | (2 * v6);
      *a1 = v7;
      v6 = v5;
      --v4;
    }
    if ( v5 >= 0x100u )
    {
      v5 = v6;
      do
      {
        ++v4;
        v8 = (*a1 >> 1) | (v5 << 15);
        v5 >>= 1;
        *a1 = v8;
      }
      while ( v5 >= 0x100u );
    }
    v3 = v5 & 0x7F;
  }
  a1[1] = v1 | v3;
  return v4;
}
