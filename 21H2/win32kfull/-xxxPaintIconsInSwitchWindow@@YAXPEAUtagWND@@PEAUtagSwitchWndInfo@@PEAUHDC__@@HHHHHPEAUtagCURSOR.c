/*
 * XREFs of ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F3450
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F2A80 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F321C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F38D4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0023C6C (HMValidateHandleNoRip.c)
 *     xxxSendMessageCallback @ 0x1C00405E4 (xxxSendMessageCallback.c)
 *     _DrawIconEx @ 0x1C0043F94 (_DrawIconEx.c)
 *     FillRect @ 0x1C0045734 (FillRect.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     _ScrollDC @ 0x1C00FCE74 (_ScrollDC.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C0132A58 (DSW_GetTopLevelCreatorWindow.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F2BE0 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01F2FB0 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01F2FEC (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 */

void __fastcall xxxPaintIconsInSwitchWindow(
        struct tagWND *a1,
        struct tagSwitchWndInfo *a2,
        HDC a3,
        int PrevTaskIndex,
        int a5,
        int a6,
        int a7,
        int a8,
        struct tagCURSOR *a9)
{
  struct tagCURSOR *v9; // rsi
  int v10; // edi
  int v11; // r14d
  HDC DCEx; // r15
  struct tagCURSOR *v16; // r11
  int v17; // r8d
  LONG v18; // r13d
  int v19; // eax
  LONG v20; // eax
  unsigned int v21; // r8d
  int v22; // r15d
  int v23; // r14d
  int v24; // ecx
  __int64 v25; // rdx
  int v26; // eax
  int v27; // r13d
  int v28; // ecx
  __int64 v29; // rdi
  HDC v30; // r12
  __int64 v31; // r8
  unsigned __int64 *v32; // rdi
  __int16 KeyState; // ax
  __int16 AsyncKeyState; // ax
  __int64 v35; // rax
  __int64 TopLevelCreatorWindow; // rax
  unsigned __int64 *v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  struct tagSwitchWndInfo *v44; // rax
  HWND *PrevPhwnd; // rax
  int v46; // eax
  unsigned int v47; // eax
  int v48; // [rsp+50h] [rbp-71h]
  unsigned int v49; // [rsp+50h] [rbp-71h]
  int v50; // [rsp+54h] [rbp-6Dh]
  int v51; // [rsp+58h] [rbp-69h]
  int v52; // [rsp+58h] [rbp-69h]
  int v53; // [rsp+5Ch] [rbp-65h]
  int v54; // [rsp+60h] [rbp-61h]
  HDC v55; // [rsp+68h] [rbp-59h]
  HWND *v56; // [rsp+70h] [rbp-51h]
  RECT v57; // [rsp+78h] [rbp-49h] BYREF
  struct tagWND *v58; // [rsp+88h] [rbp-39h]
  __int128 v59; // [rsp+90h] [rbp-31h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-21h]
  struct tagRECT v61; // [rsp+A8h] [rbp-19h] BYREF

  v9 = a9;
  v10 = 0;
  v60 = 0LL;
  v11 = 0;
  v58 = a1;
  v50 = *((_DWORD *)a2 + 29);
  v53 = *((_DWORD *)a2 + 28);
  v51 = v50 - v53;
  v55 = a3;
  DCEx = a3;
  v61 = 0LL;
  v59 = 0LL;
  v57 = 0LL;
  if ( a2 != Getpswi(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 835);
  LODWORD(v16) = 0;
  if ( DCEx )
  {
    v54 = 0;
  }
  else
  {
    v54 = 1;
    DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
    v55 = DCEx;
    LODWORD(v16) = 0;
  }
  v17 = *((_DWORD *)a2 + 22);
  v18 = *((_DWORD *)a2 + 21);
  v48 = v17;
  if ( a7 )
  {
    v19 = v50 * *((_DWORD *)a2 + 14);
    v61.top = *((_DWORD *)a2 + 22);
    v61.left = v18;
    v61.right = v18 + v19;
    v20 = v17 + v50 * *((_DWORD *)a2 + 15);
    v21 = -v50;
    v61.bottom = v20;
    if ( !a8 )
      v21 = v50;
    ScrollDC(DCEx, 0, v21, &v61, &v61, 0LL, 0LL);
    LODWORD(v16) = 0;
    if ( a8 )
      v10 = *((_DWORD *)a2 + 15) - 1;
    v22 = *((_DWORD *)a2 + 14);
    if ( a8 )
      PrevTaskIndex = NextPrevTaskIndex(a2, *((_DWORD *)a2 + 13), v22 * (*((_DWORD *)a2 + 15) - 1), 1);
    else
      PrevTaskIndex = *((_DWORD *)a2 + 13);
    v17 = v48;
  }
  else
  {
    v22 = a6;
  }
  if ( a9 )
  {
    v23 = PrevTaskIndex - *((_DWORD *)a2 + 13);
    if ( v23 < 0 )
      v23 += *((_DWORD *)a2 + 10);
    v24 = *((_DWORD *)a2 + 14);
    v10 = v23 / v24;
    if ( v23 / v24 >= *((_DWORD *)a2 + 15) )
    {
      v30 = v55;
      goto LABEL_51;
    }
    v11 = v23 % v24;
  }
  v25 = (unsigned int)(v51 >> 31);
  v26 = v51 / 2;
  v52 = v51 / 2 + v18;
  v27 = v52 + v11 * v50;
  v28 = v10 * v50;
  v29 = PrevTaskIndex;
  v30 = v55;
  v31 = (unsigned int)(v26 + v28 + v17);
  v49 = v31;
  v32 = (unsigned __int64 *)(*((_QWORD *)a2 + 2) + 32LL + 8 * v29);
  v56 = (HWND *)v32;
  if ( v22 )
  {
    while ( 1 )
    {
      --v22;
      if ( *((_DWORD *)a2 + 27) == (_DWORD)v16 )
        goto LABEL_55;
      KeyState = _GetKeyState(18LL);
      LODWORD(v16) = 0;
      if ( KeyState >= 0 )
        break;
      if ( !*((_DWORD *)a2 + 27) )
      {
LABEL_55:
        AsyncKeyState = _GetAsyncKeyState(18LL, v25, v31);
        LODWORD(v16) = 0;
        if ( AsyncKeyState >= 0 )
          break;
      }
      v35 = HMValidateHandleNoSecure(*v32, 1);
      v16 = 0LL;
      if ( v35 )
      {
        TopLevelCreatorWindow = DSW_GetTopLevelCreatorWindow(v35);
        v37 = (unsigned __int64 *)TopLevelCreatorWindow;
        if ( v9
          || (v38 = *(_QWORD *)(*(_QWORD *)(TopLevelCreatorWindow + 40) + 272LL)) != 0
          && (v39 = HMValidateHandleNoRip(v38, 3), v16 = 0LL, (v9 = (struct tagCURSOR *)v39) != 0LL)
          || (v9 = *(struct tagCURSOR **)(v37[17] + 80)) != 0LL )
        {
LABEL_49:
          DrawIconEx(v55, v27, v49, (__int64)v9, v53, v53, (int)v16, *(_QWORD *)(gpsi + 4816LL), 3);
          goto LABEL_38;
        }
        if ( (*(_BYTE *)(v37[5] + 21) & 2) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v59 = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = &v59;
          *((_QWORD *)&v59 + 1) = v37;
          HMLockObject(v37);
          v41 = v58;
          LODWORD(v42) = 0;
          if ( v58 )
            v42 = *(_QWORD *)v58;
          xxxSendMessageCallback(
            v37,
            0x37u,
            0LL,
            0LL,
            (void (__fastcall *)(unsigned __int64 *, _QWORD, __int64, __int64))DrawIconCallBack,
            (unsigned int)v42,
            0,
            0,
            1);
          ThreadUnlock1(v43);
          v44 = Getpswi(v41);
          v16 = 0LL;
          if ( v44 != a2 || v22 > *((_DWORD *)a2 + 14) )
            break;
          goto LABEL_36;
        }
        v9 = (struct tagCURSOR *)qword_1C03317D0;
      }
      if ( v9 )
        goto LABEL_49;
LABEL_36:
      if ( a7 == (_DWORD)v16 )
        goto LABEL_39;
      v57.top = v49;
      v57.left = v27;
      v57.right = v53 + v27;
      v57.bottom = v53 + v49;
      FillRect(v55, &v57, *(HBRUSH *)(gpsi + 4816LL));
LABEL_38:
      v16 = 0LL;
LABEL_39:
      if ( v22 <= 0 )
        break;
      v9 = v16;
      PrevPhwnd = NextPrevPhwnd(a2, v56, 1);
      v31 = v49;
      v25 = (unsigned int)(v11 + 1);
      v32 = (unsigned __int64 *)PrevPhwnd;
      v11 = (int)v16;
      v56 = PrevPhwnd;
      if ( (int)v25 < *((_DWORD *)a2 + 14) )
        v11 = v25;
      v46 = v50 + v27;
      v27 = v52;
      if ( (int)v25 < *((_DWORD *)a2 + 14) )
        v27 = v46;
      v47 = v50 + v49;
      if ( (int)v25 < *((_DWORD *)a2 + 14) )
        v47 = v49;
      v49 = v47;
    }
  }
LABEL_51:
  if ( v54 != (_DWORD)v16 )
    _ReleaseDC(v30);
}
