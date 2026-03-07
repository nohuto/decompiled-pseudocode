CDDisplayAgedCachedScanout *__fastcall CDDisplayAgedCachedScanout::`scalar deleting destructor'(
        CDDisplayAgedCachedScanout *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
  if ( *(_QWORD *)this )
  {
    std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>(*(_QWORD *)this, *((_QWORD *)this + 1));
    std::_Deallocate<16,0>(*(void **)this, 16 * ((__int64)(*((_QWORD *)this + 2) - *(_QWORD *)this) >> 4));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
  operator delete(this);
  return this;
}
