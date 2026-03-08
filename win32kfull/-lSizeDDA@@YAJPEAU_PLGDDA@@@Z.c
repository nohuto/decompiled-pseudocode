/*
 * XREFs of ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C0301F48
 * Callers:
 *     EngPlgBlt @ 0x1C0292140 (EngPlgBlt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C014D8F6 (-bSubOverflow@@YAHJJ@Z.c)
 *     ?bAddOverflow@@YAHJJ@Z @ 0x1C02FFEA4 (-bAddOverflow@@YAHJJ@Z.c)
 */

__int64 __fastcall lSizeDDA(struct _PLGDDA *a1)
{
  int *v1; // r8
  int v2; // r9d
  __int64 v3; // r10
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // r9d
  int v10; // r11d
  int v11; // r9d
  int v12; // r9d
  int v13; // ecx
  bool v14; // cc
  int v16; // ecx
  _DWORD v17[3]; // [rsp+24h] [rbp-24h] BYREF

  v1 = v17;
  v2 = *((_DWORD *)a1 + 1);
  v3 = 3LL;
  v17[0] = *((_DWORD *)a1 + 3);
  v4 = v2;
  v17[1] = *((_DWORD *)a1 + 5);
  v17[2] = *((_DWORD *)a1 + 7);
  do
  {
    v5 = *v1;
    v6 = *v1++;
    if ( v4 <= v5 )
      v6 = v4;
    v4 = v6;
    if ( v2 >= v5 )
      v5 = v2;
    v2 = v5;
    --v3;
  }
  while ( v3 );
  LOBYTE(v7) = bSubOverflow(v5, v6);
  if ( v7 )
    return 0LL;
  v11 = v9 - v8;
  if ( !v11 )
    v11 = v10;
  if ( bAddOverflow(v11) )
    return 0LL;
  v13 = v12 + 4;
  if ( v12 == -4 )
    goto LABEL_21;
  if ( v13 >= 0 )
  {
    if ( v13 <= 0 )
    {
      if ( v12 == 2147483644 || -2147483647 / v13 < -8 )
        return 0LL;
      goto LABEL_21;
    }
    v14 = 0x7FFFFFFF / v13 < 8;
  }
  else
  {
    v14 = v13 < -268435456;
  }
  if ( v14 )
    return 0LL;
LABEL_21:
  if ( bAddOverflow(8 * v13) )
    return 0LL;
  return (unsigned int)(v16 + 4);
}
