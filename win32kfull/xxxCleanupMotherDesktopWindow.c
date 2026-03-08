/*
 * XREFs of xxxCleanupMotherDesktopWindow @ 0x1C00929C4
 * Callers:
 *     xxxDesktopThread @ 0x1C0093DC0 (xxxDesktopThread.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094570 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094CDC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCreateWindowStation @ 0x1C00BE56C (xxxCreateWindowStation.c)
 * Callees:
 *     SetVisible @ 0x1C002DB8C (SetVisible.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 */

void __fastcall xxxCleanupMotherDesktopWindow(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *v2; // rbx

  v1 = a1 + 8;
  v2 = *(__int64 **)(a1 + 8);
  if ( v2 )
  {
    SetVisible(*(struct tagWND **)(a1 + 8), 0);
    if ( HMAssignmentUnlock(v1) )
      xxxDestroyWindow(v2);
  }
}
