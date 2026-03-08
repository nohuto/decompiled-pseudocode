/*
 * XREFs of ?Create@CComputeScribbleScheduler@@SAJPEAUIDXGIOutputDWM@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIDCompositionDirectInkCommunicationPartner@@PEAVCLegacySwapChain@@PEAPEAV1@@Z @ 0x1801FFA0C
 * Callers:
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801F8740 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCComputeScribbleScheduler@@U?$default_delete@VCComputeScribbleScheduler@@@std@@@std@@QEAA@XZ @ 0x1801F84D8 (--1-$unique_ptr@VCComputeScribbleScheduler@@U-$default_delete@VCComputeScribbleScheduler@@@std@@.c)
 *     ??0CComputeScribbleScheduler@@AEAA@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAVCLegacySwapChain@@@Z @ 0x1801FF36C (--0CComputeScribbleScheduler@@AEAA@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkSuperWetRen.c)
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1802000E0 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 */

__int64 __fastcall CComputeScribbleScheduler::Create(
        struct IDXGIOutputDWM *a1,
        struct ID3D12CommandQueue *a2,
        struct IDCompositionDirectInkSuperWetRenderer *a3,
        struct IDCompositionDirectInkCommunicationPartner *a4,
        struct CLegacySwapChain *a5,
        struct CComputeScribbleScheduler **a6)
{
  CComputeScribbleScheduler *v10; // rax
  CComputeScribbleScheduler *v11; // rax
  struct CComputeScribbleScheduler *v12; // rdi
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // r9
  __int64 v16; // rdx
  CComputeScribbleScheduler *v18; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = (CComputeScribbleScheduler *)DefaultHeap::Alloc(0xE0uLL);
  if ( !v10 )
  {
    v18 = 0LL;
    goto LABEL_7;
  }
  v11 = CComputeScribbleScheduler::CComputeScribbleScheduler(v10, a2, a3, a5);
  v18 = v11;
  v12 = v11;
  if ( !v11 )
  {
LABEL_7:
    v14 = -2147024882;
    v16 = 89LL;
    v15 = 2147942414LL;
    goto LABEL_8;
  }
  v13 = CComputeScribbleScheduler::Initialize(v11, a1, a4);
  v14 = v13;
  if ( v13 >= 0 )
  {
    *a6 = v12;
    return 0LL;
  }
  v15 = (unsigned int)v13;
  v16 = 91LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
    (const char *)v15);
  std::unique_ptr<CComputeScribbleScheduler>::~unique_ptr<CComputeScribbleScheduler>(&v18);
  return v14;
}
