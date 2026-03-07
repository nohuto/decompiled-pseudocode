char __fastcall IsWindowBroadcastingDpiToChildrenX(struct tagWND *a1)
{
  char v1; // r8
  int v2; // edx
  __int64 v3; // rcx

  v1 = 0;
  v2 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  if ( v2 == 3 || v2 == 2 && IsTopLevelWindow((__int64)a1) && (*(_DWORD *)(v3 + 320) & 0x100000) != 0 )
    return 1;
  return v1;
}
