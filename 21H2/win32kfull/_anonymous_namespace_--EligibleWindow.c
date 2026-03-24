/*
 * XREFs of _anonymous_namespace_::EligibleWindow @ 0x1C004B788
 * Callers:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z @ 0x1C004B5EC (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z.c)
 *     BuildHwndList @ 0x1C006CB60 (BuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006D440 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0122D00 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 * Callees:
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0035300 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsTrayWindow @ 0x1C005EB30 (IsTrayWindow.c)
 */

bool __fastcall anonymous_namespace_::EligibleWindow(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  int v5; // eax
  struct tagWND *RootOwner; // rax

  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_DWORD *)(v4 + 236);
  if ( (v5 < 8 || v5 != 13 && v5 > 11) && v5 != 1 || !a2 && (*(_BYTE *)(v4 + 30) & 1) == 0 )
    return 0;
  if ( (unsigned int)IsTrayWindow(a1) )
    return 1;
  if ( a2 != 1 )
    return 0;
  RootOwner = GetRootOwner(a1);
  return (unsigned int)IsTrayWindow(RootOwner) != 0;
}
