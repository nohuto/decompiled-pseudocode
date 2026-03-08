/*
 * XREFs of ?ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z @ 0x1802008D8
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x180200614 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z @ 0x1802009D0 (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180129DEE (McTemplateU0x_EventWriteTransfer.c)
 */

__int64 __fastcall CComputeScribbleScheduler::ReadyWakeupFence(CComputeScribbleScheduler *this, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rbx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 104);
  v4 = *((_QWORD *)this + 13);
  v5 = (_QWORD *)((char *)this + 96);
  if ( v4 )
  {
    *v2 = 0LL;
    v7 = *v5;
    *v5 = v4;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v5 + 72LL))(*v5, a2, *((_QWORD *)this + 9));
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0x_EventWriteTransfer(v9, (__int64)&EVTDESC_COMPUTESCRIBBLE_WAKEUPEVENTREADY, a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A4,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v8);
    return v10;
  }
}
