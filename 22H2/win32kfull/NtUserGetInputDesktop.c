/*
 * XREFs of NtUserGetInputDesktop @ 0x1C01D1C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserGetInputDesktop()
{
  __int64 v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  v0 = 0LL;
  v10 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v2, v1, v3);
  if ( (unsigned __int8)ObFindHandleForObject(CurrentProcess, grpdeskRitInput, 0LL, 0LL, &v10)
    && (unsigned int)SetHandleFlag(v10, 1LL, 1LL) )
  {
    v0 = v10;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v0;
}
