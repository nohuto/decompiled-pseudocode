/*
 * XREFs of xxxRealDrawMenuItem @ 0x1C0239598
 * Callers:
 *     xxxDrawState @ 0x1C02423C0 (xxxDrawState.c)
 * Callees:
 *     PrepareHDCBITSBitmap @ 0x1C00162BC (PrepareHDCBITSBitmap.c)
 *     _DrawIconEx @ 0x1C003B618 (_DrawIconEx.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 *     NtGdiAlphaBlend @ 0x1C0083DC0 (NtGdiAlphaBlend.c)
 *     xxxGetWindowSmIcon @ 0x1C009FCA8 (xxxGetWindowSmIcon.c)
 *     GetDPIMetrics @ 0x1C009FD5C (GetDPIMetrics.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C00A6FD0 (MNGetpItemIndex.c)
 *     BitBltSysBmp @ 0x1C00D04B0 (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00D05EC (GetOemBitmapInfoForDpi.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     HMValidateHandleNoRip @ 0x1C01083AC (HMValidateHandleNoRip.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0224A84 (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0236044 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0236514 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0236C78 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0236E94 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     BltColor @ 0x1C0242064 (BltColor.c)
 *     xxxPSMTextOut @ 0x1C0244494 (xxxPSMTextOut.c)
 *     FindCharPosition @ 0x1C024F570 (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C0251BB0 (xxxPSMGetTextExtent.c)
 *     GreCreateDIBitmapReal @ 0x1C02E02CC (GreCreateDIBitmapReal.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C02E0370 (GreDecBitmapExclusiveRefCnt.c)
 */

__int64 __fastcall xxxRealDrawMenuItem(Gre::Base *a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  __int64 v9; // rdx
  int v10; // r14d
  __int64 v11; // rdi
  int v12; // edx
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rcx
  bool v16; // zf
  int v17; // r8d
  unsigned __int64 v18; // rax
  int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // ebx
  int DpiForSystem; // eax
  int v26; // r14d
  __int64 v27; // rcx
  __int64 v28; // rcx
  _WORD *v29; // r13
  int v30; // ebx
  __int64 v31; // rbx
  int v32; // eax
  __int16 *OemBitmapInfoForDpi; // rax
  __int64 v34; // r15
  __int64 v35; // rax
  struct tagWND *v36; // rbx
  __int64 WindowSmIcon; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // r8d
  unsigned int v42; // ecx
  __int64 v43; // rax
  int v44; // r13d
  int DpiDependentMetric; // r14d
  int v46; // ebx
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  int ObjectW; // eax
  __int64 v51; // r12
  Gre::Base *CompatibleDC; // rbx
  __int64 DIBitmapReal; // rax
  unsigned __int8 *v54; // r9
  __int64 v55; // r10
  unsigned int v56; // r8d
  int v57; // eax
  __int64 DPIMetrics; // rax
  __int64 v59; // r10
  __int64 v60; // rdx
  int v61; // r8d
  int v62; // eax
  __int64 CharPosition; // r15
  unsigned int v64; // r11d
  unsigned int v65; // eax
  __int64 v66; // r10
  int v67; // r12d
  __int64 v68; // r14
  __int64 v69; // rcx
  int v70; // eax
  int v71; // r12d
  __int64 v72; // rcx
  __int64 v73; // rcx
  int v74; // esi
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // r14
  int v78; // ebx
  _WORD *v79; // rdx
  HDC v80; // r15
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  int v85; // ebx
  int v86; // eax
  __int16 *v87; // rbx
  int v88; // r11d
  int v89; // eax
  int v92; // [rsp+78h] [rbp-88h]
  int v93; // [rsp+7Ch] [rbp-84h]
  int v94; // [rsp+7Ch] [rbp-84h]
  __int64 v95; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int8 *v96; // [rsp+88h] [rbp-78h] BYREF
  BOOL v97; // [rsp+90h] [rbp-70h]
  __int64 *v98[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v99; // [rsp+A8h] [rbp-58h]
  __int64 v100; // [rsp+B0h] [rbp-50h]
  __int64 v101; // [rsp+B8h] [rbp-48h]
  __int128 v102; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v103; // [rsp+D0h] [rbp-30h]
  _OWORD v104[3]; // [rsp+D8h] [rbp-28h] BYREF
  _WORD v105[24]; // [rsp+110h] [rbp+10h] BYREF
  int v106; // [rsp+140h] [rbp+40h]

  SmartObjStackRefBase<tagMENU>::Init(v98, 0LL);
  v9 = *a2;
  v99 = 0LL;
  v103 = 0LL;
  v10 = 0;
  v97 = 0;
  v102 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v98, v9);
  v11 = a2[1];
  v95 = v11;
  v12 = *(_DWORD *)(*(_QWORD *)(*v98[0] + 40) + 40LL) & 1;
  v92 = v12;
  if ( v12 )
  {
    v13 = 2;
    v14 = *v98[0];
    if ( *(int *)(*(_QWORD *)(*v98[0] + 40) + 40LL) >= 0 )
    {
      if ( a5 )
      {
        v15 = *(_QWORD *)v11;
        if ( (*(_DWORD *)(*(_QWORD *)v11 + 4LL) & 8) != 0 )
          v16 = *(_QWORD *)(v15 + 24) == 0LL;
        else
          v16 = *(_QWORD *)(v15 + 32) == 0LL;
        LOBYTE(v10) = !v16;
      }
      else
      {
        v10 = DrawMenuItemCheckMark((HDC)a1, (struct tagITEM *)v11);
      }
      v14 = *(_QWORD *)(*v98[0] + 40);
      if ( (*(_DWORD *)(v14 + 40) & 0x4000000) == 0
        || (v14 = *(_QWORD *)v11, !*(_QWORD *)(*(_QWORD *)v11 + 96LL))
        || v10 )
      {
        if ( (**(_DWORD **)v11 & 0x2000) != 0 )
        {
          v13 = 2;
        }
        else
        {
          DpiForSystem = GetDpiForSystem(v14);
          v13 = *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2) + 4;
        }
      }
      v12 = v92;
    }
    else
    {
      v13 = 4;
    }
  }
  else
  {
    v13 = 0;
    v14 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
    if ( (_DWORD)v14 != -2147352576 )
      v97 = *(char *)(*(_QWORD *)v11 + 4LL) < 0;
  }
  if ( !*(_QWORD *)(*(_QWORD *)v11 + 96LL) )
    goto LABEL_39;
  if ( v10 )
  {
    v14 = *v98[0];
    if ( (*(_DWORD *)(*(_QWORD *)(*v98[0] + 40) + 40LL) & 0x4000000) != 0 )
      goto LABEL_39;
  }
  if ( a5 )
    goto LABEL_73;
  v14 = *(_QWORD *)v11;
  v17 = *(_DWORD *)(*(_QWORD *)v11 + 4LL);
  v18 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
  if ( (v17 & 0x20000000) != 0 )
  {
    if ( v18 == 1 )
      goto LABEL_61;
    v19 = v13;
    if ( v18 > 7 )
      goto LABEL_49;
    v20 = v18 - 2;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 2;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( !v23 )
          {
            v24 = 21;
            goto LABEL_38;
          }
          if ( v23 == 1 )
          {
            v24 = 25;
            v19 = v13 + 2;
LABEL_38:
            BitBltSysBmp((__int64)a1, v19, 2, v24, 1);
LABEL_39:
            v26 = v92;
            goto LABEL_40;
          }
LABEL_49:
          if ( PrepareHDCBITSBitmap(0LL, v13) )
          {
            v31 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
            v32 = GetDpiForSystem(*(_QWORD *)v11);
            OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v31 + 79), v32);
            BltColor(
              (HDC)a1,
              (unsigned int)(*(_DWORD *)(*(_QWORD *)v11 + 76LL) - OemBitmapInfoForDpi[3]) >> 1,
              OemBitmapInfoForDpi[2],
              OemBitmapInfoForDpi[3],
              *OemBitmapInfoForDpi,
              OemBitmapInfoForDpi[1],
              1);
          }
          goto LABEL_39;
        }
        v24 = 18;
      }
      else
      {
        v24 = 22;
        v19 = v13 + 2;
      }
    }
    else
    {
      v24 = 26;
    }
    if ( (v17 & 0x80u) != 0 )
      ++v24;
    goto LABEL_38;
  }
  if ( v18 == -1LL )
  {
    xxxSendMenuDrawItemMessage((__int64)a1, 1, v98, v11, 1, v13, 0LL);
    goto LABEL_39;
  }
  if ( *(_WORD *)(gptiCurrent + 632LL) > 0x400u )
  {
LABEL_73:
    v34 = 0LL;
    goto LABEL_74;
  }
  v34 = 0LL;
  if ( !*(_QWORD *)(v14 + 56) || *(_QWORD *)(v11 + 24) )
  {
    if ( v12
      || (v14 = *v98[0], v11 != *(_QWORD *)(*v98[0] + 88))
      || (v14 = *v98[0], *(_DWORD *)(*(_QWORD *)(*v98[0] + 40) + 44LL) <= 1u)
      || (v14 = *(_QWORD *)(*(_QWORD *)(*v98[0] + 88) + 96LL), *(_QWORD *)(v14 + 96))
      || !*(_QWORD *)(v11 + 16) )
    {
LABEL_74:
      v43 = *(_QWORD *)v11;
      v44 = *(_DWORD *)(*(_QWORD *)v11 + 104LL);
      DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
      if ( v12 )
      {
        v46 = (*(_DWORD *)(v43 + 76) - DpiDependentMetric) / 2;
        if ( *(_DWORD *)(v43 + 76) - DpiDependentMetric <= 0 )
          v46 = 0;
        LODWORD(v100) = v46;
      }
      else
      {
        v47 = GetDpiForSystem(v14);
        if ( DpiDependentMetric <= (int)GetDpiDependentMetric(26, v47) )
        {
          v49 = GetDpiForSystem(v48);
          DpiDependentMetric = GetDpiDependentMetric(26, v49);
        }
        else
        {
          DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
        }
        v46 = 0;
        LODWORD(v100) = 0;
        if ( *(_QWORD *)(v11 + 24) )
          v13 += *(_DWORD *)(GetDPIMetrics(v48) + 8);
      }
      v101 = GreSelectBitmap(ghdcMem2, *(_QWORD *)(*(_QWORD *)v11 + 96LL));
      if ( !v101 )
        goto LABEL_39;
      memset_0(v105, 0, 0x68uLL);
      ObjectW = GreExtGetObjectW(*(HBRUSH *)(*(_QWORD *)v11 + 96LL), 104LL, v105);
      if ( !a5 || **(_DWORD **)v11 == 4 )
      {
        if ( ObjectW != 104 || v105[23] != 32 || v106 || **(_DWORD **)v11 == 4 )
        {
          if ( v105[8] * v105[9] == 1 )
            v57 = 12060490;
          else
            v57 = (unsigned int)MNDrawHilite((__int64)v98, v11) != 0 ? 3342344 : 13369376;
          NtGdiBitBltInternal((HDC)a1, v97 + v13, v97 + v46, v44, DpiDependentMetric, ghdcMem2, 0, 0, v57, 0xFFFFFF, 0);
        }
        goto LABEL_112;
      }
      v93 = 33488896;
      v51 = 0LL;
      if ( a6 )
      {
        v96 = 0LL;
        memset(v104, 0, 44);
        CompatibleDC = (Gre::Base *)GreCreateCompatibleDC(a1);
        if ( !CompatibleDC )
          goto LABEL_99;
        memset((char *)&v104[1] + 4, 0, 24);
        LODWORD(v104[0]) = 40;
        *(_QWORD *)((char *)v104 + 4) = __PAIR64__(DpiDependentMetric, v44);
        *(_QWORD *)((char *)v104 + 12) = 2097153LL;
        DIBitmapReal = GreCreateDIBitmapReal(
                         (_DWORD)CompatibleDC,
                         0,
                         0,
                         (unsigned int)v104,
                         0,
                         44,
                         0,
                         0LL,
                         0,
                         0LL,
                         0,
                         0LL,
                         (__int64)&v96);
        v34 = DIBitmapReal;
        if ( DIBitmapReal )
        {
          v51 = GreSelectBitmap(CompatibleDC, DIBitmapReal);
          if ( v51 != -1 )
          {
            NtGdiAlphaBlend(
              CompatibleDC,
              0,
              0,
              v44,
              DpiDependentMetric,
              ghdcMem2,
              0,
              0,
              v44,
              DpiDependentMetric,
              33488896);
            if ( v44 * DpiDependentMetric > 0 )
            {
              v54 = v96;
              v55 = (unsigned int)(v44 * DpiDependentMetric);
              do
              {
                v56 = (29 * v54[2] + 150 * v54[1] + 77 * (unsigned int)*v54 + 129) >> 8;
                *(_DWORD *)v54 = v56 | ((v56 | ((v56 | (v54[3] << 8)) << 8)) << 8);
                v54 = v96 + 4;
                v96 += 4;
                --v55;
              }
              while ( v55 );
              v11 = v95;
            }
            BYTE2(v93) = 102;
          }
        }
      }
      else
      {
        v34 = 0LL;
        CompatibleDC = (Gre::Base *)ghdcMem2;
        if ( !ghdcMem2 )
          goto LABEL_97;
      }
      NtGdiAlphaBlend(
        a1,
        v97 + v13,
        v97 + v100,
        v44,
        DpiDependentMetric,
        (XLATEOBJ *)CompatibleDC,
        0,
        0,
        v44,
        DpiDependentMetric,
        v93);
LABEL_97:
      if ( !a6 )
      {
LABEL_112:
        GreSelectBitmap(ghdcMem2, v101);
        goto LABEL_39;
      }
      if ( v51 == -1 )
      {
LABEL_100:
        if ( v34 )
        {
          GreDecBitmapExclusiveRefCnt(v34);
          GreDeleteObject(v34);
        }
        if ( CompatibleDC )
          GreDeleteDC(CompatibleDC);
        goto LABEL_112;
      }
LABEL_99:
      GreSelectBitmap(CompatibleDC, v51);
      goto LABEL_100;
    }
  }
  while ( 1 )
  {
LABEL_61:
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) && *(_QWORD *)(*v98[0] + 80) )
      SetupFakeMDIAppStuff((__int64)v98, (_QWORD *)v11);
    v35 = HMValidateHandleNoRip(*(_QWORD *)(*(_QWORD *)v11 + 56LL), 1);
    v36 = (struct tagWND *)v35;
    if ( v35 )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) )
      goto LABEL_68;
    *(_QWORD *)(*(_QWORD *)v11 + 56LL) = 0LL;
  }
  ThreadLock(v35, &v102);
  WindowSmIcon = xxxGetWindowSmIcon(v36, 0);
  ThreadUnlock1(v39, v38, v40);
  if ( WindowSmIcon )
    goto LABEL_69;
LABEL_68:
  WindowSmIcon = qword_1C035CCF0;
LABEL_69:
  v26 = v92;
  v41 = a4 - 2;
  v42 = a3 - 4;
  if ( v92 && v41 < v42 )
    v42 = a4 - 2;
  DrawIconEx((HDC)a1, v13 + 4, 1u, WindowSmIcon, v42, v41, 0, *(_QWORD *)(gpsi + 4728LL), 19);
LABEL_40:
  v27 = v99;
  if ( !v99 )
    v27 = *v98[0];
  if ( (unsigned int)MNGetpItemIndex(v27, v11) == -1 )
    goto LABEL_171;
  if ( a5 )
    goto LABEL_171;
  v29 = *(_WORD **)(v11 + 24);
  if ( !v29 )
    goto LABEL_171;
  v30 = *(_DWORD *)(*(_QWORD *)v11 + 48LL);
  if ( !v30 )
    goto LABEL_171;
  v100 = *(_QWORD *)(v11 + 88);
  if ( v26 && (v28 = *v98[0], *(_DWORD *)(*v98[0] + 72)) )
  {
    v28 = *v98[0];
    v13 = *(_DWORD *)(*v98[0] + 72);
  }
  else if ( *(_QWORD *)(*(_QWORD *)v11 + 96LL) )
  {
    v13 += *(_DWORD *)(*(_QWORD *)v11 + 104LL) + 2;
  }
  DPIMetrics = GetDPIMetrics(v28);
  v59 = *(_QWORD *)v11;
  v60 = DPIMetrics;
  v96 = (unsigned __int8 *)DPIMetrics;
  v61 = *(_DWORD *)(DPIMetrics + 20);
  v94 = v61;
  v62 = *(_DWORD *)(v59 + 76) - *(_DWORD *)(DPIMetrics + 12) - v61 - 1;
  if ( v62 > 0 )
  {
    v60 = (__int64)v96;
    v94 = v62 / 2 + v61;
  }
  if ( !v26 && !*(_QWORD *)(v59 + 96) )
    v13 += *(_DWORD *)(v60 + 8);
  if ( *v29 == 8 && !v26 )
  {
    ++v29;
    if ( !--v30 )
    {
      v80 = (HDC)a1;
      goto LABEL_172;
    }
  }
  CharPosition = (unsigned int)FindCharPosition(v29, 9LL);
  v65 = FindCharPosition(v29, v64);
  v67 = *(_DWORD *)(v66 + 72);
  v68 = v65;
  v70 = GetDpiForSystem(v69);
  v71 = v67 - *((__int16 *)GetOemBitmapInfoForDpi(63LL, v70) + 2) - 2;
  if ( (_DWORD)v68 && (_DWORD)v68 != v30 )
  {
    if ( (**(_DWORD **)v11 & 0x2000) != 0 && v92 )
    {
      v95 = 0LL;
      xxxPSMGetTextExtent(a1, v29, (unsigned int)v68, &v95);
      v72 = v99;
      if ( !v99 )
        v72 = *v98[0];
      if ( (unsigned int)MNGetpItemIndex(v72, v11) == -1 || v100 != *(_QWORD *)(v11 + 88) )
        goto LABEL_171;
      v13 = v71 - v95;
    }
    xxxDrawMenuItemText(
      v98,
      v11,
      a1,
      v97 + v13,
      v97 + v94,
      (__int64)v29,
      v68,
      *(_DWORD *)(*(_QWORD *)(*v98[0] + 40) + 40LL) & 4);
    v73 = v99;
    if ( !v99 )
      v73 = *v98[0];
    if ( (unsigned int)MNGetpItemIndex(v73, v11) != -1 && v100 == *(_QWORD *)(v11 + 88) )
    {
      if ( (unsigned int)CharPosition <= (int)v68 + 1 )
      {
        v77 = v100;
        goto LABEL_148;
      }
      if ( (**(_DWORD **)v11 & 0x2000) != 0 && v92 )
      {
        v74 = CharPosition - v68;
      }
      else
      {
        v95 = 0LL;
        v74 = CharPosition - v68;
        xxxPSMGetTextExtent(a1, &v29[v68 + 1], (unsigned int)(CharPosition - v68 - 1), &v95);
        v75 = v99;
        if ( !v99 )
          v75 = *v98[0];
        if ( (unsigned int)MNGetpItemIndex(v75, v11) == -1 || v100 != *(_QWORD *)(v11 + 88) )
          goto LABEL_171;
      }
      xxxPSMTextOut((HDC)a1, v74 - 1, ~(*(_DWORD *)(*(_QWORD *)(*v98[0] + 40) + 40LL) << 18) & 0x100000);
      v76 = v99;
      if ( !v99 )
        v76 = *v98[0];
      if ( (unsigned int)MNGetpItemIndex(v76, v11) != -1 )
      {
        v77 = v100;
        if ( v100 == *(_QWORD *)(v11 + 88) )
          goto LABEL_148;
      }
    }
LABEL_171:
    v80 = (HDC)a1;
    goto LABEL_172;
  }
  if ( !(_DWORD)CharPosition || (_DWORD)v68 != v30 )
  {
    v77 = v100;
    goto LABEL_148;
  }
  if ( (**(_DWORD **)v11 & 0x2000) != 0 )
  {
    v95 = 0LL;
    xxxPSMGetTextExtent(a1, v29, (unsigned int)CharPosition, &v95);
    v82 = v99;
    if ( !v99 )
      v82 = *v98[0];
    if ( (unsigned int)MNGetpItemIndex(v82, v11) == -1 )
      goto LABEL_171;
    v77 = v100;
    if ( v100 != *(_QWORD *)(v11 + 88) )
      goto LABEL_171;
    v13 = v71 - v95;
    if ( !v92 && !*(_QWORD *)(*(_QWORD *)v11 + 96LL) )
      v13 += *((_DWORD *)v96 + 2);
  }
  else
  {
    v77 = v100;
  }
  xxxDrawMenuItemText(
    v98,
    v11,
    a1,
    v97 + v13,
    v97 + v94,
    (__int64)v29,
    CharPosition,
    *(_DWORD *)(*(_QWORD *)(*v98[0] + 40) + 40LL) & 4);
  v83 = v99;
  if ( !v99 )
    v83 = *v98[0];
  if ( (unsigned int)MNGetpItemIndex(v83, v11) == -1 || v77 != *(_QWORD *)(v11 + 88) )
    goto LABEL_171;
LABEL_148:
  if ( (unsigned int)CharPosition >= v30 - 1 )
    goto LABEL_171;
  if ( (**(_DWORD **)v11 & 0x2000) == 0 || !v92 )
  {
    v78 = v30 - CharPosition;
    v80 = (HDC)a1;
LABEL_186:
    xxxPSMTextOut(v80, v78 - 1, ~(*(_DWORD *)(*(_QWORD *)(*v98[0] + 40) + 40LL) << 18) & 0x100000);
    goto LABEL_172;
  }
  v95 = 0LL;
  v78 = v30 - CharPosition;
  v79 = &v29[CharPosition + 1];
  v80 = (HDC)a1;
  xxxPSMGetTextExtent(a1, v79, (unsigned int)(v78 - 1), &v95);
  v81 = v99;
  if ( !v99 )
    v81 = *v98[0];
  if ( (unsigned int)MNGetpItemIndex(v81, v11) != -1 && v77 == *(_QWORD *)(v11 + 88) )
    goto LABEL_186;
LABEL_172:
  v84 = v99;
  if ( !v99 )
    v84 = *v98[0];
  if ( (unsigned int)MNGetpItemIndex(v84, v11) != -1 && !a5 )
  {
    if ( v92 )
    {
      if ( *(_QWORD *)(v11 + 16) )
      {
        v85 = (**(_DWORD **)v11 & 0x2000) != 0 ? 0x1E : 0;
        v86 = GetDpiForSystem(-(**(_DWORD **)v11 & 0x2000));
        v87 = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v85 + 62), v86);
        if ( *(_DWORD *)(*(_QWORD *)v11 + 76LL) >= v87[3] )
        {
          if ( PrepareHDCBITSBitmap(0LL, *(_QWORD *)v11) )
          {
            v88 = v87[3];
            v89 = (*(_DWORD *)(*(_QWORD *)v11 + 76LL) - v88 - 2) / 2;
            if ( v89 <= 0 )
              v89 = 0;
            BltColor(v80, v89, v87[2], v88, *v87, v87[1], 1);
          }
        }
      }
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v98);
  return 1LL;
}
