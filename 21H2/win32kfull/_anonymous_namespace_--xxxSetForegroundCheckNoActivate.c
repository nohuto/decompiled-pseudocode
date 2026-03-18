/*
 * XREFs of _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01CEBA0
 * Callers:
 *     EditionSetForegroundCheckNoActivate @ 0x1C01CEDE0 (EditionSetForegroundCheckNoActivate.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00F1E88 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C011E5AC (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C023A8B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

bool __fastcall anonymous_namespace_::xxxSetForegroundCheckNoActivate(struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  char v2; // di
  __int64 TopLevelWindow; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // bl
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  CompositionInputWindowUIOwner = a1;
  v2 = 0;
  if ( (unsigned int)IsIndependentInputWindow(a1) )
  {
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
    if ( !CompositionInputWindowUIOwner )
      return 0;
    v2 = 1;
  }
  if ( CompositionInputWindowUIOwner == (struct tagWND *)GetDesktopWindow((__int64)CompositionInputWindowUIOwner) )
    return 0;
  if ( (*((_DWORD *)CompositionInputWindowUIOwner + 80) & 0x2000) != 0 )
    return 0;
  TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
  if ( !TopLevelWindow || (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 27LL) & 8) != 0 )
    return 0;
  if ( v2 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v12 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v12;
    *((_QWORD *)&v12 + 1) = CompositionInputWindowUIOwner;
    HMLockObject(CompositionInputWindowUIOwner);
  }
  v9 = xxxForceForegroundWindowNoRestoreFocus((__int64)CompositionInputWindowUIOwner, 0LL, v4, v5);
  if ( v2 )
    ThreadUnlock1(v8, v7, v10);
  return v9;
}
