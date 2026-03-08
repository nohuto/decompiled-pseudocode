/*
 * XREFs of NtUserNotifyProcessCreate @ 0x1C003EDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUserNotifyProcessCreate@@YAJKW4PROCESS_CREATE_HINT@@@Z @ 0x1C003ECC8 (-xxxUserNotifyProcessCreate@@YAJKW4PROCESS_CREATE_HINT@@@Z.c)
 *     Feature_StrictParentBasedAllowForegroundActivate__private_ReportDeviceUsage @ 0x1C012E440 (Feature_StrictParentBasedAllowForegroundActivate__private_ReportDeviceUsage.c)
 */

__int64 __fastcall NtUserNotifyProcessCreate(int a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // ebx

  Feature_StrictParentBasedAllowForegroundActivate__private_ReportDeviceUsage();
  if ( !a4 )
    return 0LL;
  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8);
  v12 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
    v13 = xxxUserNotifyProcessCreate(a1, a4, v10, v11);
  else
    v13 = -1073741790;
  UserSessionSwitchLeaveCrit(v12);
  return v13;
}
