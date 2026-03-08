/*
 * XREFs of ?GetWorldToProjection@CMesh2DEffect@@QEBA?AUD2D_MATRIX_4X4_F@@XZ @ 0x180108750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_MATRIX_4X4_F *__fastcall CMesh2DEffect::GetWorldToProjection(
        CMesh2DEffect *this,
        struct D2D_MATRIX_4X4_F *__return_ptr retstr)
{
  struct D2D_MATRIX_4X4_F *result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1

  result = retstr;
  v3 = *((_OWORD *)this + 3);
  *(_OWORD *)&retstr->_11 = *((_OWORD *)this + 2);
  v4 = *((_OWORD *)this + 4);
  *(_OWORD *)&retstr->m[1][0] = v3;
  v5 = *((_OWORD *)this + 5);
  *(_OWORD *)&retstr->m[2][0] = v4;
  *(_OWORD *)&retstr->m[3][0] = v5;
  return result;
}
