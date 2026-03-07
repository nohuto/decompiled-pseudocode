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
