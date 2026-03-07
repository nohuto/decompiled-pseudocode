void __fastcall xxxNotifyMonitorChanged(
        struct tagWND *this,
        struct tagRECT *a2,
        struct tagBWL *a3,
        unsigned __int16 a4)
{
  BOOL v8; // eax
  struct tagWND *v9; // rcx
  BOOL v10; // r14d
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r8
  __int16 ScaledLogPixels; // bx

  v8 = IsTopLevelWindow((__int64)this);
  v10 = v8;
  if ( (*(_DWORD *)(*((_QWORD *)v9 + 5) + 288LL) & 0xF) == 2 && v8 )
    SetDeferredDpiStateForWindowAndChildren(v9, 0, 0);
  v11 = *(_DWORD *)(*((_QWORD *)this + 5) + 288LL) & 0xF;
  if ( v11 == 2 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 648LL) & 0x2000000) == 0 )
    {
      xxxSendDpiChangedMsgs(this, a2, a3, a4);
      goto LABEL_7;
    }
  }
  else if ( v11 == 3 )
  {
    xxxConsiderPreferredDpiChange(this);
    goto LABEL_7;
  }
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
  {
    if ( *((_QWORD *)PtiCurrentShared(v12) + 57) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v13) + 57) + 8LL) + 64LL) & 1) != 0 )
      {
        v14 = *(_DWORD *)(*((_QWORD *)this + 5) + 288LL);
        if ( (v14 & 0xF) == 0 && (v14 & 0x40000000) != 0 && IsTopLevelWindow((__int64)this) )
        {
          if ( !a4
            || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v15 + 284)),
                (unsigned __int16)GreGetScaledLogPixels(a4) != ScaledLogPixels) )
          {
            xxxSendGDIScaledDpiChangedMsgs(this, a3);
          }
        }
      }
    }
  }
LABEL_7:
  if ( v10 )
  {
    TraceLoggingProcessMonitorInfoUpdateHelper(this, 1);
    if ( *((_QWORD *)this + 15) )
    {
      PostIAMShellHookMessage(24LL, *(_QWORD *)this);
    }
    else if ( IsTrayWindow(this, 1) )
    {
      PostShellHookMessagesEx(0x10uLL, *(_QWORD *)this, 0LL);
      PostIAMShellHookMessage(20LL, *(_QWORD *)this);
      xxxCallHook(16, *(_QWORD *)this, 0LL, 10);
    }
  }
  if ( a3 )
    FreeHwndList(a3);
}
