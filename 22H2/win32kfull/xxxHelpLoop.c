/*
 * XREFs of xxxHelpLoop @ 0x1C0239514
 * Callers:
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0011688 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C00117FC (xxxCapture.c)
 *     xxxRedrawTitle @ 0x1C001F9E4 (xxxRedrawTitle.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0041920 (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     xxxInternalGetMessage @ 0x1C006A4F0 (xxxInternalGetMessage.c)
 *     _GetParent @ 0x1C009470C (_GetParent.c)
 *     xxxTranslateMessage @ 0x1C00ACC1C (xxxTranslateMessage.c)
 *     GetWindowBorders @ 0x1C00C6A7C (GetWindowBorders.c)
 *     PtInRect @ 0x1C00D0A58 (PtInRect.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00F178C (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     xxxDispatchMessage @ 0x1C0117884 (xxxDispatchMessage.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     xxxInternalEnumWindow @ 0x1C01A7E14 (xxxInternalEnumWindow.c)
 *     xxxWaitMessageEx @ 0x1C01B7350 (xxxWaitMessageEx.c)
 *     xxxSendHelpMessage @ 0x1C0239990 (xxxSendHelpMessage.c)
 *     ?IsHelpParent@@YAHPEAUtagWND@@@Z @ 0x1C024EE0C (-IsHelpParent@@YAHPEAUtagWND@@@Z.c)
 *     GetContextHelpId @ 0x1C024EE68 (GetContextHelpId.c)
 */

void __fastcall xxxHelpLoop(struct tagWND *a1)
{
  int WindowBorders; // eax
  _DWORD *v3; // r8
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  struct tagCURSOR *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  HWND v12; // rax
  ShellWindowManagement *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct tagWND *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  ULONG_PTR Parent; // rsi
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int ContextHelpId; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int128 v29; // [rsp+38h] [rbp-49h] BYREF
  __int64 v30; // [rsp+48h] [rbp-39h]
  __int128 v31; // [rsp+50h] [rbp-31h] BYREF
  __int128 v32; // [rsp+60h] [rbp-21h]
  struct tagPOINT v33[2]; // [rsp+70h] [rbp-11h]
  __int128 v34; // [rsp+80h] [rbp-1h] BYREF
  __int64 v35; // [rsp+90h] [rbp+Fh]
  __int128 v36; // [rsp+98h] [rbp+17h] BYREF
  __int64 v37; // [rsp+A8h] [rbp+27h]
  __int128 v38; // [rsp+B0h] [rbp+2Fh] BYREF
  __int64 v39; // [rsp+C0h] [rbp+3Fh]

  v31 = 0LL;
  v35 = 0LL;
  v37 = 0LL;
  v32 = 0LL;
  *(_OWORD *)&v33[0].x = 0LL;
  v34 = 0LL;
  v36 = 0LL;
  xxxWindowEvent(0xCu, a1, 0, 0, 0);
  zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 6632LL));
  xxxCapture(gptiCurrent, a1, 4);
  WindowBorders = GetWindowBorders(
                    *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
                    *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL));
  v3 = (_DWORD *)*((_QWORD *)a1 + 5);
  v4 = v3[24] - WindowBorders;
  LODWORD(v29) = WindowBorders + v3[22];
  v5 = v3[23];
  DWORD2(v29) = v4;
  v6 = v3[25] - WindowBorders;
  DWORD1(v29) = WindowBorders + v5;
  HIDWORD(v29) = v6;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) != a1 )
        goto LABEL_33;
      if ( (unsigned int)xxxInternalGetMessage(&v31, 0LL, 0, 0, 2, 0) )
        break;
      xxxWaitMessageEx(0x3CFFu, 0, 0LL);
    }
    if ( DWORD2(v31) == 161 )
      goto LABEL_33;
    if ( DWORD2(v31) == 513 )
    {
      if ( !PtInRect(&v29, *(unsigned __int64 *)&v33[0].y) )
        goto LABEL_33;
      v12 = xxxWindowHitTest(a1, *(struct tagPOINT *)&v33[0].y, 0LL, 0);
      v13 = (ShellWindowManagement *)ValidateHwnd(v12);
      ThreadLock(v13, &v36);
      if ( (unsigned int)IsHelpParent(v13) )
      {
        v35 = *(_QWORD *)&v33[0].y;
        v34 = (unsigned __int64)v13;
        xxxInternalEnumWindow(v13, (__int64 (__fastcall *)(__int64, __int64))EnumPwndDlgChildProc, (__int64)&v34, 1u);
        v13 = (ShellWindowManagement *)*((_QWORD *)&v34 + 1);
      }
      v17 = 0LL;
      if ( v13 != a1 )
        v17 = v13;
      if ( !v17 && (!*(_DWORD *)(*((_QWORD *)a1 + 5) + 280LL) || (v17 = a1) == 0LL) )
      {
        ThreadUnlock1(v15, v14, v16);
        goto LABEL_33;
      }
      v39 = 0LL;
      v30 = 0LL;
      v38 = 0LL;
      v29 = 0LL;
      ThreadLockAlways(v17, &v29);
      zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
      xxxReleaseCapture();
      xxxRedrawTitle((unsigned __int64 *)a1, 0x1000u);
      SetOrClrWF(0, a1, 0x580u, 1);
      xxxInternalGetMessage(&v31, 0LL, 0, 0, 1, 1);
      xxxWindowEvent(0x800Au, a1, -2, 4u, 0);
      xxxWindowEvent(0xDu, a1, 0, 0, 0);
      if ( (*(_BYTE *)(*((_QWORD *)v17 + 5) + 31LL) & 8) != 0 )
      {
        Parent = GetParent(v17);
        if ( !Parent )
        {
LABEL_29:
          ThreadUnlock1(v19, v18, v21);
          ThreadUnlock1(v23, v22, v24);
          return;
        }
      }
      else
      {
        Parent = (ULONG_PTR)v17;
      }
      ThreadLockAlways(Parent, &v38);
      ContextHelpId = GetContextHelpId(v17);
      xxxSendHelpMessage(Parent, ContextHelpId);
      ThreadUnlock1(v27, v26, v28);
      goto LABEL_29;
    }
    if ( (unsigned int)(DWORD2(v31) - 516) <= 7 )
    {
      v7 = 137;
      if ( _bittest(&v7, DWORD2(v31) - 516) )
        goto LABEL_33;
    }
    if ( DWORD2(v31) != 512 )
      break;
    if ( PtInRect(&v29, *(unsigned __int64 *)&v33[0].y) )
      v8 = *(struct tagCURSOR **)(gasyscur[0] + 6632LL);
    else
      v8 = (struct tagCURSOR *)gasyscur[1];
    zzzSetCursor(v8);
LABEL_15:
    xxxInternalGetMessage(&v31, 0LL, 0, 0, 1, 1);
    xxxTranslateMessage((__int64)&v31, 0);
    xxxDispatchMessage((__int64 *)&v31, v9, v10, v11);
  }
  if ( DWORD2(v31) != 256 || (_QWORD)v32 != 27LL )
    goto LABEL_15;
  xxxInternalGetMessage(&v31, 0LL, 0, 0, 1, 1);
LABEL_33:
  xxxReleaseCapture();
  zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
  xxxRedrawTitle((unsigned __int64 *)a1, 0x1000u);
  SetOrClrWF(0, a1, 0x580u, 1);
  xxxWindowEvent(0x800Au, a1, -2, 4u, 0);
  xxxWindowEvent(0xDu, a1, 0, 0, 0);
}
