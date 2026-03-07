__int64 __fastcall NtUserGetMenuBarInfo(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4)
{
  __int64 v6; // rcx
  struct tagWND *v7; // rsi
  int MenuBarInfo; // ebx
  _BYTE *v9; // rdx
  __int64 v10; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+38h] [rbp-90h] BYREF
  __int64 v17; // [rsp+48h] [rbp-80h]
  __int128 v18; // [rsp+60h] [rbp-68h] BYREF
  __int128 v19; // [rsp+70h] [rbp-58h]
  __int128 v20; // [rsp+80h] [rbp-48h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  v7 = (struct tagWND *)ValidateHwnd(a1);
  if ( v7 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v7;
    HMLockObject(v7);
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a4;
    if ( a4 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[47] = v9[47];
    LODWORD(v18) = *(_DWORD *)a4;
    MenuBarInfo = xxxGetMenuBarInfo(v7);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v10);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v7, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces((char *)&v18 + 4, (char *)&v18 + 4, 0LL, v7);
    if ( MenuBarInfo )
    {
      DWORD1(v19) = 0;
      *((_QWORD *)&v20 + 1) = BYTE8(v20) & 3;
      *(_OWORD *)a4 = v18;
      *(_OWORD *)(a4 + 16) = v19;
      *(_OWORD *)(a4 + 32) = v20;
    }
    ThreadUnlock1(v13, v12, v14);
  }
  else
  {
    MenuBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return MenuBarInfo;
}
