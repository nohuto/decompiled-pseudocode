/*
 * XREFs of ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0242388
 * Callers:
 *     xxxHotTrack @ 0x1C002B3E4 (xxxHotTrack.c)
 * Callees:
 *     xxxDrawMenuItem @ 0x1C004470C (xxxDrawMenuItem.c)
 *     GreSelectFont @ 0x1C0045E80 (GreSelectFont.c)
 *     MNGetpItemFromIndex @ 0x1C00480C4 (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C00480F0 (GetDPIMETRICSForDpi.c)
 *     MNGetpItemIndex @ 0x1C00482D0 (MNGetpItemIndex.c)
 *     GetWindowDpiLastNotify @ 0x1C004C618 (GetWindowDpiLastNotify.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     GreSetTextAlign @ 0x1C01241C0 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C0125448 (GreGetTextAlign.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024E7B4 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHotTrackMenu(struct tagWND *a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v8; // rdx
  struct tagITEM *v9; // r14
  __int64 v10; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v15; // eax
  unsigned int v16; // eax
  HDC DCEx; // rsi
  __int64 v18; // rdx
  int v19; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v21; // rax
  int TextAlign; // eax
  int v23; // r15d
  __int64 v24; // rdx
  int v25; // ecx
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v30; // [rsp+40h] [rbp-20h]
  __int128 v31; // [rsp+48h] [rbp-18h] BYREF
  __int64 v32; // [rsp+58h] [rbp-8h]

  v32 = 0LL;
  v3 = 1;
  v4 = *((_QWORD *)a1 + 5);
  v31 = 0LL;
  if ( (*(_BYTE *)(v4 + 16) & 1) != 0 )
  {
    v8 = *((_QWORD *)a1 + 21);
    if ( v8 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v29, v8);
      v30 = 0LL;
      v9 = (struct tagITEM *)MNGetpItemFromIndex(*v29[0], a2);
      if ( !v9 )
      {
LABEL_10:
        v3 = 0;
LABEL_11:
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v29);
        return v3;
      }
      v10 = *v29[0];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v31 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v31;
      *((_QWORD *)&v31 + 1) = v10;
      if ( v10 )
        HMLockObject(v10);
      xxxMNRecomputeBarIfNeeded(a1, v29);
      v12 = v30;
      if ( !v30 )
        v12 = *v29[0];
      if ( (unsigned int)MNGetpItemIndex(v12, (__int64)v9) == -1 )
      {
LABEL_9:
        ThreadUnlock1(v13);
        goto LABEL_10;
      }
      v13 = *(_QWORD *)v9;
      v15 = *(_DWORD *)(*(_QWORD *)v9 + 4LL);
      if ( a3 )
      {
        if ( (v15 & 1) != 0 )
          goto LABEL_9;
        v16 = v15 | 0x100;
      }
      else
      {
        v16 = v15 & 0xFFFFFEFF;
      }
      *(_DWORD *)(v13 + 4) = v16;
      DCEx = (HDC)_GetDCEx(a1, 0LL, 65539LL);
      GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
      v18 = *((_QWORD *)a1 + 5);
      v19 = *(_DWORD *)(v18 + 288) & 0xF;
      if ( v19 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v18 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v18 + 232) & 0x8000000) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( !v19
             && (v21 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v21 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      GetDPIMETRICSForDpi(WindowDpiLastNotify);
      GreSelectFont(DCEx);
      TextAlign = GreGetTextAlign(DCEx);
      v23 = TextAlign;
      if ( *(_QWORD *)(*v29[0] + 88LL) && (***(_DWORD ***)(*v29[0] + 88LL) & 0x2000) != 0 )
        GreSetTextAlign(DCEx, TextAlign | 0x100);
      v24 = *((_QWORD *)a1 + 5);
      v25 = *(_DWORD *)(v24 + 288) & 0xF;
      if ( v25 == 3 )
      {
        v26 = (*(_DWORD *)(v24 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v24 + 232) & 0x8000000) != 0 )
      {
        v26 = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( !v25
             && (v27 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v27 + 8) + 64LL) & 1) != 0 )
      {
        v26 = 96;
      }
      else
      {
        v26 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      xxxDrawMenuItem(DCEx, v26, v29, v9, 0, 0LL);
      GreSetTextAlign(DCEx, v23);
      ThreadUnlock1(v28);
      _ReleaseDC(DCEx);
      goto LABEL_11;
    }
  }
  return 0LL;
}
