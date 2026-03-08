/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x18003BFFC
 * Callers:
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x180020294 (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180021010 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x18003B404 (--1CVisualTree@@UEAA@XZ.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x1800B5954 (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801E671C (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CDDARenderTarget@@UEAA@XZ @ 0x1801F61C8 (--1CDDARenderTarget@@UEAA@XZ.c)
 * Callees:
 *     ??1CLightStack@@QEAA@XZ @ 0x18003C658 (--1CLightStack@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?clear_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AECF4 (-clear_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??_GCVisualTreePath@@QEAAPEAXI@Z @ 0x1801B329C (--_GCVisualTreePath@@QEAAPEAXI@Z.c)
 */

void __fastcall COcclusionContext::~COcclusionContext(void **this)
{
  void **v2; // rdi
  void *v3; // rcx
  bool v4; // zf
  unsigned int v5; // edx
  CVisualTreePath *v6; // rcx

  operator delete(this[190]);
  operator delete(this[186]);
  operator delete(this[182]);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(this + 168));
  v2 = this + 105;
  if ( ((_BYTE *)this[106] - (_BYTE *)this[105]) >> 4 )
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      v2,
      0LL);
  v3 = *v2;
  v4 = this[105] == this + 108;
  *v2 = 0LL;
  if ( v4 )
    v3 = 0LL;
  operator delete(v3);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 56);
  CLightStack::~CLightStack((CLightStack *)(this + 26));
  operator delete(this[24]);
  operator delete(this[20]);
  operator delete(this[14]);
  operator delete(this[6]);
  v6 = (CVisualTreePath *)this[2];
  if ( v6 )
    CVisualTreePath::`scalar deleting destructor'(v6, v5);
}
