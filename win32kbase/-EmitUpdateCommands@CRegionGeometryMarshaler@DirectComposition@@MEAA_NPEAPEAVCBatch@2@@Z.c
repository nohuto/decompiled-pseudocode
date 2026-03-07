char __fastcall DirectComposition::CRegionGeometryMarshaler::EmitUpdateCommands(
        DirectComposition::CRegionGeometryMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
    return DirectComposition::CMarshaledArrayBase::Marshal(
             (_QWORD *)this + 12,
             a2,
             *((_DWORD *)this + 8),
             (_DWORD *)this + 4,
             2048,
             609,
             610,
             0x10uLL);
  return v4;
}
