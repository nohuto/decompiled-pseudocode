__int64 __fastcall xxxMenuItemFromPoint(__int64 a1, __int64 *a2, struct tagPOINT a3)
{
  struct tagWND *MenuPwnd; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct tagMENU *v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  MenuPwnd = (struct tagWND *)GetMenuPwnd(a1, (__int64)a2);
  if ( !MenuPwnd )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)*a2 + 40LL) + 40LL) & 1) == 0 )
  {
    v13 = 0LL;
    v14 = 0LL;
    ThreadLockAlways(MenuPwnd, &v13);
    xxxMNRecomputeBarIfNeeded((__int64)MenuPwnd, a2, v7, v8);
    ThreadUnlock1(v10, v9, v11);
  }
  v12 = (struct tagMENU *)a2[2];
  if ( !v12 )
    v12 = *(struct tagMENU **)*a2;
  return MNItemHitTest(v12, MenuPwnd, a3);
}
