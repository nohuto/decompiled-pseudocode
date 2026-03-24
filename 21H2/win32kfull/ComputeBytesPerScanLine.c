/*
 * XREFs of ComputeBytesPerScanLine @ 0x1C0019884
 * Callers:
 *     HT_CreateStandardMonoPattern @ 0x1C001965C (HT_CreateStandardMonoPattern.c)
 *     GetCachedSMP @ 0x1C0019708 (GetCachedSMP.c)
 *     SetupAAHeader @ 0x1C001CE78 (SetupAAHeader.c)
 *     CreateStandardMonoPattern @ 0x1C01535F4 (CreateStandardMonoPattern.c)
 *     HT_CreateHalftoneBrush @ 0x1C0261318 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeBytesPerScanLine(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ecx
  int v5; // edx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx

  if ( !a3 )
    return 0LL;
  if ( a1 > 6 )
  {
    if ( a1 < 0xF5 )
      return 0LL;
    if ( a1 <= 0xFB )
      goto LABEL_6;
    if ( a1 <= 0xFD )
      goto LABEL_23;
    if ( a1 == 254 )
      goto LABEL_6;
    if ( a1 != 255 )
      return 0LL;
    goto LABEL_22;
  }
  if ( a1 == 6 )
  {
    a3 *= 4;
    goto LABEL_6;
  }
  v4 = a1 - 1;
  if ( v4 )
  {
    v7 = v4 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
        goto LABEL_6;
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          a3 *= 3;
          goto LABEL_6;
        }
        return 0LL;
      }
LABEL_23:
      a3 *= 2;
      goto LABEL_6;
    }
LABEL_22:
    a3 = (a3 + 1) >> 1;
    goto LABEL_6;
  }
  a3 = (a3 + 7) >> 3;
LABEL_6:
  if ( a2 > 1 && (v5 = a3 % a2) != 0 )
    return a2 + a3 - v5;
  else
    return a3;
}
