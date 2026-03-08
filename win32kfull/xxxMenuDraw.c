/*
 * XREFs of xxxMenuDraw @ 0x1C0238E5C
 * Callers:
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C021869C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x1C0238AB0 (xxxMenuBarDraw.c)
 *     xxxPaintMenuBar @ 0x1C02392F4 (xxxPaintMenuBar.c)
 * Callees:
 *     DrawEdge @ 0x1C0088404 (DrawEdge.c)
 *     MNGetpItemFromIndex @ 0x1C00A266C (MNGetpItemFromIndex.c)
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C00A6FD0 (MNGetpItemIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ThreadLockExchange @ 0x1C010A0D0 (ThreadLockExchange.c)
 *     GreSelectFontInternal @ 0x1C0116F84 (GreSelectFontInternal.c)
 *     GreSetBkMode @ 0x1C0118028 (GreSetBkMode.c)
 *     MNIsUAHMenu @ 0x1C02194D8 (MNIsUAHMenu.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x1C02363F0 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C023656C (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C0237914 (xxxDrawMenuItem.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C023A454 (xxxSendUAHInitMenuMessage.c)
 *     xxxSendUAHMenuMessage @ 0x1C023A4DC (xxxSendUAHMenuMessage.c)
 *     GreSetViewportOrg @ 0x1C02D2434 (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1C02D9A84 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C02D9B10 (GreSetTextAlign.c)
 */

__int64 __fastcall xxxMenuDraw(HDC a1, __int64 a2, const struct tagWND *a3)
{
  unsigned int v3; // r12d
  const struct tagWND *v4; // rsi
  char v7; // r14
  __int64 v8; // rax
  int v9; // r13d
  int v10; // r15d
  __int64 *DPIMETRICS; // rax
  int TextAlign; // eax
  _DWORD **v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char v18; // r15
  struct tagITEM *v19; // r14
  unsigned int v20; // r15d
  int v21; // r13d
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  _DWORD *v25; // r8
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int WindowDpiLastNotify; // eax
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // rax
  int v35; // [rsp+30h] [rbp-59h]
  __int64 v36; // [rsp+38h] [rbp-51h] BYREF
  RECT v37; // [rsp+40h] [rbp-49h] BYREF
  int v38; // [rsp+50h] [rbp-39h]
  int v39; // [rsp+54h] [rbp-35h]
  RECT v40; // [rsp+58h] [rbp-31h] BYREF
  __int64 v41; // [rsp+68h] [rbp-21h]
  __int64 v42; // [rsp+70h] [rbp-19h]
  __int64 v43; // [rsp+78h] [rbp-11h]
  __int128 v44; // [rsp+80h] [rbp-9h] BYREF
  __int64 v45; // [rsp+90h] [rbp+7h]
  __int64 *v46[9]; // [rsp+98h] [rbp+Fh] BYREF
  int v47; // [rsp+F8h] [rbp+6Fh]
  int v48; // [rsp+108h] [rbp+7Fh]

  v3 = 0;
  v36 = 0LL;
  v4 = a3;
  v47 = 0;
  v42 = gptiCurrent;
  v7 = 0;
  v8 = *(_QWORD *)(a2 + 40);
  v9 = 0;
  v37 = 0LL;
  v10 = *(_DWORD *)(v8 + 40) & 1;
  v38 = v10;
  if ( gihmodUserApiHook < 0 || !a3 )
    v4 = *(const struct tagWND **)(a2 + 80);
  v44 = 0LL;
  v45 = 0LL;
  GreGetDCPoint(a1, 4LL, &v36);
  DPIMETRICS = (__int64 *)GetDPIMETRICS(v4);
  v43 = GreSelectFontInternal((__int64)a1, *DPIMETRICS, 1);
  TextAlign = GreGetTextAlign(a1);
  v13 = *(_DWORD ***)(a2 + 88);
  v39 = TextAlign;
  if ( v13 && (**v13 & 0x2000) != 0 )
    GreSetTextAlign(a1);
  v14 = *(_DWORD *)(gpsi + 4584LL);
  if ( *(_DWORD *)(gpsi + 4648LL) == v14 && *(_DWORD *)(gpsi + 4632LL) == v14 )
  {
    v35 = 49162;
    v48 = 49157;
  }
  else
  {
    v35 = 10;
    v48 = 5;
  }
  ThreadLock(v4, &v44);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL) )
  {
LABEL_21:
    v9 = GreSetBkMode(a1, 1);
    v47 = v9;
    goto LABEL_23;
  }
  if ( gihmodUserApiHook >= 0 && v10 )
  {
    if ( !v4
      || (SmartObjStackRefBase<tagMENU>::Init(&v40, a2),
          v41 = 0LL,
          v7 = 1,
          v18 = 1,
          !(unsigned int)xxxSendUAHInitMenuMessage(v4, &v40, a1)) )
    {
      v18 = 0;
    }
    if ( (v7 & 1) != 0 )
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v40);
    if ( !v18 )
    {
      v4 = *(const struct tagWND **)(a2 + 80);
      ThreadLockExchange((__int64)v4, (__int64)&v44);
      goto LABEL_23;
    }
    xxxSendUAHMenuMessage(v4, 145LL, a2, a1);
    goto LABEL_21;
  }
LABEL_23:
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v19 = (struct tagITEM *)MNGetpItemFromIndex(a2, *(_DWORD *)(a2 + 116));
    GreSetViewportOrg(a1);
    v20 = *(_DWORD *)(a2 + 116);
  }
  else
  {
    v19 = *(struct tagITEM **)(a2 + 88);
    v20 = 0;
  }
  if ( v20 >= *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
    goto LABEL_60;
  v21 = v38;
  v15 = 1024LL;
  while ( v19 )
  {
    v22 = **(_DWORD **)v19;
    if ( (v22 & 0x20) != 0 && v21 )
    {
      if ( (v22 & 0x2000) != 0 && v20 )
        v23 = *(_DWORD *)(*((_QWORD *)v19 - 12) + 64LL);
      else
        v23 = *(_DWORD *)(*(_QWORD *)v19 + 64LL);
      *(_QWORD *)&v37.left = (unsigned int)(v23 - 3);
      v37.right = v23 - 1;
      v37.bottom = *(_DWORD *)(a2 + 68);
      DrawEdge(a1, &v37, 2, v48);
    }
    v24 = **(_DWORD **)v19;
    if ( (v24 & 0x800) == 0 || (v24 & 0x100) != 0 && *(_WORD *)(v42 + 632) >= 0x400u || (unsigned int)MNIsUAHMenu(a2) )
    {
      SmartObjStackRefBase<tagMENU>::Init(v46, a2);
      v46[2] = 0LL;
      if ( v4 )
      {
        v31 = *((_QWORD *)v4 + 5);
        v32 = *(_DWORD *)(v31 + 288) & 0xF;
        if ( v32 == 3 )
        {
          WindowDpiLastNotify = (*(_DWORD *)(v31 + 288) >> 8) & 0x1FF;
          goto LABEL_55;
        }
        if ( (*(_DWORD *)(v31 + 232) & 0x400) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v4);
          goto LABEL_55;
        }
        if ( v32
          || (v33 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 456LL)) == 0
          || (*(_DWORD *)(**(_QWORD **)(v33 + 8) + 64LL) & 1) == 0 )
        {
          WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 424LL) + 284LL);
          goto LABEL_55;
        }
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext(v27) & 0xF) != 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28);
        if ( CurrentProcessWin32Process )
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        WindowDpiLastNotify = *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
LABEL_55:
        xxxDrawMenuItem(a1, WindowDpiLastNotify, v46, (__int64)v19, 0, v4);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v46);
        if ( (unsigned int)MNGetpItemIndex(a2, (__int64)v19) == -1 )
          goto LABEL_58;
        goto LABEL_56;
      }
      WindowDpiLastNotify = 96;
      goto LABEL_55;
    }
    v26 = v25[16];
    v40.top = (v25[19] >> 1) - 1 + v25[17];
    v40.left = v26 + 1;
    v40.right = v25[18] - 1 + v26;
    v40.bottom = v40.top + 2;
    DrawEdge(a1, &v40, 2, v35);
    MNDrawInsertionBar(a1, v19);
LABEL_56:
    if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
    {
      v3 += *(_DWORD *)(*(_QWORD *)v19 + 76LL);
      if ( v3 > *(_DWORD *)(a2 + 68) )
        break;
    }
LABEL_58:
    v19 = (struct tagITEM *)MNGetpItemFromIndex(a2, ++v20);
    v15 = 1024LL;
    if ( v20 >= *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
      break;
  }
  v9 = v47;
LABEL_60:
  ThreadUnlock1(v16, v15, v17);
  if ( v9 )
    GreSetBkMode(a1, v9);
  GreSetViewportOrg(a1);
  GreSetTextAlign(a1);
  return GreSelectFontInternal((__int64)a1, v43, 1);
}
