/*
 * XREFs of _lambda_394656eb2278d455fd4307dad9bf4072_::operator() @ 0x1800CC9B8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_394656eb2278d455fd4307dad9bf4072___::Run @ 0x1800CCD10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_394656eb2278d455fd4307dad9bf4072___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801B6D7C (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1804E5E04 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

__int64 __fastcall lambda_394656eb2278d455fd4307dad9bf4072_::operator()(struct IUnknown **a1)
{
  struct IUnknown *v1; // rbx
  HANDLE EventW; // rax
  unsigned int v3; // edi
  __int64 v4; // r9
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  EventW = CreateEventW(0LL, 1, 0, L"ShellStartReadyEvent");
  v8 = EventW;
  if ( (((unsigned __int64)EventW + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    WaitForSingleObject(EventW, 0x7530u);
    v3 = 0;
  }
  else
  {
    v3 = -2147417824;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x119,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)0x80010120LL);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v8);
  v5 = ExperienceManagerUtils::PostToUIThread(0LL, v1, (void *)5, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x115,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
  return v3;
}
