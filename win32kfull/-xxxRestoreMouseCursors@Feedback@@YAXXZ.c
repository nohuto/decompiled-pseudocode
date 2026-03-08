/*
 * XREFs of ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01AEC54
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C00D69D0 (-OnPointerCursorOperation@@YAXXZ.c)
 * Callees:
 *     SetPointerMetaVisibility @ 0x1C007B75C (SetPointerMetaVisibility.c)
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0107CAC (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 */

void __fastcall Feedback::xxxRestoreMouseCursors(Feedback *this)
{
  __int64 v1; // rbx

  EtwTraceContactVisualizationInfo(3LL);
  Feedback::gfUsingPenCursors = 0;
  Feedback::gfUsingTouchCursors = 0;
  v1 = (grpWinStaList + 200LL) & ((unsigned __int128)-(__int128)grpWinStaList >> 64);
  if ( *(_QWORD *)(v1 + 8) )
  {
    xxxUpdateSystemCursorFromRegistry(v1, 0, 4u);
    xxxUpdateSystemCursorFromRegistry(v1, 2u, 4u);
    xxxUpdateSystemCursorFromRegistry(v1, 0xBu, 4u);
    xxxUpdateSystemCursorFromRegistry(v1, 0xCu, 4u);
  }
  if ( gCursorSuppressionState != 1 )
    SetPointerMetaVisibility(1LL);
}
