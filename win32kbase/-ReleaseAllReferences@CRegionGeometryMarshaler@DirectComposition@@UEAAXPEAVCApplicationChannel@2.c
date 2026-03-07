void __fastcall DirectComposition::CRegionGeometryMarshaler::ReleaseAllReferences(
        DirectComposition::CRegionGeometryMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CRegionGeometryMarshaler *)((char *)this + 96));
  DirectComposition::CGeometryMarshaler::ReleaseAllReferences(this, a2);
}
