/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x1C01247A0
 * Callers:
 *     <none>
 * Callees:
 *     ParkIcon @ 0x1C002C27C (ParkIcon.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsTrayWindow @ 0x1C005EA90 (IsTrayWindow.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     _GetProp @ 0x1C006B8F0 (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxSendMinRectMessages @ 0x1C0124928 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetWindowMinimizeRect(__int64 a1, _OWORD *a2)
{
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // esi
  ULONG64 v11; // rcx
  _DWORD *Prop; // rax
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // ebx
  __int64 v17; // rcx
  int v18; // ebx
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h]
  __int128 v21; // [rsp+50h] [rbp-38h] BYREF

  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v5 = ValidateHwnd(a1);
  v7 = (_QWORD *)v5;
  if ( v5 && (v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v19;
    *((_QWORD *)&v19 + 1) = v5;
    HMLockObject(v5);
    if ( a2 )
    {
      if ( (unsigned int)IsTrayWindow(v7) )
      {
        v10 = xxxSendMinRectMessages(v7, &v21);
      }
      else
      {
        Prop = (_DWORD *)GetProp((__int64)v7, WORD2(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1LL);
        if ( Prop && (Prop[12] & 0x20) != 0 )
        {
          v14 = Prop[8];
          LODWORD(v21) = v14;
          v15 = Prop[9];
          DWORD1(v21) = v15;
        }
        else
        {
          ParkIcon((__int64)v7, (int *)&v21);
          v15 = DWORD1(v21);
          v14 = v21;
        }
        DWORD2(v21) = v14 + *(_DWORD *)(gpsi + 2124LL);
        HIDWORD(v21) = v15 + *(_DWORD *)(gpsi + 2128LL);
        v10 = 1;
      }
      v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
      if ( (*(_BYTE *)(v11 + 224) & 1) == 0 )
      {
        v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v11 + 224) & 0x20) == 0 )
        {
          v16 = *(_DWORD *)(v7[5] + 288LL);
          if ( (((unsigned __int16)(v16 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v11) >> 8)) & 0x1FF) != 0 )
            goto LABEL_30;
          v17 = *(unsigned int *)(v7[5] + 288LL);
          v18 = (*(_DWORD *)(v7[5] + 288LL) & 0xF) == 2 && (v17 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v17) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v11) & 0x20000000) == 0 )
          {
            v4 = 0;
          }
          if ( v18 != v4 )
LABEL_30:
            TransformRectBetweenCoordinateSpaces(&v21, &v21, 0LL, v7);
        }
      }
      if ( v10 )
      {
        v11 = MmUserProbeAddress;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_OWORD *)MmUserProbeAddress;
        *a2 = v21;
      }
    }
    else
    {
      v10 = 0;
      UserSetLastError(87LL, v8, v9);
    }
    ThreadUnlock1(v11);
  }
  else
  {
    v10 = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v10;
}
