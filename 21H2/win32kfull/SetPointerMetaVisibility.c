/*
 * XREFs of SetPointerMetaVisibility @ 0x1C0028E2C
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C0028D10 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01DAF0C (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     GreHidePointer @ 0x1C0028E60 (GreHidePointer.c)
 *     zzzEnableDwmPointerSupport @ 0x1C002979C (zzzEnableDwmPointerSupport.c)
 */

__int64 __fastcall SetPointerMetaVisibility(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  zzzEnableDwmPointerSupport(a1, 1LL);
  return GreHidePointer(v1 == 0);
}
