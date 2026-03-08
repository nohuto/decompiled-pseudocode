/*
 * XREFs of ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01B6DDC
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01433FC (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01B7B10 (PostMousePointerLeaveAndCleanup.c)
 * Callees:
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 */

void __fastcall StopMiPIdleNotificationTimer(struct tagWND *a1)
{
  __int64 v1; // r8

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1352LL);
  if ( *(_QWORD *)a1 == *(_QWORD *)(v1 + 8) )
  {
    *(_QWORD *)(v1 + 8) = 0LL;
    FindTimer(a1, (void *)0xFFF3, 2u, 1, 0LL);
  }
}
