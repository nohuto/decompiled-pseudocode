/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E48EC
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C006C654 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     BuildHwndList @ 0x1C006CB60 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DAC0 (FreeHwndList.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01E482C (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxSendGDIScaledDpiChangedMsgs(struct tagWND *a1, struct tagBWL *a2)
{
  unsigned int v3; // esi
  __int64 v4; // rcx
  int v5; // ebp
  int v7; // eax
  unsigned __int64 *i; // rdi

  v3 = 0;
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v7 = *(_DWORD *)(v4 + 232);
  if ( (v7 & 0x4000000) == 0 )
    return 0LL;
  *(_DWORD *)(v4 + 232) = v7 & 0xFBFFFFFF;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
  {
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                      + 64LL) & 1) != 0
        && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0x4000000F) == 0x40000000 )
      {
        if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
        {
          if ( a2 || (a2 = BuildHwndList(a1, 1, 0LL), v5 = 1, a2) )
          {
            v3 = xxxSendGDIScaledDpiChangedMessage(*(_QWORD *)a1);
            for ( i = (unsigned __int64 *)((char *)a2 + 40); (unsigned __int64)i < *((_QWORD *)a2 + 1); ++i )
              v3 |= xxxSendGDIScaledDpiChangedMessage(*i);
            if ( v5 )
              FreeHwndList(a2);
          }
        }
      }
    }
  }
  return v3;
}
