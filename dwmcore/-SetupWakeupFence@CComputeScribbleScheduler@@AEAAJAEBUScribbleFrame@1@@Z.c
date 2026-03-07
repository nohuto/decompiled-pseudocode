__int64 __fastcall CComputeScribbleScheduler::SetupWakeupFence(
        CComputeScribbleScheduler *this,
        const struct CComputeScribbleScheduler::ScribbleFrame *a2)
{
  double v4; // xmm1_8
  double v5; // xmm0_8
  int v7; // eax
  unsigned int v8; // ebp
  struct ID3D12Fence *v10; // rax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ID3D12Fence *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 12)
    || (v4 = *((double *)a2 + 2), v5 = *((double *)this + 21), v4 > v5)
    || v5 - v4 >= *((double *)this + 1) )
  {
    v13 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v13);
    v7 = CComputeScribbleScheduler::CreateWakeupFence(this, a2, &v13);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x186,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
      return v8;
    }
    v10 = v13;
    v13 = 0LL;
    if ( *((_QWORD *)this + 12) )
    {
      v11 = *((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    else
    {
      *((_QWORD *)this + 12) = v10;
    }
    *((_QWORD *)this + 21) = *((_QWORD *)a2 + 2);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  }
  return 0LL;
}
