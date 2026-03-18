/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x1C006A424
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 *     NtUserUpdateLayeredWindow @ 0x1C008FA50 (NtUserUpdateLayeredWindow.c)
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00B7E98 (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C00BA5DC (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C010CC94 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x1C006A228 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     UpdateWindowMonitor @ 0x1C006BAD0 (UpdateWindowMonitor.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00FD5BC (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C0109E90 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 */

__int64 __fastcall UpdateMonitorForWindowAndChildren(struct tagWND **a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // rdi
  struct tagWLDBI *v9; // rsi
  _QWORD *i; // r14
  ShellWindowManagement *v11; // rax
  ShellWindowManagement *v12; // rbx
  __int64 v13; // rcx

  result = BuildHwndList((ShellWindowManagement *)a1);
  v8 = result;
  if ( result )
  {
    v9 = BuildWindowListWithDpiBoundaryInfo((struct tagWND *)a1, a1[13], (struct tagBWL *)result, 0LL);
    for ( i = (_QWORD *)(v8 + 32); *i != 1LL; ++i )
    {
      v11 = (ShellWindowManagement *)HMValidateHandleNoSecure(*i, 1);
      v12 = v11;
      if ( v11 )
      {
        UpdateWindowMonitor(v11);
        if ( a4 )
        {
          if ( !(unsigned int)IsTopLevelWindow(v12)
            || (v13 = *((_QWORD *)v12 + 5), (*(_DWORD *)(v13 + 232) & 0x400) != 0) && (*(_BYTE *)(v13 + 16) & 0xF) != 0 )
          {
            *((_DWORD *)v12 + 80) |= 0x40000u;
          }
        }
      }
    }
    if ( v9 )
    {
      UpdateWindowPositionsForDpiBoundaryChange(v9);
      FreeListFree(v9);
    }
    if ( a3 )
      *a3 = v8;
    else
      FreeHwndList(v8);
    return 1LL;
  }
  return result;
}
