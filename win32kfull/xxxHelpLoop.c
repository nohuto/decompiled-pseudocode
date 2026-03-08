/*
 * XREFs of xxxHelpLoop @ 0x1C023C17C
 * Callers:
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C00108E8 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C0010A5C (xxxCapture.c)
 *     GetWindowBorders @ 0x1C0021910 (GetWindowBorders.c)
 *     xxxDispatchMessage @ 0x1C0038064 (xxxDispatchMessage.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0042A88 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     xxxInternalGetMessage @ 0x1C00946B0 (xxxInternalGetMessage.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     _GetParent @ 0x1C00C85CC (_GetParent.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C00DEDBC (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     xxxTranslateMessage @ 0x1C00E4F1C (xxxTranslateMessage.c)
 *     xxxRedrawTitle @ 0x1C01097D0 (xxxRedrawTitle.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     xxxInternalEnumWindow @ 0x1C01A9044 (xxxInternalEnumWindow.c)
 *     xxxWaitMessageEx @ 0x1C01B84F0 (xxxWaitMessageEx.c)
 *     xxxSendHelpMessage @ 0x1C023C5F8 (xxxSendHelpMessage.c)
 *     ?IsHelpParent@@YAHPEAUtagWND@@@Z @ 0x1C0251AFC (-IsHelpParent@@YAHPEAUtagWND@@@Z.c)
 *     GetContextHelpId @ 0x1C0251B58 (GetContextHelpId.c)
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
  HWND v9; // rax
  ShellWindowManagement *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct tagWND *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagWND *Parent; // rsi
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int ContextHelpId; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int128 v26; // [rsp+38h] [rbp-49h] BYREF
  __int64 v27; // [rsp+48h] [rbp-39h]
  __int128 v28; // [rsp+50h] [rbp-31h] BYREF
  __int128 v29; // [rsp+60h] [rbp-21h]
  struct tagPOINT v30[2]; // [rsp+70h] [rbp-11h]
  __int128 v31; // [rsp+80h] [rbp-1h] BYREF
  __int64 v32; // [rsp+90h] [rbp+Fh]
  __int128 v33; // [rsp+98h] [rbp+17h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+27h]
  __int128 v35; // [rsp+B0h] [rbp+2Fh] BYREF
  __int64 v36; // [rsp+C0h] [rbp+3Fh]

  v28 = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  v29 = 0LL;
  *(_OWORD *)&v30[0].x = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  xxxWindowEvent(0xCu, a1, 0, 0, 0);
  zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 6632LL));
  xxxCapture(gptiCurrent, a1, 4);
  WindowBorders = GetWindowBorders(
                    *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
                    *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL));
  v3 = (_DWORD *)*((_QWORD *)a1 + 5);
  v4 = v3[24] - WindowBorders;
  LODWORD(v26) = WindowBorders + v3[22];
  v5 = v3[23];
  DWORD2(v26) = v4;
  v6 = v3[25] - WindowBorders;
  DWORD1(v26) = WindowBorders + v5;
  HIDWORD(v26) = v6;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) != a1 )
        goto LABEL_33;
      if ( (unsigned int)xxxInternalGetMessage(&v28, 0LL, 0, 0, 2, 0) )
        break;
      xxxWaitMessageEx(0x3CFFu, 0, 0LL);
    }
    if ( DWORD2(v28) == 161 )
      goto LABEL_33;
    if ( DWORD2(v28) == 513 )
    {
      if ( !PtInRect(&v26, *(unsigned __int64 *)&v30[0].y) )
        goto LABEL_33;
      v9 = xxxWindowHitTest(a1, *(struct tagPOINT *)&v30[0].y, 0LL, 0);
      v10 = (ShellWindowManagement *)ValidateHwnd(v9);
      ThreadLock(v10, &v33);
      if ( (unsigned int)IsHelpParent(v10) )
      {
        v32 = *(_QWORD *)&v30[0].y;
        v31 = (unsigned __int64)v10;
        xxxInternalEnumWindow(v10, (__int64 (__fastcall *)(__int64, __int64))EnumPwndDlgChildProc, (__int64)&v31, 1);
        v10 = (ShellWindowManagement *)*((_QWORD *)&v31 + 1);
      }
      v14 = 0LL;
      if ( v10 != a1 )
        v14 = v10;
      if ( !v14 && (!*(_DWORD *)(*((_QWORD *)a1 + 5) + 280LL) || (v14 = a1) == 0LL) )
      {
        ThreadUnlock1(v12, v11, v13);
        goto LABEL_33;
      }
      v36 = 0LL;
      v27 = 0LL;
      v35 = 0LL;
      v26 = 0LL;
      ThreadLockAlways(v14, &v26);
      zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
      xxxReleaseCapture();
      xxxRedrawTitle(a1, 4096);
      SetOrClrWF(0, (__int64 *)a1, 0x580u, 1);
      xxxInternalGetMessage(&v28, 0LL, 0, 0, 1, 1u);
      xxxWindowEvent(0x800Au, a1, -2, 4u, 0);
      xxxWindowEvent(0xDu, a1, 0, 0, 0);
      if ( (*(_BYTE *)(*((_QWORD *)v14 + 5) + 31LL) & 8) != 0 )
      {
        Parent = (struct tagWND *)GetParent(v14);
        if ( !Parent )
        {
LABEL_29:
          ThreadUnlock1(v16, v15, v18);
          ThreadUnlock1(v20, v19, v21);
          return;
        }
      }
      else
      {
        Parent = v14;
      }
      ThreadLockAlways(Parent, &v35);
      ContextHelpId = GetContextHelpId(v14);
      xxxSendHelpMessage(Parent, ContextHelpId);
      ThreadUnlock1(v24, v23, v25);
      goto LABEL_29;
    }
    if ( (unsigned int)(DWORD2(v28) - 516) <= 7 )
    {
      v7 = 137;
      if ( _bittest(&v7, DWORD2(v28) - 516) )
        goto LABEL_33;
    }
    if ( DWORD2(v28) != 512 )
      break;
    if ( PtInRect(&v26, *(unsigned __int64 *)&v30[0].y) )
      v8 = *(struct tagCURSOR **)(gasyscur[0] + 6632LL);
    else
      v8 = (struct tagCURSOR *)gasyscur[1];
    zzzSetCursor(v8);
LABEL_15:
    xxxInternalGetMessage(&v28, 0LL, 0, 0, 1, 1u);
    xxxTranslateMessage((__int64)&v28, 0);
    xxxDispatchMessage((__int64 *)&v28);
  }
  if ( DWORD2(v28) != 256 || (_QWORD)v29 != 27LL )
    goto LABEL_15;
  xxxInternalGetMessage(&v28, 0LL, 0, 0, 1, 1u);
LABEL_33:
  xxxReleaseCapture();
  zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
  xxxRedrawTitle(a1, 4096);
  SetOrClrWF(0, (__int64 *)a1, 0x580u, 1);
  xxxWindowEvent(0x800Au, a1, -2, 4u, 0);
  xxxWindowEvent(0xDu, a1, 0, 0, 0);
}
