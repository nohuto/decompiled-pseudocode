/*
 * XREFs of ?SetProperty@CAnimationController@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800D59C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPlaybackRateChanged@CAnimationController@@QEAAXXZ @ 0x180022DE8 (-OnPlaybackRateChanged@CAnimationController@@QEAAXXZ.c)
 *     ?SetProgress@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x1800D5A04 (-SetProgress@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAnimationController::SetProperty(__int64 a1, int a2, int a3, _DWORD *a4)
{
  int v4; // edx
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 != 18 )
    return 2147942487LL;
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      *(_BYTE *)(a1 + 120) |= 8u;
      if ( *(float *)a4 != *(float *)(a1 + 84) )
      {
        *(_DWORD *)(a1 + 84) = *a4;
        CAnimationController::OnPlaybackRateChanged((CAnimationController *)a1);
      }
      return 0LL;
    }
    return 2147942487LL;
  }
  *(_BYTE *)(a1 + 120) |= 4u;
  v5 = CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetProgress();
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x42,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationcontroller.cpp",
    (const char *)(unsigned int)v5,
    v8);
  return v6;
}
