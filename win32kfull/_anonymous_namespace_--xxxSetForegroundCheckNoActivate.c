/*
 * XREFs of _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01AF53C
 * Callers:
 *     EditionSetForegroundCheckNoActivate @ 0x1C01AF780 (EditionSetForegroundCheckNoActivate.c)
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C000FFD0 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0013228 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C014A6E4 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

bool __fastcall anonymous_namespace_::xxxSetForegroundCheckNoActivate(struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  char v2; // di
  __int64 TopLevelWindow; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v7; // bl
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
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
    ThreadLockAlways(CompositionInputWindowUIOwner, &v10);
  v7 = xxxForceForegroundWindowNoRestoreFocus((__int64)CompositionInputWindowUIOwner, 0LL, v4);
  if ( v2 )
    ThreadUnlock1(v6, v5, v8);
  return v7;
}
