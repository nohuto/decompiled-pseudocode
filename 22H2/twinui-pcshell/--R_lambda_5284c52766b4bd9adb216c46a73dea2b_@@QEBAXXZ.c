/*
 * XREFs of ??R_lambda_5284c52766b4bd9adb216c46a73dea2b_@@QEBAXXZ @ 0x180136A40
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_5284c52766b4bd9adb216c46a73dea2b___ @ 0x1801326C0 (_anonymous_namespace_--RunSynchronousInSTA__lambda_5284c52766b4bd9adb216c46a73dea2b___.c)
 *     _lambda_f1acb3e88a7ee276e5be409f1eb050f8_::operator() @ 0x180136F78 (_lambda_f1acb3e88a7ee276e5be409f1eb050f8_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x1800AF0D8 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x18014FF90 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall _lambda_5284c52766b4bd9adb216c46a73dea2b_::operator()(_QWORD *a1)
{
  int v2; // eax
  _DWORD *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CPinnedList *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = CTaskbandPin_CreateInstance(&v5);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      897LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  result = (_DWORD *)(*(__int64 (__fastcall **)(char *))*a1)((char *)v5 + *(int *)(*a1 + 8LL));
  if ( (_DWORD)result == -2147019873 )
  {
    result = (_DWORD *)a1[1];
    *result = -2147019873;
  }
  else if ( (int)result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      901LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  if ( v5 )
    return (_DWORD *)winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v5);
  return result;
}
