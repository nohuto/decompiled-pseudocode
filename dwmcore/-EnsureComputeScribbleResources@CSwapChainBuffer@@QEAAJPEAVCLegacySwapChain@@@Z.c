/*
 * XREFs of ?EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z @ 0x180298658
 * Callers:
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1802000E0 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 *     ?EnsureComputeScribbleResources@CLegacySwapChain@@UEAAJXZ @ 0x180297838 (-EnsureComputeScribbleResources@CLegacySwapChain@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x180201908 (-Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z.c)
 *     ?CreateD3D12Resource@CLegacySwapChain@@QEBAJIPEAPEAUID3D12Resource@@@Z @ 0x1802976FC (-CreateD3D12Resource@CLegacySwapChain@@QEBAJIPEAPEAUID3D12Resource@@@Z.c)
 *     ?reset@?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180298634 (-reset@-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

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
