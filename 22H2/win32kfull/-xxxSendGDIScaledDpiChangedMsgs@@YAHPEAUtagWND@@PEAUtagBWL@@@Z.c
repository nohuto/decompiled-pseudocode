/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01B974C
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C008E76C (xxxNotifyMonitorChanged.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 * Callees:
 *     BuildHwndList @ 0x1C00D2540 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00D2E50 (FreeHwndList.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01B96B4 (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxSendGDIScaledDpiChangedMsgs(struct tagWND *a1, struct tagBWL *a2)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  ShellWindowManagement *v16; // rcx
  HWND *i; // rdi

  v2 = *((_DWORD *)a1 + 80);
  v3 = 0;
  v4 = 0;
  if ( (v2 & 0x40000) == 0 )
    return 0LL;
  *((_DWORD *)a1 + 80) = v2 & 0xFFFBFFFF;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
  {
    if ( *((_QWORD *)PtiCurrentShared(v9, v8, v10, v11) + 57) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v13, v12, v14, v15) + 57) + 8LL) + 64LL) & 1) != 0
        && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0x4000000F) == 0x40000000
        && IsTopLevelWindow((__int64)a1) )
      {
        if ( a2 || (a2 = BuildHwndList(v16, (const struct tagWND *)1, 0LL, 1LL), v4 = 1, a2) )
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
