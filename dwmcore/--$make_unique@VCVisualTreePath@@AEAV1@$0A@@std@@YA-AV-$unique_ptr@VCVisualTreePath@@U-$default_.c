/*
 * XREFs of ??$make_unique@VCVisualTreePath@@AEAV1@$0A@@std@@YA?AV?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@0@AEAVCVisualTreePath@@@Z @ 0x180019244
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x180087890 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 */

_QWORD *__fastcall std::make_unique<CVisualTreePath,CVisualTreePath &,0>(_QWORD *a1, __int128 **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  char *v6; // rax
  __int128 *v7; // rdi
  __int128 *v8; // rbx
  _OWORD *v9; // rax
  __int128 v10; // xmm0
  _QWORD *result; // rax

  v4 = operator new(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    v6 = (char *)(v4 + 3);
    *v5 = v6;
    v5[1] = v6;
    v5[2] = v5 + 7;
    v7 = a2[1];
    v8 = *a2;
    v9 = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                     v5,
                     0LL,
                     v7 - v8);
    while ( v8 != v7 )
    {
      v10 = *v8++;
      *v9++ = v10;
    }
  }
  else
  {
    v5 = 0LL;
  }
  result = a1;
  *a1 = v5;
  return result;
}
