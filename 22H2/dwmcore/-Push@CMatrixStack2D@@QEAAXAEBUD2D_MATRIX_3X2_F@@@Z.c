/*
 * XREFs of ?Push@CMatrixStack2D@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18026C008
 * Callers:
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x180261538 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180058584 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??$emplace_back@VMatrix3x2F@D2D1@@@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXVMatrix3x2F@D2D1@@@Z @ 0x18026BDD8 (--$emplace_back@VMatrix3x2F@D2D1@@@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@.c)
 */

void __fastcall CMatrixStack2D::Push(CMatrixStack2D *this, const struct D2D_MATRIX_3X2_F *a2)
{
  _QWORD *v2; // rax
  __int128 v3; // [rsp+20h] [rbp-48h] BYREF
  __int64 v4; // [rsp+30h] [rbp-38h]
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v3,
    (const struct D2D1::Matrix3x2F *)a2,
    (const struct D2D1::Matrix3x2F *)(*((_QWORD *)this + 1) - 24LL));
  v5 = v3;
  v6 = v4;
  detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::emplace_back<D2D1::Matrix3x2F>(
    v2,
    (__int64)&v5);
}
