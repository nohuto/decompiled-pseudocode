/*
 * XREFs of ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x1800E8BC8
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800561C0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessSetProgress@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPROGRESS@@@Z @ 0x1800E8BA8 (-ProcessSetProgress@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::SetProgress(CKeyframeAnimation *this, float a2)
{
  if ( *((float *)this + 133) != a2 )
  {
    *((_BYTE *)this + 580) |= 4u;
    *((float *)this + 133) = fminf(1.0, fmaxf(a2, 0.0));
    CResource::InvalidateAnimationSources(this, 33);
  }
}
