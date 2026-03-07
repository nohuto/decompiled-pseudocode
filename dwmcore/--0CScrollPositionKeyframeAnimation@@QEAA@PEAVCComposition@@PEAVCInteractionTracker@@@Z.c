CScrollPositionKeyframeAnimation *__fastcall CScrollPositionKeyframeAnimation::CScrollPositionKeyframeAnimation(
        CScrollPositionKeyframeAnimation *this,
        struct CComposition *a2,
        struct CInteractionTracker *a3)
{
  double ActiveManipulationDelta; // xmm0_8
  double v6; // xmm0_8
  CScrollPositionKeyframeAnimation *result; // rax

  CScrollKeyframeAnimation::CScrollKeyframeAnimation(this, a2, a3);
  *(_QWORD *)this = &CScrollPositionKeyframeAnimation::`vftable';
  ActiveManipulationDelta = InteractionSourceManager::GetActiveManipulationDelta((char *)a3 + 200, 0LL);
  *((_DWORD *)this + 190) = LODWORD(ActiveManipulationDelta);
  v6 = InteractionSourceManager::GetActiveManipulationDelta((char *)a3 + 200, 1LL);
  *((_DWORD *)this + 192) = 0;
  result = this;
  *((_DWORD *)this + 191) = LODWORD(v6);
  return result;
}
