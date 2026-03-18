/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x1C008E52C
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C008E138 (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C008E464 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C0123BD4 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C01DF6D0 (NtUserUpdateLayeredWindow.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1C0226B68 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x1C008E62C (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00CFBE0 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00CFC14 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C00D16E0 (UpdateWindowMonitor.c)
 *     BuildHwndList @ 0x1C00D2540 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00D2E50 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 */

__int64 __fastcall UpdateMonitorForWindowAndChildren(struct tagWND **a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  struct tagWLDBI *v10; // rsi
  _QWORD *i; // r14
  struct tagWND *v12; // rax
  struct tagWND *v13; // rbx
  __int64 v14; // rcx

  result = BuildHwndList((ShellWindowManagement *)a1);
  v8 = result;
  if ( result )
  {
    v10 = BuildWindowListWithDpiBoundaryInfo((struct tagWND *)a1, a1[13], (struct tagBWL *)result, 0LL);
    for ( i = (_QWORD *)(v8 + 32); *i != 1LL; ++i )
    {
      LOBYTE(v9) = 1;
      v12 = (struct tagWND *)HMValidateHandleNoSecure(*i, v9);
      v13 = v12;
      if ( v12 )
      {
        UpdateWindowMonitor(v12);
        if ( a4 )
        {
          if ( !(unsigned int)IsTopLevelWindow(v13)
            || (v14 = *((_QWORD *)v13 + 5), (*(_DWORD *)(v14 + 232) & 0x400) != 0) && (*(_BYTE *)(v14 + 16) & 0xF) != 0 )
          {
            *((_DWORD *)v13 + 80) |= 0x40000u;
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
      *a3 = v8;
    else
      FreeHwndList(v8);
    return 1LL;
  }
  return result;
}
