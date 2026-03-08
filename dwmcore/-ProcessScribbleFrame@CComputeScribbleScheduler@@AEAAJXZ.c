/*
 * XREFs of ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x180200614
 * Callers:
 *     _lambda_1e65f1bd86c69cffa4e82cca78acb4e5_::_lambda_invoker_cdecl_ @ 0x1801FED70 (_lambda_1e65f1bd86c69cffa4e82cca78acb4e5_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180129DEE (McTemplateU0x_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 *     ?DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z @ 0x1801FFD9C (-DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z.c)
 *     ?ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z @ 0x1802008D8 (-ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z.c)
 *     ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x180200CB8 (-SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 *     ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x180200DCC (-StopInternal@CComputeScribbleScheduler@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1802011BC (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x1802018B0 (-ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x1802019CC (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 */

__int64 __fastcall CComputeScribbleScheduler::ProcessScribbleFrame(
        CComputeScribbleScheduler *this,
        __int64 a2,
        __int64 a3)
{
  LARGE_INTEGER *v4; // rbx
  RTL_SRWLOCK *QuadPart; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 i; // rcx
  int v11; // eax
  unsigned int v12; // r14d
  int ready; // esi
  __int64 v14; // rdx
  CComputeScribbleFramebuffer *v15; // r14
  CComputeScribbleFramebuffer *Ptr; // r14
  unsigned __int64 *v17; // rbx
  int v18; // eax
  unsigned int v19; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-19h] BYREF
  CComputeScribbleFramebuffer *v21; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v22[56]; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+88h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_THREADWAKEUP_RAW,
      a3,
      1u,
      &v23);
  v4 = (LARGE_INTEGER *)*((_QWORD *)this + 10);
  QueryPerformanceCounter(&PerformanceCount);
  v4[6] = PerformanceCount;
  QuadPart = (RTL_SRWLOCK *)((char *)this + 88);
  AcquireSRWLockExclusive((PSRWLOCK)this + 11);
  v6 = *((_QWORD *)this + 12);
  PerformanceCount.QuadPart = (LONGLONG)this + 88;
  if ( !v6 )
    goto LABEL_12;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
  v8 = v7;
  if ( !v7 )
    goto LABEL_12;
  if ( v7 == -1 )
  {
    CComputeScribbleScheduler::StopInternal(this);
LABEL_12:
    if ( QuadPart )
      ReleaseSRWLockExclusive(QuadPart);
    return 0LL;
  }
  for ( i = *((_QWORD *)this + 14); ; i += 8LL )
  {
    if ( i == *((_QWORD *)this + 15) )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 12);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 13);
      goto LABEL_12;
    }
    if ( *(_BYTE *)(*(_QWORD *)i + 240LL) )
      break;
  }
  *((_QWORD *)this + 20) = (unsigned int)v7;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0x_EventWriteTransfer(i, (__int64)&EVTDESC_COMPUTESCRIBBLE_THREADWAKEUP, v7);
  v11 = CComputeScribbleScheduler::DecideBufferToDispatch(this, (struct CComputeScribbleFramebuffer **)&v23, &v21);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x221,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v11);
    if ( this != (CComputeScribbleScheduler *)-88LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 11);
    return v12;
  }
  ready = CComputeScribbleScheduler::ReadyWakeupFence(this, v8 + 1);
  if ( ready < 0 )
  {
    v14 = 548LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)ready);
    if ( QuadPart )
      ReleaseSRWLockExclusive(QuadPart);
    return (unsigned int)ready;
  }
  v15 = v21;
  ready = 0;
  if ( v21 )
  {
    ready = CComputeScribbleScheduler::SetupWakeupFence(
              this,
              (const struct CComputeScribbleScheduler::ScribbleFrame *)(*((_QWORD *)this + 17)
                                                                      + 32LL * *((unsigned int *)v21 + 61)));
    if ( ready < 0 )
      CComputeScribbleFramebuffer::ClearScribbles(v15);
  }
  Ptr = (CComputeScribbleFramebuffer *)v23.Ptr;
  if ( !v23.Ptr )
  {
LABEL_35:
    if ( ready >= 0 )
      goto LABEL_12;
    v14 = 585LL;
    goto LABEL_23;
  }
  v17 = (unsigned __int64 *)(*((_QWORD *)this + 17) + 32LL * *(unsigned int *)(v23.Ptr + 244));
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
    &PerformanceCount,
    0LL);
  v18 = CComputeScribbleFramebuffer::DispatchScribbles(
          Ptr,
          *((struct ID3D12CommandQueue **)this + 2),
          *((struct CComputeScribbleStopwatch **)this + 10),
          *v17,
          *((struct IDCompositionDirectInkSuperWetRenderer **)this + 27),
          *((struct IUnknown **)this + 26),
          (struct ComputeScribbleLatencyData *)v22);
  v19 = v18;
  if ( v18 >= 0 )
  {
    QuadPart = (RTL_SRWLOCK *)PerformanceCount.QuadPart;
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x241,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
    (const char *)(unsigned int)v18);
  if ( PerformanceCount.QuadPart )
    ReleaseSRWLockExclusive((PSRWLOCK)PerformanceCount.QuadPart);
  return v19;
}
