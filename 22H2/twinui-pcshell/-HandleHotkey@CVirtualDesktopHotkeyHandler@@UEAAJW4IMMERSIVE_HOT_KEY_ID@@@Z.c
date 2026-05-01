/*
 * XREFs of ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1804B00E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ @ 0x1804B01EC (-_AddDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ.c)
 *     ?_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z @ 0x1804B02D4 (-_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z.c)
 *     ?_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ @ 0x1804B0420 (-_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualDesktopHotkeyHandler::HandleHotkey(CVirtualDesktopHotkeyHandler *a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2 - 37;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          return 2147500033LL;
        v6 = CVirtualDesktopHotkeyHandler::_RemoveDesktop(a1);
        if ( v6 < 0 )
        {
          v7 = 39LL;
LABEL_14:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v7,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
            (const char *)(unsigned int)v6);
        }
      }
      else
      {
        v6 = CVirtualDesktopHotkeyHandler::_AddDesktop(a1);
        if ( v6 < 0 )
        {
          v7 = 37LL;
          goto LABEL_14;
        }
      }
    }
    else
    {
      v6 = CVirtualDesktopHotkeyHandler::_CycleInDirection(a1, 1LL);
      if ( v6 < 0 )
      {
        v7 = 35LL;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v6 = CVirtualDesktopHotkeyHandler::_CycleInDirection(a1, 0LL);
    if ( v6 < 0 )
    {
      v7 = 33LL;
      goto LABEL_14;
    }
  }
  return (unsigned int)v6;
}
