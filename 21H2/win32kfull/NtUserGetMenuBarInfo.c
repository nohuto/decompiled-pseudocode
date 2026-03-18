/*
 * XREFs of NtUserGetMenuBarInfo @ 0x1C00BB660
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxGetMenuBarInfo @ 0x1C00BB868 (xxxGetMenuBarInfo.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetMenuBarInfo(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4)
{
  __int64 v6; // rcx
  ULONG_PTR v7; // r14
  _BYTE *v8; // rdx
  int MenuBarInfo; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
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
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v7;
    HMLockObject(v7);
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (_BYTE *)a4;
    if ( a4 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[47] = v8[47];
    LODWORD(v18) = *(_DWORD *)a4;
    MenuBarInfo = xxxGetMenuBarInfo(v7);
    v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
    if ( (*(_BYTE *)(v11 + 224) & 1) == 0 )
    {
      v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
      if ( (*(_BYTE *)(v11 + 224) & 0x20) == 0 )
      {
        v13 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11, v10);
        v11 = 511LL;
        if ( (((unsigned __int16)(v13 >> 8) ^ (unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8)) & 0x1FF) != 0 )
          TransformRectBetweenCoordinateSpaces((char *)&v18 + 4, (char *)&v18 + 4, 0LL, v7);
      }
    }
    if ( MenuBarInfo )
    {
      DWORD1(v19) = 0;
      *((_QWORD *)&v20 + 1) = BYTE8(v20) & 3;
      *(_OWORD *)a4 = v18;
      *(_OWORD *)(a4 + 16) = v19;
      *(_OWORD *)(a4 + 32) = v20;
    }
    ThreadUnlock1(v11, v10, v12);
  }
  else
  {
    MenuBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return MenuBarInfo;
}
