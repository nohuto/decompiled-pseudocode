/*
 * XREFs of ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801736D0
 * Callers:
 *     ?UpdateTransform@CDDisplayRenderTarget@@IEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x18018D2F4 (-UpdateTransform@CDDisplayRenderTarget@@IEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 * Callees:
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_N@Z @ 0x18002F934 (-UpdateMPOCaps@COverlayContext@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::UpdateMPOCaps(CDDisplayRenderTarget *this, char a2)
{
  unsigned int v2; // ebx
  int updated; // eax
  __int64 v4; // rcx

  v2 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    updated = COverlayContext::UpdateMPOCaps((CDDisplayRenderTarget *)((char *)this + 40), a2);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, updated, 0x9Fu, 0LL);
  }
  return v2;
}
