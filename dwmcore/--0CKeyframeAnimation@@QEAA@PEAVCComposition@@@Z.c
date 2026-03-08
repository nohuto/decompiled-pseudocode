/*
 * XREFs of ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180098224
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18020D3F0 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 *     ?AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ @ 0x180240978 (-AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ??0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x18026B934 (--0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x180099FD0 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 */

CKeyframeAnimation *__fastcall CKeyframeAnimation::CKeyframeAnimation(
        CKeyframeAnimation *this,
        struct CComposition *a2)
{
  CKeyframeAnimation *result; // rax

  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  *((_QWORD *)this + 50) = (char *)this + 432;
  *((_QWORD *)this + 51) = (char *)this + 432;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 104) = 2;
  *(_QWORD *)((char *)this + 420) = 2LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 138) = 1065353216;
  *((_DWORD *)this + 132) = 1065353216;
  result = this;
  *(_QWORD *)((char *)this + 572) = 0LL;
  *(_QWORD *)((char *)this + 532) = 0LL;
  return result;
}
