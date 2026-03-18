/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x1C000E010
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendMinRectMessages @ 0x1C000E188 (xxxSendMinRectMessages.c)
 *     ParkIcon @ 0x1C00C3A88 (ParkIcon.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EB4B8 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetWindowMinimizeRect(__int64 a1, _OWORD *a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _DWORD *Prop; // rax
  int v14; // r8d
  int v15; // r9d
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF

  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v10 = v5;
  if ( v5 && (v7 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFFu) - 669, (v7 & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v5;
    HMLockObject(v5);
    if ( a2 )
    {
      if ( (unsigned __int8)IsTrayWindow(v10, 1LL) )
      {
        v4 = xxxSendMinRectMessages(v10, &v18);
      }
      else
      {
        Prop = (_DWORD *)GetProp(v10, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
        if ( Prop && (Prop[12] & 0x20) != 0 )
        {
          v14 = Prop[8];
          LODWORD(v18) = v14;
          v15 = Prop[9];
          DWORD1(v18) = v15;
        }
        else
        {
          ParkIcon(v10, &v18);
          v15 = DWORD1(v18);
          v14 = v18;
        }
        DWORD2(v18) = v14 + *(_DWORD *)(gpsi + 2124LL);
        HIDWORD(v18) = v15 + *(_DWORD *)(gpsi + 2128LL);
      }
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(v10, CurrentThreadDpiAwarenessContext) )
        TransformRectBetweenCoordinateSpaces(&v18, &v18, 0LL, v10);
      if ( v4 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_OWORD *)MmUserProbeAddress;
        *a2 = v18;
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
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
