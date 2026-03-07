void __fastcall DirectComposition::CMeshGeometry2DMarshaler::~CMeshGeometry2DMarshaler(
        DirectComposition::CMeshGeometry2DMarshaler *this)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CMeshGeometry2DMarshaler *)((char *)this + 112));
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CMeshGeometry2DMarshaler *)((char *)this + 88));
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CMeshGeometry2DMarshaler *)((char *)this + 64));
}
