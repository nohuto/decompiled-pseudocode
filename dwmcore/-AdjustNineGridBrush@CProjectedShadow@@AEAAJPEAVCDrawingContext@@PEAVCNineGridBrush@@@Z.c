/*
 * XREFs of ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@@Z @ 0x1802457FC
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180246204 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z @ 0x1800E265C (--0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1800F7C44 (-SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetTransform@CNineGridBrush@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18012F350 (-SetTransform@CNineGridBrush@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??4?$com_ptr_t@VCComponentTransform2D@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComponentTransform2D@@@Z @ 0x180245674 (--4-$com_ptr_t@VCComponentTransform2D@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompone.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x180245BEC (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 */

__int64 __fastcall CProjectedShadow::AdjustNineGridBrush(
        struct CComposition **this,
        struct CDrawingContext *a2,
        struct CResource ***a3)
{
  FLOAT m11; // xmm8_4
  float v6; // xmm6_4
  FLOAT m12; // xmm9_4
  float v8; // xmm7_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  CComponentTransform2D *v11; // rax
  __int64 v12; // rcx
  struct CComponentTransform2D *v13; // rbx
  unsigned int v14; // edi
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // xmm6_4
  unsigned int v19; // [rsp+28h] [rbp-39h]
  struct CComponentTransform2D *v20; // [rsp+38h] [rbp-29h] BYREF
  float v21[2]; // [rsp+40h] [rbp-21h] BYREF
  struct D2D_MATRIX_3X2_F v22; // [rsp+48h] [rbp-19h] BYREF

  CProjectedShadow::CalculateBounds(this, &v22, a3, *((_QWORD *)a2 + 1007));
  m11 = v22.m11;
  v6 = v22.m21 - v22.m11;
  m12 = v22.m12;
  v8 = v22.m22 - v22.m12;
  v9 = FLOAT_161_0;
  if ( (float)(v22.m21 - v22.m11) < (float)(v22.m22 - v22.m12) )
  {
    v10 = (float)((float)((float)(v8 / v6) - 1.0) * 33.0) + 161.0;
  }
  else
  {
    v10 = FLOAT_161_0;
    v9 = (float)((float)((float)(v6 / v8) - 1.0) * 33.0) + 161.0;
  }
  v20 = 0LL;
  *(_QWORD *)&v22.m11 = 0xC2800000C2800000uLL;
  v21[0] = v9 / 161.0;
  v21[1] = v10 / 161.0;
  v11 = (CComponentTransform2D *)DefaultHeap::AllocClear(0xE0uLL);
  if ( v11 )
    v11 = CComponentTransform2D::CComponentTransform2D(v11, this[2]);
  wil::com_ptr_t<CComponentTransform2D,wil::err_returncode_policy>::operator=((__int64 *)&v20, (__int64)v11);
  v13 = v20;
  if ( !v20 )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x485u, 0LL);
LABEL_16:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
    return v14;
  }
  v15 = ((__int64 (__fastcall *)(char *, void *, float *))xmmword_1803E05C8)(
          (char *)v20 + SDWORD2(xmmword_1803E05C8),
          &CComponentTransform2D::sc_Scale,
          v21);
  v14 = v15;
  if ( v15 < 0 )
  {
    v19 = 1159;
    goto LABEL_15;
  }
  v15 = ((__int64 (__fastcall *)(char *, void *, struct D2D_MATRIX_3X2_F *))xmmword_1803E0590)(
          (char *)v13 + SDWORD2(xmmword_1803E0590),
          &CComponentTransform2D::sc_Offset,
          &v22);
  v14 = v15;
  if ( v15 < 0 )
  {
    v19 = 1160;
    goto LABEL_15;
  }
  v15 = CSurfaceBrush::SetTransform(a3[11], v13);
  v14 = v15;
  if ( v15 < 0 )
  {
    v19 = 1163;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, v19, 0LL);
    goto LABEL_16;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
  v22.m21 = 0.0;
  *(float *)&v17 = fminf(v6 / 33.0, v8 / 33.0);
  v22.dy = m12;
  *(_QWORD *)&v22.m11 = v17;
  *(_QWORD *)&v22.m[1][1] = __PAIR64__(LODWORD(m11), v17);
  CNineGridBrush::SetTransform((CNineGridBrush *)a3, &v22);
  return v14;
}
