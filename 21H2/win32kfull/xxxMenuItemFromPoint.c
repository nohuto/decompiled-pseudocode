/*
 * XREFs of xxxMenuItemFromPoint @ 0x1C024A178
 * Callers:
 *     NtUserMenuItemFromPoint @ 0x1C01FA2A0 (NtUserMenuItemFromPoint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z @ 0x1C022EFC4 (-MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0249B08 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024A058 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxMenuItemFromPoint(__int64 a1, __int64 **a2, struct tagPOINT a3)
{
  struct tagWND *MenuPwnd; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct tagMENU *v13; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  MenuPwnd = (struct tagWND *)GetMenuPwnd(a1, (__int64)a2);
  if ( !MenuPwnd )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
  {
    v14[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v14[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v14;
    v14[1] = MenuPwnd;
    HMLockObject(MenuPwnd);
    xxxMNRecomputeBarIfNeeded((__int64)MenuPwnd, a2, v8, v9);
    ThreadUnlock1(v11, v10, v12);
  }
  v13 = (struct tagMENU *)a2[2];
  if ( !v13 )
    v13 = (struct tagMENU *)**a2;
  return MNItemHitTest(v13, MenuPwnd, a3);
}
