/*
 * XREFs of NtUserEnableMouseInputForCursorSuppression @ 0x1C00284F0
 * Callers:
 *     <none>
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C0028C70 (TransitionCursorSuppressionState.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserEnableMouseInputForCursorSuppression(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  __int64 v7; // rax

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( (a1 != 0) != a1 )
  {
    UserSetLastError(87LL);
    goto LABEL_6;
  }
  v3 = (unsigned int)(gCursorSuppressionState - 1);
  if ( gCursorSuppressionState == 1 )
    goto LABEL_12;
  v3 = (unsigned int)(gCursorSuppressionState - 2);
  if ( gCursorSuppressionState == 2 )
    goto LABEL_4;
  v3 = (unsigned int)(gCursorSuppressionState - 4);
  if ( gCursorSuppressionState == 4 )
    goto LABEL_4;
  v3 = (unsigned int)(gCursorSuppressionState - 5);
  if ( gCursorSuppressionState == 5 )
  {
LABEL_12:
    if ( !a1 )
      goto LABEL_5;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v6 = 2LL;
    *(_DWORD *)(CurrentProcessWin32Process + 820) &= ~0x80000u;
LABEL_14:
    TransitionCursorSuppressionState(v6, 1LL);
    goto LABEL_5;
  }
  v3 = (unsigned int)(gCursorSuppressionState - 6);
  if ( gCursorSuppressionState != 6 && gCursorSuppressionState != 8 )
    goto LABEL_5;
LABEL_4:
  if ( !a1 )
  {
    v7 = PsGetCurrentProcessWin32Process(v3);
    v6 = 1LL;
    *(_DWORD *)(v7 + 820) |= 0x80000u;
    goto LABEL_14;
  }
LABEL_5:
  v2 = 1LL;
LABEL_6:
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
