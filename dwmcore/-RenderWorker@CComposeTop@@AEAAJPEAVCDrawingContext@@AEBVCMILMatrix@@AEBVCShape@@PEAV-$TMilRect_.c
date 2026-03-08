/*
 * XREFs of ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180257134
 * Callers:
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002201C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802570F0 (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18001ABD0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180048300 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x180077420 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800C3320 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800E2990 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposeTop::RenderWorker(
        __int64 a1,
        CDrawingContext *a2,
        const struct CMILMatrix *a3,
        const struct CShape *a4,
        _OWORD *a5)
{
  char v8; // r15
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v20; // [rsp+38h] [rbp-79h] BYREF
  __int128 v21; // [rsp+3Ch] [rbp-75h]
  __int128 v22; // [rsp+4Ch] [rbp-65h]
  int v23; // [rsp+5Ch] [rbp-55h]
  _BYTE v24[64]; // [rsp+60h] [rbp-51h] BYREF
  int v25; // [rsp+A0h] [rbp-11h]
  __int128 v26; // [rsp+B0h] [rbp-1h] BYREF

  v25 = 0;
  v8 = 0;
  CMILMatrix::Multiply((const struct CMILMatrix *)(a1 + 24), a3, (struct CMILMatrix *)v24);
  v9 = *(_QWORD *)a4;
  v26 = 0uLL;
  v10 = (*(__int64 (__fastcall **)(const struct CShape *, __int128 *, _BYTE *))(v9 + 48))(a4, &v26, v24);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( !*(_QWORD *)(a1 + 8) )
      goto LABEL_9;
    v20 = 2;
    v21 = 0LL;
    LODWORD(v21) = 0;
    v23 = 0;
    v22 = 0LL;
    v13 = CDrawingContext::PushRenderOptionsInternal((__int64)a2, 0LL, (const struct MilRenderOptions *)&v20, 1);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x148u, 0LL);
      goto LABEL_13;
    }
    v15 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v24, 0, 1);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x14Bu, 0LL);
LABEL_11:
      CDrawingContext::PopRenderOptionsInternal(a2, 1);
      goto LABEL_13;
    }
    v8 = 1;
    v17 = CDrawingContext::FillShapeWithBitmap(
            a2,
            *(struct IBitmapResource **)(a1 + 8),
            (const struct CMILMatrix *)&CMILMatrix::Identity,
            a4,
            1,
            0);
    v12 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x151u, 0LL);
    }
    else
    {
LABEL_9:
      if ( !v8 )
        goto LABEL_13;
    }
    CDrawingContext::PopTransformInternal(a2, 1);
    goto LABEL_11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x13Au, 0LL);
LABEL_13:
  if ( a5 )
    *a5 = v26;
  return v12;
}
