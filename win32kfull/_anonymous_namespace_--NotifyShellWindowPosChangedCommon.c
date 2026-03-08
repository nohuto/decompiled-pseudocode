/*
 * XREFs of _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C02200D8
 * Callers:
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C02209E0 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1C0220B74 (_anonymous_namespace_--WindowSizingUpdate.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C009B94C (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1C021FDB0 (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
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
  __int64 v12; // [rsp+20h] [rbp-78h] BYREF
  int v13; // [rsp+28h] [rbp-70h]
  BOOL v14; // [rsp+30h] [rbp-68h]
  int v15; // [rsp+34h] [rbp-64h]
  _BYTE v16[56]; // [rsp+38h] [rbp-60h] BYREF

  memset_0(&v12, 0, 0x50uLL);
  v12 = *(_QWORD *)a1;
  v13 = a4;
  v14 = a2 != 0;
  WindowTrackState = ShellWindowManagement::GetWindowTrackState(a1, a3);
  v9 = *((_QWORD *)a1 + 3);
  v10 = *((_QWORD *)a1 + 5);
  v15 = WindowTrackState;
  TransformRectBetweenCoordinateSpaces(v16, v10 + 88, *(_QWORD *)(v9 + 320), a1);
  return anonymous_namespace_::NotifyIAMWindowManagementEvent(&v12, 0);
}
