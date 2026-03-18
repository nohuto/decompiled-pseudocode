/*
 * XREFs of NtUserNotifyProcessCreate @ 0x1C00A03A0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUserNotifyProcessCreate@@YAJKW4PROCESS_CREATE_HINT@@@Z @ 0x1C00A0414 (-xxxUserNotifyProcessCreate@@YAJKW4PROCESS_CREATE_HINT@@@Z.c)
 */

__int64 __fastcall NtUserNotifyProcessCreate(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned int v15; // ebx

  if ( !a4 )
    return 0LL;
  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9);
  v14 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
    v15 = xxxUserNotifyProcessCreate(a1, a4);
  else
    v15 = -1073741790;
  UserSessionSwitchLeaveCrit(v14, v11, v12, v13);
  return v15;
}
