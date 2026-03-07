CRemoteAppRenderTarget *__fastcall CRemoteAppRenderTarget::`vector deleting destructor'(
        CRemoteAppRenderTarget *this,
        char a2)
{
  CRemoteAppRenderTarget::~CRemoteAppRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
