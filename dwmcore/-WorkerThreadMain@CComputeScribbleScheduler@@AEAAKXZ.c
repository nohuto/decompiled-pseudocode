/*
 * XREFs of ?WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ @ 0x180200E20
 * Callers:
 *     _lambda_519802986d06bbdf622f922bf8fedd22_::_lambda_invoker_cdecl_ @ 0x1801FEDB0 (_lambda_519802986d06bbdf622f922bf8fedd22_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CComputeScribbleScheduler::WorkerThreadMain(CComputeScribbleScheduler *this)
{
  __int64 *v1; // rbx
  int v3; // eax
  __int64 *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *, __int64, char *); // rbp
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 192);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 24);
  v3 = CoreUICreate(v1);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      471LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v3,
      v11);
  v4 = (__int64 *)*((_QWORD *)this + 23);
  v5 = *((_QWORD *)this + 26);
  v6 = *v4;
  *((_QWORD *)this + 26) = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64 *, __int64, char *))(v6 + 24);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v8 = v7(v4, *v1, (char *)this + 208);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      475LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v8,
      v11);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 (__fastcall *)(CComputeScribbleScheduler *), CComputeScribbleScheduler *))(*(_QWORD *)*v1 + 272LL))(
         *v1,
         *((_QWORD *)this + 9),
         lambda_1e65f1bd86c69cffa4e82cca78acb4e5_::_lambda_invoker_cdecl_,
         this);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      485LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v9,
      v11);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 232LL))(*v1);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  return 0LL;
}
