/*
 * XREFs of PpmIdleUpdateHvStates @ 0x14099AC10
 * Callers:
 *     <none>
 * Callees:
 *     HvlGetLpIndexFromApicId @ 0x14053DBA0 (HvlGetLpIndexFromApicId.c)
 *     HvlConfigureIdleStates @ 0x1405441F8 (HvlConfigureIdleStates.c)
 */

__int64 __fastcall PpmIdleUpdateHvStates(__int64 a1)
{
  int LpIndexFromApicId; // eax

  if ( (HvlEnlightenments & 0x400) == 0 )
    return 3221225659LL;
  LpIndexFromApicId = HvlGetLpIndexFromApicId(*(unsigned int *)(a1 + 4));
  if ( LpIndexFromApicId == -1 )
    return 3221225485LL;
  else
    return HvlConfigureIdleStates(LpIndexFromApicId, *(_OWORD **)(a1 + 8));
}
