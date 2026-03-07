CRegionShape *__fastcall CRegionShape::`vector deleting destructor'(CRegionShape *this, char a2)
{
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 11);
  FastRegion::CRegion::FreeMemory((CRegionShape *)((char *)this + 16));
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
