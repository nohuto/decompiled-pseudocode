/*
 * XREFs of ?GetFloatAnimatableProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0253700
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024C0F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CColorGradientStopMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CColorGradientStopMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 )
    return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
  else
    *a3 = *((float *)this + 14);
  return v3;
}
