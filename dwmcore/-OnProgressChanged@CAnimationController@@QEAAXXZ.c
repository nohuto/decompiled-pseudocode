/*
 * XREFs of ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x1800D5A3C
 * Callers:
 *     ?SetProgress@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x1800D5A04 (-SetProgress@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ @ 0x1800D5A94 (-UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ.c)
 */

void __fastcall CAnimationController::OnProgressChanged(CAnimationController *this)
{
  char v2; // al

  v2 = *((_BYTE *)this + 120) | 1;
  *((_BYTE *)this + 120) = v2;
  if ( (v2 & 4) != 0 )
  {
    CAnimationController::UpdateKeyframeAnimations(this);
    *((_BYTE *)this + 120) &= ~4u;
  }
  CResource::InvalidateAnimationSources(this, 1);
  (*(void (__fastcall **)(CAnimationController *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
}
