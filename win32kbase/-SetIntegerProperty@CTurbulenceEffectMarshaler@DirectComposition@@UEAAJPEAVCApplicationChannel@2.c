__int64 __fastcall DirectComposition::CTurbulenceEffectMarshaler::SetIntegerProperty(
        DirectComposition::CTurbulenceEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  bool *v5; // rax

  switch ( a3 )
  {
    case 3:
      *((_DWORD *)this + 34) = a4;
      goto LABEL_10;
    case 4:
      *((_DWORD *)this + 35) = a4;
      goto LABEL_10;
    case 5:
      *((_DWORD *)this + 36) = a4;
LABEL_10:
      v5 = a5;
      goto LABEL_11;
  }
  v5 = a5;
  if ( a3 != 6 )
    return DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  *((_DWORD *)this + 37) = a4;
LABEL_11:
  *v5 = 1;
  return 0LL;
}
