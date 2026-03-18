/*
 * XREFs of NtUserEnableMouseInputForCursorSuppression @ 0x1C0097CF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     TransitionCursorSuppressionState @ 0x1C0097DC0 (TransitionCursorSuppressionState.c)
 */

__int64 __fastcall NtUserEnableMouseInputForCursorSuppression(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  EnterCrit(0LL, 0LL);
  v3 = 0LL;
  if ( (a1 != 0) != a1 )
  {
    UserSetLastError(87LL, v2);
    goto LABEL_6;
  }
  v4 = (unsigned int)(gCursorSuppressionState - 1);
  if ( gCursorSuppressionState == 1 )
    goto LABEL_12;
  v4 = (unsigned int)(gCursorSuppressionState - 2);
  if ( gCursorSuppressionState == 2 )
    goto LABEL_4;
  v4 = (unsigned int)(gCursorSuppressionState - 4);
  if ( gCursorSuppressionState == 4 )
    goto LABEL_4;
  v4 = (unsigned int)(gCursorSuppressionState - 5);
  if ( gCursorSuppressionState == 5 )
  {
LABEL_12:
    if ( !a1 )
      goto LABEL_5;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    *(_DWORD *)(CurrentProcessWin32Process + 820) &= ~0x80000u;
    v7 = 2LL;
LABEL_14:
    TransitionCursorSuppressionState(v7, 1LL);
    goto LABEL_5;
  }
  v4 = (unsigned int)(gCursorSuppressionState - 6);
  if ( gCursorSuppressionState != 6 && gCursorSuppressionState != 8 )
    goto LABEL_5;
LABEL_4:
  if ( !a1 )
  {
    v8 = PsGetCurrentProcessWin32Process(v4);
    v7 = 1LL;
    *(_DWORD *)(v8 + 820) |= 0x80000u;
    goto LABEL_14;
  }
LABEL_5:
  v3 = 1LL;
LABEL_6:
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
