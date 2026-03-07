char __fastcall IsChildWindowDpiMessageEnabledX(struct tagWND *a1)
{
  char v1; // bl
  int v3; // edx
  struct tagWND *TopLevelWindow; // rax

  v1 = 0;
  v3 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  if ( v3 == 3 )
    return 1;
  if ( v3 != 2 )
    return v1;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1);
  if ( a1 == TopLevelWindow )
    return 1;
  if ( TopLevelWindow )
    return (*((_DWORD *)TopLevelWindow + 80) & 0x100000) != 0;
  return v1;
}
