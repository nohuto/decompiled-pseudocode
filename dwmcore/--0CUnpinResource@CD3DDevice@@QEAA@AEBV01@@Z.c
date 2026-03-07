CD3DDevice::CUnpinResource *__fastcall CD3DDevice::CUnpinResource::CUnpinResource(
        CD3DDevice::CUnpinResource *this,
        const struct CD3DDevice::CUnpinResource *a2)
{
  __int64 v4; // rcx

  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::com_ptr_t<IDXGIResource,wil::err_returncode_policy>(
    this,
    *(_QWORD *)a2);
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    (_QWORD *)this + 1,
    *((_QWORD *)a2 + 1));
  v4 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 176LL))(v4);
  return this;
}
