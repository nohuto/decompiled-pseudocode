/*
 * XREFs of NtUserSetAppImeLevel @ 0x1C0200F40
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x1C0038408 (InternalSetProp.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetAppImeLevel(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 CurrentProcessWin32Process; // rax

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpsi);
      v6 = *(_QWORD *)(v9 + 16);
      if ( *(_QWORD *)(v6 + 424) == CurrentProcessWin32Process )
      {
        InternalSetProp(v9, (unsigned __int16)atomImeLevel, v2, 5u);
        v8 = 1LL;
      }
    }
    else
    {
      UserSetLastError(120LL, v5, v7);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
