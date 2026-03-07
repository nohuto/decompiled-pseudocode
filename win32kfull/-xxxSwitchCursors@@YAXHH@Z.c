void __fastcall xxxSwitchCursors(int a1, int a2)
{
  CursorApiRouter *v3; // rcx
  Feedback *v4; // rcx
  CursorApiRouter *v5; // rcx

  Feedback::gfUsingPenCursors = a1;
  Feedback::gfUsingTouchCursors = a1 == 0;
  if ( a1 )
  {
    EtwTraceContactVisualizationInfo(1LL);
    v3 = (CursorApiRouter *)*(unsigned int *)UPDWORDPointer(8222LL);
    if ( a2 && (((unsigned __int8)v3 & 0x20) == 0 || Feedback::gfForceHidePenCursor) )
    {
      TransitionCursorSuppressionState(3u, 0);
    }
    else
    {
      CursorApiRouter::HidePointer(v3, 1u);
      Feedback::xxxReplaceMouseCursorsWithPenCursors(v4);
    }
  }
  else
  {
    EtwTraceContactVisualizationInfo(2LL);
    CursorApiRouter::HidePointer(v5, 1u);
  }
}
