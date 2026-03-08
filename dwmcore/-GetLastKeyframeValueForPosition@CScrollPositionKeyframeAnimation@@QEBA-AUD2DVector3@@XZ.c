/*
 * XREFs of ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x180262A6C
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18022DF28 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x180230098 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x180236680 (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180263F00 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(
        CKeyframeAnimation *a1,
        __int64 a2)
{
  KeyframeValue *LastKeyframeValue; // rbx
  int Value; // eax
  const char *v5; // r9
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+60h] [rbp-18h] BYREF
  int v11; // [rsp+68h] [rbp-10h]
  char v12; // [rsp+6Ch] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(a1);
  memset_0(&v8, 0, 0x40uLL);
  v10 = 0LL;
  v11 = 18;
  v12 = 0;
  Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (struct CExpressionValue *)&v8);
  if ( Value < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      51LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      (const char *)(unsigned int)Value,
      v8);
  if ( v11 != 52 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      52LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      v5);
  v6 = v9;
  *(_QWORD *)a2 = v8;
  *(_DWORD *)(a2 + 8) = v6;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v10);
  return a2;
}
