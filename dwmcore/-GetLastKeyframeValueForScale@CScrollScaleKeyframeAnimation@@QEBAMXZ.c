/*
 * XREFs of ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180262F98
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18022DF28 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x18022F6D0 (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x180230098 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x180236680 (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180263F00 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 */

float __fastcall CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(CScrollScaleKeyframeAnimation *this)
{
  KeyframeValue *LastKeyframeValue; // rbx
  int Value; // eax
  const char *v3; // r9
  float v4; // xmm6_4
  int v6[16]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+60h] [rbp-28h] BYREF
  int v8; // [rsp+68h] [rbp-20h]
  char v9; // [rsp+6Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(this);
  memset_0(v6, 0, sizeof(v6));
  v7 = 0LL;
  v8 = 18;
  v9 = 0;
  Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (struct CExpressionValue *)v6);
  if ( Value < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      47LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      (const char *)(unsigned int)Value,
      v6[0]);
  if ( v8 != 18 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      48LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      v3);
  v4 = *(float *)v6;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v7);
  return v4;
}
