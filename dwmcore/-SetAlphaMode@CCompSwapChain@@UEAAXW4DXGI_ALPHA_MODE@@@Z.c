void __fastcall CCompSwapChain::SetAlphaMode(CCompSwapChain *this, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 32) != a2 )
  {
    v6 = 0LL;
    *((_DWORD *)this + 32) = a2;
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 10))(
           *((_QWORD *)this + 10),
           &GUID_7652c85a_0df5_4567_bcdd_8176a332b99b,
           &v6) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, a2);
    v4 = *((_QWORD *)this + 12);
    if ( v4 )
    {
      v5 = v4 + *(int *)(*(_QWORD *)(v4 + 8) + 24LL) + 8LL;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 16LL))(v5, a2);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v6);
  }
}
