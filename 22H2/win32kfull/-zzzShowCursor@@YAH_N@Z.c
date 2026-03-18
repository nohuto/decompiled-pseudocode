/*
 * XREFs of ?zzzShowCursor@@YAH_N@Z @ 0x1C005AF60
 * Callers:
 *     NtUserShowCursor @ 0x1C005AF20 (NtUserShowCursor.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxDragObject @ 0x1C022F868 (xxxDragObject.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C0025058 (zzzEndDeferWinEventNotify.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C005D5D8 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzUpdateCursorImage @ 0x1C00E6B60 (zzzUpdateCursorImage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowCursor(char a1)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // r8
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  bool v8; // zf

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v3 = *((_QWORD *)CurrentLogicalCursorThread + 54);
  ++gdwDeferWinEvent;
  v4 = *((_DWORD *)CurrentLogicalCursorThread + 190);
  v5 = *((_QWORD *)CurrentLogicalCursorThread + 54);
  if ( a1 )
  {
    *((_DWORD *)CurrentLogicalCursorThread + 190) = v4 + 1;
    ++*(_DWORD *)(v5 + 392);
    if ( v3 != gpqCursor )
      goto LABEL_3;
    v8 = *(_DWORD *)(v3 + 392) == 0;
  }
  else
  {
    *((_DWORD *)CurrentLogicalCursorThread + 190) = v4 - 1;
    --*(_DWORD *)(v5 + 392);
    if ( v3 != gpqCursor )
      goto LABEL_3;
    v8 = *(_DWORD *)(v3 + 392) == -1;
  }
  if ( v8 )
    zzzUpdateCursorImage();
LABEL_3:
  v6 = *(_DWORD *)(v3 + 392);
  zzzEndDeferWinEventNotify();
  return v6;
}
