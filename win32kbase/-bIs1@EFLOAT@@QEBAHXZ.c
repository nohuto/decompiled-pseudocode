/*
 * XREFs of ?bIs1@EFLOAT@@QEBAHXZ @ 0x1C000DFC8
 * Callers:
 *     vConvertXformToMatrix @ 0x1C000DEE0 (vConvertXformToMatrix.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0059750 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs1(EFLOAT *this)
{
  return *(float *)this == 1.0;
}
