__int64 __fastcall xxxSendGDIScaledDpiChangedMsgs(struct tagWND *a1, struct tagBWL *a2)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // ebp
  __int64 v8; // rcx
  __int64 v9; // rcx
  ShellWindowManagement *v10; // rcx
  HWND *i; // rdi

  v2 = *((_DWORD *)a1 + 80);
  v3 = 0;
  v4 = 0;
  if ( (v2 & 0x40000) == 0 )
    return 0LL;
  *((_DWORD *)a1 + 80) = v2 & 0xFFFBFFFF;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
  {
    if ( *((_QWORD *)PtiCurrentShared(v8) + 57) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v9) + 57) + 8LL) + 64LL) & 1) != 0
        && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0x4000000F) == 0x40000000
        && IsTopLevelWindow((__int64)a1) )
      {
        if ( a2 || (a2 = BuildHwndList(v10, 1, 0LL, 1), v4 = 1, a2) )
        {
          v3 = xxxSendGDIScaledDpiChangedMessage(*(HWND *)a1);
          for ( i = (HWND *)((char *)a2 + 40); (unsigned __int64)i < *((_QWORD *)a2 + 1); ++i )
            v3 |= xxxSendGDIScaledDpiChangedMessage(*i);
          if ( v4 )
            FreeHwndList(a2);
        }
      }
    }
  }
  return v3;
}
