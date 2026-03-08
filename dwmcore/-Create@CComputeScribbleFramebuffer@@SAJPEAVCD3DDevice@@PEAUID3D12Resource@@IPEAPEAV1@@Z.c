/*
 * XREFs of ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x180201908
 * Callers:
 *     ?EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z @ 0x180298658 (-EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801D4394 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z @ 0x1802013EC (--0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z.c)
 *     ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x180201C54 (-Initialize@CComputeScribbleFramebuffer@@AEAAJXZ.c)
 */

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
