/*
 * XREFs of ?OnPlaybackRateChanged@CAnimationController@@QEAAXXZ @ 0x180022DE8
 * Callers:
 *     ??0CAnimationController@@QEAA@PEAVCComposition@@@Z @ 0x180022D04 (--0CAnimationController@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetProperty@CAnimationController@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800D59C0 (-SetProperty@CAnimationController@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetPlaybackRate@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x1801C55E0 (-SetPlaybackRate@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResourc.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ @ 0x1800D5A94 (-UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ.c)
 */

void __fastcall CAnimationController::OnPlaybackRateChanged(CAnimationController *this)
{
  char v2; // al

  v2 = *((_BYTE *)this + 120) | 2;
  *((_BYTE *)this + 120) = v2;
  if ( (v2 & 8) != 0 )
  {
    CAnimationController::UpdateKeyframeAnimations(this);
    *((_BYTE *)this + 120) &= ~8u;
  }
  CResource::InvalidateAnimationSources(this, 2u);
  (*(void (__fastcall **)(CAnimationController *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
}
