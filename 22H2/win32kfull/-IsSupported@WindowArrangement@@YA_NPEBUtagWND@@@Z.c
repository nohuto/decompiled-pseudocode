/*
 * XREFs of ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DE9C
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01EBB54 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DE70 (-DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DED8 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DF04 (-SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00CEFB4 (IsNonImmersiveBand.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

char __fastcall WindowArrangement::IsSupported(WindowArrangement *this, const struct tagWND *a2)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = 1;
  if ( (dword_1C03591FC & 1) == 0
    || !IsNonImmersiveBand((__int64)this)
    || _bittest64((const signed __int64 *)PtiCurrentShared(v4, v3, v5, v6) + 81, 0x20u) )
  {
    return 0;
  }
  return v2;
}
