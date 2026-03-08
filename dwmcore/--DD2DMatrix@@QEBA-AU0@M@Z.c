/*
 * XREFs of ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x1802793F8
 * Callers:
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x180014650 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ??0D2DMatrix@@QEAA@MMMMMMMMMMMMMMMM@Z @ 0x180279304 (--0D2DMatrix@@QEAA@MMMMMMMMMMMMMMMM@Z.c)
 */

D2DMatrix *__fastcall D2DMatrix::operator*(float *a1, D2DMatrix *a2, float a3)
{
  D2DMatrix::D2DMatrix(
    a2,
    a3 * *a1,
    a3 * a1[1],
    a3 * a1[2],
    a3 * a1[3],
    a3 * a1[4],
    a3 * a1[5],
    a3 * a1[6],
    a3 * a1[7],
    a3 * a1[8],
    a3 * a1[9],
    a3 * a1[10],
    a3 * a1[11],
    a3 * a1[12],
    a3 * a1[13],
    a3 * a1[14],
    a3 * a1[15]);
  return a2;
}
