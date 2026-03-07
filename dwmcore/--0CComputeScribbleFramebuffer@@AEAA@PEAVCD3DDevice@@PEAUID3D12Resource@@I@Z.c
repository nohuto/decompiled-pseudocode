CComputeScribbleFramebuffer *__fastcall CComputeScribbleFramebuffer::CComputeScribbleFramebuffer(
        CComputeScribbleFramebuffer *this,
        struct CD3DDevice *a2,
        struct ID3D12Resource *a3,
        int a4)
{
  CComputeScribbleFramebuffer *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CComputeScribbleFramebuffer::`vftable';
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::com_ptr_t<CD3DDevice,wil::err_returncode_policy>(
    (_QWORD *)this + 2,
    (__int64)a2);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    ((void (__fastcall *)(struct ID3D12Resource *))a3->lpVtbl->AddRef)(a3);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = (char *)this + 88;
  *((_DWORD *)this + 22) = 0;
  *((_BYTE *)this + 152) = 0;
  *((_QWORD *)this + 20) = (char *)this + 168;
  *((_DWORD *)this + 42) = 0;
  result = this;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 61) = a4;
  *((_BYTE *)this + 240) = 0;
  return result;
}
