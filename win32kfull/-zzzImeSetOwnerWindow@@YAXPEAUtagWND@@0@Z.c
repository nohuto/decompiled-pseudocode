void __fastcall zzzImeSetOwnerWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v3; // rcx
  __int64 NonChildAncestor; // rax
  __int16 v5; // r9
  struct tagWND *v6; // r8
  struct tagWND *v7; // rbx
  unsigned int v8; // edx
  unsigned int WindowCloakStateComponentUIAware; // eax
  void *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF

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
      v8 = *(_DWORD *)(*((_QWORD *)v7 + 5) + 236LL);
      if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != v8 )
        SetWindowGroupBand(a1, v8, 1);
    }
    else
    {
      v7 = 0LL;
    }
LABEL_11:
    v11 = *(_OWORD *)LockPointer(v12, (char *)a1 + 120, v7);
    HMAssignmentLock(&v11, 1LL);
    if ( v7 )
    {
      WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v7);
      zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakStateComponentUIAware);
    }
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v10 = (void *)ReferenceDwmApiPort();
      DwmAsyncOwnerChange(v10);
    }
  }
}
