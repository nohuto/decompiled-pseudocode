__int64 __fastcall DirectComposition::CColorMatrixEffectMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CColorMatrixEffectMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r10d

  v3 = 0;
  if ( (unsigned int)(a2 - 3) > 0x13 )
    return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
  else
    *a3 = *((float *)this + 4 * ((unsigned __int64)(unsigned int)(a2 - 3) >> 2) + (((_BYTE)a2 + 1) & 3) + 28);
  return v3;
}
