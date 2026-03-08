/*
 * XREFs of ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180080DC4
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058840 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18005B0A0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005CB60 (-InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttribut.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800DB8E4 (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x1800093F0 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C728 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18005E2E0 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007598C (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180080F78 (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CCpuClip::FullyContains(CShape **a1, struct MilRectF *a2, const struct D2D_MATRIX_3X2_F *a3)
{
  char v3; // bl
  CMILMatrix *v7; // rsi
  CShape *v8; // rdi
  __int64 v9; // rax
  CShape **v12; // rdi
  CMILMatrix *v13; // rax
  int v14[4]; // [rsp+20h] [rbp-A9h] BYREF
  _OWORD v15[4]; // [rsp+30h] [rbp-99h] BYREF
  int v16; // [rsp+70h] [rbp-59h]
  _BYTE v17[72]; // [rsp+80h] [rbp-49h] BYREF
  __int128 v18; // [rsp+C8h] [rbp-1h] BYREF
  __int128 v19; // [rsp+D8h] [rbp+Fh] BYREF

  v3 = 0;
  v7 = 0LL;
  v16 = 0;
  if ( *((_BYTE *)a1 + 112) )
  {
    v12 = a1 + 10;
    if ( !CShapePtr::IsAxisAlignedRectangle(a1 + 10)
      && (*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)*v12 + 8LL))(*v12) )
    {
      return v3;
    }
    v8 = *v12;
    if ( !a3 )
    {
LABEL_5:
      if ( !v8 )
        return v3;
      if ( !(*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)v8 + 8LL))(v8) )
        return CRoundedRectangleGeometryData::FillContainsRect(*((_QWORD *)v8 + 2) + 16LL, a2, v7);
      v9 = *(_QWORD *)v8;
      v18 = 0LL;
      (*(void (__fastcall **)(CShape *, __int128 *, _QWORD))(v9 + 48))(v8, &v18, 0LL);
      if ( *((float *)&v18 + 2) <= *(float *)&v18 || *((float *)&v18 + 3) <= *((float *)&v18 + 1) )
        return v3;
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v18, 0.015625, 0.015625);
      v19 = 0LL;
      if ( v7 )
        CMILMatrix::Transform2DBoundsHelper<0>(v7, a2);
      else
        v19 = *(_OWORD *)a2;
      return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(&v18, &v19);
    }
    v13 = CMILMatrix::CMILMatrix((CMILMatrix *)v17, a3);
    v15[0] = *(_OWORD *)v13;
    v15[1] = *((_OWORD *)v13 + 1);
    v15[2] = *((_OWORD *)v13 + 2);
    v15[3] = *((_OWORD *)v13 + 3);
    v16 = *((_DWORD *)v13 + 16);
LABEL_18:
    v7 = (CMILMatrix *)v15;
    goto LABEL_5;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CShape *, int *))(*(_QWORD *)*a1 + 64LL))(*a1, v14) && v14[0] == 1
    || !(*(unsigned int (__fastcall **)(CShape *))(*(_QWORD *)*a1 + 8LL))(*a1) )
  {
    v8 = *a1;
    v7 = (CMILMatrix *)(a1 + 1);
    if ( !a3 )
      goto LABEL_5;
    CMILMatrix::CMILMatrix((CMILMatrix *)v17, a3);
    CMILMatrix::Multiply((const struct CMILMatrix *)v17, (const struct CMILMatrix *)(a1 + 1), (struct CMILMatrix *)v15);
    goto LABEL_18;
  }
  return v3;
}
