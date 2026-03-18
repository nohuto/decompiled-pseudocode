/*
 * XREFs of SetPointerMetaVisibility @ 0x1C0097EB0
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C0097DC0 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01D530C (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C007A358 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0097F94 (zzzEnableDwmPointerSupport.c)
 */

char __fastcall SetPointerMetaVisibility(__int64 a1)
{
  int v1; // ebx
  CursorApiRouter *v2; // rcx

  v1 = a1;
  zzzEnableDwmPointerSupport(a1, 1LL);
  return CursorApiRouter::HidePointer(v2, v1 == 0);
}
