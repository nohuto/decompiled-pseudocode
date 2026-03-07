void __fastcall CLegacySwapChain::GetDesktopPlaneResource(CLegacySwapChain *this, struct IUnknown **a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64, __int64 *); // rdi
  struct IUnknown *v6; // rax
  struct IUnknown *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  v3 = (**(__int64 (__fastcall ***)(CLegacySwapChain *))this)(this);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  v5 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 56LL);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v5(v4, &v8);
  if ( v7 )
    ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
  (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v8)(
    v8,
    &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
    (__int64 *)&v7);
  v6 = v7;
  v7 = 0LL;
  *a2 = v6;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v7);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v8);
}
