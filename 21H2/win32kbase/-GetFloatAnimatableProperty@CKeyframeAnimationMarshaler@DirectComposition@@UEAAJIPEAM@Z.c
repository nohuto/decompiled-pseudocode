/*
 * XREFs of ?GetFloatAnimatableProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C022AFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0215740 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        int a2,
        float *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 24 )
    return DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
  *a3 = 0.0;
  return result;
}
