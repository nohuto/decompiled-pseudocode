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
