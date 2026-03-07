bool __fastcall DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CFilterEffectMarshaler *this)
{
  *((_DWORD *)this + 26) = 0;
  return *((_DWORD *)this + 18) != 0;
}
