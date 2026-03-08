/*
 * XREFs of ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x180200CB8
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x180200614 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z @ 0x1802009D0 (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUID3D12Fence@@@Z @ 0x1801FFAD4 (-CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUID3D12Fence@@@Z.c)
 */

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
