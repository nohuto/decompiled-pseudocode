/*
 * XREFs of ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x1800954A4
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180082D38 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ @ 0x180094AF0 (-LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x18003B970 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 */

__int64 __fastcall CTopLevelWindow::SetLivePreviewAlpha(CTopLevelWindow *this, double a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CVisual::SendSetOpacity(this, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x102Eu);
  return v3;
}
