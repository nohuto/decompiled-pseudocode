char __fastcall DirectComposition::CShadowEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CShadowEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 26) = 0;
  if ( *((_DWORD *)this + 18)
    || *((float *)this + 28) != 3.0
    || *((_DWORD *)this + 33)
    || *((float *)this + 29) != 0.0
    || *((float *)this + 30) != 0.0
    || *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 1.0 )
  {
    return 1;
  }
  return result;
}
