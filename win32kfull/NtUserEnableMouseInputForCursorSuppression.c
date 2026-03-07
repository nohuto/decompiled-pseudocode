__int64 __fastcall NtUserEnableMouseInputForCursorSuppression(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( (a1 != 0) != a1 )
  {
    UserSetLastError(87);
    goto LABEL_6;
  }
  v3 = (unsigned int)(gCursorSuppressionState - 1);
  if ( gCursorSuppressionState == 1 )
    goto LABEL_7;
  v3 = (unsigned int)(gCursorSuppressionState - 2);
  if ( gCursorSuppressionState == 2 )
    goto LABEL_4;
  v3 = (unsigned int)(gCursorSuppressionState - 4);
  if ( gCursorSuppressionState == 4 )
    goto LABEL_4;
  v3 = (unsigned int)(gCursorSuppressionState - 5);
  if ( gCursorSuppressionState == 5 )
  {
LABEL_7:
    if ( !a1 )
      goto LABEL_5;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v6 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v6 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process;
    *(_DWORD *)(v6 + 812) &= ~0x80000u;
    v7 = 2LL;
LABEL_11:
    TransitionCursorSuppressionState(v7, 1LL);
    goto LABEL_5;
  }
  v3 = (unsigned int)(gCursorSuppressionState - 6);
  if ( gCursorSuppressionState != 6 && gCursorSuppressionState != 8 )
    goto LABEL_5;
LABEL_4:
  if ( !a1 )
  {
    v8 = PsGetCurrentProcessWin32Process(v3);
    v9 = v8;
    if ( v8 )
      v9 = -(__int64)(*(_QWORD *)v8 != 0LL) & v8;
    *(_DWORD *)(v9 + 812) |= 0x80000u;
    v7 = 1LL;
    goto LABEL_11;
  }
LABEL_5:
  v2 = 1LL;
LABEL_6:
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
