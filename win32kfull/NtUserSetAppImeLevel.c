/*
 * XREFs of NtUserSetAppImeLevel @ 0x1C01DB480
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     InternalSetProp @ 0x1C01011E0 (InternalSetProp.c)
 */

__int64 __fastcall NtUserSetAppImeLevel(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // r8

  v2 = a2;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpsi);
      v9 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v5 = -*(_QWORD *)CurrentProcessWin32Process;
        v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      }
      if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) == v9 )
      {
        InternalSetProp(v7, (unsigned __int16)atomImeLevel, v2, 5u);
        v6 = 1LL;
      }
    }
    else
    {
      UserSetLastError(120);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
