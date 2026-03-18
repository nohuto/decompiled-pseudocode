/*
 * XREFs of NtUserGetUpdateRect @ 0x1C0107040
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxGetUpdateRect @ 0x1C01071D4 (xxxGetUpdateRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetUpdateRect(__int64 a1, _OWORD *a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  unsigned int UpdateRect; // esi
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int128 v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h]
  __int128 v17; // [rsp+50h] [rbp-38h] BYREF

  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v7;
    HMLockObject(v7);
    UpdateRect = xxxGetUpdateRect(
                   v7,
                   (unsigned __int64)&v17 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
                   a3);
    if ( a2 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
      {
        v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v12 + 224) & 0x20) == 0 )
        {
          v13 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
          if ( (((unsigned __int16)(v13 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v12,
                                                                                   v8) >> 8)) & 0x1FF) != 0 )
            TransformRectBetweenCoordinateSpaces(&v17, &v17, 0LL, v7);
        }
      }
      v9 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v17;
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
