/*
 * XREFs of ?TrySetVisual@CCursorState@@QEAA_NPEAVCCursorVisual@@_K@Z @ 0x180278404
 * Callers:
 *     ?TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z @ 0x180274714 (-TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z.c)
 * Callees:
 *     ?ProcessStateChanges@CCursorState@@QEAAX_K_N@Z @ 0x180276F18 (-ProcessStateChanges@CCursorState@@QEAAX_K_N@Z.c)
 */

char __fastcall CCursorState::TrySetVisual(CCursorState *this, struct CCursorVisual *a2, __int64 a3)
{
  EnterCriticalSection(&g_CursorManager);
  if ( *((_QWORD *)this + 8) )
  {
    LeaveCriticalSection(&g_CursorManager);
    return 0;
  }
  else
  {
    *((_QWORD *)this + 8) = a2;
    *((_QWORD *)this + 7) = *((_QWORD *)a2 + 2);
    LeaveCriticalSection(&g_CursorManager);
    CCursorState::ProcessStateChanges(this, a3, 1);
    return 1;
  }
}
