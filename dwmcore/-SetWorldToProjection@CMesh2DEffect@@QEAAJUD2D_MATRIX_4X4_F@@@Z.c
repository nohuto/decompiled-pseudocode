/*
 * XREFs of ?SetWorldToProjection@CMesh2DEffect@@QEAAJUD2D_MATRIX_4X4_F@@@Z @ 0x1801087D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::SetWorldToProjection(CMesh2DEffect *this, struct D2D_MATRIX_4X4_F *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1

  result = 0LL;
  v3 = *(_OWORD *)&a2->m[1][0];
  *((_OWORD *)this + 2) = *(_OWORD *)&a2->_11;
  v4 = *(_OWORD *)&a2->m[2][0];
  *((_OWORD *)this + 3) = v3;
  v5 = *(_OWORD *)&a2->m[3][0];
  *((_OWORD *)this + 4) = v4;
  *((_OWORD *)this + 5) = v5;
  return result;
}
