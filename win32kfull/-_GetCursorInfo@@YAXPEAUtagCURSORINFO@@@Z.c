/*
 * XREFs of ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C0009E08
 * Callers:
 *     NtUserGetCursorInfo @ 0x1C0009CE0 (NtUserGetCursorInfo.c)
 * Callees:
 *     UsingPenCursors @ 0x1C01AEE8C (UsingPenCursors.c)
 */

void __fastcall _GetCursorInfo(struct tagCURSORINFO *a1)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v3; // rax
  struct tagCURSOR *v4; // rdx
  int v5; // eax

  *(_OWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v3 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  v4 = 0LL;
  *((_QWORD *)a1 + 2) = v3;
  v5 = gCursorSuppressionState;
  *((_DWORD *)a1 + 1) = 0;
  if ( v5 > 0 && v5 != 4 && v5 < 7 || (unsigned int)UsingPenCursors() && Feedback::gfInRange == (_DWORD)v4 )
  {
    *((_DWORD *)a1 + 1) = 2;
  }
  else if ( gpcurPhysCurrent != v4 )
  {
    *((_DWORD *)a1 + 1) = 1;
  }
  if ( gpcurLogCurrent )
    v4 = *(struct tagCURSOR **)gpcurLogCurrent;
  *((_QWORD *)a1 + 1) = v4;
}
