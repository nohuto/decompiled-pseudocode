/*
 * XREFs of SetPointerMetaVisibility @ 0x1C0028D8C
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C0028C70 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01DA94C (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     GreHidePointer @ 0x1C0028DC0 (GreHidePointer.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00296FC (zzzEnableDwmPointerSupport.c)
 */

__int64 __fastcall SetPointerMetaVisibility(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  zzzEnableDwmPointerSupport(a1, 1LL);
  return GreHidePointer(v1 == 0);
}
