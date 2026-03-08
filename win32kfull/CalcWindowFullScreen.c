/*
 * XREFs of CalcWindowFullScreen @ 0x1C006789C
 * Callers:
 *     SetVisible @ 0x1C002DB8C (SetVisible.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068640 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     CalcWindowsFullScreen @ 0x1C00F5D10 (CalcWindowsFullScreen.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C01454BA (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D2B90 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     UnionRect @ 0x1C00DD06C (UnionRect.c)
 *     GetMonitorRectForWindow @ 0x1C00FF4DC (GetMonitorRectForWindow.c)
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

char __fastcall CalcWindowFullScreen(struct tagWND *a1)
{
  unsigned __int8 v2; // di
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  struct tagMONITOR *v6; // rax
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // rcx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)a1 + 13);
  v15 = 0LL;
  if ( v3
    && (v4 = *((_QWORD *)a1 + 3)) != 0
    && (v5 = *(_QWORD *)(v4 + 8)) != 0
    && v3 == *(_QWORD *)(v5 + 24)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    v6 = _MonitorFromWindowInternal(a1, 2u, 0);
    if ( v6 )
    {
      v7 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v7 + 30) & 0xC4) == 0xC4 )
        v8 = *(_OWORD *)(v7 + 104);
      else
        v8 = *(_OWORD *)(v7 + 88);
      v14 = v8;
      v13 = *(_OWORD *)GetMonitorRectForWindow(&v13, v6, a1);
      UnionRect(&v15, &v14, &v13);
      v9 = v15 - v14;
      if ( (_QWORD)v15 == (_QWORD)v14 )
        v9 = *((_QWORD *)&v15 + 1) - *((_QWORD *)&v14 + 1);
      v2 = v9 == 0;
    }
    LOBYTE(v10) = (*((_DWORD *)a1 + 80) & 0x400) != 0;
    if ( v2 != (_BYTE)v10 )
    {
      *((_DWORD *)a1 + 80) ^= 0x400u;
      if ( gpqForeground && *(struct tagWND **)(gpqForeground + 128LL) == a1 )
      {
        if ( v2 )
          EtwTraceForegroundWindowFullScreenStart(0LL);
        else
          EtwTraceForegroundWindowFullScreenStop(0LL);
      }
      v11 = (v2 ^ 1u) + 53;
      goto LABEL_22;
    }
  }
  else
  {
    v10 = *((_DWORD *)a1 + 80);
    if ( (v10 & 0x400) != 0 )
    {
      v11 = 54LL;
      *((_DWORD *)a1 + 80) = v10 & 0xFFFFFBFF;
LABEL_22:
      LOBYTE(v10) = PostShellHookMessagesEx(v11, *(_QWORD *)a1, 0LL);
    }
  }
  return v10;
}
