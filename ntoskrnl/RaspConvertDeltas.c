/*
 * XREFs of RaspConvertDeltas @ 0x140383E44
 * Callers:
 *     RaspGetUnscaledGlyphData @ 0x140382708 (RaspGetUnscaledGlyphData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaspConvertDeltas(__int64 a1)
{
  __int16 v1; // ax
  unsigned __int16 v2; // r11
  __int16 v3; // r10
  __int16 *v4; // rdx
  _WORD *v5; // r8
  __int16 v6; // si
  __int16 v7; // bp
  __int16 v8; // bx
  __int16 v9; // di
  __int16 v10; // cx

  v1 = 0;
  if ( *(__int16 *)a1 <= 0 )
    return 0LL;
  v2 = *(_WORD *)(a1 + 24);
  v3 = 0;
  v4 = *(__int16 **)(a1 + 50);
  v5 = *(_WORD **)(a1 + 58);
  v6 = *(_WORD *)(a1 + 10);
  v7 = *(_WORD *)(a1 + 2);
  v8 = *(_WORD *)(a1 + 14);
  v9 = *(_WORD *)(a1 + 6);
  v10 = 0;
  if ( !v2 )
    return 0LL;
  while ( 1 )
  {
    v1 += *v4;
    v10 += *v5;
    *v4 = v1;
    *v5 = v10;
    if ( *v4 > v6 || *v4 < v7 || v10 > v8 || v10 < v9 )
      break;
    v4 += 2;
    v5 += 2;
    if ( (unsigned __int16)++v3 >= v2 )
      return 0LL;
  }
  return 3221225473LL;
}
