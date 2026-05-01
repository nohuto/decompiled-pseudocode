/*
 * XREFs of _lambda_f787ce11dee42df79c5ec7bca65a6817_::operator() @ 0x18007FEA8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f787ce11dee42df79c5ec7bca65a6817___::Run @ 0x18007FE80 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f787ce11dee42df79c5ec7bca65a6817___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_f787ce11dee42df79c5ec7bca65a6817_::operator()(_QWORD *a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(__int64 **)(*a1 + 304LL);
  v3 = *v2;
  *(_OWORD *)v6 = *(_OWORD *)a1[1];
  v4 = (*(__int64 (__fastcall **)(__int64 *, int *))(v3 + 48))(v2, v6);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18A,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v4,
      v6[0]);
    JUMPOUT(0x1801A0970LL);
  }
  *(_OWORD *)(*a1 + 732LL) = *(_OWORD *)a1[1];
  return 0LL;
}
