/*
 * XREFs of ?SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z @ 0x1800D28C0
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800D27C0 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetPlaybackRate@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPLAYBACKRATE@@@Z @ 0x18012F332 (-ProcessSetPlaybackRate@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::SetPlaybackRate(CKeyframeAnimation *this, float a2)
{
  float v2; // xmm1_4
  float v3; // xmm0_4
  __int64 v4; // rdx
  char v5; // al

  if ( *((float *)this + 132) != a2 )
  {
    if ( a2 != 0.0 )
    {
      if ( a2 >= 0.0 )
      {
        v2 = fmaxf(a2, 0.0625);
        v3 = FLOAT_16_0;
      }
      else
      {
        v2 = fmaxf(a2, -16.0);
        v3 = FLOAT_N0_0625;
      }
      a2 = fminf(v3, v2);
    }
    v4 = *((_QWORD *)this + 49);
    *((float *)this + 132) = a2;
    v5 = *(_BYTE *)(v4 + 140) & 0xEF;
    *(_BYTE *)(v4 + 140) = v5 | (a2 >= 0.0 ? 0 : 0x10);
    *(_BYTE *)(v4 + 96) = (v5 & 0x10 | (a2 >= 0.0 ? 0 : 0x10)) != 0;
    CResource::InvalidateAnimationSources(this, 31);
  }
}
