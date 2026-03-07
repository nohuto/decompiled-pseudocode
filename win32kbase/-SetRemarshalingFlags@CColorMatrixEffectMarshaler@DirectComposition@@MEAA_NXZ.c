char __fastcall DirectComposition::CColorMatrixEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CColorMatrixEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 26) = 0;
  if ( *((_DWORD *)this + 18)
    || *((_DWORD *)this + 48) != 1
    || *((_DWORD *)this + 49)
    || *((float *)this + 28) != 1.0
    || *((float *)this + 29) != 0.0
    || *((float *)this + 30) != 0.0
    || *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 0.0
    || *((float *)this + 33) != 1.0
    || *((float *)this + 34) != 0.0
    || *((float *)this + 35) != 0.0
    || *((float *)this + 36) != 0.0
    || *((float *)this + 37) != 0.0
    || *((float *)this + 38) != 1.0
    || *((float *)this + 39) != 0.0
    || *((float *)this + 40) != 0.0
    || *((float *)this + 41) != 0.0
    || *((float *)this + 42) != 0.0
    || *((float *)this + 43) != 1.0
    || *((float *)this + 44) != 0.0
    || *((float *)this + 45) != 0.0
    || *((float *)this + 46) != 0.0
    || *((float *)this + 47) != 0.0 )
  {
    return 1;
  }
  return result;
}
