/*
 * XREFs of ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0001C08
 * Callers:
 *     vConvertXformToMatrix @ 0x1C0001B20 (vConvertXformToMatrix.c)
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C0003B50 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C000B300 (-bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0039250 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C01523F0 (-bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIsZero(EFLOAT *this)
{
  return *(float *)this == 0.0;
}
