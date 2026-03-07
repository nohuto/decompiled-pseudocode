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
        int a15,
        unsigned int a16)
{
  void *v16; // r14
  struct _BLENDFUNCTION *v17; // rbx
  unsigned int v18; // esi
  struct tagRECT *v19; // rdi
  unsigned int v20; // r15d
  Gre::Base *v21; // rcx
  unsigned int v22; // r13d
  Gre::Base *v23; // rcx
  int v24; // ebx
  __int64 v25; // rdi
  int v26; // r14d
  Gre::Base *v27; // rcx
  Gre::Base *v28; // rcx
  void *v29; // rsi
  struct Gre::Base::SESSION_GLOBALS *v30; // r15
  __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // r15
  __int64 v38; // r13
  struct SFMLOGICALSURFACE *v39; // rdi
  void *v40; // rax
  struct SFMLOGICALSURFACE *FirstLSurf; // rbx
  _QWORD *v42; // r12
  struct tagRECT v43; // xmm0
  unsigned int *p_BlendOp; // r8
  __int64 v45; // rdx
  unsigned int v46; // r14d
  unsigned __int64 v47; // rcx
  __int64 v48; // r10
  __int64 v49; // r8
  int v50; // r11d
  int v51; // r9d
  struct tagPOINT *v52; // rdi
  int v53; // eax
  int v54; // r9d
  unsigned int v55; // eax
  _BYTE *v56; // rax
  SFMLOGICALSURFACE *v57; // r12
  int v58; // eax
  HLSURF v59; // rbx
  struct SFMLOGICALSURFACE *v60; // r12
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rbx
  int v64; // eax
  int v65; // esi
  unsigned int v66; // ebx
  int v67; // r12d
  Gre::Base *v68; // rcx
  Gre::Base *v70; // rcx
  _DWORD *v71; // rdx
  bool v72; // sf
  bool v73; // of
  void *v74; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  struct Gre::Base::SESSION_GLOBALS *v78; // rbx
  struct Gre::Base::SESSION_GLOBALS *v79; // rbx
  struct Gre::Base::SESSION_GLOBALS *v80; // rbx
  __int64 v81; // rax
  LONG x; // eax
  int v83; // edx
  unsigned int v84; // eax
  struct Gre::Base::SESSION_GLOBALS *v85; // rax
  int v86; // r9d
  void *v87; // rax
  __int64 v88; // r8
  bool v89; // dl
  __int64 v90; // rdi
  int v91; // eax
  HSURF v92; // rcx
  SURFACE *v93; // rax
  unsigned int updated; // eax
  __int64 v95; // r9
  struct tagRECT *v96; // r10
  __int64 v97; // r8
  LONG y; // edx
  struct _RECTL *v99; // rax
  LONG v100; // ecx
  unsigned int v101; // eax
  __int64 v102; // rax
  __int64 v103; // rdx
  struct Gre::Base::SESSION_GLOBALS *v104; // rax
  int v105; // [rsp+20h] [rbp-E0h]
  int v106; // [rsp+60h] [rbp-A0h]
  unsigned int v107; // [rsp+64h] [rbp-9Ch]
  unsigned int v108; // [rsp+64h] [rbp-9Ch]
  int v109; // [rsp+64h] [rbp-9Ch]
  unsigned int v110; // [rsp+68h] [rbp-98h]
  unsigned int v111; // [rsp+68h] [rbp-98h]
  char v112; // [rsp+6Ch] [rbp-94h]
  int v113; // [rsp+70h] [rbp-90h]
  int v114; // [rsp+70h] [rbp-90h]
  unsigned int v115; // [rsp+74h] [rbp-8Ch]
  unsigned int v116; // [rsp+74h] [rbp-8Ch]
  int v117; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v118; // [rsp+7Ch] [rbp-84h] BYREF
  int v119; // [rsp+80h] [rbp-80h]
  int v120[2]; // [rsp+88h] [rbp-78h]
  int *v121; // [rsp+90h] [rbp-70h]
  int v122; // [rsp+98h] [rbp-68h]
  struct SFMLOGICALSURFACE *v123; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT *v124; // [rsp+A8h] [rbp-58h]
  void *v125; // [rsp+B0h] [rbp-50h]
  HDEV v126; // [rsp+B8h] [rbp-48h]
  __int64 v127; // [rsp+C0h] [rbp-40h]
  __int64 v128; // [rsp+C8h] [rbp-38h]
  struct tagSIZE *v129; // [rsp+D0h] [rbp-30h]
  struct Gre::Base::SESSION_GLOBALS *v130; // [rsp+E0h] [rbp-20h]
  struct tagPOINT *v131; // [rsp+E8h] [rbp-18h]
  HDC v132; // [rsp+F0h] [rbp-10h]
  struct tagPOINT *v133; // [rsp+F8h] [rbp-8h]
  HWND v134; // [rsp+100h] [rbp+0h]
  HDEV v135; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v136; // [rsp+110h] [rbp+10h]
  struct _BLENDFUNCTION *v137; // [rsp+118h] [rbp+18h]
  __int64 v138; // [rsp+120h] [rbp+20h]
  SFMLOGICALSURFACE *v139; // [rsp+128h] [rbp+28h]
  _QWORD v140[2]; // [rsp+130h] [rbp+30h] BYREF
  HDC v141; // [rsp+140h] [rbp+40h]
  _QWORD Buffer[2]; // [rsp+148h] [rbp+48h] BYREF
  struct _RECTL v143; // [rsp+158h] [rbp+58h] BYREF
  struct tagRECT v144; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v145[144]; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v146; // [rsp+2C0h] [rbp+1C0h]
  unsigned int v147; // [rsp+2C0h] [rbp+1C0h]

  v16 = a3;
  v17 = a10;
  v18 = 0;
  v19 = a12;
  v133 = a5;
  v20 = a11 & 0x200000;
  v129 = a6;
  v134 = a2;
  v132 = a7;
  v125 = a3;
  v126 = a1;
  v127 = (__int64)a13;
  v131 = a8;
  v141 = a4;
  v121 = (int *)a10;
  v137 = a10;
  v124 = a12;
  v110 = 0;
  v119 = 1;
  v136 = a11 & 0x200000;
  memset_0(v145, 0, 0x88uLL);
  v117 = 0;
  v118 = 0;
  v122 = 0;
  v112 = 0;
  v22 = a11 & 0xFFDFFFFF;
  v130 = Gre::Base::Globals(v21);
  v146 = v22;
  v115 = v22;
  if ( !a14 || !*((_QWORD *)Gre::Base::Globals(v23) + 38) )
    goto LABEL_103;
  if ( v20 )
  {
    v24 = 0;
    v25 = *((_QWORD *)v130 + 9);
    v26 = 0;
    v135 = v126;
    v106 = 0;
    GreAcquireSemaphoreSharedInternal(v25);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v25);
  }
  else
  {
    GreAcquireSemaphore(*((_QWORD *)v130 + 15));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v130 + 15), 2LL);
    v135 = v126;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread
      && (v77 = *ThreadWin32Thread) != 0
      && ((v76 = 1LL, v26 = 0, v24 = 1, v106 = 1, *(_DWORD *)(v77 + 104)) || (v106 = 1, *(_DWORD *)(v77 + 108))) )
    {
      v25 = *((_QWORD *)v130 + 9);
      GreAcquireSemaphore(v25);
    }
    else
    {
      v78 = Gre::Base::Globals((Gre::Base *)v76);
      GreAcquireSemaphore(*((_QWORD *)v78 + 14));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v78 + 14), 5LL);
      v25 = *((_QWORD *)v130 + 9);
      v106 = 1;
      v26 = 1;
      v24 = 1;
      GreAcquireSemaphore(v25);
    }
  }
  if ( !*((_QWORD *)Gre::Base::Globals(v27) + 38) )
    goto LABEL_156;
  v29 = v125;
  v107 = v24;
  *(_QWORD *)v120 = v25;
  v113 = v26;
  if ( v134 )
  {
    Buffer[1] = 0LL;
    v29 = 0LL;
    v30 = Gre::Base::Globals(v28);
    Buffer[0] = v134;
    v31 = *((_QWORD *)v30 + 38) + 72LL;
    if ( *((_QWORD *)v30 + 38) != -72LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v31, 0LL);
    }
    v32 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v30 + 38), Buffer);
    if ( v32 )
      v29 = (void *)v32[1];
    if ( v31 )
    {
      ExReleasePushLockExclusiveEx(v31, 0LL);
      KeLeaveCriticalRegion();
    }
    v24 = v106;
  }
  if ( !v29 || (Gre::Base::Globals(v28), LOBYTE(v33) = 15, v34 = HmgShareLockCheck(v29, v33), (v36 = v34) == 0) )
  {
    v106 = v24;
    v18 = 0;
LABEL_156:
    v67 = v119;
    goto LABEL_73;
  }
  v138 = v34 + 140;
  v37 = v34;
  if ( (*(_DWORD *)(v34 + 140) & 0x10) != 0 )
  {
    v66 = a9;
    v65 = v107;
LABEL_154:
    v106 = v65;
    goto LABEL_72;
  }
  v38 = v34 + 88;
  v119 = 0;
  v110 = 1;
  if ( v34 != -88 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v36 + 88, 0LL);
  }
  v39 = *(struct SFMLOGICALSURFACE **)(v36 + 144);
  v40 = *(void **)v36;
  FirstLSurf = v39;
  v123 = v39;
  v125 = v40;
  v139 = 0LL;
  if ( v39 && *(_QWORD *)v39 )
  {
    LOBYTE(v35) = 18;
    v139 = (SFMLOGICALSURFACE *)HmgLock(*(_QWORD *)v39, v35);
  }
  v42 = (_QWORD *)((char *)v39 + 256);
  if ( v39 != (struct SFMLOGICALSURFACE *)-256LL )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v39 + 256, 0LL);
  }
  if ( v124 )
  {
    v43 = *v124;
    v124 = &v144;
    v144 = v43;
  }
  if ( v146 == 0x2000000 )
  {
    v121 = &v117;
    v117 = 33488896;
    v89 = v129 || v133;
    vSpDwmUpdateSpriteVisibility((struct DWMSPRITE *)v36, v89);
    v45 = 570425346LL;
    p_BlendOp = (unsigned int *)v121;
    goto LABEL_97;
  }
  p_BlendOp = (unsigned int *)&v137->BlendOp;
  v121 = (int *)v137;
  v45 = v115;
  if ( (v115 & 0x20000000) != 0 )
  {
LABEL_97:
    v46 = a9;
    LODWORD(v45) = v45 & 0xDFFFFFFF;
    goto LABEL_30;
  }
  if ( (v115 & 0x40000000) == 0 )
  {
    v121 = (int *)v137;
    v147 = v115;
    if ( v115 )
    {
      v46 = a9;
      goto LABEL_31;
    }
  }
  v45 = *(unsigned int *)(v36 + 72);
  p_BlendOp = (unsigned int *)(v36 + 76);
  v46 = *(_DWORD *)(v36 + 80);
  v121 = (int *)(v36 + 76);
LABEL_30:
  v147 = v45;
LABEL_31:
  v116 = v46;
  v47 = v45 & 2;
  if ( (v45 & 2) != 0 && (!p_BlendOp || (*((_BYTE *)p_BlendOp + 3) & 1) != 0 && (*((_DWORD *)v39 + 63) & 1) != 0) )
  {
    v47 = v107;
    v26 = v113;
    v49 = 0LL;
    v25 = *(_QWORD *)v120;
    v37 = v36;
    v110 = 0;
    v106 = v107;
    goto LABEL_50;
  }
  *(_DWORD *)(v36 + 72) = v45;
  if ( (v45 & 2) != 0 )
  {
    if ( *(_BYTE *)(v36 + 79) != *((_BYTE *)p_BlendOp + 3) )
    {
      v84 = bSpDwmCreateLogicalSurface(v126, (struct DWMSPRITE *)v36, v39, 0LL, &v123);
      v45 = v147;
      p_BlendOp = (unsigned int *)v121;
      FirstLSurf = v123;
      v110 = v84;
    }
    *(_DWORD *)(v36 + 76) = *p_BlendOp;
    v47 = *p_BlendOp;
    *((_DWORD *)FirstLSurf + 61) |= 0x40u;
    *((_DWORD *)FirstLSurf + 60) = v47;
  }
  if ( (v45 & 1) != 0 )
  {
    *(_DWORD *)(v36 + 80) = v46;
    if ( *((_QWORD *)v39 + 23) )
    {
      if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v39) )
      {
        if ( !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v135) )
        {
          v90 = *((_QWORD *)v39 + 23);
          if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v135) )
          {
            v91 = *(_DWORD *)(v90 + 92);
            if ( (v91 & 0x20) == 0 )
            {
              v92 = *(HSURF *)(v90 + 8);
              *(_DWORD *)(v90 + 92) = v91 | 0x20;
              pConvertDfbSurfaceToDibPostNKAPC(v92);
              v112 = 1;
            }
          }
          else
          {
            v93 = (SURFACE *)pProcessDfbSurfaces(v90 - 24, 1LL, 0LL);
            if ( v93 )
            {
              FirstLSurf = SURFACE::GetFirstLSurf(v93);
              v123 = FirstLSurf;
            }
          }
        }
        v45 = v147;
      }
    }
  }
  v48 = *(_QWORD *)v120;
  v37 = v36;
  v49 = v110;
  v25 = *(_QWORD *)v120;
  v50 = v113;
  v26 = v113;
  v51 = v107;
  v106 = v107;
  if ( v110 )
  {
    v52 = v133;
    if ( v133 )
    {
      x = v133->x;
      v47 = (unsigned int)(v133->x - *(_DWORD *)(v36 + 56));
      v83 = v133->y - *(_DWORD *)(v36 + 60);
      *(_DWORD *)(v36 + 68) += v83;
      *(_DWORD *)(v36 + 64) += v47;
      *(_DWORD *)(v36 + 60) += v83;
      v45 = v147;
      *(_DWORD *)(v36 + 56) = x;
    }
    if ( (*((_DWORD *)FirstLSurf + 63) & 1) != 0 )
    {
      v53 = v107;
      v106 = v107;
      v25 = v48;
      if ( v124 )
      {
        v106 = v107;
        if ( *((_QWORD *)FirstLSurf + 23) )
        {
          vSpUpdateDirtyRgn((struct DWMSPRITE *)v36, FirstLSurf, v132, v124, &v118, a15);
          v53 = v107;
          v49 = v110;
          v106 = v107;
        }
      }
      goto LABEL_45;
    }
    if ( (v45 & 0x2000000) != 0 )
    {
      if ( v52 && v129 )
      {
        updated = bSpDwmUpdateDragRectShape(
                    v126,
                    (struct DWMSPRITE *)v36,
                    FirstLSurf,
                    (struct tagPOINT *)v107,
                    v129,
                    &v118,
                    &v123);
        v51 = v107;
        v49 = updated;
        v48 = *(_QWORD *)v120;
        v50 = v113;
        FirstLSurf = v123;
      }
      v26 = v50;
      v106 = v51;
      v25 = v48;
    }
    else
    {
      v25 = v48;
      v106 = v107;
      if ( v131 )
      {
        v106 = v107;
        if ( v129 )
        {
          DCOBJ::DCOBJ((DCOBJ *)v140, v132);
          v47 = v107;
          v49 = 0LL;
          v111 = 0;
          v106 = v107;
          if ( v140[0] )
          {
            if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v140) )
            {
              v97 = *(_QWORD *)(v95 + 496);
              y = v131->y;
              v99 = (struct _RECTL *)&v144;
              v143.left = v131->x;
              v143.right = v129->cx + v143.left;
              v100 = y + v129->cy;
              v143.top = y;
              if ( v124 == v96 )
                v99 = (struct _RECTL *)v96;
              v143.bottom = v100;
              v101 = bSpDwmUpdateSpriteShape(
                       v126,
                       (struct DWMSPRITE *)v36,
                       FirstLSurf,
                       (struct _SURFOBJ *)(v97 + 24),
                       &v143,
                       *(struct PALETTE **)(v97 + 128),
                       &v118,
                       v99,
                       &v123);
              v47 = v107;
              v49 = v101;
              v95 = v140[0];
              v37 = v36;
              FirstLSurf = v123;
              v106 = v107;
              v111 = v101;
            }
            if ( v95 )
            {
              XDCOBJ::vUnlockFast((XDCOBJ *)v140);
              v49 = v111;
            }
          }
        }
      }
    }
    v110 = v49;
    if ( (_DWORD)v49 )
    {
      v53 = v106;
LABEL_45:
      v54 = v53;
      if ( a16 )
      {
        v102 = *((_QWORD *)FirstLSurf + 23);
        v103 = v102 - 24;
        if ( !v102 )
          v103 = 0LL;
        if ( v103 && *(_DWORD *)(v103 + 656) != a16 )
          *(_DWORD *)(v103 + 656) = a16;
      }
      v55 = *((_DWORD *)FirstLSurf + 63);
      v47 = v55;
      LOBYTE(v47) = v55 & 0x41;
      if ( (v55 & 0x41) == 1 )
      {
        v55 |= 0x40u;
        *((_DWORD *)FirstLSurf + 63) = v55;
      }
      v45 = *((_QWORD *)FirstLSurf + 23);
      if ( v45 )
      {
        v47 = *(unsigned int *)(v45 + 92);
        if ( (v47 & 1) == 0 )
        {
          v110 = v49;
          v106 = v54;
          if ( !*(_QWORD *)(v45 + 224) )
          {
            v110 = v49;
            *((_DWORD *)FirstLSurf + 63) = v55 | 8;
            v106 = v54;
          }
        }
      }
    }
  }
LABEL_50:
  if ( *(_QWORD *)(v37 + 40) )
  {
    v56 = (_BYTE *)v127;
  }
  else
  {
    vSpDwmGetMiniWinInfoForNonWindowSprite(v145, v37 + 56);
    v56 = v145;
    v127 = (__int64)v145;
  }
  if ( (_DWORD)v49 && !v112 && (v56 || (*((_DWORD *)FirstLSurf + 63) & 8) != 0) )
  {
    v70 = (Gre::Base *)*((unsigned int *)FirstLSurf + 63);
    if ( ((unsigned __int8)v70 & 8) != 0 )
    {
      v85 = Gre::Base::Globals(v70);
      SFMLOGICALSURFACE::StartSfmStateTracking(FirstLSurf, v126, *((struct SfmState **)v85 + 809), v86);
      LODWORD(v70) = *((_DWORD *)FirstLSurf + 63);
    }
    v71 = (_DWORD *)*((_QWORD *)FirstLSurf + 23);
    if ( v71 )
    {
      v114 = v71[8];
      v109 = v71[9];
      if ( (v71[23] & 1) != 0 )
      {
        v122 = 2;
      }
      else if ( (v71[22] & 0x800) != 0 )
      {
        v122 = 1;
      }
    }
    else
    {
      v122 = 0;
      v114 = 0;
      v109 = 0;
    }
    v138 = *(_QWORD *)(v37 + 104);
    v73 = __OFSUB__(*(_DWORD *)(v37 + 116), 1);
    v72 = *(_DWORD *)(v37 + 116) - 1 < 0;
    *(_QWORD *)(v37 + 104) = 0LL;
    v120[0] = v72 == v73;
    v137 = *(struct _BLENDFUNCTION **)v123;
    v128 = *(_QWORD *)v37;
    v74 = (void *)UserReferenceDwmApiPort((unsigned __int8)v70 & 0xC, (unsigned __int8)v70 & 1, 1LL);
    DwmAsyncUpdateSprite(v74, v37 + 72, v127, v122, v114, v109, v120[0], v138);
  }
  if ( v42 )
  {
    ExReleasePushLockExclusiveEx(v42, 0LL);
    KeLeaveCriticalRegion();
  }
  v57 = v139;
  if ( v139 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v139 + 3);
    v58 = *((_DWORD *)v57 + 61);
    if ( (v58 & 0x80u) != 0 && (v58 & 8) != 0 && (v58 & 0x10) != 0 )
    {
      *((_DWORD *)v57 + 61) = v58 & 0xFFFFFFEF;
      v104 = Gre::Base::Globals((Gre::Base *)v47);
      SFMLOGICALSURFACE::StopSfmStateTracking(v57, 0LL, *((struct SfmState **)v104 + 809));
    }
    v59 = *(HLSURF *)v57;
    if ( !*(_QWORD *)v57
      || (LOBYTE(v105) = 18, (v57 = (SFMLOGICALSURFACE *)HmgRemoveObject(v59, 0LL, 0LL, 1LL, v105, 0LL)) != 0LL) )
    {
      SFMLOGICALSURFACE::DeInitialize(v57, v59);
      FreeObject(v57, 18LL);
      EtwLogicalSurfDestroyEvent(v59, 0LL);
    }
  }
  v60 = v123;
  v61 = v118;
  v108 = v118;
  v62 = *((_QWORD *)v123 + 23);
  if ( v62 )
  {
    v45 = *(_QWORD *)v36;
    v63 = *(_QWORD *)(v62 + 8);
    v64 = *(_DWORD *)(v62 + 92);
    v65 = v106;
    v127 = v45;
    if ( (v64 & 1) != 0 )
    {
      v61 = v118 & 0xFFFFFFFE;
      v127 = v45;
      v108 = v118 & 0xFFFFFFFE;
    }
  }
  else
  {
    v81 = *(_QWORD *)v36;
    v63 = 0LL;
    v65 = v106;
    v127 = v81;
  }
  if ( (v61 & 1) != 0 )
  {
    if ( (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)v123 + 63)) )
    {
      GreAddLogicalSurfaceToDirtyQueue(*(HLSURF *)v60);
      v61 = v108 & 0xFFFFFFFE;
      v108 &= ~1u;
    }
    else
    {
      v61 = v108;
    }
  }
  if ( (_DWORD)v61 )
  {
    v87 = (void *)UserReferenceDwmApiPort(v61, v45, v49);
    DwmAsyncDirtySprite(v87, v127, v88, v108, v63);
  }
  if ( v60 == (struct SFMLOGICALSURFACE *)-256LL )
  {
    MEMORY[0xFFFFFFFFFFFFFFFC] &= ~8u;
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v60 + 256, 0LL);
    *((_DWORD *)v60 + 63) &= ~8u;
    ExReleasePushLockExclusiveEx((char *)v60 + 256, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v38 )
  {
    v22 = v147;
    v66 = v116;
    goto LABEL_154;
  }
  ExReleasePushLockExclusiveEx(v38, 0LL);
  KeLeaveCriticalRegion();
  v22 = v147;
  v66 = v116;
LABEL_72:
  v18 = v110;
  v67 = v119;
  DEC_SHARE_REF_CNT(v37);
  a9 = v66;
LABEL_73:
  if ( v106 )
  {
    v79 = v130;
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
    GreReleaseSemaphoreInternal(*((_QWORD *)v79 + 15));
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(v25);
  if ( v26 )
  {
    v80 = Gre::Base::Globals(v68);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
    GreReleaseSemaphoreInternal(*((_QWORD *)v80 + 14));
  }
  if ( !v67 )
    return v18;
  v17 = (struct _BLENDFUNCTION *)v121;
  v19 = v124;
  v20 = v136;
  v16 = v125;
LABEL_103:
  if ( v20 )
    v22 |= 0x200000u;
  return GdiUpdateSprite(v126, v134, v16, v141, v133, v129, v132, v131, a9, v17, v22, v19);
}
