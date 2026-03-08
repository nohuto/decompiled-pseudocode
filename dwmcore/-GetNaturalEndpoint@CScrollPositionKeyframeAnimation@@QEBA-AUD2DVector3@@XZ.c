/*
 * XREFs of ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x180262B24
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18022DF28 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18022F410 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1802627D0 (-EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CScrollPositionKeyframeAnimation::GetNaturalEndpoint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 668) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      190LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      a4);
  if ( *(_DWORD *)(a1 + 664) != 52 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      191LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      a4);
  v4 = *(_DWORD *)(a1 + 600);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 592);
  *(_DWORD *)(a2 + 8) = v4;
  return a2;
}
