/*
 * XREFs of ?bIs1Over16@EFLOAT@@QEBAHXZ @ 0x1C0169E38
 * Callers:
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0031EE0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs1Over16(EFLOAT *this)
{
  return *(float *)this == 0.0625;
}
