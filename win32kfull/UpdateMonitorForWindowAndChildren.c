/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x1C00991CC
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C006A4D8 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0097D18 (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C0099104 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C01E0780 (NtUserUpdateLayeredWindow.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1C0229878 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 * Callees:
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x1C00992CC (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00A397C (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     UpdateWindowMonitor @ 0x1C00AE6B0 (UpdateWindowMonitor.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00E35A0 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 */

__int64 __fastcall UpdateMonitorForWindowAndChildren(struct tagWND **a1, __int64 a2, struct tagBWL **a3, int a4)
{
  __int64 result; // rax
  struct tagBWL *v8; // rdi
  __int64 v9; // rdx
  struct tagWLDBI *v10; // rsi
  _QWORD *i; // r14
  struct tagWND *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx

  result = (__int64)BuildHwndList((ShellWindowManagement *)a1, 1, 0LL, 1);
  v8 = (struct tagBWL *)result;
  if ( result )
  {
    v10 = BuildWindowListWithDpiBoundaryInfo((struct tagWND *)a1, a1[13], (struct tagBWL *)result, 0LL);
    for ( i = (_QWORD *)((char *)v8 + 32); *i != 1LL; ++i )
    {
      LOBYTE(v9) = 1;
      v12 = (struct tagWND *)HMValidateHandleNoSecure(*i, v9);
      v13 = (__int64)v12;
      if ( v12 )
      {
        UpdateWindowMonitor(v12);
        if ( a4 )
        {
          if ( !IsTopLevelWindow(v13)
            || (v14 = *(_QWORD *)(v13 + 40), (*(_DWORD *)(v14 + 232) & 0x400) != 0) && (*(_BYTE *)(v14 + 16) & 0xF) != 0 )
          {
            *(_DWORD *)(v13 + 320) |= 0x40000u;
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
