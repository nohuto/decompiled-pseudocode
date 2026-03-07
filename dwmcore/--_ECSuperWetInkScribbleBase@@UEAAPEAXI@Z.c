CSuperWetInkScribbleBase *__fastcall CSuperWetInkScribbleBase::`vector deleting destructor'(
        CSuperWetInkScribbleBase *this,
        char a2)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
