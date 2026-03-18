/*
 * XREFs of ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0025464
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C0024EF0 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00255B8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     GetNonChildAncestor @ 0x1C00255E4 (GetNonChildAncestor.c)
 *     SetWindowGroupBand @ 0x1C002567C (SetWindowGroupBand.c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C002878C (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     DwmAsyncOwnerChange @ 0x1C00CCF70 (DwmAsyncOwnerChange.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00F1010 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 */

void __fastcall zzzImeSetOwnerWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v3; // rcx
  __int64 NonChildAncestor; // rax
  __int16 v5; // r9
  struct tagWND *v6; // r8
  struct tagWND *v7; // rbx
  unsigned int WindowCloakStateComponentUIAware; // eax
  void *v9; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL);
  if ( (*(_BYTE *)(v3 + 10) & 1) == 0 && *(_WORD *)v3 != *(_WORD *)(gpsi + 898LL) )
  {
    NonChildAncestor = GetNonChildAncestor(a2);
    v6 = (struct tagWND *)NonChildAncestor;
    if ( NonChildAncestor )
    {
      do
      {
        if ( **(_WORD **)(*(_QWORD *)(NonChildAncestor + 136) + 8LL) == v5 )
        {
LABEL_17:
          v7 = 0LL;
          goto LABEL_11;
        }
        NonChildAncestor = *(_QWORD *)(NonChildAncestor + 120);
      }
      while ( NonChildAncestor );
      v7 = v6;
      do
      {
        if ( a1 == v6 )
        {
          UserSetLastError(87LL);
          goto LABEL_17;
        }
        v6 = (struct tagWND *)*((_QWORD *)v6 + 13);
      }
      while ( v6 );
      if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != *(_DWORD *)(*((_QWORD *)v7 + 5) + 236LL) )
        SetWindowGroupBand(a1);
    }
    else
    {
      v7 = 0LL;
    }
LABEL_11:
    v10 = *(_OWORD *)LockPointer(v11, (char *)a1 + 120, v7);
    HMAssignmentLock(&v10, 1LL);
    if ( v7 )
    {
      WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v7);
      zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakStateComponentUIAware);
    }
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v9 = (void *)ReferenceDwmApiPort();
      DwmAsyncOwnerChange(v9);
    }
  }
}
