/*
 * XREFs of ?RequestModernAppClose@@YAHXZ @ 0x1C01EAD58
 * Callers:
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01EACE0 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C002DB50 (PostIAMShellHookMessageEx.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006A1DC (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006FCC0 (_GetTopLevelWindow.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D24C8 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 RequestModernAppClose(void)
{
  struct tagTHREADINFO *v0; // rbx
  __int64 v1; // rdi
  __int64 *v3; // rsi
  struct tagWND *CompositionInputWindowUIOwner; // rax
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 TopLevelWindow; // rax
  bool v7; // zf
  __int64 *v8; // rcx
  __int64 v9; // rcx

  v0 = 0LL;
  if ( !gpqForeground )
    return 0LL;
  v1 = *(_QWORD *)(gpqForeground + 120LL);
  if ( !v1 )
    return 0LL;
  if ( gbLockScreenActive )
  {
    LOBYTE(v0) = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 236LL) == 17;
    return (unsigned int)v0;
  }
  v3 = 0LL;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)v1);
  if ( CompositionInputWindowUIOwner )
    v1 = (__int64)CompositionInputWindowUIOwner;
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent((const struct tagWND *)v1);
  if ( TopLevelHostForComponent )
    v1 = (__int64)TopLevelHostForComponent;
  TopLevelWindow = GetTopLevelWindow(v1);
  if ( !TopLevelWindow )
    return 0LL;
  do
  {
    v7 = (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 234LL) & 0x40) == 0;
    v8 = (__int64 *)TopLevelWindow;
    TopLevelWindow = *(_QWORD *)(TopLevelWindow + 120);
    if ( v7 )
      v8 = v3;
    v3 = v8;
  }
  while ( TopLevelWindow );
  if ( !v8 )
    return 0LL;
  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x20u, *v8);
  v9 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 328LL);
  if ( v9 )
    v0 = *(struct tagTHREADINFO **)(v9 + 16);
  CInputGlobals::SetPtiLastWoken(gpInputGlobals, v0, 0);
  return 1LL;
}
