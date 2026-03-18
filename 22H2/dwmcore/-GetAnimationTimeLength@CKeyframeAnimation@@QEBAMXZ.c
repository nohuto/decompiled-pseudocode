/*
 * XREFs of ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x1800BB448
 * Callers:
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x180020104 (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180057590 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800BB33C (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800BD3F8 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x180239C88 (-AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?GetProperty@CKeyframeAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180239D90 (-GetProperty@CKeyframeAnimation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z @ 0x180239E40 (-GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z.c)
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x18026F354 (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
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
