__int64 __fastcall NtUserGetUpdateRect(__int64 a1, _OWORD *a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  unsigned int UpdateRect; // ebx
  __int64 v11; // r8
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h]
  __int128 v16; // [rsp+50h] [rbp-38h] BYREF

  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    *((_QWORD *)&v14 + 1) = v7;
    HMLockObject(v7);
    UpdateRect = xxxGetUpdateRect(
                   v7,
                   (unsigned __int64)&v16 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
                   a3);
    if ( a2 )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v9);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(v7, CurrentThreadDpiAwarenessContext) )
        TransformRectBetweenCoordinateSpaces(&v16, &v16, 0LL, v7);
      v9 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v16;
    }
    ThreadUnlock1(v9, v8, v11);
  }
  else
  {
    UpdateRect = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return UpdateRect;
}
