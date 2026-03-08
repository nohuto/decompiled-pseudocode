/*
 * XREFs of ?GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0251230
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024C0F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CMatrixTransformMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CMatrixTransformMarshaler *this,
        unsigned int a2,
        float *a3)
{
  unsigned int v3; // r10d

  v3 = 0;
  if ( a2 >= 6 )
    return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
  else
    *a3 = *((float *)this + 2 * ((unsigned __int64)a2 >> 1) + (a2 & 1) + 18);
  return v3;
}
