/*
 * XREFs of xxxMenuDraw @ 0x1C0043668
 * Callers:
 *     xxxPaintMenuBar @ 0x1C0101DB0 (xxxPaintMenuBar.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C023560C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x1C024CF54 (xxxMenuBarDraw.c)
 * Callees:
 *     xxxSendUAHInitMenuMessage @ 0x1C0043460 (xxxSendUAHInitMenuMessage.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0044688 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C004470C (xxxDrawMenuItem.c)
 *     DrawEdge @ 0x1C0045148 (DrawEdge.c)
 *     GreSelectFont @ 0x1C0045E80 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C0045E9C (GreSetBkMode.c)
 *     MNGetpItemFromIndex @ 0x1C00480C4 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C00482D0 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0049030 (MNIsUAHMenu.c)
 *     GetWindowDpiLastNotify @ 0x1C004C618 (GetWindowDpiLastNotify.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ThreadLockExchange @ 0x1C00C1250 (ThreadLockExchange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C0101FD0 (xxxSendUAHMenuMessage.c)
 *     GreSetViewportOrg @ 0x1C010C438 (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C01241C0 (GreSetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0124AE8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreGetTextAlign @ 0x1C0125448 (GreGetTextAlign.c)
 */

__int64 __fastcall xxxMenuDraw(HDC a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rdi
  char v7; // r14
  __int64 v8; // rax
  int v9; // r13d
  int v10; // r15d
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  int TextAlign; // eax
  _DWORD **v13; // rcx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v15; // rcx
  struct tagITEM *v16; // r14
  unsigned int v17; // r15d
  int v18; // r13d
  int *v19; // rdx
  int *v20; // r8
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rdx
  char v25; // r15
  int v26; // ecx
  _DWORD *v27; // r8
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // [rsp+38h] [rbp-61h] BYREF
  __int128 v31; // [rsp+40h] [rbp-59h]
  int v32; // [rsp+50h] [rbp-49h]
  int v33; // [rsp+54h] [rbp-45h]
  int v34; // [rsp+58h] [rbp-41h]
  int v35; // [rsp+5Ch] [rbp-3Dh]
  int v36; // [rsp+60h] [rbp-39h]
  int v37; // [rsp+64h] [rbp-35h]
  __int64 v38; // [rsp+68h] [rbp-31h]
  __int64 v39; // [rsp+70h] [rbp-29h]
  _QWORD v40[3]; // [rsp+78h] [rbp-21h] BYREF
  __int64 **v41[3]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v42[16]; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v43; // [rsp+B8h] [rbp+1Fh]
  int v44; // [rsp+108h] [rbp+6Fh]

  v3 = 0;
  v30 = 0LL;
  v4 = a3;
  v44 = 0;
  v38 = gptiCurrent;
  v7 = 0;
  v8 = *(_QWORD *)(a2 + 40);
  v9 = 0;
  v31 = 0LL;
  v10 = *(_DWORD *)(v8 + 40) & 1;
  v32 = v10;
  if ( gihmodUserApiHook < 0 || !a3 )
    v4 = *(_QWORD *)(a2 + 80);
  v40[2] = 0LL;
  GreGetDCPoint(a1, 4LL, &v30);
  DPIMETRICS = GetDPIMETRICS((struct tagWND *)v4);
  v39 = GreSelectFont(a1, *(_QWORD *)DPIMETRICS);
  TextAlign = GreGetTextAlign(a1);
  v13 = *(_DWORD ***)(a2 + 88);
  v33 = TextAlign;
  if ( v13 && (**v13 & 0x2000) != 0 )
    GreSetTextAlign(a1);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v40[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  v15 = v40;
  *(_QWORD *)(ThreadWin32Thread + 416) = v40;
  v40[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL) )
  {
LABEL_37:
    v9 = GreSetBkMode(a1);
    v44 = v9;
    goto LABEL_12;
  }
  if ( gihmodUserApiHook >= 0 && v10 )
  {
    if ( !v4
      || (SmartObjStackRefBase<tagMENU>::Init(v41, a2),
          v41[2] = 0LL,
          v7 = 1,
          v25 = 1,
          !(unsigned int)xxxSendUAHInitMenuMessage(v4, v41, (__int64)a1)) )
    {
      v25 = 0;
    }
    if ( (v7 & 1) != 0 )
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v41);
    if ( !v25 )
    {
      v4 = *(_QWORD *)(a2 + 80);
      ThreadLockExchange(v4, v40);
      goto LABEL_12;
    }
    xxxSendUAHMenuMessage(v4, 145LL, a2, a1);
    goto LABEL_37;
  }
LABEL_12:
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v16 = (struct tagITEM *)MNGetpItemFromIndex(a2, *(unsigned int *)(a2 + 116));
    GreSetViewportOrg(a1);
    v17 = *(_DWORD *)(a2 + 116);
  }
  else
  {
    v16 = *(struct tagITEM **)(a2 + 88);
    v17 = 0;
  }
  if ( v17 >= *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
    goto LABEL_27;
  v18 = v32;
  while ( v16 )
  {
    v19 = *(int **)v16;
    v20 = *(int **)v16;
    v21 = **(_DWORD **)v16;
    LOWORD(v22) = v21;
    if ( (v21 & 0x20) != 0 && v18 )
    {
      if ( (v21 & 0x2000) != 0 && v17 )
        v26 = *(_DWORD *)(*((_QWORD *)v16 - 12) + 64LL);
      else
        v26 = v19[16];
      *(_QWORD *)&v31 = (unsigned int)(v26 - 3);
      DWORD2(v31) = v26 - 1;
      HIDWORD(v31) = *(_DWORD *)(a2 + 68);
      DrawEdge(a1);
      v20 = *(int **)v16;
      v22 = **(_DWORD **)v16;
    }
    if ( (v22 & 0x800) == 0
      || (v22 & 0x100) != 0 && *(_WORD *)(v38 + 632) >= 0x400u
      || (unsigned int)MNIsUAHMenu(a2, v19, v20) )
    {
      SmartObjStackRefBase<tagMENU>::Init(v42, a2);
      v43 = 0LL;
      if ( v4 )
      {
        v23 = *(_QWORD *)(v4 + 40);
        if ( (*(_DWORD *)(v23 + 288) & 0xF) != 3 && (*(_DWORD *)(v23 + 232) & 0x8000000) != 0 )
          GetWindowDpiLastNotify(v4);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      {
        PsGetCurrentProcessWin32Process(v29);
      }
      xxxDrawMenuItem(a1, 0, v4);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v42);
      if ( (unsigned int)MNGetpItemIndex(a2, v16) == -1 )
        goto LABEL_25;
    }
    else
    {
      v28 = v27[16];
      v35 = (v27[19] >> 1) - 1 + v27[17];
      v34 = v28 + 1;
      v36 = v27[18] - 1 + v28;
      v37 = v35 + 2;
      DrawEdge(a1);
      MNDrawInsertionBar(a1, v16);
    }
    if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
    {
      v3 += *(_DWORD *)(*(_QWORD *)v16 + 76LL);
      if ( v3 > *(_DWORD *)(a2 + 68) )
        break;
    }
LABEL_25:
    v16 = (struct tagITEM *)MNGetpItemFromIndex(a2, ++v17);
    if ( v17 >= *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
      break;
  }
  v9 = v44;
LABEL_27:
  ThreadUnlock1(v15);
  if ( v9 )
    GreSetBkMode(a1);
  GreSetViewportOrg(a1);
  GreSetTextAlign(a1);
  return GreSelectFont(a1, v39);
}
