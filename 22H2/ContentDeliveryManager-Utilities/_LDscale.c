/*
 * XREFs of _LDscale @ 0x1800BBD90
 * Callers:
 *     _Stoldx @ 0x1800B3EC4 (_Stoldx.c)
 *     _LXp_addh @ 0x1800BBD9C (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800BC16C (_LXp_mulh.c)
 *     _LXp_setw @ 0x1800BC498 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LDscale(_WORD *a1, int a2)
{
  return Dscale(a1, a2);
}
