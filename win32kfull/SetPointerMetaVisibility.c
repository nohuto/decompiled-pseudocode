/*
 * XREFs of SetPointerMetaVisibility @ 0x1C007B75C
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C007B640 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01AEC54 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C002A470 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     zzzEnableDwmPointerSupport @ 0x1C007F1FC (zzzEnableDwmPointerSupport.c)
 */

char __fastcall SetPointerMetaVisibility(__int64 a1)
{
  int v1; // ebx
  CursorApiRouter *v2; // rcx

  v1 = a1;
  zzzEnableDwmPointerSupport(a1, 1LL);
  return CursorApiRouter::HidePointer(v2, v1 == 0);
}
