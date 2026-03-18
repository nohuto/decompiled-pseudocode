/*
 * XREFs of ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C009E8B8
 * Callers:
 *     NtUserGetCursorInfo @ 0x1C009E790 (NtUserGetCursorInfo.c)
 * Callees:
 *     UsingPenCursors @ 0x1C009EB60 (UsingPenCursors.c)
 */

void __fastcall _GetCursorInfo(struct tagCURSORINFO *a1, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v4; // rax
  __int64 v5; // rcx
  struct tagCURSOR *v6; // rdx
  int v7; // eax

  *(_OWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  v4 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  v6 = 0LL;
  *((_QWORD *)a1 + 2) = v4;
  v7 = gCursorSuppressionState;
  *((_DWORD *)a1 + 1) = 0;
  if ( v7 > 0 && v7 != 4 && v7 < 7 || (unsigned int)UsingPenCursors(v5, 0LL) && Feedback::gfInRange == (_DWORD)v6 )
  {
    *((_DWORD *)a1 + 1) = 2;
  }
  else if ( gpcurPhysCurrent != v6 )
  {
    *((_DWORD *)a1 + 1) = 1;
  }
  if ( gpcurLogCurrent )
    v6 = *(struct tagCURSOR **)gpcurLogCurrent;
  *((_QWORD *)a1 + 1) = v6;
}
