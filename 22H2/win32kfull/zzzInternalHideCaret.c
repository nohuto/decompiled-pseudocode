/*
 * XREFs of zzzInternalHideCaret @ 0x1C00674A0
 * Callers:
 *     xxxScrollWindowEx @ 0x1C00677EC (xxxScrollWindowEx.c)
 *     NtUserHideCaret @ 0x1C0069B80 (NtUserHideCaret.c)
 *     xxxBeginPaint @ 0x1C007D854 (xxxBeginPaint.c)
 *     zzzInternalDestroyCaret @ 0x1C0113BB0 (zzzInternalDestroyCaret.c)
 *     zzzHideCaret @ 0x1C02412FC (zzzHideCaret.c)
 * Callees:
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C002B400 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0044F6C (-UT_InvertCaret@@YAXXZ.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 */

__int64 zzzInternalHideCaret()
{
  __int64 v0; // rbx
  int v1; // eax
  __int64 result; // rax
  bool v3; // zf

  v0 = *(_QWORD *)(gptiCurrent + 432LL);
  v1 = *(_DWORD *)(v0 + 304);
  if ( (v1 & 1) != 0 )
  {
    UT_InvertCaret();
    v1 = *(_DWORD *)(v0 + 304);
  }
  ++*(_DWORD *)(v0 + 308);
  result = v1 & 0xFFFFFFFE;
  v3 = *(_DWORD *)(v0 + 308) == 1;
  *(_DWORD *)(v0 + 304) = result;
  if ( v3 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v0 + 296), (struct tagQ *)v0);
    return xxxWindowEvent(0x8003u, gdwDeferWinEvent != 0 ? 2 : 0);
  }
  return result;
}
