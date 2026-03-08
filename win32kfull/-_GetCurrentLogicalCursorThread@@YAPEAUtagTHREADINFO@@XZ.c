/*
 * XREFs of ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0022318
 * Callers:
 *     CheckCursorClipAccess @ 0x1C0022250 (CheckCursorClipAccess.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C00E1474 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C00F2A60 (-zzzShowCursor@@YAH_N@Z.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C01A9CBC (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C01C1CD0 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagTHREADINFO *_GetCurrentLogicalCursorThread(void)
{
  struct tagTHREADINFO *result; // rax

  result = PtiCurrentShared();
  if ( (*((_DWORD *)result + 318) & 0x8000000) != 0 )
    return (struct tagTHREADINFO *)*((_QWORD *)result + 190);
  return result;
}
