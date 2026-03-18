/*
 * XREFs of SetPointerMetaVisibility @ 0x1C003DA0C
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C003D8F0 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01ADA64 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     zzzEnableDwmPointerSupport @ 0x1C005B13C (zzzEnableDwmPointerSupport.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C00E11D0 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 */

bool __fastcall SetPointerMetaVisibility(__int64 a1)
{
  int v1; // ebx
  CursorApiRouter *v2; // rcx

  v1 = a1;
  zzzEnableDwmPointerSupport(a1, 1LL);
  return CursorApiRouter::HidePointer(v2, v1 == 0);
}
