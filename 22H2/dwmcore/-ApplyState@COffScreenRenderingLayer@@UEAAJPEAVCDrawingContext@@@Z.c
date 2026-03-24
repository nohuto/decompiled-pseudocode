/*
 * XREFs of ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180040FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x1800054D0 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180041184 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800412E0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x180041568 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall COffScreenRenderingLayer::ApplyState(COffScreenRenderingLayer *this, struct CDrawingContext *a2)
{
  char v4; // bp
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rax

  v4 = 0;
  v5 = CDrawingContext::PushEffectiveAlphaForNode(a2, 0LL, 1.0, 0);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x46u, 0LL);
  }
  else
  {
    v4 = 1;
    v8 = CExternalLayer::ApplyRenderTarget(this, a2);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4Du, 0LL);
    }
    else
    {
      v10 = *((_QWORD *)a2 + 742);
      *((_QWORD *)a2 + 742) = 0LL;
      *((_QWORD *)this + 5) = v10;
    }
  }
  if ( v7 < 0 )
  {
    CExternalLayer::RestoreState(this, a2);
    if ( v4 )
      CDrawingContext::PopAlpha(a2, 0);
  }
  return (unsigned int)v7;
}
