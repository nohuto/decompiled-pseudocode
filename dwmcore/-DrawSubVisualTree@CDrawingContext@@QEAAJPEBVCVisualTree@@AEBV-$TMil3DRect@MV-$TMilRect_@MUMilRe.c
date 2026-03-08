/*
 * XREFs of ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180021010
 * Callers:
 *     ?Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800206A4 (-Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180020F00 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1801D05E8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18021BA90 (-Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEBVCOcclusionContext@@@Z @ 0x1800211E0 (-DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ??1CSubDrawingContext@@QEAA@XZ @ 0x180021298 (--1CSubDrawingContext@@QEAA@XZ.c)
 *     ??A?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@QEBAAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K@Z @ 0x180021E90 (--A-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness.c)
 *     ?DoesContain@CDirtyRegion@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180021EB8 (-DoesContain@CDirtyRegion@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x18003904C (--0COcclusionContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18003BFFC (--1COcclusionContext@@QEAA@XZ.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x18004CEF4 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800B25B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800C1C30 (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800DB304 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CDrawingContext::DrawSubVisualTree(__int64 a1, __int64 a2, __int64 a3, CMILMatrix *a4)
{
  CMILMatrix *TopByReference; // rsi
  __int64 v8; // rdi
  COcclusionContext *v9; // rbx
  gsl::details *v10; // rcx
  __int64 v11; // rax
  bool IsCurrent; // al
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edi
  COcclusionContext *v18; // rax
  _QWORD v19[2]; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v20[4]; // [rsp+48h] [rbp-39h] BYREF
  __int128 v21; // [rsp+68h] [rbp-19h]
  int v22; // [rsp+78h] [rbp-9h]
  __int64 v23; // [rsp+80h] [rbp-1h]
  __int64 v24; // [rsp+88h] [rbp+7h]
  int v25; // [rsp+90h] [rbp+Fh]
  __int64 v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+A0h] [rbp+1Fh]
  char v28; // [rsp+A8h] [rbp+27h]

  TopByReference = a4;
  v8 = 0LL;
  v9 = 0LL;
  if ( !a4 )
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 400));
  if ( CMILMatrix::Is2DAxisAlignedPreserving(TopByReference) )
  {
    v19[0] = 1LL;
    v19[1] = a3;
    if ( !a3 )
    {
      gsl::details::terminate(v10);
      JUMPOUT(0x1800211D8LL);
    }
    if ( *(_QWORD *)(a1 + 200)
      || (v11 = gsl::span<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const,-1>::operator[](
                  v19,
                  0LL),
          !(unsigned __int8)CDirtyRegion::DoesContain(a2 + 104, v11)) )
    {
      v18 = (COcclusionContext *)operator new(0x610uLL);
      if ( v18 )
        v9 = COcclusionContext::COcclusionContext(v18);
      *((_QWORD *)v9 + 177) = *(_QWORD *)(a1 + 200);
      if ( (*(int (__fastcall **)(__int64, _QWORD *, COcclusionContext *))(*(_QWORD *)a2 + 200LL))(a2, v19, v9) >= 0 )
        v8 = (__int64)v9;
    }
    else if ( (int)CDirtyRegion::CalcOcclusion((CDirtyRegion *)(a2 + 104)) >= 0 )
    {
      IsCurrent = COcclusionContext::IsCurrent((COcclusionContext *)(a2 + 120));
      v8 = v13 & -(__int64)IsCurrent;
    }
  }
  v20[0] = a1;
  v21 = 0LL;
  memset(&v20[1], 0, 24);
  v23 = 0LL;
  v26 = 0LL;
  v22 = 0;
  v24 = 0LL;
  v25 = 0;
  v27 = 16843008;
  v28 = 0;
  v14 = CSubDrawingContext::DrawVisualTree((CSubDrawingContext *)v20, v8);
  v16 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xBAAu, 0LL);
  CSubDrawingContext::~CSubDrawingContext((CSubDrawingContext *)v20);
  if ( v9 )
  {
    COcclusionContext::~COcclusionContext(v9);
    operator delete(v9, 0x610uLL);
  }
  return v16;
}
