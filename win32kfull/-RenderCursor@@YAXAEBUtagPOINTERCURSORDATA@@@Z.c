void __fastcall RenderCursor(const struct tagPOINTERCURSORDATA *a1)
{
  int v1; // edi
  __int64 v3; // rcx
  CursorApiRouter *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v1 = 0;
  if ( !Feedback::gfInRange )
  {
    EnterCrit(1LL, 0LL);
    if ( gCursorSuppressionState != 3 && (Feedback::gfUsingPenCursors || !Feedback::gfUsingTouchCursors) )
      v1 = 1;
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(2u, 0);
    UserSessionSwitchLeaveCrit(v3);
    Feedback::gfInRange = 1;
  }
  CursorApiRouter::MovePointer(a1, *(HDEV *)(gpDispInfo + 40LL), *((_DWORD *)a1 + 1), *((_DWORD *)a1 + 2), 8u);
  CCursorSizes::zzzUpdateGlobalCursorSize(gpCursorSizes, (const struct tagPOINT *)((char *)a1 + 4), 0);
  if ( v1 )
  {
    EnterCrit(1LL, 0LL);
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(8u, 0);
    CursorApiRouter::HidePointer(v4, 0);
    UserSessionSwitchLeaveCrit(v5);
  }
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    EnterCrit(1LL, 0LL);
    if ( (Feedback::gfUsingPenCursors || Feedback::gfUsingTouchCursors)
      && ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
    {
      TransitionCursorSuppressionState(2u, 0);
    }
    UserSessionSwitchLeaveCrit(v6);
    Feedback::gfInRange = 0;
  }
}
