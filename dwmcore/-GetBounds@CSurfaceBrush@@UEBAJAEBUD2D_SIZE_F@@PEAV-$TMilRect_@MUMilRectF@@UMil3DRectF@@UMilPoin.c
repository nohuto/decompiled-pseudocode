/*
 * XREFs of ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DF06C
 * Callers:
 *     ?GetBounds@CSurfaceBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011A210 (-GetBounds@CSurfaceBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 * Callees:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18007FE50 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800DF1AC (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetBounds(struct CShape *a1, const struct D2D_SIZE_F *a2, float *a3)
{
  struct CShape *v5; // r14
  CSurfaceBrush *v6; // rdi
  int v7; // edi
  struct CShape *v8; // rdx
  int v9; // eax
  unsigned int v10; // edi
  float width; // xmm0_4
  FLOAT height; // xmm1_4
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  struct CShape **v15; // [rsp+38h] [rbp-48h]
  struct CShape *v16; // [rsp+40h] [rbp-40h] BYREF
  char v17; // [rsp+48h] [rbp-38h]
  char v18[48]; // [rsp+50h] [rbp-30h] BYREF

  v14 = 0LL;
  v5 = a1;
  if ( a2->width <= 0.0 )
    goto LABEL_14;
  if ( a2->height <= 0.0 )
    goto LABEL_14;
  v6 = (struct CShape *)((char *)a1 - 200);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)a1 - 25) + 192LL))((__int64)a1 - 200) )
    goto LABEL_14;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, CSurfaceBrush *, _QWORD))(**((_QWORD **)v5 - 11) + 24LL))(
         *((_QWORD *)v5 - 11),
         v6,
         0LL) )
  {
    width = a2->width;
    v10 = 0;
    height = a2->height;
    *a3 = 0.0;
    a3[1] = 0.0;
    a3[2] = width;
    a3[3] = height;
    goto LABEL_11;
  }
  v16 = 0LL;
  v15 = (struct CShape **)&v14;
  v17 = 1;
  v7 = CSurfaceBrush::ComputeLayout(v6, a2, (struct CContent::LayoutData *)v18, &v16);
  if ( v17 )
  {
    a1 = v16;
    v8 = *v15;
    *v15 = v16;
    if ( v8 )
      std::default_delete<CShape>::operator()(a1, v8);
  }
  if ( v7 < 0 )
  {
LABEL_14:
    a3[3] = 0.0;
    a3[2] = 0.0;
    a3[1] = 0.0;
    *a3 = 0.0;
    v10 = 0;
    goto LABEL_11;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, float *, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, a3, 0LL);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, v9, 0x187u, 0LL);
LABEL_11:
  if ( v14 )
    std::default_delete<CShape>::operator()(a1, v14);
  return v10;
}
