/*
 * XREFs of _lambda_c032fb9048ad168ba2bd3d1dd4629f64_::_lambda_invoker_cdecl_ @ 0x180210EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x180211EE8 (-DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z.c)
 */

__int64 __fastcall lambda_c032fb9048ad168ba2bd3d1dd4629f64_::_lambda_invoker_cdecl_(void *a1)
{
  CAnimationLoggingManager::DeferredSendDebugStart(
    *(CAnimationLoggingManager **)a1,
    *((_DWORD *)a1 + 2),
    *((_QWORD *)a1 + 2),
    *((_DWORD *)a1 + 6));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)a1);
  operator delete(a1);
  return 0LL;
}
