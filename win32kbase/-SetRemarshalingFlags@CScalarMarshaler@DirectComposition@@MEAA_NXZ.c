bool __fastcall DirectComposition::CScalarMarshaler::SetRemarshalingFlags(DirectComposition::CScalarMarshaler *this)
{
  return *((float *)this + 14) != 0.0;
}
