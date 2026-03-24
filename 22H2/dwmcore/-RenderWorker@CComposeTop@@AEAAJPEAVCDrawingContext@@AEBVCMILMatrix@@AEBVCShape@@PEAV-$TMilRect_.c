/*
 * XREFs of ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F9970
 * Callers:
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F96D0 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F992C (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18003EEB4 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18003F080 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180040940 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800415F0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180041938 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800535AC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800803D0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposeTop::RenderWorker(
        __int64 a1,
        CDrawingContext *a2,
        const struct CMILMatrix *a3,
        const struct CShape *a4,
        _OWORD *a5)
{
  char v8; // si
  char v9; // r14
  __int64 (__fastcall *v10)(const struct CShape *, __int128 *, _BYTE *); // rax
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v23; // [rsp+30h] [rbp-91h] BYREF
  __int128 v24; // [rsp+34h] [rbp-8Dh]
  __int128 v25; // [rsp+44h] [rbp-7Dh]
  int v26; // [rsp+54h] [rbp-6Dh]
  _BYTE v27[64]; // [rsp+60h] [rbp-61h] BYREF
  int v28; // [rsp+A0h] [rbp-21h]
  __int128 v29; // [rsp+B0h] [rbp-11h] BYREF

  v28 = 0;
  v8 = 0;
  v9 = 0;
  CMILMatrix::Multiply((const struct CMILMatrix *)(a1 + 24), a3, (struct CMILMatrix *)v27);
  v10 = *(__int64 (__fastcall **)(const struct CShape *, __int128 *, _BYTE *))(*(_QWORD *)a4 + 32LL);
  v29 = 0uLL;
  v11 = v10(a4, &v29, v27);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x13Au, 0LL);
LABEL_14:
    if ( !v8 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( !*(_QWORD *)(a1 + 8) )
  {
LABEL_12:
    v9 = v8;
    goto LABEL_14;
  }
  v23 = 2;
  v24 = 0LL;
  LODWORD(v24) = 0;
  v26 = 0;
  v25 = 0LL;
  v14 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v23, 1);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x148u, 0LL);
    goto LABEL_18;
  }
  v9 = 1;
  v16 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v27, 0, 1);
  v13 = v16;
  if ( v16 >= 0 )
  {
    v8 = 1;
    v18 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
    v13 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x14Fu, 0LL);
LABEL_15:
      CDrawingContext::PopTransformInternal(a2, 1);
LABEL_16:
      if ( !v9 )
        goto LABEL_18;
      goto LABEL_17;
    }
    v20 = CDrawingContext::FillShapeWithBitmap(
            a2,
            *(struct IBitmapResource **)(a1 + 8),
            (const struct CMILMatrix *)&CMILMatrix::Identity,
            a4,
            1,
            0);
    v13 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x154u, 0LL);
      goto LABEL_15;
    }
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x14Bu, 0LL);
LABEL_17:
  CDrawingContext::PopRenderOptionsInternal(a2, 1);
LABEL_18:
  if ( a5 )
    *a5 = v29;
  return v13;
}
