/*
 * XREFs of ??R_lambda_7573529bdd9445da64c4582e06079e73_@@QEBAXXZ @ 0x180136B58
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_7573529bdd9445da64c4582e06079e73___ @ 0x1801327EC (_anonymous_namespace_--RunSynchronousInSTA__lambda_7573529bdd9445da64c4582e06079e73___.c)
 *     _lambda_4847ee841f10e4ee6f598a9cb2b519bc_::operator() @ 0x1801369D0 (_lambda_4847ee841f10e4ee6f598a9cb2b519bc_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x1800AF0D8 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x18014FF90 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall _lambda_7573529bdd9445da64c4582e06079e73_::operator()(__int64 a1)
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
  result = (_DWORD *)(**(__int64 (__fastcall ***)(char *, _QWORD, _QWORD))a1)(
                       (char *)v5 + *(int *)(*(_QWORD *)a1 + 8LL),
                       **(unsigned int **)(a1 + 8),
                       **(unsigned int **)(a1 + 16));
  if ( (_DWORD)result == -2147019873 )
  {
    result = *(_DWORD **)(a1 + 24);
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
