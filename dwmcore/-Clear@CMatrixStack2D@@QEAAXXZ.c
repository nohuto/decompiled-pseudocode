/*
 * XREFs of ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x1800816B0
 * Callers:
 *     ??0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800814F8 (--0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?clear_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008164C (-clear_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_.c)
 *     ?reserve_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVMatrix3x2F@D2D1@@_K0@Z @ 0x180081728 (-reserve_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vlibera.c)
 */

void __fastcall CMatrixStack2D::Clear(CMatrixStack2D *this)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3);
  if ( v2 )
    detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this,
      0LL,
      v2);
  v3 = detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::reserve_region(
         this,
         0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3));
  *(_QWORD *)v3 = 1065353216LL;
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 12) = 1065353216LL;
  *(_DWORD *)(v3 + 20) = 0;
}
