/*
 * XREFs of ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180017F14
 * Callers:
 *     ?HitTest@CNineGridBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180119FD0 (-HitTest@CNineGridBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180035DF4 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18007FE50 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800DF030 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::HitTest(
        CNineGridBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __int64 v5; // rax
  char *v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // ecx
  struct D2D_RECT_F *v15; // r9
  float v16; // xmm4_4
  FLOAT v17; // xmm0_4
  FLOAT v18; // xmm3_4
  struct D2D_MATRIX_3X2_F v20; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v21[16]; // [rsp+58h] [rbp-18h] BYREF

  *a4 = 0;
  v5 = *((_QWORD *)this - 15);
  *(_OWORD *)&v20.m11 = 0LL;
  v9 = (char *)this + *(int *)(v5 + 8) - 120;
  v10 = (**(__int64 (__fastcall ***)(char *, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *))v9)(v9, a2, &v20);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x87u, 0LL);
    return v12;
  }
  if ( IsPointInRect(a3, (const struct MilRectF *)&v20) )
  {
    *a4 = 1;
    if ( *((_BYTE *)this - 32) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this - 12) + 56LL))(
             *((_QWORD *)this - 12),
             181LL) )
      {
        v13 = CSurfaceBrush::ComputeLayout(
                *((CSurfaceBrush **)this - 12),
                a2,
                (struct CContent::LayoutData *)v20.m[2],
                0LL);
        v12 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x97u, 0LL);
          return v12;
        }
        D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
          (D2DMatrixHelper *)v21,
          (const struct D2D_RECT_F *)v20.m[2],
          &v20,
          v15);
      }
      v16 = *((float *)this - 22) * *((float *)this - 21);
      v17 = v20.m22 - (float)(*((float *)this - 16) * *((float *)this - 15));
      v18 = (float)(*((float *)this - 20) * *((float *)this - 19)) + v20.m12;
      v20.m21 = v20.m21 - (float)(*((float *)this - 18) * *((float *)this - 17));
      v20.m22 = v17;
      v20.m12 = v18;
      v20.m11 = v16 + v20.m11;
      if ( IsPointInRect(a3, (const struct MilRectF *)&v20) )
        *a4 = 0;
    }
  }
  return v12;
}
