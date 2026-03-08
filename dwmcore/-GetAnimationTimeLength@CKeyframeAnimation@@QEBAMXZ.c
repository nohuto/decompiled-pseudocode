/*
 * XREFs of ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x1800BAF68
 * Callers:
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x180020014 (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800573C0 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800BAE5C (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800BCCD8 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x1802365A8 (-AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?GetProperty@CKeyframeAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802366B0 (-GetProperty@CKeyframeAnimation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z @ 0x180236760 (-GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z.c)
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x18026BC14 (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CKeyframeAnimation::GetAnimationTimeLength(CKeyframeAnimation *this)
{
  __int64 v1; // r8
  float result; // xmm0_4
  int v3; // eax

  v1 = *((_QWORD *)this + 49);
  result = 0.0;
  v3 = *(_DWORD *)(v1 + 112);
  if ( v3 > 0 )
    return (float)*(int *)(*(_QWORD *)(v1 + 104) + 24LL * (unsigned int)(v3 - 1)) / 1000.0;
  return result;
}
