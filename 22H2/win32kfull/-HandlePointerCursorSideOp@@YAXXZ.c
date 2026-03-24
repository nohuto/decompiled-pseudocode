/*
 * XREFs of ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00282E8
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C00282A0 (-OnPointerCursorOperation@@YAXXZ.c)
 * Callees:
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C0025A8C (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     TransitionCursorSuppressionState @ 0x1C0028C70 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01DA94C (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01DA9F0 (-xxxSwitchCursors@@YAXHH@Z.c)
 */

void HandlePointerCursorSideOp(void)
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett
  __int16 v2; // bx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  Feedback *v6; // rcx
  __int64 v7; // rcx
  BOOL v8; // ecx
  int v9; // edx
  __int64 v10; // rcx

  _m_prefetchw(&Feedback::gdwPointerCursorOps);
  v0 = Feedback::gdwPointerCursorOps;
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0, v0);
  }
  while ( v1 != v0 );
  v2 = v0;
  if ( (v0 & 1) != 0 )
  {
    EnterCrit(0LL, 1LL);
    Feedback::xxxRestoreMouseCursors(v6);
    UserSessionSwitchLeaveCrit(v7);
  }
  if ( (v2 & 0x700) != 0 )
  {
    EnterCrit(0LL, 1LL);
    if ( (v2 & 0x100) != 0 )
    {
      v8 = 1;
      v9 = 1;
    }
    else
    {
      v8 = (v2 & 0x400) != 0;
      v9 = 0;
    }
    xxxSwitchCursors(v8, v9);
    Feedback::gfInRange = 0;
    UserSessionSwitchLeaveCrit(v10);
  }
  if ( (v2 & 2) != 0 )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState == 4 )
    {
      v3 = 8LL;
    }
    else if ( gCursorSuppressionState == 5 )
    {
      v3 = 1LL;
    }
    else
    {
      v4 = (unsigned int)(gCursorSuppressionState - 6);
      if ( gCursorSuppressionState == 6 )
      {
        v3 = 2LL;
      }
      else
      {
        if ( gCursorSuppressionState != 7 )
          goto LABEL_10;
        v3 = 3LL;
      }
    }
    TransitionCursorSuppressionState(v3, 0LL);
LABEL_10:
    UserSessionSwitchLeaveCrit(v4);
  }
  if ( (v2 & 4) != 0 )
  {
    EnterCrit(0LL, 1LL);
    xxxEnsureAllDpiCursors();
    UserSessionSwitchLeaveCrit(v5);
  }
}
