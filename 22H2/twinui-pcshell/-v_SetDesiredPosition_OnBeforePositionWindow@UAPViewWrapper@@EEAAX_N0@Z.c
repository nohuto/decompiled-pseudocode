/*
 * XREFs of ?v_SetDesiredPosition_OnBeforePositionWindow@UAPViewWrapper@@EEAAX_N0@Z @ 0x18033A860
 * Callers:
 *     <none>
 * Callees:
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180080C60 (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 */

void __fastcall UAPViewWrapper::v_SetDesiredPosition_OnBeforePositionWindow(UAPViewWrapper *this, __int64 a2, char a3)
{
  if ( a3 )
  {
    PushWindowTransparencyModeToWindow(*((HWND *)this + 34), *((_DWORD *)this + 64), *((_DWORD *)this + 140));
    SetPropW(*((HWND *)this + 34), L"CanOpenInNewTab", (HANDLE)(*((_DWORD *)this + 65) != 0));
  }
}
