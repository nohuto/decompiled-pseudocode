/*
 * XREFs of ?Append@CVisualTreePath@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x180014100
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800094F0 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x180087890 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisualTreePath::Append(
        CVisualTreePath *this,
        const struct CVisual *a2,
        const struct CVisualTree *a3)
{
  const struct CVisual **v3; // r9
  const struct CVisual **v5; // rax
  __int64 v6; // rax
  int v8[4]; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (const struct CVisual **)*((_QWORD *)this + 1);
  v5 = *(const struct CVisual ***)this;
  *(_QWORD *)v8 = a2;
  *(_QWORD *)&v8[2] = a3;
  while ( v5 != v3 )
  {
    if ( *v5 == a2 && v5[1] == a3 )
      goto LABEL_12;
    v5 += 2;
  }
  v6 = ((__int64)v3 - *(_QWORD *)this) >> 4;
  if ( a2 )
  {
    if ( v6 && CVisualTree::_IsInTree(*(v3 - 1), (__int64)a2, 0) )
      goto LABEL_8;
  }
  else if ( !v6 )
  {
LABEL_8:
    *(_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                 this,
                 (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4,
                 1LL) = *(_OWORD *)v8;
    return 0LL;
  }
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\visualtreepath.cpp",
    (const char *)0x8000FFFFLL,
    v8[0]);
  return 2147549183LL;
}
