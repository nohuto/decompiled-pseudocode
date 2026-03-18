/*
 * XREFs of NtUserRegisterLPK @ 0x1C00A63C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserRegisterLPK(int a1)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  EnterCrit(0LL, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  if ( CurrentProcessWin32Process )
  {
    v4 = -*(_QWORD *)CurrentProcessWin32Process;
    v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v6;
  }
  *(_DWORD *)(CurrentProcessWin32Process + 752) = a1;
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return 1LL;
}
