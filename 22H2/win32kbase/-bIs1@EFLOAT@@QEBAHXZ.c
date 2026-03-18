/*
 * XREFs of ?bIs1@EFLOAT@@QEBAHXZ @ 0x1C0001B00
 * Callers:
 *     vConvertXformToMatrix @ 0x1C0001B20 (vConvertXformToMatrix.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0039770 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs1(EFLOAT *this)
{
  return *(float *)this == 1.0;
}
