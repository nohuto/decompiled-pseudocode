/*
 * XREFs of _LDunscale @ 0x1800CED68
 * Callers:
 *     _LXp_addh @ 0x1800BBD9C (_LXp_addh.c)
 *     _LXp_mulh @ 0x1800BC16C (_LXp_mulh.c)
 *     _LXp_setw @ 0x1800BC498 (_LXp_setw.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LDunscale(_WORD *a1, unsigned __int16 *a2)
{
  return Dunscale(a1, a2);
}
