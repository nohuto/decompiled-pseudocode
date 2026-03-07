void __fastcall CRenderTarget::ForceFullRender(CRenderTarget *this)
{
  *((_BYTE *)this + 141) = 1;
}
