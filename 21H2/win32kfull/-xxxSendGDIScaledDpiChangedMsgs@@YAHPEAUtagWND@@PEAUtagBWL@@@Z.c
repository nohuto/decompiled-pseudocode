/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01DF164
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C007563C (xxxNotifyMonitorChanged.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01DF0A8 (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxSendGDIScaledDpiChangedMsgs(struct tagWND *this, struct tagBWL *a2)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // ebp
  HWND *i; // rdi

  v2 = *((_DWORD *)this + 80);
  v3 = 0;
  v4 = 0;
  if ( (v2 & 0x40000) == 0 )
    return 0LL;
  *((_DWORD *)this + 80) = v2 & 0xFFFBFFFF;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                      + 64LL) & 1) != 0
        && (*(_DWORD *)(*((_QWORD *)this + 5) + 288LL) & 0x4000000F) == 0x40000000
        && IsTopLevelWindow((__int64)this) )
      {
        if ( a2 || (a2 = BuildHwndList(this, (const struct tagWND *)1, 0LL, 1), v4 = 1, a2) )
        {
          v3 = xxxSendGDIScaledDpiChangedMessage(*(HWND *)this);
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
