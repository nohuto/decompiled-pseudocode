char __fastcall DirectComposition::CFloodEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CFloodEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 26) = 0;
  if ( *((_DWORD *)this + 18)
    || *((float *)this + 28) != 0.0
    || *((float *)this + 29) != 0.0
    || *((float *)this + 30) != 0.0
    || 1.0 != *((float *)this + 31) )
  {
    return 1;
  }
  return result;
}
