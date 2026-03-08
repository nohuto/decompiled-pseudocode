/*
 * XREFs of NtUserAlterWindowStyle @ 0x1C00F2960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserAlterWindowStyle(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r8

  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v6;
  if ( v6 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    v11 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v7 = -*(_QWORD *)CurrentProcessWin32Process;
      v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL) == v11 )
    {
      v7 = *(_QWORD *)(v9 + 40);
      *(_DWORD *)(v7 + 28) = a3 & a2 & 0x30023F | *(_DWORD *)(v7 + 28) & ~(a2 & 0x30023F);
    }
    v8 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
