/*
 * XREFs of xxxCleanupMotherDesktopWindow @ 0x1C00BE0EC
 * Callers:
 *     xxxDesktopThread @ 0x1C0069C00 (xxxDesktopThread.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C006A3B0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCreateWindowStation @ 0x1C006B42C (xxxCreateWindowStation.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C006DCB0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     SetVisible @ 0x1C00EBC94 (SetVisible.c)
 */

void __fastcall xxxCleanupMotherDesktopWindow(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx

  v1 = a1 + 8;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    SetVisible(*(struct tagWND **)(a1 + 8));
    if ( HMAssignmentUnlock(v1) )
      xxxDestroyWindow(v2);
  }
}
