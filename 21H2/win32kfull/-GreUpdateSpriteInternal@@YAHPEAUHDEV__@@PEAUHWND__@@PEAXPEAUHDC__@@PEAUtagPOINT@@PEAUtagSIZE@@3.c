/*
 * XREFs of ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0090830
 * Callers:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0090370 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreUpdateSprite @ 0x1C00BEB60 (GreUpdateSprite.c)
 *     ?GreUpdateSpriteCallout@@YAXPEAX@Z @ 0x1C026D9B0 (-GreUpdateSpriteCallout@@YAXPEAX@Z.c)
 * Callees:
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0012998 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0012A28 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncUpdateSprite @ 0x1C0012AC0 (DwmAsyncUpdateSprite.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C001302C (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C0015AC0 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0016490 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0016788 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0016DB8 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0017620 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C0017644 (DwmAsyncDirtySprite.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0091470 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACD0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00BCFC4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00EC380 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C00EE8B4 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C011C574 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0131C00 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C015FC4C (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C016A6E4 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026E5E0 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 */

int __fastcall GreUpdateSpriteInternal(
        HDEV a1,
        HWND a2,
        void *a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12,
        struct tagMINIWINDOWINFO *a13,
        int a14,
        int a15)
{
  struct _BLENDFUNCTION *v15; // rsi
  unsigned int v16; // r14d
  unsigned int v17; // ebx
  HDEV v18; // r15
  __int64 v19; // rdi
  int v20; // r12d
  __int64 ThreadWin32Thread; // rax
  void *v22; // rdx
  void *v23; // rsi
  char *v24; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rax
  SFMLOGICALSURFACE *v27; // rsi
  void *v28; // rax
  SFMLOGICALSURFACE *FirstLSurf; // rbx
  __int64 v30; // rdx
  char *v31; // rsi
  struct tagRECT v32; // xmm0
  int v33; // r8d
  bool v34; // dl
  struct _BLENDFUNCTION *v35; // r9
  struct SFMLOGICALSURFACE *v36; // rcx
  int updated; // r9d
  SFMLOGICALSURFACE *v38; // r13
  _OWORD *v39; // rax
  unsigned int v40; // eax
  int v41; // eax
  struct _BLENDFUNCTION v42; // ecx
  int v43; // eax
  SFMLOGICALSURFACE *v44; // rcx
  int v45; // eax
  SURFACE *v46; // rax
  struct tagPOINT *v47; // r10
  LONG x; // eax
  int v49; // edx
  __int64 v50; // r9
  __int64 v51; // r9
  LONG y; // edx
  struct _RECTL *v53; // rax
  LONG v54; // ecx
  int v55; // eax
  int v56; // ecx
  __int64 v57; // rdx
  int v58; // edx
  int v59; // ebx
  int v60; // ebx
  bool v61; // sf
  bool v62; // of
  BOOL v63; // r13d
  void *v64; // rax
  HDEV *v65; // rbx
  int v66; // eax
  HDEV v67; // rsi
  SFMLOGICALSURFACE *v68; // rsi
  int v69; // ecx
  __int64 v70; // rax
  unsigned int v71; // ebx
  unsigned int v72; // r13d
  void *v73; // rax
  __int64 v74; // r8
  unsigned int v76; // eax
  int v77; // [rsp+20h] [rbp-E0h]
  char v78; // [rsp+60h] [rbp-A0h]
  struct tagPOINT *v79; // [rsp+64h] [rbp-9Ch] BYREF
  SFMLOGICALSURFACE *v80; // [rsp+70h] [rbp-90h] BYREF
  SFMLOGICALSURFACE *v81; // [rsp+78h] [rbp-88h]
  unsigned int v82; // [rsp+80h] [rbp-80h] BYREF
  struct _BLENDFUNCTION *v83; // [rsp+88h] [rbp-78h]
  __int64 v84; // [rsp+90h] [rbp-70h]
  unsigned int v85; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v86; // [rsp+9Ch] [rbp-64h] BYREF
  int v87; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v88; // [rsp+A4h] [rbp-5Ch]
  int v89; // [rsp+A8h] [rbp-58h]
  int v90; // [rsp+ACh] [rbp-54h]
  HDEV v91; // [rsp+B0h] [rbp-50h]
  struct tagRECT *v92; // [rsp+B8h] [rbp-48h]
  struct tagSIZE *v93; // [rsp+C0h] [rbp-40h]
  struct tagPOINT *v94; // [rsp+C8h] [rbp-38h]
  HDC v95; // [rsp+D0h] [rbp-30h]
  struct tagPOINT *v96; // [rsp+D8h] [rbp-28h]
  void *v97; // [rsp+E0h] [rbp-20h]
  void *v98; // [rsp+E8h] [rbp-18h]
  HDEV v99; // [rsp+F0h] [rbp-10h] BYREF
  HWND v100; // [rsp+F8h] [rbp-8h]
  __int64 v101; // [rsp+100h] [rbp+0h]
  HDC v102; // [rsp+108h] [rbp+8h]
  _BYTE v103[32]; // [rsp+110h] [rbp+10h] BYREF
  SFMLOGICALSURFACE *v104; // [rsp+130h] [rbp+30h]
  int v105; // [rsp+138h] [rbp+38h]
  _QWORD Buffer[2]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v107[2]; // [rsp+150h] [rbp+50h] BYREF
  char v108[32]; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v109; // [rsp+180h] [rbp+80h] BYREF
  struct tagRECT v110; // [rsp+190h] [rbp+90h] BYREF
  _OWORD v111[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v112; // [rsp+220h] [rbp+120h]
  unsigned int v113; // [rsp+2E0h] [rbp+1E0h]

  v15 = a10;
  v96 = a5;
  v16 = a11 & 0x200000;
  v17 = a11 & 0xFFDFFFFF;
  v93 = a6;
  v18 = a1;
  v19 = 0LL;
  v95 = a7;
  v94 = a8;
  v92 = a12;
  v100 = a2;
  v102 = a4;
  v97 = a3;
  v91 = a1;
  v83 = a10;
  v84 = (__int64)a13;
  v79 = 0LL;
  v90 = 1;
  v88 = a11 & 0x200000;
  memset(v111, 0, sizeof(v111));
  v112 = 0LL;
  v82 = 0;
  v86 = 0;
  v85 = 0;
  v87 = 0;
  v78 = 0;
  v113 = a11 & 0xFFDFFFFF;
  if ( !a14 || !g_pDwmState )
    goto LABEL_146;
  v89 = 0;
  if ( !v16 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    v89 = 1;
  }
  v99 = v18;
  v20 = 0;
  if ( !v16 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v20 = 1;
    }
  }
  if ( v16 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", ghsemDwmState);
  }
  else
  {
    GreAcquireSemaphore(ghsemDwmState);
  }
  if ( g_pDwmState )
  {
    v23 = v97;
    if ( v100 )
    {
      v24 = (char *)g_pDwmState + 72;
      Buffer[1] = 0LL;
      Buffer[0] = v100;
      v23 = 0LL;
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v24, 0LL);
      }
      v25 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
      if ( v25 )
        v23 = (void *)v25[1];
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        ExReleasePushLockExclusiveEx(v24, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( !v23 )
      goto LABEL_136;
    LOBYTE(v22) = 15;
    v26 = HmgShareLockCheck(v23, v22);
    v19 = v26;
    if ( !v26 || (*(_DWORD *)(v26 + 164) & 0x10) != 0 )
      goto LABEL_136;
    v90 = 0;
    LODWORD(v79) = 1;
    if ( v26 != -88 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v19 + 88, 0LL);
    }
    v27 = *(SFMLOGICALSURFACE **)(v19 + 168);
    v28 = *(void **)v19;
    FirstLSurf = v27;
    v80 = v27;
    v97 = v28;
    v81 = v27;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v103);
    v104 = 0LL;
    v105 = 1;
    if ( v27 && *(_QWORD *)v27 )
    {
      LOBYTE(v30) = 18;
      v104 = (SFMLOGICALSURFACE *)HmgLock(*(_QWORD *)v27, v30);
    }
    v31 = (char *)v27 + 256;
    if ( v31 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v31, 0LL);
    }
    if ( v92 )
    {
      v32 = *v92;
      v92 = &v110;
      v110 = v32;
    }
    v33 = v113;
    if ( v113 == 0x2000000 )
    {
      HIDWORD(v79) = 33488896;
      v83 = (struct _BLENDFUNCTION *)&v79 + 1;
      v113 = 570425346;
      v34 = v93 || v96;
      vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v19, v34);
      v33 = 570425346;
    }
    if ( (v33 & 0x20000000) != 0 )
    {
      v33 &= ~0x20000000u;
      v113 = v33;
    }
    else if ( (v33 & 0x40000000) != 0 || !v33 )
    {
      v33 = *(_DWORD *)(v19 + 72);
      v35 = (struct _BLENDFUNCTION *)(v19 + 76);
      v40 = *(_DWORD *)(v19 + 80);
      v83 = (struct _BLENDFUNCTION *)(v19 + 76);
      v113 = v33;
      a9 = v40;
LABEL_42:
      if ( (v33 & 2) != 0 )
      {
        if ( !v35 || (v36 = FirstLSurf, (v35->AlphaFormat & 1) != 0) && (*((_DWORD *)FirstLSurf + 63) & 1) != 0 )
        {
          updated = 0;
          LODWORD(v79) = 0;
          goto LABEL_47;
        }
      }
      else
      {
        v36 = FirstLSurf;
      }
      *(_DWORD *)(v19 + 72) = v33;
      if ( (v33 & 2) != 0 )
      {
        if ( *(_BYTE *)(v19 + 79) != v35->AlphaFormat )
        {
          v41 = bSpDwmCreateLogicalSurface(v91, (struct DWMSPRITE *)v19, v36, 0LL, &v80);
          v33 = v113;
          v35 = v83;
          FirstLSurf = v80;
          LODWORD(v79) = v41;
        }
        *(struct _BLENDFUNCTION *)(v19 + 76) = *v35;
        v42 = *v35;
        *((_DWORD *)FirstLSurf + 61) |= 0x40u;
        *((struct _BLENDFUNCTION *)FirstLSurf + 60) = v42;
      }
      if ( (v33 & 1) != 0 )
      {
        *(_DWORD *)(v19 + 80) = a9;
        if ( *((_QWORD *)v81 + 23) )
        {
          if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v81) )
          {
            if ( !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v99) )
            {
              v81 = (SFMLOGICALSURFACE *)(*((_QWORD *)v81 + 23) - 24LL);
              v43 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v99);
              v44 = v81;
              if ( v43 )
              {
                v45 = *((_DWORD *)v81 + 29);
                if ( (v45 & 0x20) == 0 )
                {
                  *((_DWORD *)v81 + 29) = v45 | 0x20;
                  pConvertDfbSurfaceToDibPostNKAPC(*((HSURF *)v44 + 4));
                  v78 = 1;
                }
              }
              else
              {
                v46 = (SURFACE *)pProcessDfbSurfaces(v81, 1LL);
                if ( v46 )
                {
                  FirstLSurf = SURFACE::GetFirstLSurf(v46);
                  v80 = FirstLSurf;
                }
              }
            }
            v33 = v113;
          }
        }
      }
      updated = (int)v79;
      if ( !(_DWORD)v79 )
        goto LABEL_47;
      v47 = v96;
      if ( v96 )
      {
        x = v96->x;
        v49 = v96->y - *(_DWORD *)(v19 + 60);
        *(_DWORD *)(v19 + 64) += v96->x - *(_DWORD *)(v19 + 56);
        *(_DWORD *)(v19 + 68) += v49;
        *(_DWORD *)(v19 + 60) += v49;
        *(_DWORD *)(v19 + 56) = x;
      }
      if ( (*((_DWORD *)FirstLSurf + 63) & 1) != 0 )
      {
        if ( !v92 || !*((_QWORD *)FirstLSurf + 23) )
          goto LABEL_88;
        vSpUpdateDirtyRgn((struct DWMSPRITE *)v19, FirstLSurf, v95, v92, &v82, a15);
      }
      else
      {
        if ( (v33 & 0x2000000) != 0 )
        {
          if ( v47 && v93 )
          {
            updated = bSpDwmUpdateDragRectShape(
                        v91,
                        (struct DWMSPRITE *)v19,
                        FirstLSurf,
                        (struct tagPOINT *)(unsigned int)v79,
                        v93,
                        &v82,
                        &v80);
            LODWORD(v79) = updated;
          }
LABEL_88:
          if ( updated )
          {
            v38 = v80;
            v55 = *((_DWORD *)v80 + 63);
            v56 = v55;
            if ( (v55 & 1) != 0 && (v55 & 0x40) == 0 )
            {
              v56 = v55 | 0x40;
              *((_DWORD *)v80 + 63) = v55 | 0x40;
            }
            v57 = *((_QWORD *)v38 + 23);
            if ( v57 && (*(_DWORD *)(v57 + 92) & 1) == 0 && !*(_QWORD *)(v57 + 224) )
              *((_DWORD *)v38 + 63) = v56 | 8;
            goto LABEL_48;
          }
LABEL_47:
          v38 = v80;
LABEL_48:
          if ( *(_QWORD *)(v19 + 40) )
          {
            v39 = (_OWORD *)v84;
          }
          else
          {
            vSpDwmGetMiniWinInfoForNonWindowSprite(v111, v19 + 56);
            v39 = v111;
            v84 = (__int64)v111;
          }
          if ( updated && !v78 && (v39 || (*((_DWORD *)v38 + 63) & 8) != 0) )
          {
            if ( (*((_DWORD *)v38 + 63) & 8) != 0 )
              SFMLOGICALSURFACE::StartSfmStateTracking(v38, v91, gpSfmState);
            SFMLOGICALSURFACE::GetRedirectionInfo(v38, (enum _HLSURF_REDIRECTIONSTYLE *)&v87, &v86, &v85, 0LL, 0LL);
            v58 = *((_DWORD *)v38 + 63) & 0xC;
            v59 = *(_DWORD *)(v19 + 164) & 1 | (2
                                              * (*((_DWORD *)v38 + 63) & 1 | *(_DWORD *)(v19 + 164) & 0x40 | (4 * (*(_DWORD *)(v19 + 164) & 0xE))));
            v81 = *(SFMLOGICALSURFACE **)(v19 + 104);
            v60 = v58 | v59;
            v62 = __OFSUB__(*(_DWORD *)(v19 + 116), 1);
            v61 = *(_DWORD *)(v19 + 116) - 1 < 0;
            *(_QWORD *)(v19 + 104) = 0LL;
            v101 = *(_QWORD *)v38;
            v63 = v61 == v62;
            v98 = *(void **)v19;
            v64 = (void *)UserReferenceDwmApiPort();
            DwmAsyncUpdateSprite(
              v64,
              (__int64)v98,
              v101,
              v60,
              v19 + 72,
              (__int128 *)v84,
              v87,
              v86,
              v85,
              v63,
              (__int64)v81);
          }
          if ( v31 )
          {
            ExReleasePushLockExclusiveEx(v31, 0LL);
            KeLeaveCriticalRegion();
          }
          if ( v104 )
          {
            _InterlockedDecrement((volatile signed __int32 *)v104 + 3);
            if ( v105 == 1 )
            {
              v65 = (HDEV *)v104;
              v66 = *((_DWORD *)v104 + 61);
              if ( (v66 & 0x80u) != 0 && (v66 & 8) != 0 && (v66 & 0x10) != 0 )
              {
                *((_DWORD *)v104 + 61) = v66 & 0xFFFFFFEF;
                SFMLOGICALSURFACE::StopSfmStateTracking(v104, 0LL, gpSfmState);
                v65 = (HDEV *)v104;
              }
              v67 = *v65;
              if ( *v65 )
              {
                LOBYTE(v77) = 18;
                v65 = (HDEV *)HmgRemoveObject(v67, 0LL, 0LL, 1LL, v77, 0LL);
              }
              if ( v65 )
              {
                SFMLOGICALSURFACE::DeInitialize(v65, (HLSURF)v67, 0);
                FreeObject(v65, 18LL);
                EtwLogicalSurfDestroyEvent(v67, 0LL);
              }
            }
          }
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v103);
          v68 = v80;
          v69 = 0;
          v70 = *((_QWORD *)v80 + 23);
          if ( v70 )
            v84 = *(_QWORD *)(v70 + 8);
          else
            v84 = 0LL;
          v22 = *(void **)v19;
          v98 = *(void **)v19;
          if ( v70 && (*(_DWORD *)(v70 + 92) & 1) != 0 )
            v69 = 1;
          v71 = v82 & 0xFFFFFFFE;
          if ( !v69 )
            v71 = v82;
          v72 = v71;
          if ( (v71 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)v80 + 63)) )
          {
            GreAddLogicalSurfaceToDirtyQueue(*(HLSURF *)v68);
            v72 = v71 & 0xFFFFFFFE;
          }
          if ( v72 )
          {
            v73 = (void *)UserReferenceDwmApiPort();
            DwmAsyncDirtySprite(v73, (__int64)v98, v74, v72, v84);
          }
          if ( v68 != (SFMLOGICALSURFACE *)-256LL )
          {
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx((char *)v68 + 256, 0LL);
          }
          *((_DWORD *)v68 + 63) &= ~8u;
          if ( v68 != (SFMLOGICALSURFACE *)-256LL )
          {
            ExReleasePushLockExclusiveEx((char *)v68 + 256, 0LL);
            KeLeaveCriticalRegion();
          }
          if ( v19 != -88 )
          {
            ExReleasePushLockExclusiveEx(v19 + 88, 0LL);
            KeLeaveCriticalRegion();
          }
          v16 = v88;
LABEL_136:
          if ( v19 )
            DEC_SHARE_REF_CNT(v19, v22);
          v15 = v83;
          LODWORD(v19) = (_DWORD)v79;
          v17 = v113;
          goto LABEL_139;
        }
        if ( !v94 || !v93 )
          goto LABEL_88;
        DCOBJ::DCOBJ((DCOBJ *)v107, v95);
        LODWORD(v79) = 0;
        if ( v107[0] && !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v107) )
        {
          v51 = *(_QWORD *)(v50 + 496);
          y = v94->y;
          v53 = (struct _RECTL *)&v110;
          v109.left = v94->x;
          v109.right = v93->cx + v109.left;
          v54 = y + v93->cy;
          v109.top = y;
          if ( !v92 )
            v53 = 0LL;
          v109.bottom = v54;
          LODWORD(v79) = bSpDwmUpdateSpriteShape(
                           v91,
                           (struct DWMSPRITE *)v19,
                           FirstLSurf,
                           (struct _SURFOBJ *)(v51 + 24),
                           &v109,
                           *(struct PALETTE **)(v51 + 128),
                           &v82,
                           v53,
                           &v80);
        }
        MDCOBJ::~MDCOBJ((MDCOBJ *)v107);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v108);
      }
      updated = (int)v79;
      goto LABEL_88;
    }
    v35 = v83;
    goto LABEL_42;
  }
LABEL_139:
  if ( v89 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( v20 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  if ( !v90 )
    return v19;
  v18 = v91;
LABEL_146:
  v76 = v17 | 0x200000;
  if ( !v16 )
    v76 = v17;
  return GdiUpdateSprite(v18, v100, v97, v102, v96, v93, v95, v94, a9, v15, v76, v92);
}
