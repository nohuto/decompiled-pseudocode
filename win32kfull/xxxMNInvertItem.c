_DWORD **__fastcall xxxMNInvertItem(__int64 **a1, __int64 **a2, int a3, struct tagWND *a4, unsigned int a5)
{
  _DWORD **v7; // r13
  struct tagWND *v9; // rdi
  __int64 v10; // rcx
  unsigned int v11; // r8d
  _QWORD *v12; // rax
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  __int64 v17; // r8
  __int64 *v18; // rsi
  __int64 SysMenuPtr; // rax
  _QWORD *v20; // rdx
  __int64 *v21; // r12
  __int64 v22; // rcx
  _QWORD *v23; // rax
  signed int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // r11
  int v27; // r10d
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  int v31; // edx
  int v32; // r8d
  HDC DC; // rsi
  int v34; // r15d
  __int64 *DPIMETRICS; // rax
  int v36; // ecx
  unsigned int v37; // ecx
  __int64 DCEx; // rax
  __int64 v39; // rcx
  int v40; // edx
  int WindowDpiLastNotify; // eax
  __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // ecx
  int v45; // eax
  __int64 v46; // rax
  int DpiDependentMetric; // eax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v55; // rdx
  int v56; // ecx
  int v57; // eax
  __int64 v58; // rax
  _QWORD *v59; // rax
  int v60; // ecx
  int v61; // r8d
  __int64 v62; // rcx
  int v64; // [rsp+38h] [rbp-41h]
  int v65; // [rsp+38h] [rbp-41h]
  int v66; // [rsp+3Ch] [rbp-3Dh]
  int v67; // [rsp+40h] [rbp-39h]
  int v68; // [rsp+44h] [rbp-35h]
  int v69; // [rsp+44h] [rbp-35h]
  int v70; // [rsp+48h] [rbp-31h]
  __int64 v71; // [rsp+50h] [rbp-29h] BYREF
  int v72; // [rsp+58h] [rbp-21h]
  int v73; // [rsp+5Ch] [rbp-1Dh]
  __int64 v74; // [rsp+60h] [rbp-19h]
  _QWORD v75[2]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD *v76; // [rsp+78h] [rbp-1h]
  __int128 v77; // [rsp+80h] [rbp+7h] BYREF
  __int64 v78; // [rsp+90h] [rbp+17h]

  v7 = 0LL;
  v66 = 0;
  SmartObjStackRefBase<tagMENU>::Init(v75, 0LL);
  v76 = 0LL;
  v70 = 0;
  v71 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) || !a4 )
    goto LABEL_116;
  if ( **a1 )
  {
    v10 = **a1;
    v9 = *(struct tagWND **)(v10 + 16);
    if ( v9 != a4 )
      ThreadLock(*(_QWORD *)(v10 + 16), &v77);
  }
  else
  {
    v9 = a4;
  }
  v11 = a3;
  if ( a3 < 0 )
  {
    if ( **a1 && (unsigned int)(a3 + 4) <= 1 )
      MNDrawArrow(0LL, a1, a3);
    v12 = GetpwndNotifypMenuState((__int64)a4);
    xxxSendMenuSelect(v13, (_DWORD)v9, (_DWORD)a2, v14, (__int64)v12);
    v18 = (__int64 *)(a2 + 2);
    goto LABEL_110;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
  {
    SysMenuPtr = xxxGetSysMenuPtr(a4);
    v76 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v75, SysMenuPtr);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2, (__int64)v75) )
    {
      v20 = v76;
      if ( !v76 )
        v20 = *(_QWORD **)v75[0];
      MNPositionSysMenu((__int64)a4, v20);
      v66 = 1;
    }
    v11 = a3;
  }
  v21 = (__int64 *)(a2 + 2);
  v22 = (__int64)a2[2];
  if ( !v22 )
    v22 = **a2;
  v23 = (_QWORD *)MNGetpItemFromIndex(v22, v11);
  v7 = (_DWORD **)v23;
  v18 = (__int64 *)(a2 + 2);
  if ( v23 )
  {
    v15 = *(unsigned int *)(*(_QWORD *)(**a2 + 40) + 40LL);
    if ( (v15 & 1) != 0 || (v16 = (_DWORD *)*((_QWORD *)a4 + 5), (*((_BYTE *)v16 + 31) & 0x20) == 0) )
    {
      v16 = (_DWORD *)*v23;
      v15 = a5;
      if ( (*(_DWORD *)*v23 & 0x800) != 0 )
      {
LABEL_108:
        v18 = (__int64 *)(a2 + 2);
        if ( (_DWORD)v15 )
        {
          v59 = GetpwndNotifypMenuState((__int64)a4);
          xxxSendMenuSelect(v60, (_DWORD)v9, (_DWORD)a2, v61, (__int64)v59);
        }
        goto LABEL_110;
      }
      v18 = (__int64 *)(a2 + 2);
      if ( (v16[1] & 0x80) != a5 )
      {
        if ( !a5 || !**a1 || (*(_DWORD *)(**a2 + 124) & 3) == 0 )
          goto LABEL_43;
        if ( (int)v17 >= *(_DWORD *)(**a2 + 116) )
        {
          v25 = *v21;
          if ( !*v21 )
            v25 = **a2;
          v26 = MNGetpItemFromIndex(v25, *(_DWORD *)(v25 + 116));
          v24 = *(_DWORD *)(**a2 + 116);
          v27 = (*v7)[17] + (*v7)[19] - *(_DWORD *)(**a2 + 68) - *(_DWORD *)(*(_QWORD *)v26 + 68LL);
          while ( v27 > 0 && v24 < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
          {
            v28 = *(_QWORD *)v26;
            v26 += 96LL;
            v27 -= *(_DWORD *)(v28 + 76);
            ++v24;
          }
          if ( v24 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
            v24 = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL);
        }
        else
        {
          v24 = v17;
        }
        if ( (unsigned int)xxxMNSetTop(a1, v24) )
          xxxInternalUpdateWindow(v9, 1u);
        v29 = *v21;
        if ( !*v21 )
          v29 = **a2;
        if ( (unsigned int)MNGetpItemIndex(v29, (__int64)v7) != -1 )
        {
LABEL_43:
          v30 = *v7;
          v31 = (*v7)[16];
          v32 = (*v7)[17];
          v72 = v31 + (*v7)[18];
          v68 = v31;
          v73 = v32 + *((_DWORD *)v30 + 19);
          v67 = v32;
          if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) != 0 )
          {
            DC = (HDC)_GetDC(v9);
LABEL_45:
            v34 = 96;
            goto LABEL_46;
          }
          DCEx = _GetDCEx(v9, 0LL, 65537LL);
          v39 = *((_QWORD *)v9 + 5);
          DC = (HDC)DCEx;
          if ( (*(_BYTE *)(v39 + 30) & 4) == 0 || v66 )
            goto LABEL_45;
          v64 = *(_DWORD *)(v39 + 96) - *(_DWORD *)(v39 + 88);
          v40 = *(_DWORD *)(v39 + 288) & 0xF;
          if ( v40 == 3 )
          {
            WindowDpiLastNotify = (*(_DWORD *)(v39 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v39 + 232) & 0x400) != 0 )
          {
            WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v9);
          }
          else
          {
            if ( !v40 )
            {
              v42 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 456LL);
              if ( v42 )
              {
                if ( (*(_DWORD *)(**(_QWORD **)(v42 + 8) + 64LL) & 1) != 0 )
                {
                  v34 = 96;
                  WindowDpiLastNotify = 96;
                  goto LABEL_62;
                }
              }
            }
            WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 424LL) + 284LL);
          }
          v34 = 96;
LABEL_62:
          v65 = v64 - GetDpiDependentMetric(14, WindowDpiLastNotify);
          v43 = *((_QWORD *)v9 + 5);
          v44 = *(_DWORD *)(v43 + 288) & 0xF;
          if ( v44 == 3 )
          {
            v45 = (*(_DWORD *)(v43 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v43 + 232) & 0x400) != 0 )
          {
            v45 = GetWindowDpiLastNotify((__int64)v9);
          }
          else if ( !v44
                 && (v46 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v46 + 8) + 64LL) & 1) != 0 )
          {
            v45 = 96;
          }
          else
          {
            v45 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 424LL) + 284LL);
          }
          DpiDependentMetric = GetDpiDependentMetric(15, v45);
          LODWORD(v74) = DpiDependentMetric;
          if ( v72 > v65
            || v73 > *(_DWORD *)(*((_QWORD *)v9 + 5) + 100LL)
                   - *(_DWORD *)(*((_QWORD *)v9 + 5) + 92LL)
                   - DpiDependentMetric )
          {
            GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
            v70 = 1;
            GreIntersectVisRect(
              DC,
              (unsigned int)(*(_DWORD *)(*((_QWORD *)v9 + 5) + 88LL) + v68),
              (unsigned int)(*(_DWORD *)(*((_QWORD *)v9 + 5) + 92LL) + v67),
              (unsigned int)(*(_DWORD *)(*((_QWORD *)v9 + 5) + 88LL) + v65),
              *(_DWORD *)(*((_QWORD *)v9 + 5) + 100LL) - v74);
            GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
          }
LABEL_46:
          GreGetTextAlign(DC);
          if ( (**v7 & 0x2000) != 0 )
            GreSetTextAlign(DC);
          DPIMETRICS = (__int64 *)GetDPIMETRICS(v9);
          v74 = GreSelectFontInternal((__int64)DC, *DPIMETRICS, 1);
          GreGetDCPoint(DC, 4LL, &v71);
          v36 = (*v7)[1];
          if ( a5 )
            v37 = v36 | 0x80;
          else
            v37 = v36 & 0xFFFFFF7F;
          (*v7)[1] = v37;
          if ( v66 || *((_QWORD *)*v7 + 12) == 1LL && (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
            goto LABEL_105;
          if ( (*(_DWORD *)(**a2 + 124) & 3) != 0 )
          {
            v48 = *v21;
            if ( !*v21 )
              v48 = **a2;
            MNGetpItemFromIndex(v48, *(_DWORD *)(v48 + 116));
            GreSetViewportOrg(DC);
          }
          v49 = **a2;
          if ( *(_QWORD *)(*(_QWORD *)(v49 + 40) + 24LL) && !(unsigned int)MNDrawHilite((__int64)a2, (__int64)v7) )
          {
            v50 = *v21;
            if ( !*v21 )
              v50 = **a2;
            if ( !(unsigned int)MNIsOwnerDrawItem(v50, v7) )
            {
              v51 = GreSetBkMode(DC, 1);
              v52 = *v21;
              v69 = v51;
              if ( !*v21 )
                v52 = **a2;
              MNEraseBackground(DC, v52, (*v7)[16], (*v7)[17], (*v7)[18], (*v7)[19]);
              GreSetBkMode(DC, v69);
            }
          }
          if ( v9 )
          {
            v55 = *((_QWORD *)v9 + 5);
            v56 = *(_DWORD *)(v55 + 288) & 0xF;
            if ( v56 == 3 )
            {
              v57 = (*(_DWORD *)(v55 + 288) >> 8) & 0x1FF;
            }
            else
            {
              if ( (*(_DWORD *)(v55 + 232) & 0x400) == 0 )
              {
                if ( v56
                  || (v58 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 456LL)) == 0
                  || (*(_DWORD *)(**(_QWORD **)(v58 + 8) + 64LL) & 1) == 0 )
                {
                  v34 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 424LL) + 284LL);
                }
                goto LABEL_104;
              }
              v57 = GetWindowDpiLastNotify((__int64)v9);
            }
            v34 = v57;
          }
          else if ( (W32GetCurrentThreadDpiAwarenessContext(v49) & 0xF) != 0 )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v53);
            if ( CurrentProcessWin32Process )
              CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
            v34 = *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
          }
LABEL_104:
          xxxDrawMenuItem(DC, v34, a2, (__int64)v7, 1, v9);
LABEL_105:
          if ( v70 )
            RecalcDCVisRgn(DC);
          GreSelectFontInternal((__int64)DC, v74, 1);
          GreSetViewportOrg(DC);
          GreSetTextAlign(DC);
          _ReleaseDC(DC);
          v17 = (unsigned int)a3;
          v15 = a5;
          goto LABEL_108;
        }
      }
    }
  }
LABEL_110:
  if ( v9 != a4 )
    ThreadUnlock1(v16, v15, v17);
  v62 = *v18;
  if ( !*v18 )
    v62 = **a2;
  if ( (unsigned int)MNGetpItemIndex(v62, (__int64)v7) != -1 )
  {
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v75);
    return v7;
  }
LABEL_116:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v75);
  return 0LL;
}
