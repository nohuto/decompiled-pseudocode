bool __fastcall DirectComposition::CPrimitiveColorMarshaler::SetRemarshalingFlags(
        DirectComposition::CPrimitiveColorMarshaler *this)
{
  return *((float *)this + 14) != 0.0
      || *((float *)this + 15) != 0.0
      || *((float *)this + 16) != 0.0
      || *((float *)this + 17) != 0.0;
}
