__int64 __fastcall CComputeScribbleRenderer::Initialize(CComputeScribbleRenderer *this)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  int HighPriorityComputeCommandQueueNoRef; // ebx
  __int64 v5; // rdx
  CLegacySwapChain *v7; // rbx
  int DXGIOutputDWM; // eax
  int DirectInkFactory; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // edi
  CComputeScribbleScheduler *v13; // rbx
  int v14; // [rsp+20h] [rbp-38h]
  struct CLegacySwapChain *v15; // [rsp+20h] [rbp-38h]
  struct ID3D12CommandQueue *v16; // [rsp+30h] [rbp-28h] BYREF
  CComputeScribbleScheduler **v17; // [rsp+38h] [rbp-20h]
  struct CComputeScribbleScheduler *v18; // [rsp+40h] [rbp-18h] BYREF
  char v19; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+20h]
  struct IDXGIOutputDWM *v21; // [rsp+80h] [rbp+28h] BYREF
  struct IDCompositionDirectInkCommunicationPartner *v22; // [rsp+88h] [rbp+30h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v23; // [rsp+90h] [rbp+38h] BYREF
  struct IDCompositionDirectInkSuperWetRenderer *v24; // [rsp+98h] [rbp+40h] BYREF

  v2 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 12LL) + *((_QWORD *)this + 2) + 8LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  HighPriorityComputeCommandQueueNoRef = CD3DDevice::GetHighPriorityComputeCommandQueueNoRef((CD3DDevice *)v3, &v16);
  if ( HighPriorityComputeCommandQueueNoRef < 0 )
  {
    v5 = 88LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
      (const char *)(unsigned int)HighPriorityComputeCommandQueueNoRef);
    return (unsigned int)HighPriorityComputeCommandQueueNoRef;
  }
  HighPriorityComputeCommandQueueNoRef = CD3DDevice::GetDirectInkSuperWetRendererNoRef((CD3DDevice *)v3, &v24);
  if ( HighPriorityComputeCommandQueueNoRef < 0 )
  {
    v5 = 91LL;
    goto LABEL_3;
  }
  v21 = 0LL;
  v7 = (CLegacySwapChain *)*((_QWORD *)this + 2);
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)&v21);
  DXGIOutputDWM = CLegacySwapChain::GetDXGIOutputDWM(v7, &v21);
  HighPriorityComputeCommandQueueNoRef = DXGIOutputDWM;
  if ( DXGIOutputDWM < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
      (const char *)(unsigned int)DXGIOutputDWM);
LABEL_18:
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v21);
    return (unsigned int)HighPriorityComputeCommandQueueNoRef;
  }
  v23 = 0LL;
  DirectInkFactory = CD2DContext::GetDirectInkFactory((CD2DContext *)(v3 + 16), &v23);
  if ( DirectInkFactory < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      101LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
      (const char *)(unsigned int)DirectInkFactory,
      v14);
  v10 = *(_QWORD *)v23;
  v22 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, struct IDCompositionDirectInkCommunicationPartner **))(v10 + 64))(
          v23,
          &v22);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      104LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
      (const char *)(unsigned int)v11,
      v14);
  v18 = 0LL;
  v17 = (CComputeScribbleScheduler **)((char *)this + 32);
  v15 = (struct CLegacySwapChain *)*((_QWORD *)this + 2);
  v19 = 1;
  v12 = CComputeScribbleScheduler::Create(v21, v16, v24, v22, v15, &v18);
  if ( v19 )
  {
    v13 = *v17;
    *v17 = v18;
    if ( v13 )
    {
      CComputeScribbleScheduler::~CComputeScribbleScheduler(v13);
      operator delete(v13);
    }
  }
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
      (const char *)(unsigned int)v12);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
    HighPriorityComputeCommandQueueNoRef = v12;
    goto LABEL_18;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v21);
  return 0LL;
}
