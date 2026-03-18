/*
 * XREFs of ?zzzShowCursor@@YAH_N@Z @ 0x1C0118590
 * Callers:
 *     NtUserShowCursor @ 0x1C0118550 (NtUserShowCursor.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxDragObject @ 0x1C02442A8 (xxxDragObject.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0023CB0 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     zzzUpdateCursorImage @ 0x1C00734A0 (zzzUpdateCursorImage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowCursor(char a1)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // r8
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rcx
  bool v6; // zf
  unsigned int v7; // ebx

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v3 = *((_QWORD *)CurrentLogicalCursorThread + 54);
  ++gdwDeferWinEvent;
  v4 = *((_DWORD *)CurrentLogicalCursorThread + 190);
  v5 = *((_QWORD *)CurrentLogicalCursorThread + 54);
  if ( a1 )
  {
    *((_DWORD *)CurrentLogicalCursorThread + 190) = v4 + 1;
    ++*(_DWORD *)(v5 + 384);
    if ( v3 != gpqCursor )
      goto LABEL_6;
    v6 = *(_DWORD *)(v3 + 384) == 0;
  }
  else
  {
    *((_DWORD *)CurrentLogicalCursorThread + 190) = v4 - 1;
    --*(_DWORD *)(v5 + 384);
    if ( v3 != gpqCursor )
      goto LABEL_6;
    v6 = *(_DWORD *)(v3 + 384) == -1;
  }
  if ( v6 )
    zzzUpdateCursorImage();
LABEL_6:
  v7 = *(_DWORD *)(v3 + 384);
  zzzEndDeferWinEventNotify();
  return v7;
}
