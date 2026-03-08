/*
 * XREFs of ?CompareLangName@@YAHPEBX0@Z @ 0x140394350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareLangName(unsigned __int16 *a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r8
  unsigned __int16 i; // dx
  unsigned __int16 v4; // r10
  unsigned __int16 v5; // r9
  unsigned int v6; // r9d

  v2 = *a2;
  for ( i = *a1; *a1; i = *a1 )
  {
    v4 = *v2;
    if ( !*v2 )
      break;
    if ( (unsigned __int16)(i - 65) <= 0x19u )
      i |= 0x20u;
    v5 = v4 | 0x20;
    if ( (unsigned __int16)(v4 - 65) > 0x19u )
      v5 = *v2;
    if ( i == 95 )
      i = 45;
    if ( v5 == 95 )
      v5 = 45;
    v6 = i - v5;
    if ( v6 )
      return v6;
    ++a1;
    ++v2;
  }
  if ( *a1 || *v2 )
    return *a1 != 0 ? 1 : -1;
  else
    return 0LL;
}
