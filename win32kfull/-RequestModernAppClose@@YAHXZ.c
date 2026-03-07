__int64 RequestModernAppClose(void)
{
  struct tagTHREADINFO *v0; // rbx
  struct tagWND *v1; // rdi
  __int64 *v3; // rsi
  struct tagWND *CompositionInputWindowUIOwner; // rax
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 TopLevelWindow; // rax
  __int64 v7; // rcx
  __int64 *v8; // r8
  __int64 v9; // rcx

  v0 = 0LL;
  if ( !gpqForeground )
    return 0LL;
  v1 = *(struct tagWND **)(gpqForeground + 128LL);
  if ( !v1 )
    return 0LL;
  if ( gbLockScreenActive )
  {
    LOBYTE(v0) = *(_DWORD *)(*((_QWORD *)v1 + 5) + 236LL) == 17;
    return (unsigned int)v0;
  }
  v3 = 0LL;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v1);
  if ( CompositionInputWindowUIOwner )
    v1 = CompositionInputWindowUIOwner;
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(v1);
  if ( TopLevelHostForComponent )
    v1 = TopLevelHostForComponent;
  TopLevelWindow = GetTopLevelWindow((__int64)v1);
  if ( !TopLevelWindow )
    return 0LL;
  do
  {
    v7 = *(_QWORD *)(TopLevelWindow + 40);
    v8 = (__int64 *)TopLevelWindow;
    TopLevelWindow = *(_QWORD *)(TopLevelWindow + 120);
    if ( *(char *)(v7 + 232) >= 0 )
      v8 = v3;
    v3 = v8;
  }
  while ( TopLevelWindow );
  if ( !v8 )
    return 0LL;
  PostIAMShellHookMessage(0x20u, *v8);
  v9 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 320LL);
  if ( v9 )
    v0 = *(struct tagTHREADINFO **)(v9 + 16);
  CInputGlobals::SetPtiLastWoken(gpInputGlobals, v0, 0);
  return 1LL;
}
