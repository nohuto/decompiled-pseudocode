/*
 * XREFs of ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCBaseImageProxy@@@Z @ 0x18000BE7C
 * Callers:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000AF24 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800A7A6C (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18000E184 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateBrush(CAnimatedTransitionVisual *this, struct CBaseImageProxy *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+70h] [rbp-38h] BYREF
  __int128 v7; // [rsp+80h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 73);
  v7 = _xmm;
  v6 = _xmm;
  v3 = CImageLegacyMilBrushProxy::Update(v2, a2, &v7, &v6, 0LL);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x345u);
  return v4;
}
