/*
 * XREFs of ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C029D320
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C011B94C (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029D344 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafeDivide<unsigned long,unsigned long,unsigned long>(unsigned int a1, unsigned int a2, int *a3)
{
  if ( !a2 )
    return 2147500037LL;
  *a3 = a1 / a2;
  return 0LL;
}
