/*
 * XREFs of ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x1801E392C
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180008E78 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x180009404 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x18000944C (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18009F7D8 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C6CD8 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z @ 0x1800C84B8 (--0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1800CD980 (-SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadow::AdjustSurfaceBrush(
        struct CComposition **this,
        struct CDrawingContext *a2,
        struct CSurfaceBrush *a3)
{
  __m128 v4; // xmm6
  struct D2D_MATRIX_3X2_F *v6; // r9
  CComponentTransform2D *v7; // rax
  __int64 v8; // rcx
  struct CComponentTransform2D *v9; // rbx
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-60h]
  struct D2D_RECT_F v15; // [rsp+30h] [rbp-50h] BYREF
  struct D2D_RECT_F v16; // [rsp+40h] [rbp-40h] BYREF
  struct D2D_RECT_F v17; // [rsp+50h] [rbp-30h] BYREF

  v4 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a3 + 136));
  CProjectedShadow::CalculateBounds((__int64)this, &v16, (__int64)a3, *((_QWORD *)a2 + 741));
  LODWORD(v15.left) = v4.m128_i32[0];
  LODWORD(v15.top) = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  LODWORD(v15.right) = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  LODWORD(v15.bottom) = _mm_shuffle_ps(v4, v4, 255).m128_u32[0];
  D2DMatrixHelper::ComputeRectangleTransform(&v15, &v16, &v17, v6);
  *(_QWORD *)&v16.left = 0LL;
  v7 = (CComponentTransform2D *)DefaultHeap::AllocClear(0xD8uLL);
  if ( v7 )
    v7 = CComponentTransform2D::CComponentTransform2D(v7, this[2]);
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=((__int64 *)&v16, (__int64)v7);
  v9 = *(struct CComponentTransform2D **)&v16.left;
  if ( *(_QWORD *)&v16.left )
  {
    v11 = ((__int64 (__fastcall *)(_QWORD, void *, struct D2D_RECT_F *))xmmword_1803441D8)(
            *(_QWORD *)&v16.left + SDWORD2(xmmword_1803441D8),
            &CComponentTransform2D::sc_TransformMatrix,
            &v17);
    v10 = v11;
    if ( v11 < 0 )
    {
      v14 = 1240;
    }
    else
    {
      v11 = CSurfaceBrush::SetTransform((struct CResource **)a3, v9);
      v10 = v11;
      if ( v11 >= 0 )
        goto LABEL_10;
      v14 = 1242;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v14, 0LL);
    goto LABEL_10;
  }
  v10 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x4D6u, 0LL);
LABEL_10:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  return v10;
}
