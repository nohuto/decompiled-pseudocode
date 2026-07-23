/*
 * XREFs of _wcsistr @ 0x140980064
 * Callers:
 *     SubstringMatch @ 0x14097FFD4 (SubstringMatch.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall wcsistr(_WORD *a1, char *a2)
{
  _WORD *v3; // r9
  __int16 v5; // ax
  signed __int64 i; // r11
  __int16 *v7; // r10
  __int16 v8; // cx
  __int16 v9; // r8
  __int16 v10; // dx
  __int16 v11; // cx

  v3 = a1;
  if ( !*(_WORD *)a2 )
    return a1;
  v5 = *a1;
  if ( !*a1 )
    return 0LL;
  for ( i = (char *)a1 - a2; ; i += 2LL )
  {
    v7 = (__int16 *)a2;
    if ( v5 )
      break;
LABEL_13:
    if ( !*v7 )
      return v3;
    v5 = *++v3;
    if ( !*v3 )
      return 0LL;
  }
  while ( 1 )
  {
    v8 = *v7;
    if ( !*v7 )
      return v3;
    v9 = *(__int16 *)((char *)v7 + i);
    v10 = v8 - 32;
    if ( (unsigned __int16)(v8 - 97) > 0x19u )
      v10 = *v7;
    v11 = v9 - 32;
    if ( (unsigned __int16)(v9 - 97) > 0x19u )
      v11 = *(__int16 *)((char *)v7 + i);
    if ( v11 == v10 )
    {
      if ( *(__int16 *)((char *)++v7 + i) )
        continue;
    }
    goto LABEL_13;
  }
}
