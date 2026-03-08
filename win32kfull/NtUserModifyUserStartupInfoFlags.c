/*
 * XREFs of NtUserModifyUserStartupInfoFlags @ 0x1C01D8B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserModifyUserStartupInfoFlags(int a1, int a2)
{
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  __int64 v7; // r10
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx

  EnterCrit(0LL, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v7 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v8 = a2 & a1 | ~a1 & *(_DWORD *)(v7 + 800);
  v9 = PsGetCurrentProcessWin32Process(v6);
  if ( v9 )
  {
    v10 = -*(_QWORD *)v9;
    v9 &= -(__int64)(*(_QWORD *)v9 != 0LL);
  }
  *(_DWORD *)(v9 + 800) = v8;
  UserSessionSwitchLeaveCrit(v10);
  return 1LL;
}
