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
