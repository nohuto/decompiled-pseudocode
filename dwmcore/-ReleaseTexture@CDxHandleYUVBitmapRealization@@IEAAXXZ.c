void __fastcall CDxHandleYUVBitmapRealization::ReleaseTexture(CD3DResource **this)
{
  struct Windows::Devices::Display::Core::IDisplaySurface **v1; // rsi
  const struct IDeviceResourceNotify *v2; // rdi

  v1 = this + 48;
  v2 = 0LL;
  if ( this[48] )
  {
    CDDisplayManager::NotifyRealizationBitmapReleased((CDDisplayManager *)this, *v1);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v1);
  }
  if ( this[47] )
  {
    if ( this )
      v2 = (const struct IDeviceResourceNotify *)((char *)this + *((int *)this[2] + 1) + 16);
    CD3DResource::RemoveResourceNotifier(this[47], v2);
    wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((volatile signed __int32 **)this + 47);
  }
  CBitmapRealization::InvalidateDecodeBitmap((CBitmapRealization *)this, 1);
}
