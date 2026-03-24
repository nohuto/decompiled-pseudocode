/*
 * XREFs of zzzImeSetOwnerWindow @ 0x1C0035BC4
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C00357D0 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C0035D14 (DwmAsyncOwnerChange.c)
 *     SetWindowGroupBand @ 0x1C00366E8 (SetWindowGroupBand.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0036D90 (zzzSetWindowCompositionCloak.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C003892C (GetWindowCloakStateComponentUIAware.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00389A0 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     GetNonChildAncestor @ 0x1C00389C8 (GetNonChildAncestor.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall zzzImeSetOwnerWindow(struct tagWND *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 NonChildAncestor; // rax
  __int16 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int WindowCloakStateComponentUIAware; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  char v14[24]; // [rsp+30h] [rbp-18h] BYREF

  result = *(_QWORD *)(a2 + 136);
  v4 = *(_QWORD *)(result + 8);
  if ( (*(_BYTE *)(v4 + 10) & 1) == 0 )
  {
    result = gpsi;
    if ( *(_WORD *)v4 != *(_WORD *)(gpsi + 898LL) )
    {
      NonChildAncestor = GetNonChildAncestor(a2);
      v7 = NonChildAncestor;
      while ( NonChildAncestor )
      {
        if ( **(_WORD **)(*(_QWORD *)(NonChildAncestor + 136) + 8LL) == v6 )
        {
          v7 = 0LL;
          break;
        }
        NonChildAncestor = *(_QWORD *)(NonChildAncestor + 120);
      }
      v8 = v7;
      if ( v7 )
      {
        while ( a1 != (struct tagWND *)v8 )
        {
          v8 = *(_QWORD *)(v8 + 104);
          if ( !v8 )
            goto LABEL_10;
        }
        UserSetLastError(87LL);
        v7 = 0LL;
LABEL_10:
        if ( v7 && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != *(_DWORD *)(*(_QWORD *)(v7 + 40) + 236LL) )
          SetWindowGroupBand(a1);
      }
      v13 = *(_OWORD *)LockPointer(v14, (char *)a1 + 120, v7);
      HMAssignmentLock(&v13);
      if ( v7 )
      {
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)v7);
        zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakStateComponentUIAware);
      }
      result = IsWindowDesktopComposed(a1);
      if ( (_DWORD)result )
      {
        v12 = (void *)ReferenceDwmApiPort(v11, v10);
        return DwmAsyncOwnerChange(v12);
      }
    }
  }
  return result;
}
