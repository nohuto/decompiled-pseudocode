__int64 __fastcall CLegacySwapChain::CreateD3D12Resource(CLegacySwapChain *this, int a2, struct ID3D12Resource **a3)
{
  unsigned int v3; // r9d
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  CD3DDevice *v10; // rcx
  int v11; // eax
  struct ID3D12Resource *v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ID3D12Resource *v15; // [rsp+40h] [rbp+8h] BYREF
  struct ID3D11Texture2D *v16; // [rsp+58h] [rbp+20h] BYREF

  v3 = *((_DWORD *)this + 79);
  v16 = 0LL;
  v6 = (a2 + v3 - *((_DWORD *)this + 68)) % v3;
  if ( (unsigned int)v6 >= v3 )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x581u, 0LL);
    goto LABEL_8;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, struct ID3D11Texture2D **))(**((_QWORD **)this + 28) + 72LL))(
         *((_QWORD *)this + 28),
         v6,
         &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
         &v16);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x57Du, 0LL);
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x590,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
      (const char *)v9);
    goto LABEL_9;
  }
  v10 = (CD3DDevice *)*((_QWORD *)this + 10);
  v15 = 0LL;
  v11 = CD3DDevice::ShareToD3D12(v10, v16, &v15);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v12 = v15;
    v15 = 0LL;
    *a3 = v12;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x595,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  }
LABEL_9:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  return v9;
}
