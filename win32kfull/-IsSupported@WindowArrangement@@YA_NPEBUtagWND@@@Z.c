/*
 * XREFs of ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C0230BB0
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01ECD18 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01EEA1C (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EFBFC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C0230B84 (-DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C0230BEC (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C0230C18 (-SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0039CB0 (IsNonImmersiveBand.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

char __fastcall WindowArrangement::IsSupported(WindowArrangement *this, const struct tagWND *a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 1;
  if ( (dword_1C035C1FC & 1) == 0
    || !IsNonImmersiveBand((__int64)this)
    || _bittest64((const signed __int64 *)PtiCurrentShared(v3) + 81, 0x20u) )
  {
    return 0;
  }
  return v2;
}
