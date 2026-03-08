/*
 * XREFs of ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x1802019CC
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x180200614 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x18012A09C (McTemplateU0xq_EventWriteTransfer.c)
 *     ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x1802016E8 (-BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDComposi.c)
 *     ?LockForDraw@CComputeScribbleFramebuffer@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180201E78 (-LockForDraw@CComputeScribbleFramebuffer@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_po.c)
 *     McTemplateU0xxxq_EventWriteTransfer @ 0x180201FDC (McTemplateU0xxxq_EventWriteTransfer.c)
 *     ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x180206840 (-GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ.c)
 *     CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a6417a357a345f1ca7153e0f2978444f___ @ 0x180206DB0 (CComputeScribbleSynchronizer--BeginRenderInternal__lambda_a6417a357a345f1ca7153e0f2978444f___.c)
 *     ?EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAUID3D12CommandQueue@@_K@Z @ 0x180206F20 (-EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAUID3D12CommandQueue@@_K@Z.c)
 *     ?WaitForOperationComplete12@CComputeScribbleSynchronizer@@QEAAJ_K@Z @ 0x180207194 (-WaitForOperationComplete12@CComputeScribbleSynchronizer@@QEAAJ_K@Z.c)
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x18026F1E8 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::DispatchScribbles(
        CComputeScribbleFramebuffer *this,
        struct ID3D12CommandQueue *a2,
        struct CComputeScribbleStopwatch *a3,
        __int64 a4,
        struct IDCompositionDirectInkSuperWetRenderer *a5,
        struct IUnknown *a6,
        struct ComputeScribbleLatencyData *a7)
{
  int *v7; // rdi
  __int64 v12; // rax
  struct ComputeScribbleLatencyData *v13; // r13
  unsigned __int64 v14; // r12
  int v15; // eax
  unsigned int v16; // r15d
  __int64 v17; // rcx
  __int64 v19; // rcx
  int v20; // eax
  enum D3D12_RESOURCE_STATES v21; // r8d
  unsigned int v22; // edi
  __int64 v23; // rdi
  float ElapsedTimeMs; // xmm0_4
  unsigned __int64 v25; // rax
  float v26; // xmm0_4
  unsigned __int64 v27; // rbx
  int v28; // ecx
  float v29; // xmm0_4
  __int64 v30; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+70h] [rbp+8h] BYREF

  v7 = (int *)((char *)this + 244);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xq_EventWriteTransfer((__int64)this, (__int64)&EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCH_Start, a4, *v7);
  CComputeScribbleFramebuffer::LockForDraw(this, &SRWLock);
  if ( !*((_QWORD *)this + 9) )
  {
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return 0LL;
  }
  v12 = CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a6417a357a345f1ca7153e0f2978444f___(*((PSRWLOCK *)this + 6));
  v13 = a7;
  v14 = v12;
  v15 = CComputeScribbleFramebuffer::BuildCommandList(this, a3, a5, a6, a7);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v30 = *((_QWORD *)this + 5);
    ((void (__fastcall *)(struct ID3D12CommandQueue *, __int64, __int64 *))a2->lpVtbl->ExecuteCommandLists)(
      a2,
      1LL,
      &v30);
    CComputeScribbleSynchronizer::EndRenderOperation(*((CComputeScribbleSynchronizer **)this + 6), a2, v14);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0xq_EventWriteTransfer(v19, (__int64)&EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCH_Stop, a4, *v7);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v20 = CComputeScribbleSynchronizer::WaitForOperationComplete12(*((CComputeScribbleSynchronizer **)this + 6), v14);
    v22 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC6,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
        (const char *)(unsigned int)v20);
      return v22;
    }
    if ( g_LockAndReadComputeScribble )
      DebugInspectSurface(a2, *((struct ID3D12Resource **)this + 3), v21);
    v23 = *((_QWORD *)a3 + 6);
    ElapsedTimeMs = CComputeScribbleStopwatch::GetElapsedTimeMs(a3);
    v25 = 0LL;
    v26 = (float)(ElapsedTimeMs / 1000.0) * *((float *)a3 + 2);
    if ( v26 >= 9.223372e18 )
    {
      v26 = v26 - 9.223372e18;
      if ( v26 < 9.223372e18 )
        v25 = 0x8000000000000000uLL;
    }
    v27 = *((_QWORD *)a3 + 6) + v25 + (unsigned int)(int)v26;
    *((_QWORD *)v13 + 4) = v27;
    v29 = CComputeScribbleStopwatch::GetElapsedTimeMs(a3) * 1000.0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0xxxq_EventWriteTransfer(
        v28,
        (unsigned int)&EVTDESC_COMPUTESCRIBBLE_GPUFINISHED,
        a4,
        v23,
        v27,
        (int)v29);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBE,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
    (const char *)(unsigned int)v15);
  CComputeScribbleSynchronizer::EndRenderOperation(*((CComputeScribbleSynchronizer **)this + 6), a2, v14);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xq_EventWriteTransfer(v17, (__int64)&EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCH_Stop, a4, *v7);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v16;
}
