char __fastcall DirectComposition::CLineGeometryMarshaler::SetRemarshalingFlags(
        DirectComposition::CLineGeometryMarshaler *this)
{
  DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(this);
  *((_DWORD *)this + 4) |= 0x1800u;
  return 1;
}
