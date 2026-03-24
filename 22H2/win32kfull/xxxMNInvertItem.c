/*
 * XREFs of xxxMNInvertItem @ 0x1C024C7C0
 * Callers:
 *     xxxMNSelectItem @ 0x1C023A5BC (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1C0248B14 (xxxHiliteMenuItem.c)
 * Callees:
 *     xxxDrawMenuItem @ 0x1C004470C (xxxDrawMenuItem.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0044A40 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     GreSelectFont @ 0x1C0045E80 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C0045E9C (GreSetBkMode.c)
 *     MNGetpItemFromIndex @ 0x1C00480C4 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C00482D0 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0048BB8 (MNIsOwnerDrawItem.c)
 *     GetWindowDpiLastNotify @ 0x1C004C618 (GetWindowDpiLastNotify.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiDependentMetric @ 0x1C0061430 (GetDpiDependentMetric.c)
 *     xxxGetSysMenuPtr @ 0x1C006190C (xxxGetSysMenuPtr.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078AA0 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     GetpwndNotifypMenuState @ 0x1C00DC9F4 (GetpwndNotifypMenuState.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F5200 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GreSetViewportOrg @ 0x1C010C438 (GreSetViewportOrg.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C011E8F8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     GreSetTextAlign @ 0x1C01241C0 (GreSetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0124AE8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreGetTextAlign @ 0x1C0125448 (GreGetTextAlign.c)
 *     MNPositionSysMenu @ 0x1C0155548 (MNPositionSysMenu.c)
 *     xxxMNSetTop @ 0x1C023AFB8 (xxxMNSetTop.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C024B9B8 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 *     MNDrawArrow @ 0x1C024C08C (MNDrawArrow.c)
 *     MNEraseBackground @ 0x1C024C33C (MNEraseBackground.c)
 *     xxxSendMenuSelect @ 0x1C0250E4C (xxxSendMenuSelect.c)
 */

struct tagITEM *__fastcall xxxMNInvertItem(__int64 **a1, __int64 **a2, int a3, _QWORD *a4, int a5)
{
  struct tagITEM *v7; // r15
  int v9; // r12d
  __int64 v10; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 SysMenuPtr; // rax
  __int64 v13; // r8
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  int v17; // edx
  signed int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r11
  int v21; // r10d
  __int64 v22; // rax
  __int64 v23; // rcx
  _DWORD *v24; // rcx
  int v25; // edx
  int v26; // r8d
  __int64 *v27; // rax
  HDC DC; // r12
  __int64 DCEx; // rax
  __int64 v30; // rdx
  int v31; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v33; // rax
  int v34; // ebx
  int DpiDependentMetric; // eax
  __int64 v36; // rdx
  int v37; // ecx
  unsigned int v38; // eax
  __int64 v39; // rax
  int v40; // ebx
  int TextAlign; // eax
  int v42; // ebx
  int v43; // ecx
  unsigned int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rcx
  int v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // eax
  __int64 v54; // rdx
  int v55; // ecx
  __int64 v56; // rax
  _QWORD *v57; // rax
  int v58; // ecx
  __int64 v59; // rcx
  int v61; // [rsp+38h] [rbp-31h]
  int v62; // [rsp+38h] [rbp-31h]
  int v63; // [rsp+3Ch] [rbp-2Dh]
  int v64; // [rsp+40h] [rbp-29h]
  int v65; // [rsp+40h] [rbp-29h]
  int v66; // [rsp+44h] [rbp-25h]
  __int64 v67; // [rsp+48h] [rbp-21h] BYREF
  int v68; // [rsp+50h] [rbp-19h]
  int v69; // [rsp+54h] [rbp-15h]
  __int64 v70; // [rsp+58h] [rbp-11h]
  _QWORD v71[2]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD *v72; // [rsp+70h] [rbp+7h]
  __int128 v73; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v74; // [rsp+88h] [rbp+1Fh]

  v7 = 0LL;
  v63 = 0;
  v9 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v71, 0LL);
  v72 = 0LL;
  v66 = 0;
  v67 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) || !a4 )
  {
LABEL_110:
    v7 = 0LL;
    goto LABEL_111;
  }
  if ( **a1 )
  {
    v10 = *(_QWORD *)(**a1 + 16);
    if ( (_QWORD *)v10 != a4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v73 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v73;
      *((_QWORD *)&v73 + 1) = v10;
      if ( v10 )
        HMLockObject(v10);
    }
  }
  else
  {
    v10 = (__int64)a4;
  }
  if ( v9 < 0 )
  {
    if ( **a1 && (unsigned int)(v9 + 4) <= 1 )
      MNDrawArrow(0LL, a1, v9);
LABEL_104:
    v57 = GetpwndNotifypMenuState((__int64)a4);
    xxxSendMenuSelect(v58, v10, (_DWORD)a2, v9, (__int64)v57);
    goto LABEL_105;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
  {
    SysMenuPtr = xxxGetSysMenuPtr(a4);
    SmartObjStackRefBase<tagMENU>::operator=(v71, SysMenuPtr);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2, (__int64)v71) )
    {
      v14 = v72;
      if ( !v72 )
        v14 = *(_QWORD **)v71[0];
      MNPositionSysMenu((__int64)a4, v14, v13);
      v63 = 1;
    }
  }
  v15 = (__int64)a2[2];
  if ( !v15 )
    v15 = **a2;
  v7 = (struct tagITEM *)MNGetpItemFromIndex(v15, v9);
  if ( v7 )
  {
    v16 = (_DWORD *)*(unsigned int *)(*(_QWORD *)(**a2 + 40) + 40LL);
    if ( ((unsigned __int8)v16 & 1) != 0 || (*(_BYTE *)(a4[5] + 31LL) & 0x20) == 0 )
    {
      v16 = *(_DWORD **)v7;
      v17 = a5;
      if ( (**(_DWORD **)v7 & 0x800) != 0 )
        goto LABEL_103;
      if ( (v16[1] & 0x80) != a5 )
      {
        if ( !a5 || !**a1 || (*(_DWORD *)(**a2 + 124) & 3) == 0 )
          goto LABEL_42;
        if ( v9 >= *(_DWORD *)(**a2 + 116) )
        {
          v19 = (__int64)a2[2];
          if ( !v19 )
            v19 = **a2;
          v20 = MNGetpItemFromIndex(v19, *(_DWORD *)(v19 + 116));
          v18 = *(_DWORD *)(**a2 + 116);
          v21 = *(_DWORD *)(*(_QWORD *)v7 + 68LL)
              + *(_DWORD *)(*(_QWORD *)v7 + 76LL)
              - *(_DWORD *)(**a2 + 68)
              - *(_DWORD *)(*(_QWORD *)v20 + 68LL);
          while ( v21 > 0 && v18 < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
          {
            v22 = *(_QWORD *)v20;
            v20 += 96LL;
            v21 -= *(_DWORD *)(v22 + 76);
            ++v18;
          }
          if ( v18 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
            v18 = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL);
        }
        else
        {
          v18 = v9;
        }
        if ( (unsigned int)xxxMNSetTop(a1, v18) )
          xxxInternalUpdateWindow((struct tagWND *)v10, 1u);
        v23 = (__int64)a2[2];
        if ( !v23 )
          v23 = **a2;
        if ( (unsigned int)MNGetpItemIndex(v23, (__int64)v7) != -1 )
        {
LABEL_42:
          v24 = *(_DWORD **)v7;
          v25 = *(_DWORD *)(*(_QWORD *)v7 + 64LL);
          v26 = *(_DWORD *)(*(_QWORD *)v7 + 68LL);
          v68 = v25 + *(_DWORD *)(*(_QWORD *)v7 + 72LL);
          v64 = v25;
          v69 = v26 + v24[19];
          v27 = *a2;
          LODWORD(v70) = v26;
          if ( (*(_DWORD *)(*(_QWORD *)(*v27 + 40) + 40LL) & 1) != 0 )
          {
            DC = (HDC)_GetDC(v10);
          }
          else
          {
            DCEx = _GetDCEx(v10, 0LL, 65537LL);
            v30 = *(_QWORD *)(v10 + 40);
            DC = (HDC)DCEx;
            if ( (*(_BYTE *)(v30 + 30) & 4) != 0 && !v63 )
            {
              v31 = *(_DWORD *)(v30 + 288) & 0xF;
              if ( v31 == 3 )
              {
                WindowDpiLastNotify = (*(_DWORD *)(v30 + 288) >> 8) & 0x1FF;
              }
              else if ( (*(_DWORD *)(v30 + 232) & 0x8000000) != 0 )
              {
                WindowDpiLastNotify = GetWindowDpiLastNotify(v10);
              }
              else if ( !v31
                     && (v33 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 456LL)) != 0
                     && (*(_DWORD *)(**(_QWORD **)(v33 + 8) + 64LL) & 1) != 0 )
              {
                WindowDpiLastNotify = 96;
              }
              else
              {
                WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) + 284LL);
              }
              v34 = *(_DWORD *)(v30 + 88);
              v61 = *(_DWORD *)(v30 + 96);
              DpiDependentMetric = GetDpiDependentMetric(14LL, WindowDpiLastNotify);
              v36 = *(_QWORD *)(v10 + 40);
              v62 = v61 - v34 - DpiDependentMetric;
              v37 = *(_DWORD *)(v36 + 288) & 0xF;
              if ( v37 == 3 )
              {
                v38 = (*(_DWORD *)(v36 + 288) >> 8) & 0x1FF;
              }
              else if ( (*(_DWORD *)(v36 + 232) & 0x8000000) != 0 )
              {
                v38 = GetWindowDpiLastNotify(v10);
              }
              else if ( !v37
                     && (v39 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 456LL)) != 0
                     && (*(_DWORD *)(**(_QWORD **)(v39 + 8) + 64LL) & 1) != 0 )
              {
                v38 = 96;
              }
              else
              {
                v38 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) + 284LL);
              }
              v40 = GetDpiDependentMetric(15LL, v38);
              if ( v68 > v62
                || v69 > *(_DWORD *)(*(_QWORD *)(v10 + 40) + 100LL) - *(_DWORD *)(*(_QWORD *)(v10 + 40) + 92LL) - v40 )
              {
                GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                v66 = 1;
                GreIntersectVisRect(
                  DC,
                  (unsigned int)(*(_DWORD *)(*(_QWORD *)(v10 + 40) + 88LL) + v64),
                  (unsigned int)(*(_DWORD *)(*(_QWORD *)(v10 + 40) + 92LL) + v70),
                  (unsigned int)(*(_DWORD *)(*(_QWORD *)(v10 + 40) + 88LL) + v62),
                  *(_DWORD *)(*(_QWORD *)(v10 + 40) + 100LL) - v40);
                GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              }
            }
          }
          TextAlign = GreGetTextAlign(DC);
          v42 = TextAlign;
          v65 = TextAlign;
          if ( (**(_DWORD **)v7 & 0x2000) != 0 )
            GreSetTextAlign(DC, TextAlign | 0x100);
          GetDPIMETRICS((struct tagWND *)v10);
          v70 = GreSelectFont(DC);
          GreGetDCPoint(DC, 4LL, &v67);
          v43 = *(_DWORD *)(*(_QWORD *)v7 + 4LL);
          if ( a5 )
            v44 = v43 | 0x80;
          else
            v44 = v43 & 0xFFFFFF7F;
          *(_DWORD *)(*(_QWORD *)v7 + 4LL) = v44;
          if ( v63 || *(_QWORD *)(*(_QWORD *)v7 + 96LL) == 1LL && (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
            goto LABEL_100;
          if ( (*(_DWORD *)(**a2 + 124) & 3) != 0 )
          {
            v45 = (__int64)a2[2];
            if ( !v45 )
              v45 = **a2;
            v46 = MNGetpItemFromIndex(v45, *(_DWORD *)(v45 + 116));
            GreSetViewportOrg(DC, v67, HIDWORD(v67) - *(_DWORD *)(*(_QWORD *)v46 + 68LL));
          }
          v47 = **a2;
          if ( *(_QWORD *)(*(_QWORD *)(v47 + 40) + 24LL) && !(unsigned int)MNDrawHilite(a2, (__int64)v7) )
          {
            v49 = (__int64)a2[2];
            if ( !v49 )
              v49 = **a2;
            if ( !(unsigned int)MNIsOwnerDrawItem(v49, (_DWORD **)v7, v48) )
            {
              v50 = GreSetBkMode(DC, 1);
              v51 = (__int64)a2[2];
              if ( !v51 )
                v51 = **a2;
              MNEraseBackground(
                DC,
                v51,
                *(_DWORD *)(*(_QWORD *)v7 + 64LL),
                *(_DWORD *)(*(_QWORD *)v7 + 68LL),
                *(_DWORD *)(*(_QWORD *)v7 + 72LL),
                *(_DWORD *)(*(_QWORD *)v7 + 76LL));
              GreSetBkMode(DC, v50);
              v42 = v65;
            }
          }
          if ( v10 )
          {
            v54 = *(_QWORD *)(v10 + 40);
            v55 = *(_DWORD *)(v54 + 288) & 0xF;
            if ( v55 == 3 )
            {
              v53 = (*(_DWORD *)(v54 + 288) >> 8) & 0x1FF;
              goto LABEL_99;
            }
            if ( (*(_DWORD *)(v54 + 232) & 0x8000000) != 0 )
            {
              v53 = GetWindowDpiLastNotify(v10);
              goto LABEL_99;
            }
            if ( v55
              || (v56 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 456LL)) == 0
              || (*(_DWORD *)(**(_QWORD **)(v56 + 8) + 64LL) & 1) == 0 )
            {
              v53 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) + 284LL);
              goto LABEL_99;
            }
          }
          else if ( (W32GetCurrentThreadDpiAwarenessContext(v47) & 0xF) != 0 )
          {
            v53 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v52) + 284);
LABEL_99:
            xxxDrawMenuItem(DC, v53, a2, v7, 1, v10);
LABEL_100:
            if ( v66 )
              RecalcDCVisRgn(DC);
            GreSelectFont(DC);
            GreSetViewportOrg(DC, v67, SHIDWORD(v67));
            GreSetTextAlign(DC, v42);
            _ReleaseDC(DC);
            v17 = a5;
            v9 = a3;
LABEL_103:
            if ( !v17 )
              goto LABEL_105;
            goto LABEL_104;
          }
          v53 = 96;
          goto LABEL_99;
        }
      }
    }
  }
LABEL_105:
  if ( (_QWORD *)v10 != a4 )
    ThreadUnlock1(v16);
  v59 = (__int64)a2[2];
  if ( !v59 )
    v59 = **a2;
  if ( (unsigned int)MNGetpItemIndex(v59, (__int64)v7) == -1 )
    goto LABEL_110;
LABEL_111:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v71);
  return v7;
}
