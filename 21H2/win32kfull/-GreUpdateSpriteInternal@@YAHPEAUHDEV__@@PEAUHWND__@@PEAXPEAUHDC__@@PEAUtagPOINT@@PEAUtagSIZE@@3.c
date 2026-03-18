/*
 * XREFs of ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0037EE0
 * Callers:
 *     GreUpdateSprite @ 0x1C0020E98 (GreUpdateSprite.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0037530 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GreUpdateSpriteCallout@@YAXPEAX@Z @ 0x1C026B710 (-GreUpdateSpriteCallout@@YAXPEAX@Z.c)
 * Callees:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00208A4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0038B90 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C0082838 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C00840D8 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0084420 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0084F94 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C0084FB8 (DwmAsyncDirtySprite.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0089C48 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C00B5D20 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     DwmAsyncUpdateSprite @ 0x1C00ED5E8 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00ED78C (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00ED824 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C0108254 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C010B3B8 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C01547A4 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0154F24 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015D684 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026C2D4 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C02B952C (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
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
  UINT_PTR v15; // r13
  struct _BLENDFUNCTION *v16; // rdi
  HDEV v17; // rsi
  unsigned int v18; // r12d
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  unsigned int v21; // r14d
  __int64 ThreadWin32Thread; // rax
  unsigned int v23; // r15d
  __int64 v24; // rsi
  __int64 v25; // rdx
  void *v26; // rbx
  void *v27; // rdi
  char *v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  SFMLOGICALSURFACE *v32; // r14
  SFMLOGICALSURFACE *v33; // rax
  SFMLOGICALSURFACE *FirstLSurf; // rbx
  __int64 v35; // rdx
  char *v36; // r14
  struct tagRECT v37; // xmm0
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // eax
  struct SFMLOGICALSURFACE *v41; // rcx
  __int64 updated; // r9
  unsigned int v43; // eax
  int v44; // ecx
  int v45; // eax
  SFMLOGICALSURFACE *v46; // rcx
  int v47; // eax
  SURFACE *v48; // rax
  struct tagPOINT *v49; // r10
  LONG x; // eax
  int v51; // edx
  __int64 v52; // r8
  __int64 v53; // r8
  LONG y; // edx
  struct _RECTL *v55; // rax
  LONG v56; // ecx
  int v57; // eax
  int v58; // ecx
  __int64 v59; // rdx
  _OWORD *v60; // rax
  SFMLOGICALSURFACE *v61; // r13
  int v62; // edx
  __int64 v63; // rcx
  void *v64; // rax
  SFMLOGICALSURFACE *v65; // rbx
  int v66; // eax
  __int64 v67; // r14
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  SFMLOGICALSURFACE *v72; // r14
  unsigned int v73; // ebx
  __int64 v74; // rax
  int v75; // eax
  void *v76; // rax
  int v77; // r13d
  unsigned int v79; // eax
  int v80; // [rsp+20h] [rbp-E0h]
  char v81; // [rsp+60h] [rbp-A0h]
  unsigned int v82; // [rsp+64h] [rbp-9Ch]
  unsigned int v83; // [rsp+64h] [rbp-9Ch]
  int v84; // [rsp+68h] [rbp-98h]
  int v85; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v86; // [rsp+70h] [rbp-90h] BYREF
  SFMLOGICALSURFACE *v87; // [rsp+78h] [rbp-88h]
  int v88; // [rsp+80h] [rbp-80h]
  SFMLOGICALSURFACE *v89; // [rsp+88h] [rbp-78h] BYREF
  __int64 v90; // [rsp+90h] [rbp-70h]
  int *v91; // [rsp+98h] [rbp-68h]
  struct tagRECT *v92; // [rsp+A0h] [rbp-60h]
  int v93; // [rsp+A8h] [rbp-58h]
  unsigned int v94; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int v95; // [rsp+B0h] [rbp-50h] BYREF
  int v96; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned int v97; // [rsp+B8h] [rbp-48h]
  void *v98; // [rsp+C0h] [rbp-40h]
  HDEV v99; // [rsp+C8h] [rbp-38h]
  struct tagSIZE *v100; // [rsp+D0h] [rbp-30h]
  __int64 v101; // [rsp+D8h] [rbp-28h]
  HDEV v102; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v103; // [rsp+F0h] [rbp-10h]
  struct tagPOINT *v104; // [rsp+F8h] [rbp-8h]
  HDC v105; // [rsp+100h] [rbp+0h]
  struct tagPOINT *v106; // [rsp+108h] [rbp+8h]
  HWND v107; // [rsp+110h] [rbp+10h]
  HDC v108; // [rsp+120h] [rbp+20h]
  _BYTE v109[32]; // [rsp+128h] [rbp+28h] BYREF
  SFMLOGICALSURFACE *v110; // [rsp+148h] [rbp+48h]
  int v111; // [rsp+150h] [rbp+50h]
  _QWORD Buffer[2]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v113[2]; // [rsp+168h] [rbp+68h] BYREF
  char v114[32]; // [rsp+178h] [rbp+78h] BYREF
  struct _RECTL v115; // [rsp+198h] [rbp+98h] BYREF
  struct tagRECT v116; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v117[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v118; // [rsp+240h] [rbp+140h]
  unsigned int v119; // [rsp+300h] [rbp+200h]

  v15 = 0LL;
  v16 = a10;
  v17 = a1;
  v106 = a5;
  v18 = 0;
  v100 = a6;
  v105 = a7;
  v99 = a1;
  v104 = a8;
  v90 = (__int64)a13;
  v19 = a11 & 0xFFDFFFFF;
  v92 = a12;
  v108 = a4;
  v20 = a11 & 0x200000;
  v98 = a3;
  v21 = a11 & 0xFFDFFFFF;
  v107 = a2;
  v91 = (int *)a10;
  v101 = (__int64)a10;
  v88 = 1;
  v97 = a11 & 0x200000;
  memset(v117, 0, sizeof(v117));
  v118 = 0LL;
  v85 = 0;
  v86 = 0;
  v95 = 0;
  v94 = 0;
  v96 = 0;
  v81 = 0;
  v119 = v19;
  v93 = v19;
  if ( !a14 || !g_pDwmState )
    goto LABEL_140;
  if ( !v20 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    v102 = v17;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread
      && ((v84 = 1, *(_DWORD *)(ThreadWin32Thread + 104)) || (v84 = 1, *(_DWORD *)(ThreadWin32Thread + 108))) )
    {
      v23 = 0;
      v24 = ghsemDwmState;
      if ( v97 )
        goto LABEL_12;
    }
    else
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v23 = 1;
      v84 = 1;
      v24 = ghsemDwmState;
    }
    GreAcquireSemaphore(v24);
    goto LABEL_13;
  }
  v102 = v17;
  v84 = 0;
  v24 = ghsemDwmState;
LABEL_12:
  GreAcquireSemaphoreSharedInternal(v24);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v24);
  v23 = 0;
LABEL_13:
  v103 = v84;
  if ( g_pDwmState )
  {
    v26 = v98;
    v27 = v98;
    if ( v107 )
    {
      v28 = (char *)g_pDwmState + 72;
      Buffer[1] = 0LL;
      Buffer[0] = v107;
      v27 = 0LL;
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v28, 0LL);
      }
      v29 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
      if ( v29 )
        v27 = (void *)v29[1];
      if ( g_pDwmState != (struct DwmState *)-72LL )
      {
        ExReleasePushLockExclusiveEx(v28, 0LL);
        KeLeaveCriticalRegion();
      }
      v26 = v98;
    }
    if ( !v27 || (LOBYTE(v25) = 15, v30 = HmgShareLockCheck(v27, v25), (v31 = v30) == 0) )
    {
      v16 = (struct _BLENDFUNCTION *)v101;
      v98 = v26;
      v19 = v21;
      goto LABEL_133;
    }
    if ( (*(_DWORD *)(v30 + 140) & 0x10) != 0 )
      goto LABEL_131;
    v88 = 0;
    v82 = 1;
    if ( v30 != -88 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v31 + 88, 0LL);
    }
    v32 = *(SFMLOGICALSURFACE **)(v31 + 144);
    v33 = *(SFMLOGICALSURFACE **)v31;
    FirstLSurf = v32;
    v89 = v32;
    v98 = v33;
    v87 = v32;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v109);
    v110 = 0LL;
    v111 = 1;
    if ( v32 && *(_QWORD *)v32 )
    {
      LOBYTE(v35) = 18;
      v110 = (SFMLOGICALSURFACE *)HmgLock(*(_QWORD *)v32, v35);
    }
    v36 = (char *)v32 + 256;
    if ( v36 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v36, 0LL);
    }
    if ( v92 )
    {
      v37 = *v92;
      v92 = &v116;
      v116 = v37;
    }
    if ( v119 == 0x2000000 )
    {
      v91 = &v85;
      v85 = 33488896;
      if ( v100 || v106 )
      {
        vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v31, 1);
        v38 = 33554434LL;
        v39 = (__int64)v91;
      }
      else
      {
        vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v31, 0);
        v38 = 33554434LL;
        v39 = (__int64)v91;
      }
    }
    else
    {
      v38 = (unsigned int)v93;
      v91 = (int *)v101;
      if ( (v93 & 0x20000000) != 0 )
      {
        LODWORD(v38) = v93 & 0xDFFFFFFF;
        v39 = v101;
      }
      else
      {
        if ( (v93 & 0x40000000) == 0 )
        {
          v91 = (int *)v101;
          v39 = v101;
          v119 = v93;
          if ( v93 )
          {
LABEL_45:
            if ( (v38 & 2) != 0 )
            {
              if ( !v39 || (v41 = FirstLSurf, (*(_BYTE *)(v39 + 3) & 1) != 0) && (*((_DWORD *)FirstLSurf + 63) & 1) != 0 )
              {
                updated = 0LL;
                v82 = 0;
                goto LABEL_93;
              }
            }
            else
            {
              v41 = FirstLSurf;
            }
            *(_DWORD *)(v31 + 72) = v38;
            if ( (v38 & 2) != 0 )
            {
              if ( *(_BYTE *)(v31 + 79) != *(_BYTE *)(v39 + 3) )
              {
                v43 = bSpDwmCreateLogicalSurface(v99, (struct DWMSPRITE *)v31, v41, 0LL, &v89);
                v38 = v119;
                v39 = (__int64)v91;
                FirstLSurf = v89;
                v82 = v43;
              }
              *(_DWORD *)(v31 + 76) = *(_DWORD *)v39;
              v44 = *(_DWORD *)v39;
              *((_DWORD *)FirstLSurf + 61) |= 0x40u;
              *((_DWORD *)FirstLSurf + 60) = v44;
            }
            if ( (v38 & 1) != 0 )
            {
              *(_DWORD *)(v31 + 80) = a9;
              if ( *((_QWORD *)v87 + 23) )
              {
                if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v87) )
                {
                  if ( !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v102) )
                  {
                    v87 = (SFMLOGICALSURFACE *)(*((_QWORD *)v87 + 23) - 24LL);
                    v45 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v102);
                    v46 = v87;
                    if ( v45 )
                    {
                      v47 = *((_DWORD *)v87 + 29);
                      if ( (v47 & 0x20) == 0 )
                      {
                        *((_DWORD *)v87 + 29) = v47 | 0x20;
                        pConvertDfbSurfaceToDibPostNKAPC(*((HSURF *)v46 + 4));
                        v81 = 1;
                      }
                    }
                    else
                    {
                      v48 = (SURFACE *)pProcessDfbSurfaces(v87, 1LL);
                      if ( v48 )
                      {
                        FirstLSurf = SURFACE::GetFirstLSurf(v48);
                        v89 = FirstLSurf;
                      }
                    }
                  }
                  v38 = v119;
                }
              }
            }
            updated = v82;
            if ( !v82 )
              goto LABEL_93;
            v49 = v106;
            if ( v106 )
            {
              x = v106->x;
              v51 = v106->y - *(_DWORD *)(v31 + 60);
              *(_DWORD *)(v31 + 64) += v106->x - *(_DWORD *)(v31 + 56);
              *(_DWORD *)(v31 + 68) += v51;
              *(_DWORD *)(v31 + 60) += v51;
              *(_DWORD *)(v31 + 56) = x;
            }
            if ( (*((_DWORD *)FirstLSurf + 63) & 1) != 0 )
            {
              if ( v92 && *((_QWORD *)FirstLSurf + 23) )
              {
                vSpUpdateDirtyRgn((struct DWMSPRITE *)v31, FirstLSurf, v105, v92, &v86, a15);
                updated = v82;
              }
            }
            else
            {
              if ( (v38 & 0x2000000) != 0 )
              {
                if ( v49 && v100 )
                  updated = (unsigned int)bSpDwmUpdateDragRectShape(
                                            v99,
                                            (struct DWMSPRITE *)v31,
                                            FirstLSurf,
                                            (struct tagPOINT *)v82,
                                            v100,
                                            &v86,
                                            &v89);
              }
              else if ( v104 && v100 )
              {
                DCOBJ::DCOBJ((DCOBJ *)v113, v105);
                v83 = 0;
                if ( v113[0] && !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v113) )
                {
                  v53 = *(_QWORD *)(v52 + 496);
                  y = v104->y;
                  v55 = (struct _RECTL *)&v116;
                  v115.left = v104->x;
                  v115.right = v100->cx + v115.left;
                  v56 = y + v100->cy;
                  v115.top = y;
                  if ( !v92 )
                    v55 = 0LL;
                  v115.bottom = v56;
                  v83 = bSpDwmUpdateSpriteShape(
                          v99,
                          (struct DWMSPRITE *)v31,
                          FirstLSurf,
                          (struct _SURFOBJ *)(v53 + 24),
                          &v115,
                          *(struct PALETTE **)(v53 + 128),
                          &v86,
                          v55,
                          &v89);
                }
                MDCOBJ::~MDCOBJ((MDCOBJ *)v113);
                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v114);
                updated = v83;
              }
              v82 = updated;
              if ( !(_DWORD)updated )
                goto LABEL_93;
              FirstLSurf = v89;
            }
            v57 = *((_DWORD *)FirstLSurf + 63);
            v58 = v57;
            if ( (v57 & 1) != 0 && (v57 & 0x40) == 0 )
            {
              v58 = v57 | 0x40;
              *((_DWORD *)FirstLSurf + 63) = v57 | 0x40;
            }
            v59 = *((_QWORD *)FirstLSurf + 23);
            if ( v59 && (*(_DWORD *)(v59 + 92) & 1) == 0 && !*(_QWORD *)(v59 + 224) )
              *((_DWORD *)FirstLSurf + 63) = v58 | 8;
LABEL_93:
            if ( *(_QWORD *)(v31 + 40) )
            {
              v60 = (_OWORD *)v90;
            }
            else
            {
              vSpDwmGetMiniWinInfoForNonWindowSprite(v117, v31 + 56, v38, updated);
              v60 = v117;
              v90 = (__int64)v117;
            }
            if ( (_DWORD)updated && !v81 )
            {
              v61 = v89;
              if ( v60 || (*((_DWORD *)v89 + 63) & 8) != 0 )
              {
                if ( (*((_DWORD *)v89 + 63) & 8) != 0 )
                  SFMLOGICALSURFACE::StartSfmStateTracking(v89, v99, gpSfmState, updated);
                SFMLOGICALSURFACE::GetRedirectionInfo(v61, (enum _HLSURF_REDIRECTIONSTYLE *)&v96, &v95, &v94, 0LL, 0LL);
                v62 = *((_DWORD *)v61 + 63);
                v63 = *(_QWORD *)(v31 + 104);
                *(_QWORD *)(v31 + 104) = 0LL;
                v101 = v63;
                v93 = *(_DWORD *)(v31 + 116);
                v87 = *(SFMLOGICALSURFACE **)v31;
                v64 = (void *)UserReferenceDwmApiPort(v62 & 1);
                DwmAsyncUpdateSprite(v64, v31 + 72, v90, v96, v95, v94, v93 >= 1, v101);
              }
              v15 = 0LL;
            }
            if ( v36 )
            {
              ExReleasePushLockExclusiveEx(v36, 0LL);
              KeLeaveCriticalRegion();
            }
            if ( v110 )
            {
              _InterlockedDecrement((volatile signed __int32 *)v110 + 3);
              if ( v111 == 1 )
              {
                v65 = v110;
                v66 = *((_DWORD *)v110 + 61);
                if ( (v66 & 0x80u) != 0 && (v66 & 8) != 0 && (v66 & 0x10) != 0 )
                {
                  *((_DWORD *)v110 + 61) = v66 & 0xFFFFFFEF;
                  SFMLOGICALSURFACE::StopSfmStateTracking(v110, 0LL, gpSfmState);
                  v65 = v110;
                }
                v67 = *(_QWORD *)v65;
                if ( *(_QWORD *)v65 )
                {
                  LOBYTE(v80) = 18;
                  v65 = (SFMLOGICALSURFACE *)HmgRemoveObject(v67, 0LL, 0LL, 1LL, v80, 0LL);
                }
                if ( v65 )
                {
                  SFMLOGICALSURFACE::DeInitialize(v65, v67, 0LL);
                  FreeObject(v65, 18LL);
                  EtwLogicalSurfDestroyEvent(v67, 0LL);
                }
              }
            }
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v109);
            v72 = v89;
            v73 = v86;
            v74 = *((_QWORD *)v89 + 23);
            if ( v74 )
            {
              v15 = *(_QWORD *)(v74 + 8);
              v71 = v23;
              v75 = *(_DWORD *)(v74 + 92);
              v70 = v24;
              v69 = *(_QWORD *)v31;
              v68 = v103;
              v90 = *(_QWORD *)v31;
              v84 = v103;
              if ( (v75 & 1) != 0 )
              {
                v73 = v86 & 0xFFFFFFFE;
                v90 = v69;
                v84 = v103;
              }
            }
            else
            {
              v90 = *(_QWORD *)v31;
            }
            if ( (v73 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)v89 + 63), v68, v70, v71) )
            {
              GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)v72, 1u, v15);
              v73 &= ~1u;
            }
            if ( v73 )
            {
              v76 = (void *)UserReferenceDwmApiPort(v69);
              DwmAsyncDirtySprite(v76, v15);
            }
            if ( v72 == (SFMLOGICALSURFACE *)-256LL )
            {
              MEMORY[0xFFFFFFFFFFFFFFFC] &= ~8u;
            }
            else
            {
              KeEnterCriticalRegion();
              ExAcquirePushLockExclusiveEx((char *)v72 + 256, 0LL);
              *((_DWORD *)v72 + 63) &= ~8u;
              ExReleasePushLockExclusiveEx((char *)v72 + 256, 0LL);
              KeLeaveCriticalRegion();
            }
            if ( v31 != -88 )
            {
              ExReleasePushLockExclusiveEx(v31 + 88, 0LL);
              KeLeaveCriticalRegion();
            }
            v18 = v82;
LABEL_131:
            DEC_SHARE_REF_CNT(v31);
            v19 = v119;
            v16 = (struct _BLENDFUNCTION *)v91;
            goto LABEL_133;
          }
        }
        v40 = *(_DWORD *)(v31 + 80);
        v39 = v31 + 76;
        v38 = *(unsigned int *)(v31 + 72);
        v91 = (int *)(v31 + 76);
        a9 = v40;
      }
    }
    v119 = v38;
    goto LABEL_45;
  }
LABEL_133:
  v77 = v88;
  if ( v84 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", v24);
  GreReleaseSemaphoreInternal(v24);
  if ( v23 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  if ( !v77 )
    return v18;
  v17 = v99;
  v20 = v97;
LABEL_140:
  v79 = v19 | 0x200000;
  if ( !v20 )
    v79 = v19;
  return GdiUpdateSprite(v17, v107, v98, v108, v106, v100, v105, v104, a9, v16, v79, v92);
}
