/*
 * XREFs of ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C009EC08
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C0026AC0 (NtUserSetImeOwnerWindow.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x1C00A0A28 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     SetWindowGroupBand @ 0x1C0025CE4 (SetWindowGroupBand.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0026FE8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     DwmAsyncOwnerChange @ 0x1C00280A4 (DwmAsyncOwnerChange.c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C0028F20 (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C002E920 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C00D0F44 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 */

void __fastcall zzzImeSetFutureOwner(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  struct tagWND *v5; // rax
  struct tagWND *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // r11
  __int64 v10; // r14
  __int64 v11; // rbp
  struct tagWND *v12; // rax
  unsigned int v13; // edx
  unsigned int WindowCloakStateComponentUIAware; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdi
  void *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rax
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a2 )
    return;
  v2 = *((_QWORD *)a2 + 5);
  v4 = *((_QWORD *)a1 + 2);
  if ( (*(_BYTE *)(v2 + 31) & 0x40) != 0 )
    return;
  v5 = (struct tagWND *)*((_QWORD *)a2 + 15);
  v6 = a2;
  while ( v5 && *((_QWORD *)v5 + 2) == v4 )
  {
    v6 = v5;
    v5 = (struct tagWND *)*((_QWORD *)v5 + 15);
  }
  if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 20LL) & 0x20) != 0 && (*(_BYTE *)(v2 + 20) & 0x20) == 0 )
    v6 = a2;
  v7 = *(_QWORD *)(*((_QWORD *)v6 + 17) + 8LL);
  if ( (*(_BYTE *)(v7 + 10) & 1) != 0 || *(_WORD *)v7 == *(_WORD *)(gpsi + 898LL) )
  {
    v6 = a2;
    goto LABEL_9;
  }
  if ( a2 == v6 )
  {
LABEL_9:
    v8 = *((_QWORD *)v6 + 13);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 112);
      if ( v9 )
      {
        v10 = *((_QWORD *)v6 + 2);
        while ( 1 )
        {
          v11 = *(_QWORD *)(v9 + 16);
          if ( v10 == v11 )
          {
            v19 = *(_QWORD *)(*(_QWORD *)(v9 + 136) + 8LL);
            if ( *(_WORD *)v19 != *(_WORD *)(gpsi + 906LL)
              && (*(_BYTE *)(v19 + 10) & 1) == 0
              && *(_WORD *)v19 != *(_WORD *)(gpsi + 898LL) )
            {
              v20 = *(_QWORD *)(v9 + 40);
              if ( *(char *)(v20 + 20) >= 0 )
              {
                if ( (unsigned int)WantImeWindow(*(struct tagWND **)(v9 + 104), (struct tagWND *)v9) )
                {
                  if ( (*(_BYTE *)(v20 + 31) & 0x40) == 0 && v6 != (struct tagWND *)v9 )
                  {
                    v21 = *(_QWORD *)(v9 + 120);
                    if ( !v21 || v11 != *(_QWORD *)(v21 + 16) )
                      break;
                  }
                }
              }
            }
          }
          v9 = *(_QWORD *)(v9 + 88);
          if ( !v9 )
            goto LABEL_14;
        }
        v6 = (struct tagWND *)v9;
      }
    }
  }
LABEL_14:
  v12 = v6;
  if ( v6 )
  {
    while ( v12 != a1 )
    {
      v12 = (struct tagWND *)*((_QWORD *)v12 + 15);
      if ( !v12 )
        goto LABEL_17;
    }
    UserSetLastError(87);
  }
  else
  {
LABEL_17:
    v13 = *(_DWORD *)(*((_QWORD *)v6 + 5) + 236LL);
    if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != v13 )
      SetWindowGroupBand(a1, v13, 1);
    v22 = *(_OWORD *)LockPointer(v23, (__int64)a1 + 120, (__int64)v6);
    HMAssignmentLock(&v22, 1LL);
    WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v6);
    zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakStateComponentUIAware);
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v16 = *(_QWORD *)v6;
      v17 = *(_QWORD *)a1;
      v18 = (void *)ReferenceDwmApiPort(v15);
      DwmAsyncOwnerChange(v18, v17, v16);
    }
  }
}
