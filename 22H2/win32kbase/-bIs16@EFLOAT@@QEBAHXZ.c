/*
 * XREFs of ?bIs16@EFLOAT@@QEBAHXZ @ 0x1C00387FC
 * Callers:
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0039250 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0039770 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs16(EFLOAT *this)
{
  return *(float *)this == 16.0;
}
