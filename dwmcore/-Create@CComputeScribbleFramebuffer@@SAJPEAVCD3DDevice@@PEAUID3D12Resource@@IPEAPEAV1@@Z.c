__int64 __fastcall CComputeScribbleFramebuffer::Create(
        struct CD3DDevice *a1,
        struct ID3D12Resource *a2,
        int a3,
        struct CComputeScribbleFramebuffer **a4)
{
  CComputeScribbleFramebuffer *v8; // rax
  volatile signed __int32 *v9; // rax
  CComputeScribbleFramebuffer *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  volatile signed __int32 *v16; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (CComputeScribbleFramebuffer *)DefaultHeap::Alloc(0xF8uLL);
  if ( !v8 )
  {
    v16 = 0LL;
    goto LABEL_7;
  }
  v9 = (volatile signed __int32 *)CComputeScribbleFramebuffer::CComputeScribbleFramebuffer(v8, a1, a2, a3);
  v16 = v9;
  v10 = (CComputeScribbleFramebuffer *)v9;
  if ( !v9 )
  {
LABEL_7:
    v12 = -2147024882;
    v14 = 41LL;
    v13 = 2147942414LL;
    goto LABEL_8;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v9 + 2));
  v11 = CComputeScribbleFramebuffer::Initialize(v10);
  v12 = v11;
  if ( v11 >= 0 )
  {
    *a4 = v10;
    return 0LL;
  }
  v13 = (unsigned int)v11;
  v14 = 43LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
    (const char *)v13);
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(&v16);
  return v12;
}
