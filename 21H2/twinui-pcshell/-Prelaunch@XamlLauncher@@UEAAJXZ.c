/*
 * XREFs of ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x18039D6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x18008C4C0 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::Prelaunch(XamlLauncher *this, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(a2) = 1;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 48LL))(*((_QWORD *)this + 12), a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFA,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3);
    SetExistingEvent(L"ShellStartReadyEvent");
  }
  LOBYTE(v4) = 1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 48LL))(*((_QWORD *)this + 13), v4);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x100,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v5);
    SetExistingEvent(L"ShellSearchReadyEvent");
  }
  return 0LL;
}
