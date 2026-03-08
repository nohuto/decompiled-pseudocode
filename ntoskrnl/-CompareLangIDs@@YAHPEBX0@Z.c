/*
 * XREFs of ?CompareLangIDs@@YAHPEBX0@Z @ 0x1402FEBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareLangIDs(unsigned __int16 *a1, _WORD *a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v3; // cx

  v2 = *a1;
  v3 = a2[4];
  if ( v3 == v2 )
    return 0LL;
  else
    return v3 < v2 ? 1 : -1;
}
