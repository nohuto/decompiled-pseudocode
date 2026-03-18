/*
 * XREFs of ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0080F68
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C0080DD0 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     SetWindowGroupBand @ 0x1C00810A4 (SetWindowGroupBand.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C0082554 (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0082580 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     GetNonChildAncestor @ 0x1C00825AC (GetNonChildAncestor.c)
 *     DwmAsyncOwnerChange @ 0x1C00825E4 (DwmAsyncOwnerChange.c)
 */

void __fastcall zzzImeSetOwnerWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v3; // rcx
  __int64 NonChildAncestor; // rax
  __int16 v5; // r9
  struct tagWND *v6; // rbx
  _WORD *v7; // rdx
  struct tagWND *v8; // rax
  unsigned int WindowCloakStateComponentUIAware; // eax
  void *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  char v12[24]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL);
  if ( (*(_BYTE *)(v3 + 10) & 1) == 0 && *(_WORD *)v3 != *(_WORD *)(gpsi + 898LL) )
  {
    NonChildAncestor = GetNonChildAncestor(a2);
    v6 = (struct tagWND *)NonChildAncestor;
    if ( NonChildAncestor )
    {
      do
      {
        v7 = *(_WORD **)(*(_QWORD *)(NonChildAncestor + 136) + 8LL);
        if ( *v7 == v5 )
        {
LABEL_17:
          v6 = 0LL;
          goto LABEL_11;
        }
        NonChildAncestor = *(_QWORD *)(NonChildAncestor + 120);
      }
      while ( NonChildAncestor );
      v8 = v6;
      do
      {
        if ( a1 == v8 )
        {
          UserSetLastError(87LL, (__int64)v7);
          goto LABEL_17;
        }
        v8 = (struct tagWND *)*((_QWORD *)v8 + 13);
      }
      while ( v8 );
      if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != *(_DWORD *)(*((_QWORD *)v6 + 5) + 236LL) )
        SetWindowGroupBand(a1);
    }
LABEL_11:
    v11 = *(_OWORD *)LockPointer(v12, (char *)a1 + 120, v6);
    HMAssignmentLock(&v11, 1LL);
    if ( v6 )
    {
      WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v6);
      zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakStateComponentUIAware);
    }
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v10 = (void *)ReferenceDwmApiPort();
      DwmAsyncOwnerChange(v10);
    }
  }
}
