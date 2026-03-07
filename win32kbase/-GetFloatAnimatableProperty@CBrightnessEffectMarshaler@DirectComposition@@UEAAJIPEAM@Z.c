__int64 __fastcall DirectComposition::CBrightnessEffectMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CBrightnessEffectMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // eax

  v3 = 0;
  switch ( a2 )
  {
    case 2:
      v4 = *((_DWORD *)this + 28);
      goto LABEL_10;
    case 3:
      v4 = *((_DWORD *)this + 29);
      goto LABEL_10;
    case 4:
      v4 = *((_DWORD *)this + 30);
      goto LABEL_10;
    case 5:
      v4 = *((_DWORD *)this + 31);
LABEL_10:
      *(_DWORD *)a3 = v4;
      return v3;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
}
