/*
 * XREFs of xxxMenuDraw @ 0x1C00BD4E0
 * Callers:
 *     xxxPaintMenuBar @ 0x1C00BCDEC (xxxPaintMenuBar.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C022F3B0 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x1C02488F8 (xxxMenuBarDraw.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0069238 (MNIsUAHMenu.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     GreGetTextAlign @ 0x1C00BCFE4 (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C00BD02C (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C00BD1B8 (GreSetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x1C00BD238 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C00BD2C0 (xxxSendUAHMenuMessage.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00BD464 (xxxSendUAHInitMenuMessage.c)
 *     xxxDrawMenuItem @ 0x1C00BE508 (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00BE6B4 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GreSetBkMode @ 0x1C00BFC20 (GreSetBkMode.c)
 *     DrawEdge @ 0x1C00C17C0 (DrawEdge.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ThreadLockExchange @ 0x1C00FDE30 (ThreadLockExchange.c)
 */

__int64 __fastcall xxxMenuDraw(HDC a1, __int64 a2, const struct tagWND *a3)
{
  unsigned int v3; // r12d
  const struct tagWND *v4; // rsi
  char v7; // r14
  __int64 v8; // rax
  int v9; // r13d
  int v10; // r15d
  int TextAlign; // eax
  _DWORD **v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct tagITEM *v16; // r14
  unsigned int v17; // r15d
  int v18; // r13d
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  char v25; // r15
  __int64 v26; // rax
  int v27; // eax
  int v28; // ecx
  _DWORD *v29; // r8
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // [rsp+38h] [rbp-51h] BYREF
  __int128 v33; // [rsp+40h] [rbp-49h]
  int v34; // [rsp+50h] [rbp-39h]
  int v35; // [rsp+54h] [rbp-35h]
  __int64 **v36; // [rsp+58h] [rbp-31h] BYREF
  int v37; // [rsp+60h] [rbp-29h]
  int v38; // [rsp+64h] [rbp-25h]
  __int64 v39; // [rsp+68h] [rbp-21h]
  __int64 v40; // [rsp+70h] [rbp-19h]
  __int64 v41; // [rsp+78h] [rbp-11h]
  __int128 v42; // [rsp+80h] [rbp-9h] BYREF
  __int64 v43; // [rsp+90h] [rbp+7h]
  _QWORD v44[9]; // [rsp+98h] [rbp+Fh] BYREF
  int v45; // [rsp+F8h] [rbp+6Fh]

  v3 = 0;
  v32 = 0LL;
  v4 = a3;
  v45 = 0;
  v40 = gptiCurrent;
  v7 = 0;
  v8 = *(_QWORD *)(a2 + 40);
  v9 = 0;
  v33 = 0LL;
  v10 = *(_DWORD *)(v8 + 40) & 1;
  v34 = v10;
  if ( gihmodUserApiHook < 0 || !a3 )
    v4 = *(const struct tagWND **)(a2 + 80);
  v42 = 0LL;
  v43 = 0LL;
  GreGetDCPoint(a1, 4LL, &v32);
  GetDPIMETRICS(v4);
  v41 = GreSelectFontInternal(a1);
  TextAlign = GreGetTextAlign(a1);
  v12 = *(_DWORD ***)(a2 + 88);
  v35 = TextAlign;
  if ( v12 && (**v12 & 0x2000) != 0 )
    GreSetTextAlign(a1, TextAlign | 0x100);
  ThreadLock((__int64)v4, (__int64 *)&v42);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL) )
    goto LABEL_35;
  if ( gihmodUserApiHook >= 0 && v10 )
  {
    if ( !v4
      || (SmartObjStackRefBase<tagMENU>::Init(&v36, a2),
          v39 = 0LL,
          v7 = 1,
          v25 = 1,
          !(unsigned int)xxxSendUAHInitMenuMessage((__int64)v4, &v36, (__int64)a1)) )
    {
      v25 = 0;
    }
    if ( (v7 & 1) != 0 )
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v36);
    if ( !v25 )
    {
      v4 = *(const struct tagWND **)(a2 + 80);
      ThreadLockExchange(v4, &v42);
      goto LABEL_10;
    }
    xxxSendUAHMenuMessage((__int64)v4, 145LL, a2, (__int64)a1);
LABEL_35:
    v9 = GreSetBkMode(a1);
    v45 = v9;
  }
LABEL_10:
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v26 = MNGetpItemFromIndex(a2, *(unsigned int *)(a2 + 116));
    v16 = (struct tagITEM *)v26;
    if ( v26 )
      v27 = *(_DWORD *)(*(_QWORD *)v26 + 68LL);
    else
      v27 = 0;
    GreSetViewportOrg(a1, v32, HIDWORD(v32) - v27);
    v17 = *(_DWORD *)(a2 + 116);
  }
  else
  {
    v16 = *(struct tagITEM **)(a2 + 88);
    v17 = 0;
  }
  if ( v17 < *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
  {
    v18 = v34;
    while ( 1 )
    {
      if ( !v16 )
      {
LABEL_24:
        v9 = v45;
        break;
      }
      v19 = **(_DWORD **)v16;
      LOWORD(v20) = v19;
      if ( (v19 & 0x20) != 0 && v18 )
      {
        if ( (v19 & 0x2000) != 0 && v17 )
          v28 = *(_DWORD *)(*((_QWORD *)v16 - 12) + 64LL);
        else
          v28 = *(_DWORD *)(*(_QWORD *)v16 + 64LL);
        *(_QWORD *)&v33 = (unsigned int)(v28 - 3);
        DWORD2(v33) = v28 - 1;
        HIDWORD(v33) = *(_DWORD *)(a2 + 68);
        DrawEdge(a1);
        v20 = **(_DWORD **)v16;
      }
      if ( (v20 & 0x800) == 0 || (v20 & 0x100) != 0 && *(_WORD *)(v40 + 632) >= 0x400u || (unsigned int)MNIsUAHMenu(a2) )
      {
        SmartObjStackRefBase<tagMENU>::Init(v44, a2);
        v44[2] = 0LL;
        if ( v4 )
        {
          v23 = *((_QWORD *)v4 + 5);
          if ( (*(_DWORD *)(v23 + 288) & 0xF) != 3 && (*(_DWORD *)(v23 + 232) & 0x400) != 0 )
            GetWindowDpiLastNotify((__int64)v4);
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext(v22, v21) & 0xF) != 0 )
        {
          PsGetCurrentProcessWin32Process(v31);
        }
        xxxDrawMenuItem(a1, 0, (__int64)v4);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v44);
        if ( (unsigned int)MNGetpItemIndex(a2, (__int64)v16) == -1 )
          goto LABEL_23;
      }
      else
      {
        v30 = v29[16];
        HIDWORD(v36) = (v29[19] >> 1) - 1 + v29[17];
        LODWORD(v36) = v30 + 1;
        v37 = v29[18] - 1 + v30;
        v38 = HIDWORD(v36) + 2;
        DrawEdge(a1);
        MNDrawInsertionBar(a1, v16);
      }
      if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
      {
        v3 += *(_DWORD *)(*(_QWORD *)v16 + 76LL);
        if ( v3 > *(_DWORD *)(a2 + 68) )
          goto LABEL_24;
      }
LABEL_23:
      v16 = (struct tagITEM *)MNGetpItemFromIndex(a2, ++v17);
      if ( v17 >= *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
        goto LABEL_24;
    }
  }
  ThreadUnlock1(v14, v13, v15);
  if ( v9 )
    GreSetBkMode(a1);
  GreSetViewportOrg(a1, v32, SHIDWORD(v32));
  GreSetTextAlign(a1, v35);
  return GreSelectFontInternal(a1);
}
