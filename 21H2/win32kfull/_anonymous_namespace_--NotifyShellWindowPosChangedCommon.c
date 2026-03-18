/*
 * XREFs of _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C0236714
 * Callers:
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C0236E78 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1C0237004 (_anonymous_namespace_--WindowSizingUpdate.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00A9418 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1C0236424 (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 */

__int64 __fastcall anonymous_namespace_::NotifyShellWindowPosChangedCommon(
        const struct tagWND *a1,
        char a2,
        char a3,
        int a4)
{
  int WindowTrackState; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  _QWORD v12[10]; // [rsp+20h] [rbp-78h] BYREF

  memset(v12, 0, sizeof(v12));
  v12[0] = *(_QWORD *)a1;
  LODWORD(v12[1]) = a4;
  LODWORD(v12[2]) = a2 != 0;
  WindowTrackState = ShellWindowManagement::GetWindowTrackState(a1, a3);
  v9 = *((_QWORD *)a1 + 3);
  v10 = *((_QWORD *)a1 + 5);
  HIDWORD(v12[2]) = WindowTrackState;
  TransformRectBetweenCoordinateSpaces(&v12[3], v10 + 88, *(_QWORD *)(v9 + 320), a1);
  return anonymous_namespace_::NotifyIAMWindowManagementEvent();
}
