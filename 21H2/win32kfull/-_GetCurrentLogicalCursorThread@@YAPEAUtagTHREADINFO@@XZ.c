/*
 * XREFs of ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0023CB0
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00233C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C0023634 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 *     ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x1C00239A0 (-_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023BF4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0026768 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C009BDD0 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     CheckCursorClipAccess @ 0x1C00A8870 (CheckCursorClipAccess.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C0108864 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C0118590 (-zzzShowCursor@@YAH_N@Z.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *_GetCurrentLogicalCursorThread(void)
{
  __int64 v0; // rbx
  __int64 *ThreadWin32Thread; // rax

  v0 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v0 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v0 + 1256) & 0x8000000) != 0 )
    return *(struct tagTHREADINFO **)(v0 + 1480);
  else
    return (struct tagTHREADINFO *)v0;
}
