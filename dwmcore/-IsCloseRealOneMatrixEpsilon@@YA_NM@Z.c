/*
 * XREFs of ?IsCloseRealOneMatrixEpsilon@@YA_NM@Z @ 0x1801D2DB8
 * Callers:
 *     ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1801FCC70 (-EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsCloseRealOneMatrixEpsilon(float a1)
{
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(a1 - 1.0) & _xmm) < 0.000081380211;
}
