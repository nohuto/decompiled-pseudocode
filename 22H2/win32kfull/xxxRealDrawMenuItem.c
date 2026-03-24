/*
 * XREFs of xxxRealDrawMenuItem @ 0x1C024D2E4
 * Callers:
 *     xxxDrawState @ 0x1C0250784 (xxxDrawState.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0023BCC (HMValidateHandleNoRip.c)
 *     xxxGetWindowSmIcon @ 0x1C0038CA8 (xxxGetWindowSmIcon.c)
 *     _DrawIconEx @ 0x1C0043EF4 (_DrawIconEx.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0044A40 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0044A6C (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     MNGetpItemIndex @ 0x1C00482D0 (MNGetpItemIndex.c)
 *     GetDpiDependentMetric @ 0x1C0061430 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0063C1C (GetDpiForSystem.c)
 *     GreExtGetObjectW @ 0x1C0083078 (GreExtGetObjectW.c)
 *     NtGdiAlphaBlend @ 0x1C0085150 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C00A9DAC (GreDecBitmapExclusiveRefCnt.c)
 *     GreCreateDIBitmapReal @ 0x1C00ABE5C (GreCreateDIBitmapReal.c)
 *     GetDPIMetrics @ 0x1C00E0A9C (GetDPIMetrics.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     BitBltSysBmp @ 0x1C0106EBC (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C010710C (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C010721C (PrepareHDCBITSBitmap.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C023EF0C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024B3F8 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024BBEC (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     BltColor @ 0x1C025063C (BltColor.c)
 *     xxxPSMTextOut @ 0x1C0252AAC (xxxPSMTextOut.c)
 *     FindCharPosition @ 0x1C025DC8C (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C0260224 (xxxPSMGetTextExtent.c)
 */

__int64 __fastcall xxxRealDrawMenuItem(XLATEOBJ *a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  __int64 v9; // rdx
  int v10; // r14d
  __int64 v11; // rdi
  int v12; // edx
  int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rcx
  bool v16; // zf
  unsigned int DpiForSystem; // eax
  int v18; // r8d
  unsigned __int64 v19; // rax
  LONG v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rbx
  unsigned int v27; // eax
  __int16 *OemBitmapInfoForDpi; // rax
  __int64 v29; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 WindowSmIcon; // rbx
  __int64 v32; // rcx
  unsigned int v33; // ecx
  int v34; // r14d
  unsigned int v35; // r8d
  __int64 v36; // rax
  int v37; // r12d
  int DpiDependentMetric; // r14d
  int v39; // ebx
  unsigned int v40; // eax
  __int64 v41; // rcx
  unsigned int v42; // eax
  int ObjectW; // eax
  __int64 v44; // rdx
  LONG v45; // r11d
  __int64 v46; // r15
  __int64 v47; // r13
  XLATEOBJ *CompatibleDC; // rbx
  __int64 v49; // rax
  unsigned __int8 *v50; // r9
  __int64 v51; // r10
  unsigned int v52; // r8d
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // r9
  const WCHAR *v57; // r15
  int v58; // ebx
  __int64 DPIMetrics; // rax
  __int64 v60; // r10
  __int64 v61; // rdx
  int v62; // r8d
  int v63; // eax
  __int64 CharPosition; // r12
  unsigned int v65; // r11d
  unsigned int v66; // eax
  __int64 v67; // r10
  int v68; // r13d
  __int64 v69; // r14
  __int64 v70; // rcx
  unsigned int v71; // eax
  char *v72; // rax
  __int64 v73; // r9
  int v74; // r13d
  __int64 v75; // rcx
  __int64 v76; // rcx
  int v77; // r13d
  int v78; // esi
  __int64 v79; // rcx
  const WCHAR *v80; // r9
  HDC v81; // r14
  __int64 v82; // rcx
  __int64 v83; // r14
  __int64 v84; // rcx
  __int64 v85; // r9
  int v86; // ebx
  unsigned int v87; // eax
  __int16 *v88; // rbx
  int v89; // esi
  int v90; // eax
  __int64 v91; // rcx
  __int64 v92; // r9
  int v93; // esi
  __int64 v94; // r13
  __int64 v95; // rcx
  int v96; // ebx
  __int64 v97; // rsi
  __int64 v98; // rcx
  int v99; // edx
  int v101; // [rsp+70h] [rbp-90h]
  int v103; // [rsp+80h] [rbp-80h]
  int v104; // [rsp+80h] [rbp-80h]
  int v106; // [rsp+88h] [rbp-78h]
  __int64 v107; // [rsp+88h] [rbp-78h]
  BOOL v108; // [rsp+90h] [rbp-70h]
  __int64 *v109[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v110; // [rsp+A8h] [rbp-58h]
  __int64 v111; // [rsp+B0h] [rbp-50h]
  __int64 v112; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v113; // [rsp+C0h] [rbp-40h]
  __int64 v114; // [rsp+C8h] [rbp-38h]
  __int64 v115; // [rsp+D0h] [rbp-30h]
  __int64 v116; // [rsp+D8h] [rbp-28h]
  __int128 v117; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v118; // [rsp+F0h] [rbp-10h]
  _OWORD v119[3]; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD v120[28]; // [rsp+130h] [rbp+30h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v109, 0LL);
  v9 = *a2;
  v118 = 0LL;
  v10 = 0;
  v117 = 0LL;
  v108 = 0;
  v110 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v109, v9);
  v11 = a2[1];
  v12 = *(_DWORD *)(*(_QWORD *)(*v109[0] + 40) + 40LL) & 1;
  v101 = v12;
  if ( v12 )
  {
    v13 = 2;
    v14 = *v109[0];
    if ( *(int *)(*(_QWORD *)(*v109[0] + 40) + 40LL) >= 0 )
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
      v14 = *(_QWORD *)(*v109[0] + 40);
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
      v12 = v101;
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
      v108 = *(char *)(*(_QWORD *)v11 + 4LL) < 0;
  }
  if ( !*(_QWORD *)(*(_QWORD *)v11 + 96LL) )
    goto LABEL_102;
  if ( v10 )
  {
    v14 = *v109[0];
    if ( (*(_DWORD *)(*(_QWORD *)(*v109[0] + 40) + 40LL) & 0x4000000) != 0 )
      goto LABEL_102;
  }
  if ( a5 )
    goto LABEL_63;
  v14 = *(_QWORD *)v11;
  v18 = *(_DWORD *)(*(_QWORD *)v11 + 4LL);
  v19 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
  if ( (v18 & 0x20000000) != 0 )
  {
    if ( v19 == 1 )
      goto LABEL_51;
    v20 = v13;
    if ( v19 > 7 )
      goto LABEL_39;
    v21 = v19 - 2;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 2;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( !v24 )
          {
            v25 = 21;
            goto LABEL_38;
          }
          if ( v24 == 1 )
          {
            v25 = 25;
            v20 = v13 + 2;
LABEL_38:
            BitBltSysBmp((__int64)a1, v20, 2, v25, 1);
LABEL_102:
            v34 = v101;
            goto LABEL_103;
          }
LABEL_39:
          if ( PrepareHDCBITSBitmap(0LL) )
          {
            v26 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
            v27 = GetDpiForSystem(*(_QWORD *)v11);
            OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v26 + 79), v27);
            BltColor(
              (HDC)a1,
              (unsigned int)(*(_DWORD *)(*(_QWORD *)v11 + 76LL) - OemBitmapInfoForDpi[3]) >> 1,
              OemBitmapInfoForDpi[2],
              OemBitmapInfoForDpi[3],
              *OemBitmapInfoForDpi,
              OemBitmapInfoForDpi[1],
              1);
          }
          goto LABEL_102;
        }
        v25 = 18;
      }
      else
      {
        v25 = 22;
        v20 = v13 + 2;
      }
    }
    else
    {
      v25 = 26;
    }
    if ( (v18 & 0x80u) != 0 )
      ++v25;
    goto LABEL_38;
  }
  if ( v19 == -1LL )
  {
    xxxSendMenuDrawItemMessage((__int64)a1, 1, (__int64 ***)v109, (__int64 *)v11, 1, v13, 0LL);
    goto LABEL_102;
  }
  if ( *(_WORD *)(gptiCurrent + 632LL) > 0x400u
    || (!*(_QWORD *)(v14 + 56) || *(_QWORD *)(v11 + 24))
    && (v12
     || (v14 = *v109[0], v11 != *(_QWORD *)(*v109[0] + 88))
     || (v14 = *v109[0], *(_DWORD *)(*(_QWORD *)(*v109[0] + 40) + 44LL) <= 1u)
     || (v14 = *(_QWORD *)(*(_QWORD *)(*v109[0] + 88) + 96LL), *(_QWORD *)(v14 + 96))
     || !*(_QWORD *)(v11 + 16)) )
  {
LABEL_63:
    v36 = *(_QWORD *)v11;
    v37 = *(_DWORD *)(*(_QWORD *)v11 + 104LL);
    DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
    if ( v12 )
    {
      v39 = (*(_DWORD *)(v36 + 76) - DpiDependentMetric) / 2;
      if ( *(_DWORD *)(v36 + 76) - DpiDependentMetric <= 0 )
        v39 = 0;
      v106 = v39;
    }
    else
    {
      v40 = GetDpiForSystem(v14);
      if ( DpiDependentMetric <= (int)GetDpiDependentMetric(26LL, v40) )
      {
        v42 = GetDpiForSystem(v41);
        DpiDependentMetric = GetDpiDependentMetric(26LL, v42);
      }
      else
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
      }
      v39 = 0;
      v106 = 0;
      if ( *(_QWORD *)(v11 + 24) )
        v13 += *(_DWORD *)(GetDPIMetrics(v41) + 8);
    }
    v113 = GreSelectBitmap(*(_QWORD *)ghdcMem2, *(_QWORD *)(*(_QWORD *)v11 + 96LL));
    if ( !v113 )
      goto LABEL_102;
    memset(v120, 0, 0x68uLL);
    ObjectW = GreExtGetObjectW(*(HSURF *)(*(_QWORD *)v11 + 96LL), 104LL, (char *)v120);
    v45 = 0;
    if ( !a5 || **(_DWORD **)v11 == 4 )
    {
      if ( ObjectW != 104 || HIWORD(v120[11]) != 32 || v120[12] || **(_DWORD **)v11 == 4 )
      {
        if ( LOWORD(v120[4]) * HIWORD(v120[4]) == 1 )
          v53 = 12060490;
        else
          v53 = (unsigned int)MNDrawHilite(v109, v11) != 0 ? 3342344 : 13369376;
        NtGdiBitBltInternal(
          (HDC)a1,
          v108 + v13,
          v108 + v39,
          v37,
          DpiDependentMetric,
          *(HDC *)ghdcMem2,
          v45,
          v45,
          v53,
          0xFFFFFFu,
          v45);
      }
      goto LABEL_101;
    }
    v46 = 0LL;
    v103 = 33488896;
    v47 = 0LL;
    if ( a6 )
    {
      v112 = 0LL;
      memset(v119, 0, 44);
      CompatibleDC = (XLATEOBJ *)GreCreateCompatibleDC(a1);
      if ( !CompatibleDC )
      {
LABEL_86:
        if ( a6 )
        {
          if ( v47 != -1 )
            GreSelectBitmap(CompatibleDC, v47);
          if ( v46 )
          {
            GreDecBitmapExclusiveRefCnt(v46, v44);
            GreDeleteObject(v46);
          }
          if ( CompatibleDC )
            GreDeleteDC(CompatibleDC);
        }
LABEL_101:
        GreSelectBitmap(*(_QWORD *)ghdcMem2, v113);
        goto LABEL_102;
      }
      memset((char *)&v119[1] + 4, 0, 24);
      LODWORD(v119[0]) = 40;
      *(_QWORD *)((char *)v119 + 4) = __PAIR64__(DpiDependentMetric, v37);
      *(_QWORD *)((char *)v119 + 12) = 2097153LL;
      v49 = GreCreateDIBitmapReal(
              (HDC)CompatibleDC,
              0,
              0LL,
              (unsigned int *)v119,
              0,
              0x2Cu,
              0,
              0LL,
              0,
              0LL,
              0,
              0LL,
              &v112);
      v46 = v49;
      if ( v49 )
      {
        v47 = GreSelectBitmap(CompatibleDC, v49);
        if ( v47 != -1 )
        {
          NtGdiAlphaBlend(
            CompatibleDC,
            0,
            0,
            v37,
            DpiDependentMetric,
            *(POINTL *)ghdcMem2,
            0,
            0,
            v37,
            DpiDependentMetric,
            33488896);
          if ( v37 * DpiDependentMetric > 0 )
          {
            v50 = (unsigned __int8 *)v112;
            v51 = (unsigned int)(v37 * DpiDependentMetric);
            do
            {
              v44 = 29 * v50[2] + 150 * (unsigned int)v50[1];
              v52 = ((unsigned int)v44 + 77 * *v50 + 129) >> 8;
              *(_DWORD *)v50 = v52 | ((v52 | ((v52 | (v50[3] << 8)) << 8)) << 8);
              v50 = (unsigned __int8 *)(v112 + 4);
              v112 += 4LL;
              --v51;
            }
            while ( v51 );
          }
          BYTE2(v103) = 102;
        }
      }
    }
    else
    {
      CompatibleDC = *(XLATEOBJ **)ghdcMem2;
    }
    if ( CompatibleDC )
      NtGdiAlphaBlend(
        a1,
        v108 + v13,
        v108 + v106,
        v37,
        DpiDependentMetric,
        (POINTL)CompatibleDC,
        0,
        0,
        v37,
        DpiDependentMetric,
        v103);
    goto LABEL_86;
  }
  while ( 1 )
  {
LABEL_51:
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) && *(_QWORD *)(*v109[0] + 80) )
      SetupFakeMDIAppStuff((__int64)v109, (_QWORD *)v11);
    v29 = HMValidateHandleNoRip(*(_QWORD *)(*(_QWORD *)v11 + 56LL), 1);
    if ( v29 )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) )
      goto LABEL_58;
    *(_QWORD *)(*(_QWORD *)v11 + 56LL) = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v117 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v117;
  *((_QWORD *)&v117 + 1) = v29;
  HMLockObject(v29);
  WindowSmIcon = xxxGetWindowSmIcon(v29, 0);
  ThreadUnlock1(v32);
  if ( WindowSmIcon )
    goto LABEL_59;
LABEL_58:
  WindowSmIcon = qword_1C03307D0;
LABEL_59:
  v33 = a3 - 4;
  v34 = v101;
  v35 = a4 - 2;
  if ( v101 && v35 < v33 )
    v33 = a4 - 2;
  DrawIconEx((HDC)a1, v13 + 4, 1, WindowSmIcon, v33, v35, 0, *(_QWORD *)(gpsi + 4728LL), 19);
LABEL_103:
  v54 = v110;
  if ( !v110 )
    v54 = *v109[0];
  if ( (unsigned int)MNGetpItemIndex(v54, v11) == -1 )
    goto LABEL_148;
  if ( a5 != (_DWORD)v56 )
    goto LABEL_148;
  v57 = *(const WCHAR **)(v11 + 24);
  if ( !v57 )
    goto LABEL_148;
  v58 = *(_DWORD *)(*(_QWORD *)v11 + 48LL);
  if ( !v58 )
    goto LABEL_148;
  v107 = *(_QWORD *)(v11 + 88);
  if ( !v34 || (v55 = *v109[0], *(_DWORD *)(*v109[0] + 72) == (_DWORD)v56) )
  {
    if ( *(_QWORD *)(*(_QWORD *)v11 + 96LL) != v56 )
      v13 += *(_DWORD *)(*(_QWORD *)v11 + 104LL) + 2;
  }
  else
  {
    v55 = *v109[0];
    v13 = *(_DWORD *)(*v109[0] + 72);
  }
  DPIMetrics = GetDPIMetrics(v55);
  v60 = *(_QWORD *)v11;
  v61 = DPIMetrics;
  v111 = DPIMetrics;
  v62 = *(_DWORD *)(DPIMetrics + 20);
  v104 = v62;
  v63 = *(_DWORD *)(v60 + 76) - *(_DWORD *)(DPIMetrics + 12) - v62 - 1;
  if ( v63 > 0 )
  {
    v61 = v111;
    v104 = v63 / 2 + v62;
  }
  if ( !v34 && !*(_QWORD *)(v60 + 96) )
    v13 += *(_DWORD *)(v61 + 8);
  if ( *v57 == 8 && !v34 )
  {
    ++v57;
    if ( !--v58 )
    {
      v81 = (HDC)a1;
      goto LABEL_149;
    }
  }
  CharPosition = (unsigned int)FindCharPosition(v57, 9LL);
  v66 = FindCharPosition(v57, v65);
  v68 = *(_DWORD *)(v67 + 72);
  v69 = v66;
  v71 = GetDpiForSystem(v70);
  v72 = GetOemBitmapInfoForDpi(63LL, v71);
  v73 = 0LL;
  v74 = v68 - *((__int16 *)v72 + 2) - 2;
  if ( !(_DWORD)v69 || (_DWORD)v69 == v58 )
  {
    if ( (_DWORD)CharPosition && (_DWORD)v69 == v58 )
    {
      if ( (**(_DWORD **)v11 & 0x2000) != 0 )
      {
        v81 = (HDC)a1;
        v116 = 0LL;
        xxxPSMGetTextExtent((HDC)a1);
        v91 = v110;
        if ( !v110 )
          v91 = *v109[0];
        if ( (unsigned int)MNGetpItemIndex(v91, v11) == -1 )
          goto LABEL_149;
        v83 = v107;
        if ( v107 != *(_QWORD *)(v11 + 88) )
          goto LABEL_148;
        v93 = v74;
        v94 = v111;
        v13 = v93 - v116;
        if ( v101 == (_DWORD)v92 && *(_QWORD *)(*(_QWORD *)v11 + 96LL) == v92 )
          v13 += *(_DWORD *)(v111 + 8);
      }
      else
      {
        v83 = v107;
        v94 = v111;
      }
      xxxDrawMenuItemText(
        v109,
        v11,
        (HDC)a1,
        v108 + v13,
        v108 + v104,
        v57,
        CharPosition,
        *(_DWORD *)(*(_QWORD *)(*v109[0] + 40) + 40LL) & 4);
      v95 = v110;
      if ( !v110 )
        v95 = *v109[0];
      if ( (unsigned int)MNGetpItemIndex(v95, v11) == -1 || v83 != *(_QWORD *)(v11 + 88) )
        goto LABEL_148;
      goto LABEL_178;
    }
  }
  else
  {
    if ( (**(_DWORD **)v11 & 0x2000) != 0 && v101 )
    {
      v114 = 0LL;
      xxxPSMGetTextExtent((HDC)a1);
      v75 = v110;
      if ( !v110 )
        v75 = *v109[0];
      if ( (unsigned int)MNGetpItemIndex(v75, v11) == -1 || v107 != *(_QWORD *)(v11 + 88) )
        goto LABEL_148;
      v13 = v74 - v114;
    }
    xxxDrawMenuItemText(
      v109,
      v11,
      (HDC)a1,
      v108 + v13,
      v108 + v104,
      v57,
      v69,
      *(_DWORD *)(*(_QWORD *)(*v109[0] + 40) + 40LL) & 4);
    v76 = v110;
    if ( !v110 )
      v76 = *v109[0];
    if ( (unsigned int)MNGetpItemIndex(v76, v11) == -1 || v107 != *(_QWORD *)(v11 + 88) )
    {
LABEL_148:
      v81 = (HDC)a1;
      goto LABEL_149;
    }
    if ( (unsigned int)CharPosition > (int)v69 + 1 )
    {
      if ( (**(_DWORD **)v11 & 0x2000) == 0 || v101 == (_DWORD)v73 )
      {
        v115 = v73;
        v78 = CharPosition - v69;
        xxxPSMGetTextExtent((HDC)a1);
        v79 = v110;
        if ( !v110 )
          v79 = *v109[0];
        if ( (unsigned int)MNGetpItemIndex(v79, v11) == -1 || v107 != *(_QWORD *)(v11 + 88) )
          goto LABEL_148;
        v77 = *(_DWORD *)(*(_QWORD *)v11 + 80LL) - v115;
      }
      else
      {
        v77 = v74 - *(_DWORD *)(*(_QWORD *)v11 + 80LL);
        v78 = CharPosition - v69;
      }
      v80 = &v57[v69 + 1];
      v81 = (HDC)a1;
      xxxPSMTextOut(
        (HDC)a1,
        v77,
        v104,
        v80,
        v78 - 1,
        ~(*(_DWORD *)(*(_QWORD *)(*v109[0] + 40) + 40LL) << 18) & 0x100000);
      v82 = v110;
      if ( !v110 )
        v82 = *v109[0];
      if ( (unsigned int)MNGetpItemIndex(v82, v11) == -1 )
        goto LABEL_149;
      v83 = v107;
      if ( v107 != *(_QWORD *)(v11 + 88) )
        goto LABEL_148;
      goto LABEL_177;
    }
  }
  v83 = v107;
LABEL_177:
  v94 = v111;
LABEL_178:
  if ( (unsigned int)CharPosition >= v58 - 1 )
    goto LABEL_148;
  if ( (**(_DWORD **)v11 & 0x2000) == 0 || v101 == (_DWORD)v73 )
  {
    v97 = CharPosition;
    v99 = *(_DWORD *)(*(_QWORD *)v11 + 80LL) + *(_DWORD *)(v94 + 8);
    v96 = v58 - CharPosition;
  }
  else
  {
    v113 = v73;
    v96 = v58 - CharPosition;
    v97 = CharPosition;
    xxxPSMGetTextExtent((HDC)a1);
    v98 = v110;
    if ( !v110 )
      v98 = *v109[0];
    if ( (unsigned int)MNGetpItemIndex(v98, v11) == -1 || v83 != *(_QWORD *)(v11 + 88) )
      goto LABEL_148;
    v99 = *(_DWORD *)(*(_QWORD *)v11 + 72LL) - *(_DWORD *)(*(_QWORD *)v11 + 80LL) - v113;
  }
  v81 = (HDC)a1;
  xxxPSMTextOut(
    (HDC)a1,
    v99,
    v104,
    &v57[v97 + 1],
    v96 - 1,
    ~(*(_DWORD *)(*(_QWORD *)(*v109[0] + 40) + 40LL) << 18) & 0x100000);
LABEL_149:
  v84 = v110;
  if ( !v110 )
    v84 = *v109[0];
  if ( (unsigned int)MNGetpItemIndex(v84, v11) != -1
    && a5 == (_DWORD)v85
    && v101 != (_DWORD)v85
    && *(_QWORD *)(v11 + 16) != v85 )
  {
    v86 = (**(_DWORD **)v11 & 0x2000) != 0 ? 0x1E : 0;
    v87 = GetDpiForSystem(-(**(_DWORD **)v11 & 0x2000));
    v88 = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v86 + 62), v87);
    if ( *(_DWORD *)(*(_QWORD *)v11 + 76LL) >= v88[3] )
    {
      if ( PrepareHDCBITSBitmap(0LL) )
      {
        v89 = v88[3];
        v90 = (*(_DWORD *)(*(_QWORD *)v11 + 76LL) - v89 - 2) / 2;
        if ( v90 <= 0 )
          v90 = 0;
        BltColor(v81, v90, v88[2], v89, *v88, v88[1], 1);
      }
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v109);
  return 1LL;
}
