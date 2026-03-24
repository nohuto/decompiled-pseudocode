/*
 * XREFs of NtUserGetUpdateRect @ 0x1C0117D60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxGetUpdateRect @ 0x1C0117F40 (xxxGetUpdateRect.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetUpdateRect(__int64 a1, _OWORD *a2, unsigned int a3)
{
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // r15
  ULONG64 v9; // rcx
  unsigned int UpdateRect; // r14d
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h]
  __int128 v19; // [rsp+50h] [rbp-38h] BYREF

  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
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
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
      {
        v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v11 + 224) & 0x20) == 0 )
        {
          v12 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL);
          if ( (((unsigned __int16)(v12 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v11) >> 8)) & 0x1FF) != 0 )
            goto LABEL_20;
          v13 = *(unsigned int *)(*(_QWORD *)(v8 + 40) + 288LL);
          v14 = (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL) & 0xF) == 2 && (v13 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v13) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v15) & 0x20000000) == 0 )
          {
            v6 = 0;
          }
          if ( v14 != v6 )
LABEL_20:
            TransformRectBetweenCoordinateSpaces(&v19, &v19, 0LL, v8);
        }
      }
      v9 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v19;
    }
    ThreadUnlock1(v9);
  }
  else
  {
    UpdateRect = 0;
  }
  UserSessionSwitchLeaveCrit(v7);
  return UpdateRect;
}
