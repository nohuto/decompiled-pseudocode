/*
 * XREFs of ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C02D7558
 * Callers:
 *     EngPlgBlt @ 0x1C028BFC0 (EngPlgBlt.c)
 * Callees:
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C014727C (-bSubOverflow@@YAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?bAddOverflow@@YAHJJ@Z @ 0x1C02D5494 (-bAddOverflow@@YAHJJ@Z.c)
 */

__int64 __fastcall lSizeDDA(struct _PLGDDA *a1)
{
  int *v1; // r9
  int v2; // r8d
  __int64 v3; // r10
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  int v9; // r11d
  int v10; // r8d
  int v11; // r8d
  int v12; // ecx
  bool v13; // cc
  int v15; // ecx
  _DWORD v16[3]; // [rsp+24h] [rbp-24h] BYREF

  v1 = v16;
  v2 = *((_DWORD *)a1 + 1);
  v3 = 3LL;
  v16[0] = *((_DWORD *)a1 + 3);
  v4 = v2;
  v16[1] = *((_DWORD *)a1 + 5);
  v16[2] = *((_DWORD *)a1 + 7);
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
  if ( bSubOverflow(v5, v6) )
    return 0LL;
  v10 = v8 - v7;
  if ( !v10 )
    v10 = v9;
  if ( bAddOverflow(v10) )
    return 0LL;
  v12 = v11 + 4;
  if ( v11 == -4 )
    goto LABEL_20;
  if ( v12 >= 0 )
  {
    if ( v12 <= 0 )
    {
      if ( v11 == 2147483644 || -2147483647 / v12 < -8 )
        return 0LL;
      goto LABEL_20;
    }
    v13 = 0x7FFFFFFF / v12 < 8;
  }
  else
  {
    v13 = v12 < -268435456;
  }
  if ( v13 )
    return 0LL;
LABEL_20:
  if ( bAddOverflow(8 * v12) )
    return 0LL;
  return (unsigned int)(v15 + 4);
}
