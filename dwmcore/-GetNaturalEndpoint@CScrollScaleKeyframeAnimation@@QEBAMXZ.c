/*
 * XREFs of ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x18026304C
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18022DF28 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18022F410 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

float __fastcall CScrollScaleKeyframeAnimation::GetNaturalEndpoint(
        CScrollScaleKeyframeAnimation *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 668) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      196LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      a4);
  if ( *((_DWORD *)this + 166) != 18 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      197LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      a4);
  return *((float *)this + 148);
}
