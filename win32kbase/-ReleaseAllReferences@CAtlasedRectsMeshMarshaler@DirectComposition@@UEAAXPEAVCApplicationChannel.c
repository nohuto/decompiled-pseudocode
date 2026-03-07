void __fastcall DirectComposition::CAtlasedRectsMeshMarshaler::ReleaseAllReferences(
        DirectComposition::CAtlasedRectsMeshMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CAtlasedRectsMeshMarshaler *)((char *)this + 64));
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CAtlasedRectsMeshMarshaler *)((char *)this + 88));
}
