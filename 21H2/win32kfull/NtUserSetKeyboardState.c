/*
 * XREFs of NtUserSetKeyboardState @ 0x1C01523C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _SetKeyboardState @ 0x1C0152488 (_SetKeyboardState.c)
 */

__int64 __fastcall NtUserSetKeyboardState(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx

  EnterCrit(0LL, 1LL);
  v2 = *(_QWORD *)(gptiCurrent + 432LL);
  v3 = 0;
  if ( (unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, v2 + 428)
    || (*(_DWORD *)(v2 + 388) & 0x2000000) != 0 )
  {
    v3 = SetKeyboardState(a1);
  }
  else
  {
    EtwTraceUIPIInputError(gptiCurrent, 0LL, v2, *(_QWORD *)(v2 + 428), 3);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
