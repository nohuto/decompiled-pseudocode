/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C012A3C0
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0056EF0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C00066DC (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0050D28 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0051250 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0059450 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0060DC0 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0066060 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0083D50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     XLATEOBJ_iXlate @ 0x1C00C3AA0 (XLATEOBJ_iXlate.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C00F5BEC (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C010C698 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C012ACE4 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0285584 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02D7038 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C02D71A8 (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z @ 0x1C02DE63C (-bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z.c)
 */

__int64 __fastcall bSpUpdateShape(
        struct SPRITE *a1,
        unsigned int a2,
        HDC a3,
        HDC a4,
        unsigned int a5,
        struct _BLENDFUNCTION *a6,
        struct _POINTL *a7,
        struct tagSIZE *a8,
        struct _RECTL *a9)
{
  unsigned int v11; // r15d
  struct PALETTE *v13; // rax
  struct _POINTL v14; // r13
  __int64 v16; // rdx
  __int64 v17; // r8
  DC *v18; // rcx
  __int64 v19; // rbx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  LONG x; // edx
  int y; // r8d
  __int64 v26; // r14
  LONG v27; // r9d
  LONG v28; // r10d
  LONG v29; // eax
  LONG v30; // r9d
  struct _RECTL *v31; // r10
  LONG left; // r8d
  int top; // edx
  LONG right; // ecx
  int bottom; // eax
  struct SPRITE *v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // rcx
  struct PALETTE *v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rbx
  Gre::Base *v42; // rcx
  struct _BLENDFUNCTION *v43; // rdx
  int v44; // r14d
  int v45; // r12d
  unsigned int v46; // r13d
  __int64 v47; // r9
  __int64 v48; // rbx
  __int64 v49; // rdi
  struct _BLENDFUNCTION *v50; // r15
  __int64 v51; // rax
  int v52; // edx
  __int64 v53; // rax
  Gre::Base *v54; // rcx
  struct _XLATEOBJ *v55; // rbx
  struct PALETTE *v56; // r13
  struct SPRITE *v57; // rdi
  __int64 v58; // rcx
  struct _RECTL v59; // xmm0
  __int64 v60; // rax
  struct SURFACE *v61; // r14
  char v62; // r8
  int v63; // esi
  unsigned int NearestIndexFromColorref; // r15d
  struct _POINTL v65; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v67; // rbx
  __int64 v68; // rbx
  int v69; // edi
  __int64 *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbx
  int v73; // edi
  __int64 *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rbx
  int v80; // edi
  __int64 *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rbx
  int v87; // edi
  __int64 *v88; // rax
  __int64 v89; // rbx
  __int64 *v90; // rax
  struct _SURFOBJ *v91; // r8
  struct _RECTL *v92; // r14
  __int64 *v93; // rax
  __int64 v94; // rbx
  __int64 v95; // rbx
  int v96; // edi
  __int64 *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rbx
  int v100; // edi
  __int64 *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rbx
  __int64 *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rbx
  int v107; // edi
  __int64 *v108; // rax
  __int64 v109; // rax
  __int64 v110; // rbx
  __int64 *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rbx
  int v114; // edi
  __int64 *v115; // rax
  __int64 v116; // rbx
  __int64 *v117; // rax
  struct _SURFOBJ *v118; // rcx
  Gre::Base *v119; // rcx
  int cEntries; // eax
  __int64 v121; // rbx
  DC *v123; // rdx
  __int64 v124; // r8
  __int64 v125; // rax
  int v126; // edx
  unsigned int v127; // eax
  __int64 v128; // rax
  __int64 v129; // rax
  struct Gre::Base::SESSION_GLOBALS *v130; // rax
  int v131; // r8d
  unsigned int v132; // r10d
  ULONG v133; // eax
  int v134; // eax
  HSURF v135; // rcx
  Gre::Base *v136; // rcx
  Gre::Base *v137; // rcx
  __int64 v138; // [rsp+30h] [rbp-D0h]
  __int64 v139; // [rsp+38h] [rbp-C8h]
  struct _RECTL *v140; // [rsp+40h] [rbp-C0h]
  unsigned int v141; // [rsp+50h] [rbp-B0h]
  int v142; // [rsp+54h] [rbp-ACh]
  int v143; // [rsp+54h] [rbp-ACh]
  int v144; // [rsp+58h] [rbp-A8h]
  unsigned int v145; // [rsp+5Ch] [rbp-A4h]
  unsigned int v146; // [rsp+5Ch] [rbp-A4h]
  unsigned int v147; // [rsp+60h] [rbp-A0h]
  DC *v148; // [rsp+68h] [rbp-98h] BYREF
  __int64 v149; // [rsp+70h] [rbp-90h]
  struct PALETTE *v150; // [rsp+78h] [rbp-88h]
  struct _XLATEOBJ *XlateObject; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v152; // [rsp+88h] [rbp-78h] BYREF
  struct _BLENDFUNCTION v153; // [rsp+8Ch] [rbp-74h] BYREF
  struct SURFACE *v154; // [rsp+90h] [rbp-70h] BYREF
  int v155; // [rsp+98h] [rbp-68h]
  int v156; // [rsp+9Ch] [rbp-64h]
  __int64 v157; // [rsp+A0h] [rbp-60h] BYREF
  struct _BLENDFUNCTION *v158; // [rsp+A8h] [rbp-58h]
  int v159; // [rsp+B0h] [rbp-50h]
  __int64 v160; // [rsp+B8h] [rbp-48h]
  struct _RECTL *v161; // [rsp+C0h] [rbp-40h] BYREF
  struct SPRITE *v162; // [rsp+C8h] [rbp-38h]
  __int64 v163; // [rsp+D0h] [rbp-30h] BYREF
  struct _POINTL v164; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v165; // [rsp+E0h] [rbp-20h] BYREF
  int v166; // [rsp+E8h] [rbp-18h]
  int v167; // [rsp+ECh] [rbp-14h]
  _QWORD v168[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct _RECTL v169; // [rsp+100h] [rbp+0h] BYREF

  v11 = a2;
  v161 = a9;
  v145 = a2;
  v162 = a1;
  v13 = Gre::Base::Globals(a1);
  v14 = (struct _POINTL)*((_QWORD *)a1 + 2);
  v150 = v13;
  v147 = 0;
  v169.bottom = 0;
  v157 = **(_QWORD **)&v14;
  v144 = 0;
  v153 = 0;
  v164 = v14;
  if ( v11 == 0x2000000 )
  {
    *((_DWORD *)a1 + 1) = 0x2000000;
    *((_DWORD *)a1 + 24) = 0;
    *((_DWORD *)a1 + 26) = a8->cx;
    *((_DWORD *)a1 + 25) = 0;
    *((_DWORD *)a1 + 27) = a8->cy;
    *((_DWORD *)a1 + 38) = *(_DWORD *)(*(_QWORD *)&v14 + 108LL);
    *((_DWORD *)a1 + 39) = *(_DWORD *)(*(_QWORD *)&v14 + 112LL);
    return 1LL;
  }
  if ( !v11 )
  {
    v11 = *((_DWORD *)a1 + 1);
    a6 = (struct _BLENDFUNCTION *)((char *)a1 + 200);
    v145 = v11;
  }
  v158 = a6;
  if ( !a7 || !a8 || !a6 && (v11 & 2) != 0 )
    return 0LL;
  v148 = 0LL;
  v149 = 0LL;
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v148, a4);
  v18 = v148;
  if ( !v148 )
    return 0LL;
  if ( (*((_DWORD *)v148 + 11) & 2) == 0 )
  {
    if ( !(unsigned int)XDCOBJ::SaveAttributesHelper((XDCOBJ *)&v148) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v148 + 3);
      v18 = 0LL;
      v148 = 0LL;
      goto LABEL_144;
    }
    *((_DWORD *)v148 + 11) |= 2u;
    v18 = v148;
    LODWORD(v149) = 1;
  }
  if ( (*((_DWORD *)v18 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v18);
    v18 = v148;
  }
  if ( !v18 )
    return 0LL;
  v19 = *((_QWORD *)v18 + 62);
  if ( !v19 || (v20 = *((_DWORD *)v18 + 9), (v20 & 0x1000) != 0) && (v20 & 0x4000) == 0 )
  {
LABEL_144:
    if ( v18 )
LABEL_145:
      XDCOBJ::vUnlockFast((XDCOBJ *)&v148);
    return 0LL;
  }
  if ( *(_DWORD *)(v19 + 656) )
  {
    if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v19 + 656) )
      goto LABEL_152;
    v18 = v148;
  }
  v21 = *(_DWORD *)(v19 + 112);
  if ( (v21 & 0x800) != 0 )
  {
    v22 = UserSurfaceAccessCheck(*(_QWORD *)(v19 + 648), v16, v17);
  }
  else
  {
    if ( (v21 & 0x10000000) == 0 )
      goto LABEL_18;
    v22 = UserScreenAccessCheck(v18, v16, v17);
  }
  if ( !v22 )
  {
LABEL_152:
    v18 = v148;
    goto LABEL_144;
  }
  v18 = v148;
LABEL_18:
  v23 = *((_QWORD *)v18 + 6);
  if ( v23 != **(_QWORD **)&v14 && v23 != *(_QWORD *)(v157 + 24) )
    goto LABEL_144;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v168, a3);
    v123 = v148;
    if ( v168[0] )
    {
      v124 = *(_QWORD *)(v168[0] + 48LL);
      if ( v124 == *((_QWORD *)v148 + 6) && (v124 == **(_QWORD **)&v14 || v124 == *(_QWORD *)(v157 + 24)) )
      {
        v160 = *(_QWORD *)(v168[0] + 88LL);
        v125 = *(_QWORD *)(v168[0] + 976LL);
        v126 = *(_DWORD *)(v125 + 184);
        v155 = *(_DWORD *)(v125 + 176);
        LODWORD(v125) = *(_DWORD *)(v168[0] + 120LL);
        v156 = v126;
        v159 = v125;
        XDCOBJ::vUnlockFast((XDCOBJ *)v168);
        v18 = v148;
        goto LABEL_21;
      }
      XDCOBJ::vUnlockFast((XDCOBJ *)v168);
      v123 = v148;
    }
    if ( v123 )
      goto LABEL_145;
    return 0LL;
  }
  v156 = 0xFFFFFF;
  v155 = 0;
  v159 = 0;
  v160 = *((_QWORD *)v150 + 750);
LABEL_21:
  x = a7->x;
  y = a7->y;
  v26 = *((_QWORD *)v18 + 62);
  v27 = a7->x + a8->cx;
  v28 = y + a8->cy;
  v169.left = a7->x;
  v169.right = v27;
  v169.top = y;
  v169.bottom = v28;
  v154 = (struct SURFACE *)v26;
  if ( v26 )
  {
    if ( x >= 0 && y >= 0 && x < v27 && y < v28 )
    {
      v29 = *(_DWORD *)(v26 + 56);
      if ( v27 <= v29 )
      {
        v30 = *(_DWORD *)(v26 + 60);
        if ( v28 <= v30 )
        {
          v31 = v161;
          if ( v161 )
          {
            left = v161->left;
            if ( v161->left < 0 )
            {
              v161->left = 0;
              left = 0;
            }
            top = v31->top;
            if ( top < 0 )
            {
              v31->top = 0;
              top = 0;
            }
            right = v31->right;
            if ( v29 < right )
            {
              v31->right = v29;
              right = v29;
            }
            bottom = v31->bottom;
            if ( v30 < bottom )
            {
              v31->bottom = v30;
              bottom = v30;
            }
            if ( right < left )
            {
              v31->left = right;
            }
            else if ( bottom < top )
            {
              v31->top = bottom;
            }
          }
          GreAcquireSemaphoreSharedInternal(*(_QWORD *)(*(_QWORD *)&v14 + 120LL));
          EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)(*(_QWORD *)&v14 + 120LL));
          v36 = v162;
          v37 = *((_QWORD *)v162 + 16);
          if ( v37 && (*(_QWORD *)(v37 + 224) || (*(_DWORD *)(v37 + 92) & 1) != 0) )
          {
            W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v37 + 248));
            if ( (*(_DWORD *)v36 & 0x200) != 0 )
            {
              v165 = 0LL;
              v166 = *(_DWORD *)(v37 + 32);
              v167 = *(_DWORD *)(v37 + 36);
              ERECTL::operator*=(&v169.left, (int *)&v165);
            }
            W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v37 + 248));
          }
          v38 = *(_QWORD *)(v26 + 128);
          v39 = v150;
          XlateObject = 0LL;
          v40 = *((_QWORD *)v148 + 11);
          v41 = *((_QWORD *)v150 + 751);
          v163 = v38;
          if ( v38 )
            INC_SHARE_REF_CNT(v38);
          EtwTraceGreLockReleaseSemaphore(L"hsem");
          GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)&v14 + 120LL));
          if ( v11 != 3 || a6->AlphaFormat )
          {
            v43 = v158;
            v44 = v145;
            v45 = 0;
            v46 = 0;
            if ( v11 != 2 )
              goto LABEL_50;
          }
          else
          {
            v44 = 2;
            v153 = *a6;
            v153.AlphaFormat = 1;
            v158 = &v153;
            v45 = 1;
            v145 = 2;
            v127 = rgbFromColorref(v41, v40);
            v43 = &v153;
            v46 = v127;
          }
          if ( (v43->AlphaFormat & 1) != 0 )
          {
            v47 = *((_QWORD *)v39 + 750);
            v48 = *((_QWORD *)v39 + 751);
            v160 = v47;
            v152 = 6;
LABEL_51:
            v49 = v163;
            v50 = v43;
            v150 = (struct PALETTE *)v48;
            v141 = v46;
            if ( v163 )
            {
              v44 = v145;
              v142 = v45;
              if ( !v48 )
              {
                v142 = v45;
                v141 = v46;
                if ( (*(_DWORD *)(v163 + 24) & 0x800) != 0 )
                {
                  v129 = *(_QWORD *)(v47 + 80);
                  if ( !v129 || (v142 = v45, v141 = v46, v129 == *(_QWORD *)(v47 + 72)) )
                  {
                    v130 = Gre::Base::Globals((Gre::Base *)v145);
                    v50 = v158;
                    v44 = v145;
                    v141 = v46;
                    v55 = (struct _XLATEOBJ *)((char *)v130 + 6896);
                    XlateObject = (struct _XLATEOBJ *)((char *)v130 + 6896);
                    goto LABEL_62;
                  }
                }
              }
            }
            else if ( !v48
                   || (v42 = (Gre::Base *)v145, v44 = v145, v142 = v45, (*(_DWORD *)(v48 + 24) & 0x800) != 0)
                   && ((v128 = *(_QWORD *)(v47 + 80), v141 = v46, !v128)
                    || (v142 = v45, v141 = v46, v128 == *(_QWORD *)(v47 + 72))) )
            {
              v55 = (struct _XLATEOBJ *)((char *)Gre::Base::Globals(v42) + 6896);
              XlateObject = v55;
              goto LABEL_62;
            }
            if ( v163
              && v48
              && ((v51 = *(_QWORD *)(v163 + 120), v51 != v163)
                ? (v52 = *(_DWORD *)(v51 + 32))
                : (v52 = *(_DWORD *)(v163 + 32)),
                  (v53 = *(_QWORD *)(v48 + 120), v53 != v48)
                ? (v54 = (Gre::Base *)*(unsigned int *)(v53 + 32))
                : (v54 = (Gre::Base *)*(unsigned int *)(v48 + 32)),
                  v52 == (_DWORD)v54) )
            {
              v55 = (struct _XLATEOBJ *)((char *)Gre::Base::Globals(v54) + 6896);
              XlateObject = v55;
            }
            else
            {
              v131 = v142;
              if ( v163 )
              {
                v45 = v142;
                if ( v48 )
                {
                  if ( (unsigned int)EXLATEOBJ::bSearchCache(&XlateObject, v163, v48, v40, v47, v156, v155, 0, 0) )
                  {
                    v55 = XlateObject;
                    goto LABEL_62;
                  }
                  v47 = v160;
                  v131 = v142;
                  v132 = v141;
                }
                else
                {
                  v132 = v141;
                }
              }
              else
              {
                v131 = v142;
                v132 = v141;
              }
              LODWORD(v140) = 0;
              LODWORD(v139) = v155;
              LODWORD(v138) = v156;
              LODWORD(v158) = v131;
              v146 = v132;
              XlateObject = (struct _XLATEOBJ *)CreateXlateObject(0LL, v159, v49, v48, v40, v47, v138, v139, v140, 0);
              v55 = XlateObject;
              if ( !XlateObject )
                goto LABEL_126;
              if ( v49 )
              {
                v141 = v146;
                v143 = (int)v158;
                if ( v150 )
                {
                  v56 = v150;
                  if ( (XlateObject[3].flXlate & 0x200) != 0 )
                  {
                    v45 = (int)v158;
                  }
                  else
                  {
                    EXLATEOBJ::vAddToCache((Gre::Base *)&XlateObject, v49, (__int64)v150, v40, v160);
                    v45 = v143;
                  }
LABEL_63:
                  v57 = v162;
                  v147 = 1;
                  v58 = 1LL;
                  v59 = v169;
                  *((_DWORD *)v162 + 1) = v44;
                  *((struct _RECTL *)v57 + 6) = v59;
                  if ( v44 == 4 )
                  {
                    *(_DWORD *)v57 |= 8u;
                    v61 = v154;
                    NearestIndexFromColorref = v141;
                    v144 = 1;
LABEL_83:
                    v65 = v164;
                    v154 = **(struct SURFACE ***)&v164;
                    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                    if ( ThreadWin32Thread
                      && (v67 = *ThreadWin32Thread) != 0
                      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v154)
                      && (*(_DWORD *)(v67 + 104) || *(_DWORD *)(v67 + 108)) )
                    {
                      v68 = 0LL;
                      v69 = *(_DWORD *)(*(_QWORD *)&v65 + 100LL);
                      v70 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v70 )
                        v68 = *v70;
                      v71 = *(_QWORD *)(v68 + 280);
                      v72 = 0LL;
                      *(_DWORD *)(v71 + 12) = v69;
                      v73 = *(_DWORD *)(*(_QWORD *)&v65 + 104LL);
                      v74 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v74 )
                        v72 = *v74;
                      v75 = *(_QWORD *)(v72 + 280);
                      v76 = 0LL;
                      *(_DWORD *)(v75 + 16) = v73;
                      v77 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v77 )
                        v76 = *v77;
                      v78 = *(_QWORD *)(v76 + 280);
                      v79 = 0LL;
                      v80 = *(_DWORD *)(v78 + 12);
                      v81 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v81 )
                        v79 = *v81;
                      v82 = *(_QWORD *)(v79 + 280);
                      v83 = 0LL;
                      *(_DWORD *)(v82 + 20) = v80;
                      v84 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v84 )
                        v83 = *v84;
                      v85 = *(_QWORD *)(v83 + 280);
                      v86 = 0LL;
                      v87 = *(_DWORD *)(v85 + 16);
                      v88 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v88 )
                        v86 = *v88;
                      *(_DWORD *)(*(_QWORD *)(v86 + 280) + 24LL) = v87;
                      vSpTlSpriteStateDirectDriverAccess(*(struct _SPRITESTATE **)&v65, 0);
                      v89 = 0LL;
                      v90 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v90 )
                        v89 = *v90;
                      v57 = v162;
                      **(_DWORD **)(v89 + 280) = 0;
                    }
                    else
                    {
                      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v154) )
                        Gre::Base::Globals(v136);
                      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v65 + 32LL) + 88LL) = *(_DWORD *)(*(_QWORD *)&v65 + 100LL);
                      *(_WORD *)(*(_QWORD *)(*(_QWORD *)&v65 + 32LL) + 76LL) = *(_WORD *)(*(_QWORD *)&v65 + 104LL);
                      *(_DWORD *)(*(_QWORD *)&v65 + 88LL) = 0;
                    }
                    v164 = 0LL;
                    if ( v61 )
                      v91 = (struct _SURFOBJ *)((char *)v61 + 24);
                    else
                      v91 = 0LL;
                    v92 = v161;
                    bSpCreateShape(v57, &v164, v91, XlateObject, &v169, v56, v152, v144 == 0, v161);
                    v161 = **(struct _RECTL ***)&v65;
                    v93 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                    if ( v93
                      && (v94 = *v93) != 0
                      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v161)
                      && (*(_DWORD *)(v94 + 104) || *(_DWORD *)(v94 + 108)) )
                    {
                      v95 = 0LL;
                      v96 = *(_DWORD *)(*(_QWORD *)&v65 + 92LL);
                      v97 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v97 )
                        v95 = *v97;
                      v98 = *(_QWORD *)(v95 + 280);
                      v99 = 0LL;
                      *(_DWORD *)(v98 + 4) = v96;
                      v100 = *(_DWORD *)(*(_QWORD *)&v65 + 96LL);
                      v101 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v101 )
                        v99 = *v101;
                      v102 = *(_QWORD *)(v99 + 280);
                      v103 = 0LL;
                      *(_DWORD *)(v102 + 8) = v100;
                      v104 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v104 )
                        v103 = *v104;
                      v105 = *(_QWORD *)(v103 + 280);
                      v106 = 0LL;
                      v107 = *(_DWORD *)(v105 + 4);
                      v108 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v108 )
                        v106 = *v108;
                      v109 = *(_QWORD *)(v106 + 280);
                      v110 = 0LL;
                      *(_DWORD *)(v109 + 20) = v107;
                      v111 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v111 )
                        v110 = *v111;
                      v112 = *(_QWORD *)(v110 + 280);
                      v113 = 0LL;
                      v114 = *(_DWORD *)(v112 + 8);
                      v115 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v115 )
                        v113 = *v115;
                      *(_DWORD *)(*(_QWORD *)(v113 + 280) + 24LL) = v114;
                      vSpTlSpriteStateDirectDriverAccess(*(struct _SPRITESTATE **)&v65, 1);
                      v116 = 0LL;
                      v117 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v117 )
                        v116 = *v117;
                      **(_DWORD **)(v116 + 280) = 1;
                      v57 = v162;
                    }
                    else
                    {
                      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v161) )
                        Gre::Base::Globals(v137);
                      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v65 + 32LL) + 88LL) = *(_DWORD *)(*(_QWORD *)&v65 + 92LL);
                      *(_WORD *)(*(_QWORD *)(*(_QWORD *)&v65 + 32LL) + 76LL) = *(_WORD *)(*(_QWORD *)&v65 + 96LL);
                      *(_DWORD *)(*(_QWORD *)&v65 + 88LL) = 1;
                    }
                    v118 = (struct _SURFOBJ *)*((_QWORD *)v57 + 16);
                    if ( v118 )
                    {
                      if ( v45 )
                      {
                        if ( (*(_DWORD *)v57 & 0x40) == 0 )
                        {
                          vSpUpdatePerPixelAlphaFromColorKey(v118, NearestIndexFromColorref, v92, 0LL);
                          v55 = XlateObject;
                          goto LABEL_126;
                        }
                        *((_DWORD *)v57 + 51) = NearestIndexFromColorref;
                      }
                      v55 = XlateObject;
LABEL_126:
                      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v163);
                      if ( v55 )
                      {
                        cEntries = v55[1].cEntries;
                        if ( cEntries >= 0 )
                        {
                          _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v119) + 8 * (int)v55[1].cEntries + 1658);
                        }
                        else if ( cEntries == -1 )
                        {
                          FreeThreadBufferWithTag(v55);
                        }
                      }
                      v18 = v148;
                      goto LABEL_131;
                    }
                    v55 = XlateObject;
LABEL_220:
                    vSpDeleteShape(v57);
                    *((_DWORD *)v57 + 1) = 4;
                    v147 = 0;
                    goto LABEL_126;
                  }
                  if ( v44 == 1 )
                  {
                    NearestIndexFromColorref = ulGetNearestIndexFromColorref(v163, v40, a5, 1LL);
                    v133 = XLATEOBJ_iXlate(v55, NearestIndexFromColorref);
                    *(_DWORD *)v57 &= ~8u;
                    v58 = v157;
                    v61 = v154;
                    *((_DWORD *)v57 + 51) = v133;
                    v63 = *(_DWORD *)(v58 + 44) & 4;
                    v144 = v63;
LABEL_80:
                    if ( !v63 && (*((_WORD *)v61 + 50) || (*((_BYTE *)v61 + 102) & 0x20) != 0) )
                    {
                      Gre::Base::Globals((Gre::Base *)v58);
                      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v157) )
                      {
                        v134 = *((_DWORD *)v61 + 29);
                        if ( (v134 & 0x20) == 0 )
                        {
                          v135 = (HSURF)*((_QWORD *)v61 + 4);
                          *((_DWORD *)v61 + 29) = v134 | 0x20;
                          pConvertDfbSurfaceToDibPostNKAPC(v135);
                        }
                      }
                      else
                      {
                        bConvertDfbDcToDib((struct XDCOBJ *)&v148);
                      }
                      v144 = 0;
                      v61 = (struct SURFACE *)*((_QWORD *)v148 + 62);
                    }
                    goto LABEL_83;
                  }
                  if ( v44 != 2 )
                    goto LABEL_220;
                  if ( v50->BlendOp || v50->BlendFlags || (v50->AlphaFormat & 0xFE) != 0 )
                  {
                    v61 = v154;
                  }
                  else
                  {
                    *((struct _BLENDFUNCTION *)v57 + 50) = *v50;
                    v60 = *((_QWORD *)v57 + 2);
                    *((_DWORD *)v57 + 1) = v44 & 0xFFFFFFF9 | 2;
                    if ( *(_DWORD *)(v60 + 108) > 3u
                      && ((v50->AlphaFormat & 1) != 0 || v50->SourceConstantAlpha != 0xFF) )
                    {
                      *(_DWORD *)v57 &= ~8u;
                    }
                    else
                    {
                      *(_DWORD *)v57 |= 8u;
                    }
                    v61 = v154;
                    v62 = v50->AlphaFormat & 1;
                    if ( !v62 )
                    {
LABEL_74:
                      if ( !v45 )
                      {
                        if ( v62 )
                          v63 = *(_DWORD *)(v157 + 44) & 2;
                        else
                          v63 = *(_DWORD *)(v157 + 44) & 1;
                        v144 = v63;
                        goto LABEL_78;
                      }
                      goto LABEL_199;
                    }
                    if ( (unsigned int)bIsSourceBGRA(v154) )
                    {
                      v58 = 1LL;
                      goto LABEL_74;
                    }
                    if ( v45 )
                    {
                      v58 = 1LL;
LABEL_199:
                      v63 = 0;
                      v144 = 0;
                      goto LABEL_78;
                    }
                  }
                  v58 = 0LL;
                  v63 = 0;
LABEL_78:
                  v147 = v58;
                  if ( !(_DWORD)v58 )
                    goto LABEL_220;
                  NearestIndexFromColorref = v141;
                  goto LABEL_80;
                }
                v141 = v146;
                v45 = (int)v158;
LABEL_62:
                v56 = v150;
                goto LABEL_63;
              }
            }
            v45 = v142;
            goto LABEL_62;
          }
LABEL_50:
          v47 = v160;
          v152 = 0;
          v48 = *(_QWORD *)(v157 + 1776);
          goto LABEL_51;
        }
      }
    }
  }
LABEL_131:
  if ( v18 )
  {
    if ( (_DWORD)v149 && (*((_DWORD *)v18 + 11) & 2) != 0 )
    {
      XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v148);
      *((_DWORD *)v148 + 11) &= ~2u;
      v18 = v148;
      LODWORD(v149) = 0;
    }
    v152 = 0;
    v121 = *(_QWORD *)v18;
    HmgDecrementExclusiveReferenceCountEx(v18, HIDWORD(v149), &v152);
    if ( v152 )
      GrepDeleteDC(v121, 0x2000000LL);
  }
  return v147;
}
