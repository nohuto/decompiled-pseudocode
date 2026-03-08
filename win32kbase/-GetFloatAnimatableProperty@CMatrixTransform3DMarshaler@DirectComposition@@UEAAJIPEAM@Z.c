/*
 * XREFs of ?GetFloatAnimatableProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0251410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024C0F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CMatrixTransform3DMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CMatrixTransform3DMarshaler *this,
        unsigned int a2,
        float *a3)
{
  unsigned int v3; // r10d

  v3 = 0;
  if ( a2 >= 0x10 )
    return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
  else
    *a3 = *((float *)this + a2 + 18);
  return v3;
}
