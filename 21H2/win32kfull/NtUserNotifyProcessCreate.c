/*
 * XREFs of NtUserNotifyProcessCreate @ 0x1C0079FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProcessLaunchForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0077A00 (-PushProcessLaunchForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C007B748 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 */

__int64 __fastcall NtUserNotifyProcessCreate(signed int a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx

  if ( a4 )
  {
    EnterCrit(0LL, 0LL);
    CurrentProcess = PsGetCurrentProcess(v10, v9);
    v12 = gpepCSRSS;
    if ( CurrentProcess == gpepCSRSS )
      v13 = xxxUserNotifyProcessCreate(a1, a2, a3, a4);
    else
      v13 = -1073741790;
    UserSessionSwitchLeaveCrit(v12);
    return v13;
  }
  else
  {
    ForegroundLaunch::PushProcessLaunchForegroundPolicy(a1, 4LL);
    return 0LL;
  }
}
