char __fastcall DirectComposition::CRectangleClipMarshaler::SetRemarshalingFlags(
        DirectComposition::CRectangleClipMarshaler *this)
{
  *((_DWORD *)this + 4) &= *((_BYTE *)this + 145) != 0 ? -22529 : -63489;
  DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(this);
  return 1;
}
