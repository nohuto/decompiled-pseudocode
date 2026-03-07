__int64 __fastcall CSwapChainBuffer::EnsureComputeScribbleResources(
        CSwapChainBuffer *this,
        struct CLegacySwapChain *a2)
{
  volatile signed __int32 **v2; // rsi
  int v5; // edx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // ebx
  char *v10; // rcx
  struct CD3DDevice *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ID3D12Resource *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (volatile signed __int32 **)((char *)this + 96);
  if ( !*((_QWORD *)this + 12) )
  {
    v5 = *((_DWORD *)this + 22);
    v14 = 0LL;
    v6 = CLegacySwapChain::CreateD3D12Resource(a2, v5, &v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 37LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\swapchainbuffer.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
      return v7;
    }
    wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::reset(v2);
    v9 = *((_DWORD *)this + 22);
    v10 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 12LL) + 8;
    v11 = (struct CD3DDevice *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10);
    v6 = CComputeScribbleFramebuffer::Create(v11, v14, v9, (struct CComputeScribbleFramebuffer **)v2);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 43LL;
      goto LABEL_6;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  }
  return 0LL;
}
