/*
 * XREFs of xxxHelpLoop @ 0x1C025019C
 * Callers:
 *     xxxSysCommand @ 0x1C0130714 (xxxSysCommand.c)
 * Callees:
 *     xxxRedrawTitle @ 0x1C00469E0 (xxxRedrawTitle.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C004B658 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     xxxDispatchMessage @ 0x1C006AE54 (xxxDispatchMessage.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxCapture @ 0x1C00C062C (xxxCapture.c)
 *     _GetParent @ 0x1C00D3774 (_GetParent.c)
 *     xxxWindowHitTest @ 0x1C00D735C (xxxWindowHitTest.c)
 *     xxxInternalGetMessage @ 0x1C00D9FB0 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C00DAE50 (xxxReleaseCapture.c)
 *     GetWindowBorders @ 0x1C00DD2EC (GetWindowBorders.c)
 *     xxxTranslateMessage @ 0x1C01107D0 (xxxTranslateMessage.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     xxxInternalEnumWindow @ 0x1C01D2394 (xxxInternalEnumWindow.c)
 *     xxxWaitMessageEx @ 0x1C01E2B58 (xxxWaitMessageEx.c)
 *     xxxSendHelpMessage @ 0x1C025067C (xxxSendHelpMessage.c)
 *     ?IsHelpParent@@YAHPEAUtagWND@@@Z @ 0x1C026073C (-IsHelpParent@@YAHPEAUtagWND@@@Z.c)
 *     GetContextHelpId @ 0x1C0260798 (GetContextHelpId.c)
 */

void __fastcall xxxHelpLoop(__int64 a1)
{
  int WindowBorders; // eax
  _DWORD *v3; // r8
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  struct tagCURSOR *v8; // rcx
  __int64 v9; // rax
  struct tagWND *v10; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 Parent; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  int ContextHelpId; // eax
  __int64 v20; // rcx
  _DWORD v21[4]; // [rsp+38h] [rbp-59h] BYREF
  __int128 v22; // [rsp+48h] [rbp-49h] BYREF
  __int128 v23; // [rsp+58h] [rbp-39h]
  __int128 v24; // [rsp+68h] [rbp-29h]
  __int128 v25; // [rsp+78h] [rbp-19h] BYREF
  __int64 v26; // [rsp+88h] [rbp-9h]
  __int128 v27; // [rsp+90h] [rbp-1h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+Fh]
  _QWORD v29[3]; // [rsp+A8h] [rbp+17h] BYREF
  _QWORD v30[3]; // [rsp+C0h] [rbp+2Fh] BYREF

  v22 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  xxxWindowEvent(0xCu, (struct tagWND *)a1, 0, 0, 0);
  zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 6632LL));
  xxxCapture(gptiCurrent, a1, 4);
  WindowBorders = GetWindowBorders(
                    *(unsigned int *)(*(_QWORD *)(a1 + 40) + 28LL),
                    *(_DWORD *)(*(_QWORD *)(a1 + 40) + 24LL));
  v3 = *(_DWORD **)(a1 + 40);
  v4 = v3[24] - WindowBorders;
  v21[0] = WindowBorders + v3[22];
  v5 = v3[23];
  v21[2] = v4;
  v6 = v3[25] - WindowBorders;
  v21[1] = WindowBorders + v5;
  v21[3] = v6;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 )
        goto LABEL_35;
      if ( (unsigned int)xxxInternalGetMessage(&v22, 0LL, 0, 0, 2, 0) )
        break;
      xxxWaitMessageEx(15615LL, 0, 0LL);
    }
    if ( DWORD2(v22) == 161 )
      goto LABEL_35;
    if ( DWORD2(v22) == 513 )
    {
      if ( !PtInRect(v21, *(unsigned __int64 *)((char *)&v24 + 4)) )
        goto LABEL_35;
      v9 = xxxWindowHitTest(a1);
      v10 = (struct tagWND *)ValidateHwnd(v9);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v27 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v27;
      *((_QWORD *)&v27 + 1) = v10;
      if ( v10 )
        HMLockObject(v10);
      if ( (unsigned int)IsHelpParent(v10) )
      {
        v26 = *(_QWORD *)((char *)&v24 + 4);
        v25 = (unsigned __int64)v10;
        xxxInternalEnumWindow(v10, (__int64 (__fastcall *)(__int64, __int64))EnumPwndDlgChildProc, (__int64)&v25, 1);
        v10 = (struct tagWND *)*((_QWORD *)&v25 + 1);
      }
      v13 = 0LL;
      if ( v10 != (struct tagWND *)a1 )
        v13 = v10;
      if ( !v13 && (!*(_DWORD *)(*(_QWORD *)(a1 + 40) + 280LL) || (v13 = (_QWORD *)a1) == 0LL) )
      {
        ThreadUnlock1(v12);
        goto LABEL_35;
      }
      v30[2] = 0LL;
      v29[2] = 0LL;
      v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v29[0] = *(_QWORD *)(v14 + 416);
      *(_QWORD *)(v14 + 416) = v29;
      v29[1] = v13;
      HMLockObject(v13);
      zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
      xxxReleaseCapture();
      xxxRedrawTitle((unsigned __int64 *)a1, 0x1000u);
      SetOrClrWF(0, a1, 0x580u, 1);
      xxxInternalGetMessage(&v22, 0LL, 0, 0, 1, 1u);
      xxxWindowEvent(0x800Au, (struct tagWND *)a1, -2, 4u, 0);
      xxxWindowEvent(0xDu, (struct tagWND *)a1, 0, 0, 0);
      if ( (*(_BYTE *)(v13[5] + 31LL) & 8) != 0 )
      {
        Parent = GetParent(v13);
        if ( !Parent )
        {
LABEL_31:
          ThreadUnlock1(v15);
          ThreadUnlock1(v17);
          return;
        }
      }
      else
      {
        Parent = (__int64)v13;
      }
      v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v30[0] = *(_QWORD *)(v18 + 416);
      *(_QWORD *)(v18 + 416) = v30;
      v30[1] = Parent;
      HMLockObject(Parent);
      ContextHelpId = GetContextHelpId(v13);
      xxxSendHelpMessage(Parent, ContextHelpId);
      ThreadUnlock1(v20);
      goto LABEL_31;
    }
    if ( (unsigned int)(DWORD2(v22) - 516) <= 7 )
    {
      v7 = 137;
      if ( _bittest(&v7, DWORD2(v22) - 516) )
        goto LABEL_35;
    }
    if ( DWORD2(v22) != 512 )
      break;
    if ( PtInRect(v21, *(unsigned __int64 *)((char *)&v24 + 4)) )
      v8 = *(struct tagCURSOR **)(gasyscur[0] + 6632LL);
    else
      v8 = (struct tagCURSOR *)gasyscur[1];
    zzzSetCursor(v8);
LABEL_15:
    xxxInternalGetMessage(&v22, 0LL, 0, 0, 1, 1u);
    xxxTranslateMessage((__int64)&v22, 0);
    xxxDispatchMessage((__int64)&v22);
  }
  if ( DWORD2(v22) != 256 || (_QWORD)v23 != 27LL )
    goto LABEL_15;
  xxxInternalGetMessage(&v22, 0LL, 0, 0, 1, 1u);
LABEL_35:
  xxxReleaseCapture();
  zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
  xxxRedrawTitle((unsigned __int64 *)a1, 0x1000u);
  SetOrClrWF(0, a1, 0x580u, 1);
  xxxWindowEvent(0x800Au, (struct tagWND *)a1, -2, 4u, 0);
  xxxWindowEvent(0xDu, (struct tagWND *)a1, 0, 0, 0);
}
