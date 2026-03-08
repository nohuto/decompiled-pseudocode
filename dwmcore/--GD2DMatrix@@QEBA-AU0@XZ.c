/*
 * XREFs of ??GD2DMatrix@@QEBA?AU0@XZ @ 0x18027972C
 * Callers:
 *     ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x1800BFE98 (-Negate@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ??0D2DMatrix@@QEAA@MMMMMMMMMMMMMMMM@Z @ 0x180279304 (--0D2DMatrix@@QEAA@MMMMMMMMMMMMMMMM@Z.c)
 */

D2DMatrix *__fastcall D2DMatrix::operator-(_DWORD *a1, D2DMatrix *a2)
{
  D2DMatrix::D2DMatrix(
    a2,
    COERCE_FLOAT(*a1 ^ _xmm),
    COERCE_FLOAT(a1[1] ^ _xmm),
    COERCE_FLOAT(a1[2] ^ _xmm),
    COERCE_FLOAT(a1[3] ^ _xmm),
    COERCE_FLOAT(a1[4] ^ _xmm),
    COERCE_FLOAT(a1[5] ^ _xmm),
    COERCE_FLOAT(a1[6] ^ _xmm),
    COERCE_FLOAT(a1[7] ^ _xmm),
    COERCE_FLOAT(a1[8] ^ _xmm),
    COERCE_FLOAT(a1[9] ^ _xmm),
    COERCE_FLOAT(a1[10] ^ _xmm),
    COERCE_FLOAT(a1[11] ^ _xmm),
    COERCE_FLOAT(a1[12] ^ _xmm),
    COERCE_FLOAT(a1[13] ^ _xmm),
    COERCE_FLOAT(a1[14] ^ _xmm),
    COERCE_FLOAT(a1[15] ^ _xmm));
  return a2;
}
