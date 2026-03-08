/*
 * XREFs of ComputeBytesPerScanLine @ 0x1C0253E3C
 * Callers:
 *     GetCachedSMP @ 0x1C0252734 (GetCachedSMP.c)
 *     HT_CreateHalftoneBrush @ 0x1C0252A88 (HT_CreateHalftoneBrush.c)
 *     HT_CreateStandardMonoPattern @ 0x1C0252C14 (HT_CreateStandardMonoPattern.c)
 *     CreateStandardMonoPattern @ 0x1C0254780 (CreateStandardMonoPattern.c)
 *     SetupAAHeader @ 0x1C025E588 (SetupAAHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeBytesPerScanLine(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // edx

  if ( !a3 )
    return 0LL;
  if ( a1 > 0xF7 )
  {
    v11 = a1 - 248;
    if ( !v11 )
      goto LABEL_25;
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_25;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_25;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_25;
    v15 = v14 - 1;
    if ( !v15 || (v16 = v15 - 1) == 0 )
    {
LABEL_24:
      a3 *= 2;
      goto LABEL_25;
    }
    v17 = v16 - 1;
    if ( !v17 )
      goto LABEL_25;
    if ( v17 != 1 )
      return 0LL;
LABEL_23:
    a3 = (a3 + 1) >> 1;
    goto LABEL_25;
  }
  if ( a1 == 247 )
    goto LABEL_25;
  v4 = a1 - 1;
  if ( !v4 )
  {
    a3 = (a3 + 7) >> 3;
    goto LABEL_25;
  }
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_23;
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_25;
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_24;
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 - 239 >= 2 )
        return 0LL;
    }
    else
    {
      a3 *= 4;
    }
  }
  else
  {
    a3 *= 3;
  }
LABEL_25:
  if ( a2 > 1 && (v18 = a3 % a2) != 0 )
    return a2 + a3 - v18;
  else
    return a3;
}
