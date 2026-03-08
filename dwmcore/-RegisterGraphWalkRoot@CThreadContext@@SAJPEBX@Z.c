/*
 * XREFs of ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x18008B318
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004CC2C (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180062EB0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180070000 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18008A870 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180096F74 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18004A77C (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800FE0E0 (--0CThreadContext@@AEAA@XZ.c)
 */

__int64 __fastcall CThreadContext::RegisterGraphWalkRoot(const void *a1)
{
  _QWORD *Value; // rbx
  __int64 v3; // r8
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  int v6; // ebx
  __int64 v8; // rdx
  CThreadContext *v9; // rax
  unsigned int v10; // ecx
  CThreadContext *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v9 = (CThreadContext *)operator new(0x190uLL);
    if ( !v9 || (v11 = CThreadContext::CThreadContext(v9), (Value = v11) == 0LL) )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x42u, 0LL);
      v12 = 208LL;
      goto LABEL_15;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v11);
  }
  v3 = Value[3];
  if ( (v3 & 2) != 0 )
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v4 = Value[3] & 1LL;
  v5 = 0LL;
  if ( v4 )
  {
    while ( a1 != (const void *)CPtrArrayBase::operator[](Value + 3, v5) )
    {
      v5 = v8 + 1;
      if ( v5 >= v4 )
        goto LABEL_5;
    }
    v6 = -2147467260;
    v12 = 217LL;
  }
  else
  {
LABEL_5:
    v6 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(Value + 3), (unsigned __int64)a1, v4);
    if ( v6 >= 0 )
      return 0LL;
    v12 = 221LL;
  }
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
    (const char *)(unsigned int)v6,
    v13);
  return (unsigned int)v6;
}
