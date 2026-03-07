void __fastcall CEmptyRegionDrawListBrush::~CEmptyRegionDrawListBrush(CEmptyRegionDrawListBrush *this)
{
  FastRegion::CRegion::FreeMemory((CEmptyRegionDrawListBrush *)((char *)this + 88));
  if ( *((_QWORD *)this + 10) )
    std::default_delete<CDrawListBrush>::operator()();
  if ( *((_QWORD *)this + 9) )
    std::default_delete<CDrawListBrush>::operator()();
}
