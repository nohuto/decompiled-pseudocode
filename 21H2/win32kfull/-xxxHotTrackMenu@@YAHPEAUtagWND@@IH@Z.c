/*
 * XREFs of ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023E474
 * Callers:
 *     xxxHotTrack @ 0x1C011F23C (xxxHotTrack.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     GreGetTextAlign @ 0x1C00BCFE4 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C00BD1B8 (GreSetTextAlign.c)
 *     xxxDrawMenuItem @ 0x1C00BE508 (xxxDrawMenuItem.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     GetDPIMETRICSForDpi @ 0x1C00BF104 (GetDPIMETRICSForDpi.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024A058 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHotTrackMenu(struct tagWND *a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v8; // rdx
  struct tagITEM *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rax
  HDC DCEx; // rsi
  __int64 v17; // rdx
  int v18; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v20; // rax
  __int64 *DPIMETRICSForDpi; // rax
  int TextAlign; // eax
  int v23; // r15d
  __int64 v24; // rdx
  int v25; // ecx
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v32; // [rsp+40h] [rbp-20h]
  __int128 v33; // [rsp+48h] [rbp-18h] BYREF
  __int64 v34; // [rsp+58h] [rbp-8h]

  v34 = 0LL;
  v3 = 1;
  v4 = *((_QWORD *)a1 + 5);
  v33 = 0LL;
  if ( (*(_BYTE *)(v4 + 16) & 1) != 0 )
  {
    v8 = *((_QWORD *)a1 + 21);
    if ( v8 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v31, v8);
      v32 = 0LL;
      v9 = (struct tagITEM *)MNGetpItemFromIndex(*v31[0], a2);
      if ( !v9 )
      {
LABEL_8:
        v3 = 0;
LABEL_9:
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v31);
        return v3;
      }
      ThreadLock(*v31[0], (__int64 *)&v33);
      xxxMNRecomputeBarIfNeeded(a1, v31);
      v10 = v32;
      if ( !v32 )
        v10 = *v31[0];
      if ( (unsigned int)MNGetpItemIndex(v10, (__int64)v9) == -1 )
      {
LABEL_7:
        ThreadUnlock1(v12, v11, v13);
        goto LABEL_8;
      }
      v15 = *(_QWORD *)v9;
      if ( a3 )
      {
        v12 = *(unsigned int *)(v15 + 4);
        if ( (v12 & 1) != 0 )
          goto LABEL_7;
        *(_DWORD *)(v15 + 4) = v12 | 0x100;
      }
      else
      {
        *(_DWORD *)(v15 + 4) &= ~0x100u;
      }
      DCEx = (HDC)_GetDCEx(a1, 0LL, 65539LL);
      GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
      v17 = *((_QWORD *)a1 + 5);
      v18 = *(_DWORD *)(v17 + 288) & 0xF;
      if ( v18 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v17 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v17 + 232) & 0x400) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( !v18
             && (v20 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v20 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      DPIMETRICSForDpi = (__int64 *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
      GreSelectFontInternal(DCEx, *DPIMETRICSForDpi, 1);
      TextAlign = GreGetTextAlign(DCEx);
      v23 = TextAlign;
      if ( *(_QWORD *)(*v31[0] + 88) && (***(_DWORD ***)(*v31[0] + 88) & 0x2000) != 0 )
        GreSetTextAlign(DCEx, TextAlign | 0x100);
      v24 = *((_QWORD *)a1 + 5);
      v25 = *(_DWORD *)(v24 + 288) & 0xF;
      if ( v25 == 3 )
      {
        v26 = (*(_DWORD *)(v24 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v24 + 232) & 0x400) != 0 )
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
      xxxDrawMenuItem(DCEx, v26, v31, v9, 0, 0LL);
      GreSetTextAlign(DCEx, v23);
      ThreadUnlock1(v29, v28, v30);
      _ReleaseDC(DCEx);
      goto LABEL_9;
    }
  }
  return 0LL;
}
