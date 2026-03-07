COffScreenRenderingLayer *__fastcall COffScreenRenderingLayer::`vector deleting destructor'(
        COffScreenRenderingLayer *this,
        char a2)
{
  *(_QWORD *)this = &CExternalLayer::`vftable';
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x78uLL);
  return this;
}
