/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x1C00F160C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068330 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00F1284 (xxxEnableChildWindowDpiMessageX.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00F1368 (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00F1BD0 (NtUserUpdateLayeredWindow.c)
 * Callees:
 *     BuildHwndList @ 0x1C006CB60 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DAC0 (FreeHwndList.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006F994 (BuildWindowListWithDpiBoundaryInfo.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     UpdateWindowMonitor @ 0x1C0070270 (UpdateWindowMonitor.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00F1720 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00F1754 (UpdateWindowPositionsForDpiBoundaryChange.c)
 */

struct tagBWL *__fastcall UpdateMonitorForWindowAndChildren(__int64 a1, _QWORD *a2, struct tagBWL **a3, int a4)
{
  struct tagBWL *result; // rax
  struct tagBWL *v9; // rdi
  struct tagFREELIST *v10; // rsi
  unsigned __int64 *i; // r14
  struct tagWND *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx

  result = BuildHwndList((struct tagWND *)a1, 1, 0LL);
  v9 = result;
  if ( result )
  {
    v10 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(
                                  (struct tagWND *)a1,
                                  *(_QWORD *)(a1 + 104),
                                  result,
                                  0LL);
    for ( i = (unsigned __int64 *)((char *)v9 + 32); *i != 1; ++i )
    {
      v12 = (struct tagWND *)HMValidateHandleNoSecure(*i, 1);
      v13 = (__int64)v12;
      if ( v12 )
      {
        UpdateWindowMonitor(v12, a2);
        if ( a4 )
        {
          if ( !(unsigned int)IsTopLevelWindow(v13)
            || (v14 = *(_QWORD *)(v13 + 40), (*(_DWORD *)(v14 + 232) & 0x8000000) != 0)
            && (*(_BYTE *)(v14 + 16) & 0xF) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v13 + 40) + 232LL) |= 0x4000000u;
          }
        }
      }
    }
    if ( v10 )
    {
      UpdateWindowPositionsForDpiBoundaryChange(v10);
      FreeListFree(v10);
    }
    if ( a3 )
      *a3 = v9;
    else
      FreeHwndList(v9);
    return (struct tagBWL *)1;
  }
  return result;
}
