/*
 * XREFs of ?EnsureComputeScribbleResources@CSwapChainBuffer@@QEAAJPEAVCLegacySwapChain@@@Z @ 0x1802521B8
 * Callers:
 *     ?EnsureComputeScribbleResources@CLegacySwapChain@@UEAAJXZ @ 0x180249890 (-EnsureComputeScribbleResources@CLegacySwapChain@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x1801A5F14 (-Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801E83B8 (-reset@-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateD3D12Resource@CLegacySwapChain@@QEBAJIPEAPEAUID3D12Resource@@@Z @ 0x1802496E8 (-CreateD3D12Resource@CLegacySwapChain@@QEBAJIPEAPEAUID3D12Resource@@@Z.c)
 */

__int64 __fastcall CSwapChainBuffer::EnsureComputeScribbleResources(
        CSwapChainBuffer *this,
        struct CLegacySwapChain *a2)
{
  CDrawListEntry **v2; // rsi
  int v5; // edx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // ebx
  char *v10; // rcx
  struct CD3DDevice *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ID3D12Resource *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CDrawListEntry **)((char *)this + 96);
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
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\swapchainbuffer.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
      return v7;
    }
    wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::reset(v2);
    v9 = *((_DWORD *)this + 22);
    v10 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 3) + 8LL) + 24;
    v11 = (struct CD3DDevice *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10);
    v6 = CComputeScribbleFramebuffer::Create(v11, v14, v9, v2);
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
