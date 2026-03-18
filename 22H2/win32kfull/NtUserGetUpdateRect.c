/*
 * XREFs of NtUserGetUpdateRect @ 0x1C008BA10
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetUpdateRect @ 0x1C008BB5C (xxxGetUpdateRect.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetUpdateRect(__int64 a1, _OWORD *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  unsigned int UpdateRect; // ebx
  __int64 v14; // r8
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int128 v17; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h]
  __int128 v19; // [rsp+50h] [rbp-38h] BYREF

  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v8;
    HMLockObject(v8);
    UpdateRect = xxxGetUpdateRect(
                   v8,
                   (unsigned __int64)&v19 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
                   a3);
    if ( a2 )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v12);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(v8, CurrentThreadDpiAwarenessContext) )
        TransformRectBetweenCoordinateSpaces(&v19, &v19, 0LL, v8);
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v19;
    }
    ThreadUnlock1(v12, v11, v14);
  }
  else
  {
    UpdateRect = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return UpdateRect;
}
