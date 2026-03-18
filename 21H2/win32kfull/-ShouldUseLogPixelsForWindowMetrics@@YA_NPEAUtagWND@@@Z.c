/*
 * XREFs of ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x1C006A534
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     UpdateWindowMonitor @ 0x1C006BAD0 (UpdateWindowMonitor.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 */

char __fastcall ShouldUseLogPixelsForWindowMetrics(struct tagWND *a1)
{
  char v2; // bl
  int v3; // ecx
  __int64 v4; // r9
  __int64 TopLevelWindow; // rax
  int v7; // ebx

  v2 = 0;
  v3 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  if ( v3 == 3 )
    return 1;
  if ( v3 == 2 )
  {
    if ( (unsigned int)IsTopLevelWindow(a1) )
    {
      v7 = *(_DWORD *)(v4 + 320) >> 19;
    }
    else
    {
      TopLevelWindow = GetTopLevelWindow(v4);
      if ( !TopLevelWindow )
        return v2;
      v7 = *(_DWORD *)(TopLevelWindow + 320) >> 20;
    }
    return v7 & 1;
  }
  return v2;
}
