/*
 * XREFs of ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18009598C
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000C550 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800102A0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18002FD34 (-UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18003C524 (--1CDrawingContext@@MEAA@XZ.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18005A8DC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180092940 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B4C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801F9678 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18021BCA0 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802227A0 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180226640 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180242048 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180246BD0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180268430 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x180095B74 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AECF4 (-clear_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801F7FBC (-clear_region@-$vector_facade@GV-$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801F806C (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vlibe.c)
 */

void __fastcall CDrawListEntryBuilder::~CDrawListEntryBuilder(CDrawListEntryBuilder *this)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  void **v4; // rdi
  __int64 v5; // r8
  void *v6; // rsi
  bool v7; // zf
  void **v8; // rdi
  void *v9; // rsi
  void **v10; // rdi
  void *v11; // rsi
  __int64 v12; // rcx
  void **v13; // rdi
  void *v14; // rsi
  __int64 v15; // rcx
  HANDLE v16; // rax
  HANDLE v17; // rax
  HANDLE ProcessHeap; // rax
  HANDLE v19; // rax

  CDrawListEntryBuilder::Reset(this);
  v3 = *((_QWORD *)this + 558);
  if ( v3 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v3);
  v4 = (void **)((char *)this + 4072);
  v5 = (__int64)(*((_QWORD *)this + 510) - *((_QWORD *)this + 509)) >> 1;
  if ( v5 )
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 4072,
      0LL,
      v5,
      v2);
  v6 = *v4;
  v7 = *((_QWORD *)this + 509) == (_QWORD)this + 4096;
  *v4 = 0LL;
  if ( v7 )
    v6 = 0LL;
  if ( v6 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
  }
  v8 = (void **)((char *)this + 2112);
  if ( (__int64)(*((_QWORD *)this + 265) - *((_QWORD *)this + 264)) >> 4 )
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 2112,
      0LL);
  v9 = *v8;
  v7 = *((_QWORD *)this + 264) == (_QWORD)this + 2144;
  *v8 = 0LL;
  if ( v7 )
    v9 = 0LL;
  if ( v9 )
  {
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v9);
  }
  v10 = (void **)((char *)this + 160);
  if ( (__int64)(*((_QWORD *)this + 21) - *((_QWORD *)this + 20)) >> 4 )
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 160,
      0LL);
  v11 = *v10;
  v7 = *((_QWORD *)this + 20) == (_QWORD)this + 192;
  *v10 = 0LL;
  if ( v7 )
    v11 = 0LL;
  if ( v11 )
  {
    v17 = GetProcessHeap();
    HeapFree(v17, 0, v11);
  }
  v12 = *((_QWORD *)this + 18);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = (void **)((char *)this + 88);
  if ( (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3 )
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region((char *)this + 88);
  v14 = *v13;
  v7 = *((_QWORD *)this + 11) == (_QWORD)this + 112;
  *v13 = 0LL;
  if ( v7 )
    v14 = 0LL;
  if ( v14 )
  {
    v19 = GetProcessHeap();
    HeapFree(v19, 0, v14);
  }
  v15 = *((_QWORD *)this + 10);
  if ( v15 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  }
}
