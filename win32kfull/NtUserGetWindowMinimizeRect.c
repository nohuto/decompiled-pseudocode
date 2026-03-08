/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x1C000D3A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendMinRectMessages @ 0x1C000D518 (xxxSendMinRectMessages.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C002E354 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ParkIcon @ 0x1C0101D68 (ParkIcon.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetWindowMinimizeRect(__int64 a1, _OWORD *a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _DWORD *Prop; // rax
  int v10; // r8d
  int v11; // r9d
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF

  v14 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v6 = v5;
  if ( v5 && (((*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v5;
    HMLockObject(v5);
    if ( a2 )
    {
      if ( (unsigned __int8)IsTrayWindow(v6, 1LL) )
      {
        v4 = xxxSendMinRectMessages(v6, &v14);
      }
      else
      {
        Prop = (_DWORD *)GetProp(v6, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
        if ( Prop && (Prop[12] & 0x20) != 0 )
        {
          v10 = Prop[8];
          LODWORD(v14) = v10;
          v11 = Prop[9];
          DWORD1(v14) = v11;
        }
        else
        {
          ParkIcon(v6, &v14);
          v11 = DWORD1(v14);
          v10 = v14;
        }
        DWORD2(v14) = v10 + *(_DWORD *)(gpsi + 2124LL);
        HIDWORD(v14) = v11 + *(_DWORD *)(gpsi + 2128LL);
      }
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(v6, CurrentThreadDpiAwarenessContext) )
        TransformRectBetweenCoordinateSpaces(&v14, &v14, 0LL, v6);
      if ( v4 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_OWORD *)MmUserProbeAddress;
        *a2 = v14;
      }
    }
    else
    {
      v4 = 0;
      UserSetLastError(87LL);
    }
    ThreadUnlock1();
  }
  else
  {
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
