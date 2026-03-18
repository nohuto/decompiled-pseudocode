/*
 * XREFs of ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01EDC90
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01ED300 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01EDA7C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01EE0D4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     xxxSendMessageCallback @ 0x1C00ACE14 (xxxSendMessageCallback.c)
 *     _DrawIconEx @ 0x1C00BDD48 (_DrawIconEx.c)
 *     _ScrollDC @ 0x1C00C08AC (_ScrollDC.c)
 *     FillRect @ 0x1C00C1CEC (FillRect.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C01215FC (DSW_GetTopLevelCreatorWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01ED460 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01ED814 (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01ED850 (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
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
  int v11; // edi
  int v12; // r14d
  HDC DCEx; // r15
  struct tagCURSOR *v16; // r11
  int v17; // r8d
  LONG v18; // r13d
  int v19; // eax
  LONG v20; // eax
  int v21; // r8d
  int v22; // r15d
  int v23; // r14d
  int v24; // ecx
  int v25; // eax
  LONG v26; // r13d
  int v27; // ecx
  __int64 v28; // rdi
  HDC v29; // r12
  HWND *v30; // rdi
  __int16 KeyState; // ax
  __int16 AsyncKeyState; // ax
  __int64 v33; // rax
  __int64 TopLevelCreatorWindow; // rax
  struct tagWND *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rax
  struct tagWND *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  struct tagSwitchWndInfo *v43; // rax
  HWND *PrevPhwnd; // rax
  int v45; // edx
  bool v46; // cc
  LONG v47; // eax
  int v48; // eax
  int v49; // [rsp+50h] [rbp-71h]
  int v50; // [rsp+50h] [rbp-71h]
  int v51; // [rsp+54h] [rbp-6Dh]
  signed int v52; // [rsp+58h] [rbp-69h]
  LONG v53; // [rsp+58h] [rbp-69h]
  unsigned int v54; // [rsp+5Ch] [rbp-65h]
  int v55; // [rsp+60h] [rbp-61h]
  HDC v56; // [rsp+68h] [rbp-59h]
  HWND *v57; // [rsp+70h] [rbp-51h]
  RECT v58; // [rsp+78h] [rbp-49h] BYREF
  struct tagWND *v59; // [rsp+88h] [rbp-39h]
  __int128 v60; // [rsp+90h] [rbp-31h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-21h]
  struct tagRECT v62; // [rsp+A8h] [rbp-19h] BYREF

  v9 = a9;
  v59 = a1;
  v61 = 0LL;
  v11 = 0;
  v12 = 0;
  v51 = *((_DWORD *)a2 + 29);
  v54 = *((_DWORD *)a2 + 28);
  v52 = v51 - v54;
  v56 = a3;
  DCEx = a3;
  v62 = 0LL;
  v60 = 0LL;
  v58 = 0LL;
  if ( a2 != Getpswi(a1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  LODWORD(v16) = 0;
  if ( DCEx )
  {
    v55 = 0;
  }
  else
  {
    v55 = 1;
    DCEx = (HDC)_GetDCEx(a1, 0LL, 0x10000LL);
    v56 = DCEx;
    LODWORD(v16) = 0;
  }
  v17 = *((_DWORD *)a2 + 22);
  v18 = *((_DWORD *)a2 + 21);
  v49 = v17;
  if ( a7 )
  {
    v19 = v51 * *((_DWORD *)a2 + 14);
    v62.top = *((_DWORD *)a2 + 22);
    v62.left = v18;
    v62.right = v18 + v19;
    v20 = v17 + v51 * *((_DWORD *)a2 + 15);
    v21 = -v51;
    v62.bottom = v20;
    if ( !a8 )
      v21 = v51;
    ScrollDC(DCEx, 0, v21, &v62, &v62, 0LL, 0LL);
    LODWORD(v16) = 0;
    if ( a8 )
      v11 = *((_DWORD *)a2 + 15) - 1;
    v22 = *((_DWORD *)a2 + 14);
    if ( a8 )
      PrevTaskIndex = NextPrevTaskIndex(a2, *((_DWORD *)a2 + 13), v22 * (*((_DWORD *)a2 + 15) - 1), 1);
    else
      PrevTaskIndex = *((_DWORD *)a2 + 13);
    v17 = v49;
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
    v11 = v23 / v24;
    if ( v23 / v24 >= *((_DWORD *)a2 + 15) )
    {
      v29 = v56;
      goto LABEL_51;
    }
    v12 = v23 % v24;
  }
  v25 = v52 / 2;
  v53 = v52 / 2 + v18;
  v26 = v53 + v12 * v51;
  v27 = v11 * v51;
  v28 = PrevTaskIndex;
  v29 = v56;
  v50 = v25 + v27 + v17;
  v30 = (HWND *)(*((_QWORD *)a2 + 2) + 32LL + 8 * v28);
  v57 = v30;
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
        AsyncKeyState = _GetAsyncKeyState(18LL);
        LODWORD(v16) = 0;
        if ( AsyncKeyState >= 0 )
          break;
      }
      v33 = HMValidateHandleNoSecure((int)*v30, 1);
      v16 = 0LL;
      if ( v33 )
      {
        TopLevelCreatorWindow = DSW_GetTopLevelCreatorWindow(v33);
        v35 = (struct tagWND *)TopLevelCreatorWindow;
        if ( v9
          || (v36 = *(_QWORD *)(*(_QWORD *)(TopLevelCreatorWindow + 40) + 272LL)) != 0
          && (v37 = HMValidateHandleNoRip(v36, 3), v16 = 0LL, (v9 = (struct tagCURSOR *)v37) != 0LL)
          || (v9 = *(struct tagCURSOR **)(*((_QWORD *)v35 + 17) + 80LL)) != 0LL )
        {
LABEL_49:
          DrawIconEx(v56, v26, v50, (__int64)v9, v54, v54, (int)v16, *(_QWORD *)(gpsi + 4816LL), 3);
          goto LABEL_38;
        }
        if ( (*(_BYTE *)(*((_QWORD *)v35 + 5) + 21LL) & 2) == 0 )
        {
          ThreadLock((__int64)v35, (__int64 *)&v60);
          v38 = v59;
          LODWORD(v39) = 0;
          if ( v59 )
            v39 = *(_QWORD *)v59;
          xxxSendMessageCallback(
            v35,
            55LL,
            0LL,
            0LL,
            (void (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64))DrawIconCallBack,
            (unsigned int)v39,
            0,
            0,
            1);
          ThreadUnlock1(v41, v40, v42);
          v43 = Getpswi(v38);
          v16 = 0LL;
          if ( v43 != a2 || v22 > *((_DWORD *)a2 + 14) )
            break;
          goto LABEL_36;
        }
        v9 = (struct tagCURSOR *)qword_1C032CB00;
      }
      if ( v9 )
        goto LABEL_49;
LABEL_36:
      if ( a7 == (_DWORD)v16 )
        goto LABEL_39;
      v58.top = v50;
      v58.left = v26;
      v58.right = v54 + v26;
      v58.bottom = v54 + v50;
      FillRect(v56, &v58, *(HBRUSH *)(gpsi + 4816LL));
LABEL_38:
      v16 = 0LL;
LABEL_39:
      if ( v22 <= 0 )
        break;
      v9 = v16;
      PrevPhwnd = NextPrevPhwnd(a2, v57, 1);
      v45 = v12 + 1;
      v46 = v12 + 1 < *((_DWORD *)a2 + 14);
      v30 = PrevPhwnd;
      v12 = (int)v16;
      v57 = PrevPhwnd;
      if ( v45 < *((_DWORD *)a2 + 14) )
        v12 = v45;
      v47 = v51 + v26;
      v26 = v53;
      if ( v46 )
        v26 = v47;
      v48 = v51 + v50;
      if ( v46 )
        v48 = v50;
      v50 = v48;
    }
  }
LABEL_51:
  if ( v55 != (_DWORD)v16 )
    _ReleaseDC(v29);
}
