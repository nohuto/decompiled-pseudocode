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
