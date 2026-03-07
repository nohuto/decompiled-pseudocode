__int64 __fastcall GetResizeDCompositionSynchronizationObject(HWND a1, struct CompositionObject **a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned int WindowResizeDCompositionSynchronizationObject; // edi
  __int64 TopLevelWindow; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = v4;
  if ( v4 && (v5 = *(_QWORD *)(v4 + 40), (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v13;
    *((_QWORD *)&v13 + 1) = v4;
    HMLockObject(v4);
    WindowResizeDCompositionSynchronizationObject = 1;
    TopLevelWindow = GetTopLevelWindow(v6);
    if ( !TopLevelWindow
      || (v10 = *(_QWORD *)(TopLevelWindow + 40), v9 = *(_WORD *)(v10 + 42) & 0x2FFF, (_DWORD)v9 == 669)
      || (WindowResizeDCompositionSynchronizationObject = GreGetWindowResizeDCompositionSynchronizationObject(*(HWND *)TopLevelWindow)) != 0 )
    {
      *a2 = 0LL;
    }
    ThreadUnlock1(v10, v9, v11);
  }
  else
  {
    WindowResizeDCompositionSynchronizationObject = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return WindowResizeDCompositionSynchronizationObject;
}
