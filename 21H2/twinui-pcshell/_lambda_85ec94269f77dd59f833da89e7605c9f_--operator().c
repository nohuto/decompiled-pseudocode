/*
 * XREFs of _lambda_85ec94269f77dd59f833da89e7605c9f_::operator() @ 0x180081008
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_85ec94269f77dd59f833da89e7605c9f___::Run @ 0x180080FE0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_85ec94269f77dd59f833da89e7605c9f___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_85ec94269f77dd59f833da89e7605c9f_::operator()(__int64 a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 304LL) + 56LL))(*(_QWORD *)(*(_QWORD *)a1 + 304LL));
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x46,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v1,
      v3);
    JUMPOUT(0x1801A15CELL);
  }
  return 0LL;
}
