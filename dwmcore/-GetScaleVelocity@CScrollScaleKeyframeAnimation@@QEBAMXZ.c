/*
 * XREFs of ?GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1802630A4
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18022DF28 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18022F29C (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

float __fastcall CScrollScaleKeyframeAnimation::GetScaleVelocity(
        CScrollScaleKeyframeAnimation *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 748) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      214LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      a4);
  if ( *((_DWORD *)this + 186) != 18 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      215LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      a4);
  return *((float *)this + 168);
}
