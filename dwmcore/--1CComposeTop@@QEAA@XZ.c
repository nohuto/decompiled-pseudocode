void __fastcall CComposeTop::~CComposeTop(CComposeTop *this)
{
  if ( *((_QWORD *)this + 20) )
    std::default_delete<CShape>::operator()();
  if ( *((_QWORD *)this + 2) )
    std::default_delete<CShape>::operator()();
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)this + 8);
}
