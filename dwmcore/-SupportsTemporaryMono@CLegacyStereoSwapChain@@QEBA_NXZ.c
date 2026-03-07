bool __fastcall CLegacyStereoSwapChain::SupportsTemporaryMono(CLegacyStereoSwapChain *this)
{
  bool v1; // bl
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 28) )
  {
    v4 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v4);
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 28))(
           *((_QWORD *)this + 28),
           &GUID_790a45f7_0d42_4876_983a_0a55cfe6f4aa,
           &v4) >= 0 )
      v1 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4) != 0;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v4);
  }
  return v1;
}
