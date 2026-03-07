CTreeEffectLayer *__fastcall CTreeEffectLayer::`vector deleting destructor'(CTreeEffectLayer *this, char a2)
{
  *(_QWORD *)this = &CExternalLayer::`vftable';
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x120uLL);
  return this;
}
