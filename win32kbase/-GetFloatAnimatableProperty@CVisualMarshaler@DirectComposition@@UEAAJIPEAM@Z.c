__int64 __fastcall DirectComposition::CVisualMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CVisualMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // eax

  v3 = 0;
  switch ( a2 )
  {
    case 0:
      v4 = *((_DWORD *)this + 18);
      goto LABEL_10;
    case 1:
      v4 = *((_DWORD *)this + 19);
      goto LABEL_10;
    case 2:
      v4 = *((_DWORD *)this + 20);
      goto LABEL_10;
    case 25:
      v4 = *((_DWORD *)this + 28);
LABEL_10:
      *(_DWORD *)a3 = v4;
      return v3;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
}
