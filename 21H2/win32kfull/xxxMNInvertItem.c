/*
 * XREFs of xxxMNInvertItem @ 0x1C0248188
 * Callers:
 *     xxxMNSelectItem @ 0x1C02334EC (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1C0244CA8 (xxxHiliteMenuItem.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     xxxGetSysMenuPtr @ 0x1C0067210 (xxxGetSysMenuPtr.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     GetpwndNotifypMenuState @ 0x1C00BAE40 (GetpwndNotifypMenuState.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     GreGetTextAlign @ 0x1C00BCFE4 (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C00BD02C (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C00BD1B8 (GreSetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x1C00BD238 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C00BE508 (xxxDrawMenuItem.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C00BF45C (MNIsOwnerDrawItem.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GreSetBkMode @ 0x1C00BFC20 (GreSetBkMode.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00C1F98 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00C9704 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C01092F4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     MNPositionSysMenu @ 0x1C0146938 (MNPositionSysMenu.c)
 *     xxxMNSetTop @ 0x1C0233C0C (xxxMNSetTop.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C02473A4 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 *     MNDrawArrow @ 0x1C0247A88 (MNDrawArrow.c)
 *     MNEraseBackground @ 0x1C0247D38 (MNEraseBackground.c)
 *     xxxSendMenuSelect @ 0x1C024E3F8 (xxxSendMenuSelect.c)
 */

struct tagITEM *__fastcall xxxMNInvertItem(__int64 **a1, __int64 **a2, int a3, struct tagWND *a4, int a5)
{
  struct tagITEM *v7; // r14
  int v9; // r12d
  struct tagWND *v10; // rdi
  __int64 v11; // rcx
  __int64 SysMenuPtr; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // r12d
  signed int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r11
  int v22; // r10d
  __int64 v23; // rax
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  int v26; // edx
  int v27; // r8d
  HDC DC; // r15
  __int64 DCEx; // rax
  __int64 v30; // rcx
  int v31; // edx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // ecx
  unsigned int v36; // eax
  __int64 v37; // rax
  int DpiDependentMetric; // eax
  int TextAlign; // eax
  __int64 *DPIMETRICS; // rax
  __int64 v41; // rdx
  _DWORD *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  int v51; // ecx
  unsigned int v52; // eax
  __int64 v53; // rax
  _QWORD *v54; // rax
  int v55; // ecx
  __int64 v56; // rcx
  int v58; // [rsp+38h] [rbp-31h]
  int v59; // [rsp+38h] [rbp-31h]
  int v60; // [rsp+3Ch] [rbp-2Dh]
  int v61; // [rsp+40h] [rbp-29h]
  int v62; // [rsp+40h] [rbp-29h]
  int v63; // [rsp+44h] [rbp-25h]
  int v64; // [rsp+44h] [rbp-25h]
  int v65; // [rsp+48h] [rbp-21h]
  __int64 v66; // [rsp+50h] [rbp-19h] BYREF
  int v67; // [rsp+58h] [rbp-11h]
  int v68; // [rsp+5Ch] [rbp-Dh]
  __int64 v69; // [rsp+60h] [rbp-9h]
  _QWORD v70[2]; // [rsp+68h] [rbp-1h] BYREF
  _QWORD *v71; // [rsp+78h] [rbp+Fh]
  __int128 v72; // [rsp+80h] [rbp+17h] BYREF
  __int64 v73; // [rsp+90h] [rbp+27h]

  v7 = 0LL;
  v60 = 0;
  v9 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v70, 0LL);
  v71 = 0LL;
  v65 = 0;
  v66 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) || !a4 )
  {
LABEL_108:
    v7 = 0LL;
    goto LABEL_109;
  }
  if ( **a1 )
  {
    v11 = **a1;
    v10 = *(struct tagWND **)(v11 + 16);
    if ( v10 != a4 )
      ThreadLock(*(_QWORD *)(v11 + 16), (__int64 *)&v72);
  }
  else
  {
    v10 = a4;
  }
  if ( v9 < 0 )
  {
    if ( **a1 && (unsigned int)(v9 + 4) <= 1 )
      MNDrawArrow(0LL, a1, v9);
LABEL_102:
    v54 = GetpwndNotifypMenuState((__int64)a4);
    xxxSendMenuSelect(v55, (_DWORD)v10, (_DWORD)a2, v9, (__int64)v54);
    goto LABEL_103;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
  {
    SysMenuPtr = xxxGetSysMenuPtr(a4);
    v71 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v70, SysMenuPtr);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2, (__int64)v70) )
    {
      v13 = v71;
      if ( !v71 )
        v13 = *(_QWORD **)v70[0];
      MNPositionSysMenu((__int64)a4, v13);
      v60 = 1;
    }
  }
  v14 = (__int64)a2[2];
  if ( !v14 )
    v14 = **a2;
  v7 = (struct tagITEM *)MNGetpItemFromIndex(v14, v9);
  if ( v7 )
  {
    v16 = (_DWORD *)*(unsigned int *)(*(_QWORD *)(**a2 + 40) + 40LL);
    if ( ((unsigned __int8)v16 & 1) != 0 || (*(_BYTE *)(*((_QWORD *)a4 + 5) + 31LL) & 0x20) == 0 )
    {
      v16 = *(_DWORD **)v7;
      if ( (**(_DWORD **)v7 & 0x800) != 0 )
        goto LABEL_101;
      if ( (v16[1] & 0x80) != a5 )
      {
        v18 = 96;
        if ( !a5 || !**a1 || (*(_DWORD *)(**a2 + 124) & 3) == 0 )
          goto LABEL_40;
        v19 = a3;
        if ( a3 >= *(_DWORD *)(**a2 + 116) )
        {
          v20 = (__int64)a2[2];
          if ( !v20 )
            v20 = **a2;
          v21 = MNGetpItemFromIndex(v20, *(_DWORD *)(v20 + 116));
          v19 = *(_DWORD *)(**a2 + 116);
          v22 = *(_DWORD *)(*(_QWORD *)v7 + 68LL)
              + *(_DWORD *)(*(_QWORD *)v7 + 76LL)
              - *(_DWORD *)(**a2 + 68)
              - *(_DWORD *)(*(_QWORD *)v21 + 68LL);
          while ( v22 > 0 && v19 < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
          {
            v23 = *(_QWORD *)v21;
            v21 += 96LL;
            v22 -= *(_DWORD *)(v23 + 76);
            ++v19;
          }
          if ( v19 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
            v19 = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL);
        }
        if ( (unsigned int)xxxMNSetTop(a1, v19) )
          xxxInternalUpdateWindow(v10, 1);
        v24 = (__int64)a2[2];
        if ( !v24 )
          v24 = **a2;
        if ( (unsigned int)MNGetpItemIndex(v24, (__int64)v7) != -1 )
        {
LABEL_40:
          v25 = *(_DWORD **)v7;
          v26 = *(_DWORD *)(*(_QWORD *)v7 + 64LL);
          v27 = *(_DWORD *)(*(_QWORD *)v7 + 68LL);
          v67 = v26 + *(_DWORD *)(*(_QWORD *)v7 + 72LL);
          v63 = v26;
          v68 = v27 + v25[19];
          v61 = v27;
          if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) != 0 )
          {
            DC = (HDC)_GetDC(v10);
          }
          else
          {
            DCEx = _GetDCEx(v10, 0LL, 65537LL);
            v30 = *((_QWORD *)v10 + 5);
            DC = (HDC)DCEx;
            if ( (*(_BYTE *)(v30 + 30) & 4) != 0 && !v60 )
            {
              v58 = *(_DWORD *)(v30 + 96) - *(_DWORD *)(v30 + 88);
              v31 = *(_DWORD *)(v30 + 288) & 0xF;
              if ( v31 == 3 )
              {
                WindowDpiLastNotify = (*(_DWORD *)(v30 + 288) >> 8) & 0x1FF;
              }
              else if ( (*(_DWORD *)(v30 + 232) & 0x400) != 0 )
              {
                WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v10);
              }
              else if ( !v31
                     && (v33 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 456LL)) != 0
                     && (*(_DWORD *)(**(_QWORD **)(v33 + 8) + 64LL) & 1) != 0 )
              {
                WindowDpiLastNotify = 96;
              }
              else
              {
                WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 424LL) + 284LL);
              }
              v59 = v58 - GetDpiDependentMetric(14LL, WindowDpiLastNotify);
              v34 = *((_QWORD *)v10 + 5);
              v35 = *(_DWORD *)(v34 + 288) & 0xF;
              if ( v35 == 3 )
              {
                v36 = (*(_DWORD *)(v34 + 288) >> 8) & 0x1FF;
              }
              else if ( (*(_DWORD *)(v34 + 232) & 0x400) != 0 )
              {
                v36 = GetWindowDpiLastNotify((__int64)v10);
              }
              else if ( !v35
                     && (v37 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 456LL)) != 0
                     && (*(_DWORD *)(**(_QWORD **)(v37 + 8) + 64LL) & 1) != 0 )
              {
                v36 = 96;
              }
              else
              {
                v36 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 424LL) + 284LL);
              }
              DpiDependentMetric = GetDpiDependentMetric(15LL, v36);
              LODWORD(v69) = DpiDependentMetric;
              if ( v67 > v59
                || v68 > *(_DWORD *)(*((_QWORD *)v10 + 5) + 100LL)
                       - *(_DWORD *)(*((_QWORD *)v10 + 5) + 92LL)
                       - DpiDependentMetric )
              {
                GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                v65 = 1;
                GreIntersectVisRect(
                  DC,
                  (unsigned int)(*(_DWORD *)(*((_QWORD *)v10 + 5) + 88LL) + v63),
                  (unsigned int)(*(_DWORD *)(*((_QWORD *)v10 + 5) + 92LL) + v61),
                  (unsigned int)(*(_DWORD *)(*((_QWORD *)v10 + 5) + 88LL) + v59),
                  *(_DWORD *)(*((_QWORD *)v10 + 5) + 100LL) - v69);
                GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              }
            }
          }
          TextAlign = GreGetTextAlign(DC);
          v62 = TextAlign;
          if ( (**(_DWORD **)v7 & 0x2000) != 0 )
            GreSetTextAlign(DC, TextAlign | 0x100);
          DPIMETRICS = (__int64 *)GetDPIMETRICS(v10);
          v69 = GreSelectFontInternal(DC, *DPIMETRICS, 1);
          GreGetDCPoint(DC, 4LL, &v66);
          v42 = *(_DWORD **)v7;
          if ( a5 )
            v42[1] |= 0x80u;
          else
            v42[1] &= ~0x80u;
          if ( v60 || *(_QWORD *)(*(_QWORD *)v7 + 96LL) == 1LL && (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
            goto LABEL_98;
          if ( (*(_DWORD *)(**a2 + 124) & 3) != 0 )
          {
            v43 = (__int64)a2[2];
            if ( !v43 )
              v43 = **a2;
            v44 = MNGetpItemFromIndex(v43, *(_DWORD *)(v43 + 116));
            GreSetViewportOrg(DC, v66, HIDWORD(v66) - *(_DWORD *)(*(_QWORD *)v44 + 68LL));
          }
          v45 = **a2;
          if ( *(_QWORD *)(*(_QWORD *)(v45 + 40) + 24LL) && !(unsigned int)MNDrawHilite((__int64)a2, (__int64)v7) )
          {
            v46 = (__int64)a2[2];
            if ( !v46 )
              v46 = **a2;
            if ( !(unsigned int)MNIsOwnerDrawItem(v46, (_DWORD **)v7) )
            {
              v47 = GreSetBkMode(DC, 1);
              v48 = (__int64)a2[2];
              v64 = v47;
              if ( !v48 )
                v48 = **a2;
              MNEraseBackground(
                DC,
                v48,
                *(_DWORD *)(*(_QWORD *)v7 + 64LL),
                *(_DWORD *)(*(_QWORD *)v7 + 68LL),
                *(_DWORD *)(*(_QWORD *)v7 + 72LL),
                *(_DWORD *)(*(_QWORD *)v7 + 76LL));
              GreSetBkMode(DC, v64);
            }
          }
          if ( v10 )
          {
            v50 = *((_QWORD *)v10 + 5);
            v51 = *(_DWORD *)(v50 + 288) & 0xF;
            if ( v51 == 3 )
            {
              v52 = (*(_DWORD *)(v50 + 288) >> 8) & 0x1FF;
            }
            else
            {
              if ( (*(_DWORD *)(v50 + 232) & 0x400) == 0 )
              {
                if ( v51
                  || (v53 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 456LL)) == 0
                  || (*(_DWORD *)(**(_QWORD **)(v53 + 8) + 64LL) & 1) == 0 )
                {
                  v18 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 424LL) + 284LL);
                }
                goto LABEL_97;
              }
              v52 = GetWindowDpiLastNotify((__int64)v10);
            }
            v18 = v52;
          }
          else if ( (W32GetCurrentThreadDpiAwarenessContext(v45, v41) & 0xF) != 0 )
          {
            v18 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v49) + 284);
          }
LABEL_97:
          xxxDrawMenuItem(DC, v18, a2, v7, 1, (__int64)v10);
LABEL_98:
          if ( v65 )
            RecalcDCVisRgn(DC);
          GreSelectFontInternal(DC, v69, 1);
          GreSetViewportOrg(DC, v66, SHIDWORD(v66));
          GreSetTextAlign(DC, v62);
          _ReleaseDC(DC);
          v9 = a3;
LABEL_101:
          if ( !a5 )
            goto LABEL_103;
          goto LABEL_102;
        }
      }
    }
  }
LABEL_103:
  if ( v10 != a4 )
    ThreadUnlock1(v16, v15, v17);
  v56 = (__int64)a2[2];
  if ( !v56 )
    v56 = **a2;
  if ( (unsigned int)MNGetpItemIndex(v56, (__int64)v7) == -1 )
    goto LABEL_108;
LABEL_109:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v70);
  return v7;
}
