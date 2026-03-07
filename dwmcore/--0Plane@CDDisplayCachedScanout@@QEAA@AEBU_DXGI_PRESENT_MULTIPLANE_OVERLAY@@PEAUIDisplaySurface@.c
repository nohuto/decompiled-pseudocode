CDDisplayCachedScanout::Plane *__fastcall CDDisplayCachedScanout::Plane::Plane(
        CDDisplayCachedScanout::Plane *this,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a2,
        struct Windows::Devices::Display::Core::IDisplaySurface *a3)
{
  _QWORD *v3; // rsi

  *(_DWORD *)this = 0;
  v3 = (_QWORD *)((char *)this + 8);
  *((_BYTE *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *(_OWORD *)((char *)this + 20) = 0LL;
  *(_OWORD *)((char *)this + 36) = 0LL;
  *(_OWORD *)((char *)this + 52) = 0LL;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_BYTE *)this + 4) = *((_DWORD *)a2 + 1) != 0;
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurface,wil::err_returncode_policy>::operator=(
    (char *)this + 8,
    *((_QWORD *)a2 + 1));
  if ( !*v3 )
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurface,wil::err_returncode_policy>::operator=(v3, a3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 20) = *(_OWORD *)((char *)a2 + 28);
  *(_OWORD *)((char *)this + 36) = *(_OWORD *)((char *)a2 + 44);
  *(_OWORD *)((char *)this + 52) = *(_OWORD *)((char *)a2 + 60);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 25);
  return this;
}
