/*
 * XREFs of NtUserAlterWindowStyle @ 0x1C00BAEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserAlterWindowStyle(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 CurrentProcessWin32Process; // rax

  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v11 = 0LL;
  v12 = v6;
  if ( v6 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    v9 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v8 = -*(_QWORD *)CurrentProcessWin32Process;
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v9 = v7 & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL) == v9 )
    {
      v8 = *(_QWORD *)(v12 + 40);
      *(_DWORD *)(v8 + 28) = a3 & a2 & 0x30023F | *(_DWORD *)(v8 + 28) & ~(a2 & 0x30023F);
    }
    v11 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
