/*
 * XREFs of ?GetFloatAnimatableProperty@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C022D910
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0215740 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveModeMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CHolographicExclusiveModeMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a3 )
  {
    if ( a2 == 1 )
      *a3 = *((float *)this + 17);
    else
      return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
