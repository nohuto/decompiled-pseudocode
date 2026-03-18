/*
 * XREFs of ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01D53B0
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00FDC68 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C007A358 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     TransitionCursorSuppressionState @ 0x1C0097DC0 (TransitionCursorSuppressionState.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01D525C (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 */

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
