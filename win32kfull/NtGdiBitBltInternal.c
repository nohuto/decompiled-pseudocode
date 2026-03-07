__int64 __fastcall NtGdiBitBltInternal(
        HDC a1,
        LONG a2,
        LONG top,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  LONG left; // edi
  HDC v12; // r10
  LONG v13; // r15d
  HDC v16; // rdx
  int v17; // ecx
  __int64 ThreadWin32Thread; // rax
  unsigned int v19; // r14d
  unsigned int v20; // ebx
  int v22; // esi
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  bool v26; // zf
  struct UMPDOBJ *v27; // rax
  DC *v28; // rdx
  int v29; // ebx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v31; // rdx
  __int64 *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  struct UMPDOBJ *v35; // rax
  DC *v36; // rdx
  int v37; // ebx
  DC *v38; // rdx
  struct _DC_ATTR *v39; // rax
  LONG v40; // ebx
  DC *v41; // r9
  DC *v42; // rdx
  __int64 v43; // r10
  int v44; // r8d
  __int64 v45; // rdi
  unsigned int v46; // eax
  struct MATRIX *v47; // rdx
  int v48; // ecx
  LONG x; // edx
  LONG y; // r8d
  LONG bottom; // r8d
  LONG right; // edx
  LONG v53; // eax
  LONG v54; // eax
  DC *v55; // rcx
  int v56; // eax
  unsigned __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  DC *v60; // r13
  __int64 v61; // rbx
  __int64 v62; // rdi
  __int64 v63; // r15
  unsigned __int8 v64; // cl
  __int64 v65; // rdx
  char *v66; // r10
  int v67; // ecx
  __int64 v68; // rcx
  DC *v69; // r12
  unsigned __int64 v70; // rsi
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  _DWORD *v75; // rcx
  __int64 v76; // rsi
  int v77; // r10d
  __int64 v78; // rax
  int v79; // edx
  int v80; // r14d
  int v81; // ebx
  int v82; // eax
  int v83; // ecx
  LONG v84; // ecx
  struct REGION *v85; // rax
  int v86; // ecx
  __int64 v87; // rax
  LONG v88; // r9d
  int v89; // edx
  int v90; // r8d
  struct _RECTL *v91; // rcx
  LONG v92; // r10d
  LONG v93; // eax
  XLATEOBJ *v94; // rbx
  XLATEOBJ *v95; // r15
  __int64 v96; // r14
  __int64 v97; // rax
  Gre::Base *v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // edx
  __int64 v102; // rax
  unsigned int v103; // r12d
  struct Gre::Base::SESSION_GLOBALS *v104; // r13
  __int64 v105; // rbx
  __int64 v106; // rax
  unsigned int v107; // r11d
  int v108; // eax
  __int64 v109; // r9
  __int64 v110; // rax
  int v111; // ecx
  unsigned int v112; // eax
  __int64 v113; // r9
  XLATEOBJ *v114; // rdx
  int v115; // r8d
  unsigned __int64 v116; // rcx
  unsigned int v117; // eax
  __int64 v118; // r10
  __int64 v119; // rax
  __int64 XlateObject; // rax
  unsigned int v121; // edx
  unsigned int v122; // r8d
  RECTL v123; // xmm6
  _DWORD *v124; // rax
  LONG v125; // edi
  int v126; // eax
  LONG v127; // esi
  _DWORD *v128; // rax
  int v129; // eax
  float v130; // xmm0_4
  int v131; // eax
  float v132; // xmm1_4
  int v133; // ecx
  LONG v134; // r8d
  int v135; // r10d
  int v136; // eax
  LONG v137; // edx
  __m128i v138; // xmm0
  int v139; // r11d
  __m128i v140; // xmm6
  bool v141; // cc
  int v142; // ecx
  int v143; // eax
  int v144; // eax
  LONG v145; // edx
  LONG v146; // eax
  LONG v147; // r8d
  LONG v148; // ecx
  RECTL v149; // xmm6
  int v150; // eax
  int v151; // eax
  int v152; // eax
  SURFACE *v153; // rsi
  char v154; // di
  __int64 v155; // rax
  int v156; // eax
  __int128 *v157; // rax
  __int64 v158; // rdi
  __int64 v159; // rax
  unsigned int v160; // eax
  __int64 v161; // rax
  int cEntries; // eax
  int (*v163)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v164; // rdx
  int v165; // r11d
  int v166; // r14d
  DC *v167; // rdx
  SURFACE *v168; // rcx
  SURFACE *v169; // rcx
  DC *v170; // rcx
  DC *v171; // r9
  __int64 v172; // rbx
  __int64 CurrentProcess; // rax
  DC *v174; // rcx
  int v175; // eax
  __int64 *v176; // rax
  __int64 v177; // rax
  struct Gre::Base::SESSION_GLOBALS *v178; // rbx
  Gre::Base *v179; // rcx
  struct Gre::Base::SESSION_GLOBALS *v180; // rbx
  __int64 v181; // rbx
  __int16 v182; // ax
  int v183; // eax
  __int64 v184; // rax
  struct Gre::Base::SESSION_GLOBALS *v185; // rbx
  Gre::Base *v186; // rcx
  struct Gre::Base::SESSION_GLOBALS *v187; // rbx
  __int64 v188; // rbx
  __int64 *v189; // rax
  __int64 v190; // rax
  __int64 v191; // rdx
  __int64 v192; // rax
  __int64 v193; // rdx
  __int64 *v194; // rdi
  struct SURFACE *v195; // rax
  __int64 v196; // rsi
  struct SURFACE *v197; // rbx
  Gre::Base *v198; // rcx
  struct Gre::Base::SESSION_GLOBALS *v199; // rbx
  char v200; // di
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rdx
  __int64 v204; // rax
  __int64 v205; // rdx
  __int64 *v206; // rdi
  struct SURFACE *v207; // rax
  __int64 v208; // rsi
  struct SURFACE *v209; // rbx
  Gre::Base *v210; // rcx
  struct Gre::Base::SESSION_GLOBALS *v211; // rbx
  char v212; // di
  __int64 v213; // rax
  __int64 v214; // rax
  __int64 v215; // rbx
  signed __int32 v216[8]; // [rsp+0h] [rbp-100h] BYREF
  XLATEOBJ *v217; // [rsp+20h] [rbp-E0h]
  RECTL *v218; // [rsp+28h] [rbp-D8h]
  POINTL *v219; // [rsp+30h] [rbp-D0h]
  POINTL *v220; // [rsp+38h] [rbp-C8h]
  __int64 v221; // [rsp+40h] [rbp-C0h]
  POINTL *v222; // [rsp+48h] [rbp-B8h]
  int v223; // [rsp+70h] [rbp-90h] BYREF
  DC *v224; // [rsp+78h] [rbp-88h] BYREF
  __int64 v225; // [rsp+80h] [rbp-80h]
  DC *v226; // [rsp+88h] [rbp-78h] BYREF
  __int64 v227; // [rsp+90h] [rbp-70h]
  char v228; // [rsp+98h] [rbp-68h]
  int v229; // [rsp+9Ch] [rbp-64h]
  XLATEOBJ *v230; // [rsp+A0h] [rbp-60h] BYREF
  int v231; // [rsp+A8h] [rbp-58h]
  LONG v232; // [rsp+ACh] [rbp-54h] BYREF
  int v233; // [rsp+B0h] [rbp-50h]
  __int64 v234; // [rsp+B8h] [rbp-48h]
  int v235; // [rsp+C0h] [rbp-40h]
  HDC v236; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v237; // [rsp+D0h] [rbp-30h]
  __int64 v238; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v239[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v240; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v241; // [rsp+100h] [rbp+0h]
  __int64 v242; // [rsp+110h] [rbp+10h]
  __int64 v243; // [rsp+118h] [rbp+18h] BYREF
  char v244; // [rsp+120h] [rbp+20h]
  int v245; // [rsp+124h] [rbp+24h]
  _BYTE v246[32]; // [rsp+128h] [rbp+28h] BYREF
  int v247; // [rsp+148h] [rbp+48h]
  __int128 v248; // [rsp+150h] [rbp+50h]
  unsigned int v249; // [rsp+160h] [rbp+60h]
  int v250; // [rsp+164h] [rbp+64h]
  DC *v251; // [rsp+168h] [rbp+68h] BYREF
  __int64 v252; // [rsp+170h] [rbp+70h]
  __int16 v253; // [rsp+178h] [rbp+78h]
  DC *v254; // [rsp+180h] [rbp+80h] BYREF
  __int64 v255; // [rsp+188h] [rbp+88h]
  __int16 v256; // [rsp+190h] [rbp+90h]
  __int64 v257; // [rsp+198h] [rbp+98h]
  __int128 v258; // [rsp+1A0h] [rbp+A0h]
  HDC v259; // [rsp+1B0h] [rbp+B0h]
  __int64 v260; // [rsp+1B8h] [rbp+B8h]
  __int64 v261; // [rsp+1C0h] [rbp+C0h]
  HDC v262; // [rsp+1C8h] [rbp+C8h]
  int v263; // [rsp+1D0h] [rbp+D0h]
  int v264; // [rsp+1D4h] [rbp+D4h]
  int v265; // [rsp+1D8h] [rbp+D8h] BYREF
  int v266; // [rsp+1DCh] [rbp+DCh] BYREF
  unsigned int v267; // [rsp+1E0h] [rbp+E0h]
  unsigned __int64 v268; // [rsp+1E8h] [rbp+E8h] BYREF
  int v269; // [rsp+1F0h] [rbp+F0h]
  int v270; // [rsp+1F4h] [rbp+F4h]
  unsigned __int64 v271; // [rsp+1F8h] [rbp+F8h] BYREF
  LONG v272; // [rsp+200h] [rbp+100h]
  LONG v273; // [rsp+204h] [rbp+104h]
  SURFACE *v274; // [rsp+208h] [rbp+108h]
  __int64 v275; // [rsp+210h] [rbp+110h]
  DC *v276[2]; // [rsp+218h] [rbp+118h] BYREF
  int v277; // [rsp+228h] [rbp+128h]
  int v278; // [rsp+22Ch] [rbp+12Ch]
  float v279[2]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v280; // [rsp+238h] [rbp+138h] BYREF
  char *v281; // [rsp+240h] [rbp+140h] BYREF
  int v282; // [rsp+248h] [rbp+148h]
  int v283; // [rsp+24Ch] [rbp+14Ch]
  DC *v284[2]; // [rsp+250h] [rbp+150h] BYREF
  struct MATRIX *v285; // [rsp+260h] [rbp+160h] BYREF
  int v286; // [rsp+268h] [rbp+168h]
  int v287; // [rsp+26Ch] [rbp+16Ch]
  RECTL v288; // [rsp+270h] [rbp+170h]
  __int64 v289; // [rsp+280h] [rbp+180h] BYREF
  __int64 v290; // [rsp+288h] [rbp+188h] BYREF
  __int64 v291; // [rsp+290h] [rbp+190h] BYREF
  __int64 v292; // [rsp+298h] [rbp+198h] BYREF
  __int64 v293; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int128 v294; // [rsp+2B0h] [rbp+1B0h]
  RECTL v295; // [rsp+2D0h] [rbp+1D0h] BYREF
  POINTL v296[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  RECTL v297; // [rsp+2F0h] [rbp+1F0h] BYREF
  RECTL v298; // [rsp+300h] [rbp+200h]
  RECTL v299; // [rsp+310h] [rbp+210h] BYREF
  RECTL v300; // [rsp+320h] [rbp+220h] BYREF
  int v301; // [rsp+3F0h] [rbp+2F0h]

  left = a2;
  v12 = a1;
  v13 = a7;
  LOBYTE(v223) = (a11 & 4) != 0;
  v232 = a2;
  v16 = (HDC)a6;
  v236 = a1;
  v17 = a5;
  v229 = a5;
  v234 = a6;
  v233 = a8;
  if ( (a11 & 4) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v17 = v229;
    v12 = v236;
    v16 = (HDC)v234;
    if ( ThreadWin32Thread )
      *(_DWORD *)(ThreadWin32Thread + 328) |= 8u;
    else
      LOBYTE(v223) = 0;
  }
  v19 = 0;
  if ( (a9 & 0x40000000) != 0 )
  {
    v20 = GreStretchBltInternal(
            v12,
            left,
            top,
            a4,
            v17,
            v16,
            a7,
            a8,
            a4,
            v17,
            a9 & 0xDFFFFFFF,
            a10,
            (a9 & 0x20000000) != 0 ? 2 : 0);
    NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState(&v223);
    return v20;
  }
  v231 = a9 & 0xDFFFFFFF;
  v267 = 0;
  LOBYTE(v16) = 1;
  v225 = 0LL;
  v22 = a9 & 0x5FFFFFFF;
  v224 = (DC *)HmgLockEx(v12, v16, 0LL);
  if ( !v224 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
LABEL_24:
    v28 = v224;
    goto LABEL_25;
  }
  v23 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !v23
    || (v24 = *v23) == 0
    || (v25 = *(_QWORD *)(v24 + 40), v26 = v25 == v24 + 40, v27 = (struct UMPDOBJ *)(v25 - 40), v26) )
  {
    v27 = 0LL;
  }
  v28 = v224;
  if ( *((_WORD *)v224 + 6) == 1 )
  {
    *((_QWORD *)v224 + 271) = v27;
    *((_DWORD *)v224 + 544) = 0xFFFF;
    v28 = v224;
  }
  else if ( *((struct UMPDOBJ **)v224 + 271) != v27 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v224, v27);
    v28 = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)v224 + 3);
    v224 = 0LL;
    goto LABEL_493;
  }
  if ( HIDWORD(v225) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v28 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_18:
      _InterlockedDecrement((volatile signed __int32 *)v28 + 3);
      v28 = 0LL;
      v224 = 0LL;
      goto LABEL_493;
    }
    v29 = *((_DWORD *)v28 + 528);
    if ( v29 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v28 = v224;
      goto LABEL_18;
    }
    goto LABEL_24;
  }
LABEL_25:
  if ( v28 )
  {
    if ( (*((_DWORD *)v28 + 11) & 2) == 0 )
    {
      if ( !HIDWORD(v225) )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v224);
        if ( UserAttr && !DC::SaveAttributes(v224, UserAttr) )
        {
          v28 = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)v224 + 3);
          v224 = 0LL;
          goto LABEL_493;
        }
        v28 = v224;
      }
      *((_DWORD *)v28 + 11) |= 2u;
      v28 = v224;
      LODWORD(v225) = 1;
    }
    if ( (*((_DWORD *)v28 + 130) & 4) != 0 )
    {
      DC::vMarkTransformDirty(v28);
      v28 = v224;
    }
    if ( !v28 )
      goto LABEL_495;
    if ( (*((_DWORD *)v28 + 9) & 0x10000) != 0 )
      goto LABEL_493;
    v31 = BYTE1(v22);
    if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v22 != 16711778 && v22 != 66 )
      bSpDwmValidateSurface((struct XDCOBJ *)&v224, left, top, a4, v229);
    LOBYTE(v31) = 1;
    v226 = 0LL;
    v227 = 0LL;
    v226 = (DC *)HmgLockEx(v234, v31, 0LL);
    if ( v226 )
    {
      v32 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( !v32
        || (v33 = *v32) == 0
        || (v34 = *(_QWORD *)(v33 + 40), v26 = v34 == v33 + 40, v35 = (struct UMPDOBJ *)(v34 - 40), v26) )
      {
        v35 = 0LL;
      }
      v36 = v226;
      if ( *((_WORD *)v226 + 6) == 1 )
      {
        *((_QWORD *)v226 + 271) = v35;
        *((_DWORD *)v226 + 544) = 0xFFFF;
        v36 = v226;
      }
      else if ( *((struct UMPDOBJ **)v226 + 271) != v35 )
      {
        XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v226, v35);
        v38 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v226 + 3);
        v226 = 0LL;
        goto LABEL_490;
      }
      if ( !HIDWORD(v227) )
      {
LABEL_60:
        if ( !v36 )
        {
LABEL_492:
          v28 = v224;
LABEL_493:
          if ( v28 )
            XDCOBJ::vUnlockFast((XDCOBJ *)&v224);
          goto LABEL_495;
        }
        if ( (*((_DWORD *)v36 + 11) & 2) == 0 )
        {
          if ( !HIDWORD(v227) )
          {
            v39 = XDCOBJ::GetUserAttr((XDCOBJ *)&v226);
            if ( v39 && !DC::SaveAttributes(v226, v39) )
            {
              v38 = 0LL;
              _InterlockedDecrement((volatile signed __int32 *)v226 + 3);
              v226 = 0LL;
LABEL_490:
              if ( v38 )
                XDCOBJ::vUnlockFast((XDCOBJ *)&v226);
              goto LABEL_492;
            }
            v36 = v226;
          }
          *((_DWORD *)v36 + 11) |= 2u;
          v36 = v226;
          LODWORD(v227) = 1;
        }
        if ( (*((_DWORD *)v36 + 130) & 4) != 0 )
        {
          DC::vMarkTransformDirty(v36);
          v36 = v226;
        }
        if ( !v36 )
          goto LABEL_492;
        v40 = v233;
        bSpDwmValidateSurface((struct XDCOBJ *)&v226, a7, v233, a4, v229);
        v41 = v224;
        v42 = v226;
        v43 = *((_QWORD *)v224 + 122);
        v44 = *(_DWORD *)(v43 + 108);
        if ( ((*(_BYTE *)(*((_QWORD *)v226 + 122) + 108LL) ^ *(_BYTE *)(v43 + 108)) & 7) != 0
          && (v231 < 0 && (v44 & 1) != 0 || (v44 & 9) == 9) )
        {
          v45 = *(_QWORD *)(v43 + 308);
          v46 = DC::dwSetLayout(v224, -1, 0);
          v41 = v224;
          left = v45 - a4 - v232;
          v42 = v226;
          v267 = v46;
          v233 = 0x80000000;
        }
        else
        {
          v233 = 0;
        }
        v282 = *(_DWORD *)(*((_QWORD *)v41 + 122) + 208LL);
        v283 = *(_DWORD *)(*((_QWORD *)v41 + 122) + 108LL) & 1;
        if ( (*(_DWORD *)(*((_QWORD *)v41 + 122) + 340LL) & 0x1E000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v281, (struct XDCOBJ *)&v224, 0x204u, 0);
          v42 = v226;
        }
        else
        {
          v281 = (char *)v41 + 320;
        }
        v286 = *(_DWORD *)(*((_QWORD *)v42 + 122) + 208LL);
        v287 = *(_DWORD *)(*((_QWORD *)v42 + 122) + 108LL) & 1;
        if ( (*(_DWORD *)(*((_QWORD *)v42 + 122) + 340LL) & 0x1E000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v285, (struct XDCOBJ *)&v226, 0x204u, 0);
          v47 = v285;
        }
        else
        {
          v47 = (DC *)((char *)v42 + 320);
          v285 = v47;
        }
        if ( (*((_DWORD *)v281 + 8) & 1) != 0 && EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v281, v47) )
        {
          v48 = v229;
          x = a7 + a4;
          v296[0].x = a7;
          v296[0].y = v40;
          y = v40 + v229;
          v296[1].x = a7 + a4;
          v296[1].y = v40 + v229;
          if ( (*((_BYTE *)v285 + 32) & 0x43) != 0x43 )
          {
            bCvtPts1(v285, v296, 2LL);
            y = v296[1].y;
            x = v296[1].x;
            v48 = v229;
            v40 = v296[0].y;
            v13 = v296[0].x;
          }
          if ( v287 )
          {
            ++v13;
            ++x;
            v296[0].x = v13;
            v296[1].x = x;
          }
          if ( v13 > x )
          {
            v296[0].x = x;
            v296[1].x = v13;
          }
          if ( v40 > y )
          {
            v296[0].y = y;
            v296[1].y = v40;
          }
          bottom = top + v48;
          v295.left = left;
          right = left + a4;
          v295.top = top;
          v295.right = left + a4;
          v295.bottom = top + v48;
          if ( (v281[32] & 0x43) != 0x43 )
          {
            bCvtPts1(v281, &v295, 2LL);
            bottom = v295.bottom;
            right = v295.right;
            top = v295.top;
            left = v295.left;
          }
          if ( v283 )
          {
            ++left;
            ++right;
            v295.left = left;
            v295.right = right;
          }
          if ( left > right )
          {
            v53 = left;
            v295.left = right;
            left = right;
            v295.right = v53;
            right = v53;
          }
          if ( top > bottom )
          {
            v54 = top;
            v295.top = bottom;
            top = bottom;
            v295.bottom = v54;
            bottom = v54;
          }
          if ( left != right && top != bottom )
          {
            v55 = v224;
            v56 = *((_DWORD *)v224 + 9);
            if ( (v56 & 0xE0) != 0 )
            {
              if ( (v56 & 0x20) != 0 )
              {
                ERECTL::operator|=((char *)v224 + 1064, &v295);
                v55 = v224;
              }
              if ( (*((_DWORD *)v55 + 9) & 0x80u) != 0 )
                ERECTL::operator|=((char *)v55 + 1096, &v295);
            }
            v253 = 256;
            v243 = 0LL;
            v244 = 0;
            v245 = 0;
            v247 = 0;
            v252 = 0LL;
            v255 = 0LL;
            v240 = 0LL;
            v241 = 0LL;
            v242 = 0LL;
            v249 = 0;
            v248 = 0LL;
            v257 = 0LL;
            v259 = 0LL;
            v258 = 0LL;
            v262 = 0LL;
            v260 = 0LL;
            v261 = 0LL;
            v251 = 0LL;
            v254 = 0LL;
            v256 = 256;
            if ( !(unsigned int)DEVLOCKBLTOBJ::bLock(
                                  (DEVLOCKBLTOBJ *)&v240,
                                  (struct XDCOBJ *)&v224,
                                  (struct XDCOBJ *)&v226) )
            {
              v166 = XDCOBJ::bFullScreen((XDCOBJ *)&v226);
              v19 = XDCOBJ::bFullScreen((XDCOBJ *)&v224) | v166;
              goto LABEL_173;
            }
            v60 = v224;
            v61 = *((_QWORD *)v224 + 62);
            v274 = (SURFACE *)v61;
            if ( !v61 )
            {
              v19 = 1;
              goto LABEL_173;
            }
            v62 = *(_QWORD *)(v61 + 128);
            v63 = *((_QWORD *)v224 + 11);
            v64 = (a9 & 0x5FFFFFFFu) >> 16;
            v231 = (v64 << 8) | v64;
            if ( ((v64 ^ (unsigned __int8)(16 * v64)) & 0xF0) != 0 )
            {
              v65 = *((_QWORD *)v224 + 122);
              v66 = (char *)v224 + 1200;
              v275 = (__int64)v224 + 1200;
              if ( (*(_DWORD *)(v65 + 152) & 0x1000) != 0 )
              {
                GreDCSelectBrush(v224, *(_QWORD *)(v65 + 160));
                v66 = (char *)v275;
                v60 = v224;
              }
              v57 = *((_QWORD *)v60 + 122);
              v67 = *(_DWORD *)(v57 + 152);
              if ( (v67 & 1) != 0 || (*((_DWORD *)v60 + 79) & 1) != 0 )
              {
                LODWORD(v219) = 1;
                *(_DWORD *)(v57 + 152) = v67 & 0xFFFFFFFE;
                v218 = (RECTL *)v61;
                v217 = (XLATEOBJ *)v62;
                *((_DWORD *)v224 + 79) &= ~1u;
                EBRUSHOBJ::vInitBrush(v66, v224, *((_QWORD *)v224 + 17), v63, v217, v218, (_DWORD)v219);
                v60 = v224;
              }
            }
            else
            {
              v275 = 0LL;
            }
            v68 = *((_DWORD *)v60 + 10) & 1;
            v69 = v226;
            v59 = (unsigned int)(*((_DWORD *)v60 + 2 * v68 + 254) + v295.left);
            v295.left += *((_DWORD *)v60 + 2 * v68 + 254);
            v295.right += *((_DWORD *)v60 + 2 * v68 + 254);
            v58 = (unsigned int)(*((_DWORD *)v60 + 2 * v68 + 255) + v295.top);
            v295.top += *((_DWORD *)v60 + 2 * v68 + 255);
            v295.bottom += *((_DWORD *)v60 + 2 * v68 + 255);
            v70 = *((_QWORD *)v226 + 62);
            v237 = v70;
            if ( !v70 )
              goto LABEL_325;
            if ( (a11 & 2) != 0 )
            {
LABEL_138:
              v75 = (_DWORD *)((char *)v69 + 1024);
              v76 = *(_QWORD *)(v70 + 128);
              if ( (*((_DWORD *)v69 + 10) & 1) == 0 )
                v75 = (_DWORD *)((char *)v69 + 1016);
              v77 = 0;
              v78 = *(_QWORD *)(v237 + 48);
              v79 = 0;
              v80 = v58 - *((_DWORD *)v69 + 2 * (*((_DWORD *)v69 + 10) & 1) + 255) - v296[0].y;
              v81 = v59 - *v75 - v296[0].x;
              v278 = v81;
              v235 = v80;
              if ( v78 && v237 == *(_QWORD *)(v78 + 2528) && (*(_DWORD *)(v78 + 40) & 0x20000) != 0 )
              {
                v79 = *(_DWORD *)(v78 + 2560);
                v77 = *(_DWORD *)(v78 + 2564);
              }
              if ( v79 + v81 > (int)v59 )
                v59 = (unsigned int)(v79 + v81);
              v295.left = v59;
              if ( v77 + v80 > (int)v58 )
                v58 = (unsigned int)(v77 + v80);
              v82 = v295.bottom;
              v295.top = v58;
              v83 = v79 + *(_DWORD *)(v237 + 56);
              v57 = (unsigned int)v295.right;
              v84 = v81 + v83;
              if ( v84 < v295.right )
                v57 = (unsigned int)v84;
              v295.right = v57;
              if ( v80 + v77 + *(_DWORD *)(v237 + 60) < v295.bottom )
                v82 = v80 + v77 + *(_DWORD *)(v237 + 60);
              v295.bottom = v82;
              if ( (int)v59 < (int)v57 && (int)v58 < v82 )
              {
                v234 = 0LL;
                if ( (int)v59 >= *((_DWORD *)v60 + 250)
                  && (int)v57 <= *((_DWORD *)v60 + 252)
                  && (int)v58 >= *((_DWORD *)v60 + 251)
                  && v82 <= *((_DWORD *)v60 + 253) )
                {
LABEL_160:
                  v86 = *((_DWORD *)v60 + 9);
                  if ( (v86 & 0xE0) == 0 )
                    goto LABEL_189;
                  v297 = v295;
                  v87 = *((_DWORD *)v60 + 10) & 1;
                  v88 = v295.left - *((_DWORD *)v60 + 2 * v87 + 254);
                  v297.left = v88;
                  v89 = v295.right - *((_DWORD *)v60 + 2 * v87 + 254);
                  v297.right = v89;
                  v90 = v295.top - *((_DWORD *)v60 + 2 * v87 + 255);
                  v297.top = v90;
                  v297.bottom = v295.bottom - *((_DWORD *)v60 + 2 * v87 + 255);
                  if ( (v86 & 0x40) == 0 )
                  {
LABEL_189:
                    v93 = v295.left - v81;
                    v94 = 0LL;
                    v296[0].x = v93;
                    v230 = 0LL;
                    v296[0].y = v295.top - v80;
                    if ( *((_QWORD *)v69 + 62) == *((_QWORD *)v60 + 62) )
                    {
                      v95 = 0LL;
                      v19 = 1;
LABEL_245:
                      v121 = 0;
                      v122 = 0;
                      v123 = v295;
                      v288 = v295;
                      v294 = *(_OWORD *)&v296[0].x;
                      v299 = v295;
                      v300 = *(RECTL *)&v296[0].x;
                      v268 = 0LL;
                      if ( *((int *)v274 + 28) < 0 )
                      {
                        v124 = (_DWORD *)*((_QWORD *)v274 + 6);
                        if ( v124 )
                        {
                          if ( (v124[10] & 0x20000) != 0 )
                          {
                            v121 = v124[640];
                            v122 = v124[641];
                            v268 = __PAIR64__(v122, v121);
                          }
                        }
                      }
                      v125 = 0;
                      v126 = v121 + *((_DWORD *)v274 + 14);
                      v271 = 0LL;
                      v127 = 0;
                      v269 = v126;
                      v270 = v122 + *((_DWORD *)v274 + 15);
                      if ( *(int *)(v237 + 112) < 0 )
                      {
                        v128 = *(_DWORD **)(v237 + 48);
                        if ( v128 )
                        {
                          if ( (v128[10] & 0x20000) != 0 )
                          {
                            v125 = v128[640];
                            v127 = v128[641];
                            v271 = __PAIR64__(v127, v125);
                          }
                        }
                      }
                      v272 = v125 + *(_DWORD *)(v237 + 56);
                      v273 = v127 + *(_DWORD *)(v237 + 60);
                      v129 = *((_DWORD *)v60 + 130);
                      if ( (v129 & 1) != 0 && (v129 & 2) == 0 )
                      {
                        v130 = 1.0 / *((float *)v60 + 132);
                        v279[0] = 1.0 / COERCE_FLOAT(*(_QWORD *)((char *)v60 + 524));
                        v279[1] = v130;
                        ERECTL::vScale((ERECTL *)&v268, (const struct POINTFL *)v279);
                        ERECTL::vScale((ERECTL *)&v299, (const struct POINTFL *)v279);
                        v60 = v224;
                        v69 = v226;
                        v123 = v299;
                      }
                      v131 = *((_DWORD *)v69 + 130);
                      if ( (v131 & 1) != 0 && (v131 & 2) == 0 )
                      {
                        v132 = 1.0 / COERCE_FLOAT(*(_QWORD *)((char *)v69 + 524));
                        *((float *)&v236 + 1) = 1.0 / *((float *)v69 + 132);
                        *(float *)&v236 = v132;
                        ERECTL::vScale((ERECTL *)&v271, (const struct POINTFL *)&v236);
                        ERECTL::vScale((ERECTL *)&v300, (const struct POINTFL *)&v236);
                        v60 = v224;
                        v69 = v226;
                        v127 = HIDWORD(v271);
                        v125 = v271;
                      }
                      v133 = _mm_cvtsi128_si32((__m128i)v123);
                      v298 = v123;
                      v59 = (unsigned int)v123.top;
                      v134 = v123.right;
                      v135 = v300.left - v133;
                      v136 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v123, 4));
                      v137 = v133;
                      v138 = _mm_srli_si128((__m128i)v123, 8);
                      v139 = v300.top - v136;
                      v140 = _mm_srli_si128((__m128i)v123, 12);
                      v141 = (int)v268 <= v133;
                      v142 = v298.bottom;
                      if ( !v141 )
                        v137 = v268;
                      v141 = SHIDWORD(v268) <= v136;
                      v143 = _mm_cvtsi128_si32(v138);
                      if ( !v141 )
                        v59 = HIDWORD(v268);
                      v141 = v269 < v143;
                      v144 = _mm_cvtsi128_si32(v140);
                      if ( v141 )
                        v134 = v269;
                      if ( v270 < v144 )
                        v142 = v270;
                      if ( v134 >= v137 )
                      {
                        if ( v142 < (int)v59 )
                          v59 = (unsigned int)v142;
                      }
                      else
                      {
                        v137 = v134;
                      }
                      v145 = v135 + v137;
                      v146 = v59 + v139;
                      v147 = v135 + v134;
                      v148 = v139 + v142;
                      if ( v125 > v145 )
                        v145 = v125;
                      v298.left = v145;
                      if ( v127 > v146 )
                        v146 = v127;
                      v298.top = v146;
                      if ( v272 < v147 )
                        v147 = v272;
                      v298.right = v147;
                      if ( v273 < v148 )
                        v148 = v273;
                      v298.bottom = v148;
                      if ( v147 >= v145 )
                      {
                        if ( v148 < v146 )
                          v146 = v148;
                        v298.top = v146;
                      }
                      else
                      {
                        v145 = v147;
                        v298.left = v147;
                      }
                      v149 = v298;
                      v58 = (unsigned int)(v147 - v135);
                      v300 = v298;
                      v150 = v146 - v139;
                      v299.left = v145 - v135;
                      v116 = (unsigned int)(v148 - v139);
                      *(_QWORD *)&v299.top = __PAIR64__(v58, v150);
                      v299.bottom = v116;
                      if ( v145 - v135 >= (int)v58 || v150 >= (int)v116 )
                      {
                        v153 = v274;
                        v154 = 0;
                      }
                      else
                      {
                        v151 = *((_DWORD *)v60 + 130);
                        v116 = v19;
                        if ( (v151 & 1) != 0 && (v151 & 2) == 0 )
                        {
                          v292 = *(_QWORD *)((char *)v60 + 524);
                          ERECTL::vScale((ERECTL *)&v299, (const struct POINTFL *)&v292);
                          v69 = v226;
                        }
                        v152 = *((_DWORD *)v69 + 130);
                        if ( (v152 & 1) != 0 && (v152 & 2) == 0 )
                        {
                          v293 = *(_QWORD *)((char *)v69 + 524);
                          ERECTL::vScale((ERECTL *)&v300, (const struct POINTFL *)&v293);
                          v149 = v300;
                        }
                        v153 = v274;
                        v154 = 1;
                        *(RECTL *)&v296[0].x = v149;
                        v295 = v299;
                        ++*((_DWORD *)v274 + 23);
                        v60 = v224;
                        v69 = v226;
                      }
                      v155 = *((_QWORD *)v69 + 6);
                      v228 = v154;
                      if ( *((_QWORD *)v60 + 6) == v155
                        || (v156 = XDCOBJ::bRedirHooked((XDCOBJ *)&v224), v60 = v224, v69 = v226, v156)
                        && (v116 = *((_QWORD *)v224 + 6), *(_QWORD *)(v116 + 3496) == *((_QWORD *)v226 + 6)) )
                      {
                        v57 = v237;
                      }
                      else
                      {
                        v57 = v237;
                        if ( *(_WORD *)(v237 + 100)
                          || *(_QWORD *)(v237 + 24)
                          || (v116 = *(unsigned int *)(*((_QWORD *)v224 + 6) + 40LL), (v116 & 0x80u) != 0LL) )
                        {
                          if ( v154 )
                          {
                            v157 = &v240;
                            if ( (*(_DWORD *)(*((_QWORD *)v153 + 6) + 40LL) & 0x80u) == 0 )
                              v157 = 0LL;
                            v19 = SimBitBlt(
                                    (SURFOBJ *)((char *)v153 + 24),
                                    (SURFOBJ *)(v237 + 24),
                                    v95,
                                    &v295,
                                    v296,
                                    0LL,
                                    v275,
                                    (POINTL *)v224 + 149,
                                    v231,
                                    (__int64)v157);
                          }
                          goto LABEL_318;
                        }
                      }
                      if ( v231 == 52428 )
                      {
                        v26 = (a11 & 1) == 0;
                        v301 = a11 & 1;
                        v158 = *((_QWORD *)v153 + 6);
                        if ( !v26 )
                        {
                          EtwWindowRendering(
                            *((_QWORD *)v60 + 58),
                            *((_QWORD *)v60 + 59),
                            **((_QWORD **)v60 + 62),
                            (unsigned int)v288.left,
                            v288.top,
                            v288.right,
                            v288.bottom,
                            *((_QWORD *)v69 + 58),
                            *((_QWORD *)v69 + 59),
                            **((_QWORD **)v69 + 62),
                            v294,
                            DWORD1(v294),
                            v294 + abs32(v288.right - v288.bottom),
                            DWORD1(v294) + abs32(v288.bottom - v288.top),
                            v223);
                          v153 = v274;
                          *((_WORD *)v274 + 51) |= 0x40u;
                          v159 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                          if ( v159 )
                            *(_DWORD *)(v159 + 328) &= ~1u;
                          GreClientRgnUpdated(0LL);
                          GreClientRgnUpdatedStable();
                          v94 = v230;
                        }
                        if ( v228 )
                        {
                          if ( (*((_DWORD *)v153 + 28) & 0x400) != 0 )
                            v160 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, XLATEOBJ *, RECTL *, POINTL *))(v158 + 2816))(
                                     (__int64)v153 + 24,
                                     v237 + 24,
                                     v234,
                                     v95,
                                     &v295,
                                     v296);
                          else
                            v160 = ((__int64 (__fastcall *)(char *, unsigned __int64, __int64, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
                                     (char *)v153 + 24,
                                     v237 + 24,
                                     v234,
                                     v95,
                                     &v295,
                                     v296);
                          v19 = v160;
                        }
                        if ( v301 )
                        {
                          *((_WORD *)v153 + 51) &= ~0x40u;
                          v161 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                          v94 = v230;
                          if ( v161 )
                            *(_DWORD *)(v161 + 328) |= 1u;
                        }
                      }
                      else if ( v154 )
                      {
                        v163 = SURFACE::pfnBitBlt(v153);
                        v19 = ((__int64 (__fastcall *)(char *, __int64, _QWORD, __int64, XLATEOBJ *, RECTL *, POINTL *, _QWORD, __int64, char *, int))v163)(
                                (char *)v153 + 24,
                                v164 + 24,
                                0LL,
                                v234,
                                v95,
                                &v295,
                                v296,
                                0LL,
                                v275,
                                (char *)v60 + 1192,
                                v165);
                      }
LABEL_318:
                      if ( v94 )
                      {
                        cEntries = v94[1].cEntries;
                        if ( cEntries < 0 )
                        {
                          if ( cEntries == -1 )
                            FreeThreadBufferWithTag(v94);
                        }
                        else
                        {
                          _InterlockedDecrement(
                            (volatile signed __int32 *)Gre::Base::Globals((Gre::Base *)v116)
                          + 8 * (int)v94[1].cEntries
                          + 1658);
                        }
                      }
LABEL_173:
                      if ( (v249 & 0x1000) != 0 )
                      {
                        if ( (v249 & 0x8000) != 0 )
                        {
                          if ( v251 && HIBYTE(v253) )
                            DEVLOCKBLTOBJ::bUnMapTrgSurfaceView((DEVLOCKBLTOBJ *)&v240);
                          _InterlockedOr(v216, 0);
                          if ( v254 && HIBYTE(v256) )
                            DEVLOCKBLTOBJ::bUnMapSrcSurfaceView((DEVLOCKBLTOBJ *)&v240);
                        }
                        else
                        {
                          v167 = v254;
                          if ( v254 && HIBYTE(v256) )
                          {
                            if ( (*((_DWORD *)v254 + 11) & 1) == 0 )
                            {
                              v168 = (SURFACE *)*((_QWORD *)v254 + 62);
                              if ( v168 )
                              {
                                SURFACE::bUnMap(v168, &v240, 0LL);
                                v167 = v254;
                              }
                            }
                            *((_DWORD *)v167 + 11) &= ~1u;
                          }
                          _InterlockedOr(v216, 0);
                          if ( v251 && HIBYTE(v253) )
                          {
                            if ( (v249 & 0x400) != 0 )
                            {
                              bUnHookRedir((struct XDCOBJ *)&v251);
                              v249 &= ~0x400u;
                            }
                            if ( (v249 & 0x2000) != 0 )
                            {
                              bUnHookBmpDrv((struct XDCOBJ *)&v251);
                              v249 &= ~0x2000u;
                            }
                            if ( (v249 & 0x1000) != 0 )
                            {
                              if ( (*((_DWORD *)v251 + 11) & 1) == 0 )
                              {
                                v169 = (SURFACE *)*((_QWORD *)v251 + 62);
                                if ( v169 )
                                  SURFACE::bUnMap(v169, &v240, v251);
                              }
                              *((_DWORD *)v251 + 11) &= ~1u;
                            }
                          }
                        }
                        v57 = (unsigned __int64)v251;
                        if ( v251
                          && HIBYTE(v253)
                          && (v249 & 0x1000) != 0
                          && (*((_DWORD *)v251 + 9) & 0x4000) != 0
                          && *((_QWORD *)v251 + 59)
                          && *((_DWORD *)v251 + 122) )
                        {
                          GreUpdateSpriteDevLockEnd((struct tagSIZE **)&v251, v249 & 0x400000);
                        }
                      }
                      if ( v243 )
                      {
                        if ( v247 )
                        {
                          PopThreadGuardedObject(v246);
                          v247 = 0;
                        }
                        DEVLOCKBLTOBJ::TmpSrcCleanup((DEVLOCKBLTOBJ *)&v240);
                      }
                      if ( (v249 & 0x1000) == 0 )
                      {
                        if ( (v249 & 0x800000) != 0 )
                        {
                          GreDecLockCount(v249, v57, v58, v59);
                          v249 &= ~0x800000u;
                        }
                        goto LABEL_432;
                      }
                      if ( (v249 & 0x8000) != 0 )
                      {
                        DEVLOCKBLTOBJ::bDisposeTrgDco((DEVLOCKBLTOBJ *)&v240);
                        _InterlockedOr(v216, 0);
                        DEVLOCKBLTOBJ::bDisposeSrcDco((DEVLOCKBLTOBJ *)&v240);
                        v249 &= ~0x8000u;
LABEL_427:
                        GreDecLockCount(v170, v57, v58, v171);
                        v249 &= ~0x1000u;
                        v189 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                        if ( v189 )
                        {
                          v190 = *v189;
                          if ( v190 )
                          {
                            *(_QWORD *)(v190 + 320) = 0LL;
                            *(_QWORD *)(v190 + 312) = 0LL;
                          }
                        }
LABEL_432:
                        if ( (_QWORD)v240 )
                        {
                          EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
                          GreReleaseSemaphoreInternal(v240);
                        }
                        if ( *((_QWORD *)&v240 + 1) )
                        {
                          EtwTraceGreLockReleaseSemaphore(L"hsemSrc");
                          GreReleaseSemaphoreInternal(*((_QWORD *)&v240 + 1));
                        }
                        if ( (v249 & 8) != 0 )
                          v249 &= ~8u;
                        if ( (_QWORD)v241 )
                        {
                          EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
                          GreReleaseSemaphoreInternal(v241);
                        }
                        if ( *((_QWORD *)&v258 + 1) )
                        {
                          DCOBJ::DCOBJ((DCOBJ *)v276, v259);
                          LOBYTE(v191) = 5;
                          v192 = HmgShareLock(v258, v191);
                          LOBYTE(v193) = 5;
                          v194 = (__int64 *)v192;
                          v195 = (struct SURFACE *)HmgShareLock(*((_QWORD *)&v258 + 1), v193);
                          v196 = *v194;
                          v197 = v195;
                          DC::pSurface(v276[0], v195);
                          DEC_SHARE_REF_CNT(v194);
                          DEC_SHARE_REF_CNT(v197);
                          GreDereferenceObject(v196, 1LL);
                          v198 = v276[0];
                          v259 = 0LL;
                          *(_QWORD *)&v258 = 0LL;
                          *((_DWORD *)v276[0] + 9) |= v250;
                          v199 = Gre::Base::Globals(v198);
                          if ( (*((_DWORD *)v276[0] + 9) & 0x200) != 0 )
                          {
                            v200 = 0;
                            if ( !(unsigned int)GreGetLockCount(v276[0])
                              && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v199 + 15)) )
                            {
                              GreAcquireSemaphoreSharedInternal(*((_QWORD *)v199 + 15));
                              EtwTraceGreLockAcquireSemaphoreShared(
                                L"GreBaseGlobals.hsemGreLock",
                                *((_QWORD *)v199 + 15));
                              v200 = 1;
                            }
                            DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)((char *)&v223 + 1));
                            LOBYTE(v217) = 5;
                            v201 = HmgShareUnlockRemoveObject(*((_QWORD *)&v258 + 1), 0LL, 0LL, 0LL, (_DWORD)v217);
                            if ( v201 )
                              SURFACE::bDeleteSurface(v201, 0LL, 1LL);
                            *((_QWORD *)v276[0] + 63) = 0LL;
                            DC::vClearRendering(v276[0]);
                            *((_QWORD *)&v258 + 1) = 0LL;
                            DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)((char *)&v223 + 1));
                            if ( v200 )
                            {
                              EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
                              GreReleaseSemaphoreInternal(*((_QWORD *)v199 + 15));
                            }
                          }
                          else
                          {
                            LOBYTE(v217) = 5;
                            v202 = HmgShareUnlockRemoveObject(*((_QWORD *)&v258 + 1), 0LL, 0LL, 0LL, (_DWORD)v217);
                            if ( v202 )
                              SURFACE::bDeleteSurface(v202, 0LL, 1LL);
                            *((_QWORD *)v276[0] + 63) = 0LL;
                            *((_QWORD *)&v258 + 1) = 0LL;
                          }
                          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
                          GreReleaseSemaphoreInternal(*((_QWORD *)v199 + 10));
                          if ( v276[0] )
                            XDCOBJ::vUnlockFast((XDCOBJ *)v276);
                        }
                        if ( v261 )
                        {
                          DCOBJ::DCOBJ((DCOBJ *)v284, v262);
                          LOBYTE(v203) = 5;
                          v204 = HmgShareLock(v260, v203);
                          LOBYTE(v205) = 5;
                          v206 = (__int64 *)v204;
                          v207 = (struct SURFACE *)HmgShareLock(v261, v205);
                          v208 = *v206;
                          v209 = v207;
                          DC::pSurface(v284[0], v207);
                          DEC_SHARE_REF_CNT(v206);
                          DEC_SHARE_REF_CNT(v209);
                          GreDereferenceObject(v208, 1LL);
                          v262 = 0LL;
                          v260 = 0LL;
                          v211 = Gre::Base::Globals(v210);
                          if ( (*((_DWORD *)v284[0] + 9) & 0x200) != 0 )
                          {
                            v212 = 0;
                            if ( !(unsigned int)GreGetLockCount(v284[0])
                              && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v211 + 15)) )
                            {
                              GreAcquireSemaphoreSharedInternal(*((_QWORD *)v211 + 15));
                              EtwTraceGreLockAcquireSemaphoreShared(
                                L"GreBaseGlobals.hsemGreLock",
                                *((_QWORD *)v211 + 15));
                              v212 = 1;
                            }
                            DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)((char *)&v223 + 1));
                            LOBYTE(v217) = 5;
                            v213 = HmgShareUnlockRemoveObject(v261, 0LL, 0LL, 0LL, (_DWORD)v217);
                            if ( v213 )
                              SURFACE::bDeleteSurface(v213, 0LL, 1LL);
                            *((_QWORD *)v284[0] + 63) = 0LL;
                            DC::vClearRendering(v284[0]);
                            v261 = 0LL;
                            DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)((char *)&v223 + 1));
                            if ( v212 )
                            {
                              EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
                              GreReleaseSemaphoreInternal(*((_QWORD *)v211 + 15));
                            }
                          }
                          else
                          {
                            LOBYTE(v217) = 5;
                            v214 = HmgShareUnlockRemoveObject(v261, 0LL, 0LL, 0LL, (_DWORD)v217);
                            if ( v214 )
                              SURFACE::bDeleteSurface(v214, 0LL, 1LL);
                            *((_QWORD *)v284[0] + 63) = 0LL;
                            v261 = 0LL;
                          }
                          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
                          GreReleaseSemaphoreInternal(*((_QWORD *)v211 + 10));
                          if ( v284[0] )
                            XDCOBJ::vUnlockFast((XDCOBJ *)v284);
                        }
                        if ( v254 )
                        {
                          if ( (_BYTE)v256 )
                          {
                            *((_DWORD *)v254 + 10) &= ~2u;
                            LOBYTE(v256) = 0;
                          }
                          if ( v254 )
                          {
                            if ( (_DWORD)v255 && (*((_DWORD *)v254 + 11) & 2) != 0 )
                            {
                              XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v254);
                              *((_DWORD *)v254 + 11) &= ~2u;
                              LODWORD(v255) = 0;
                            }
                            v232 = 0;
                            v215 = *(_QWORD *)v254;
                            HmgDecrementExclusiveReferenceCountEx(v254, HIDWORD(v255), &v232);
                            if ( v232 )
                              GrepDeleteDC(v215, 0x2000000LL);
                          }
                          v254 = 0LL;
                        }
                        if ( v251 )
                        {
                          if ( (_BYTE)v253 )
                          {
                            *((_DWORD *)v251 + 10) &= ~2u;
                            LOBYTE(v253) = 0;
                          }
                          if ( v251 )
                            XDCOBJ::vUnlockFast((XDCOBJ *)&v251);
                          v251 = 0LL;
                        }
                        CAutoTGO::~CAutoTGO((CAutoTGO *)v246);
                        SURFMEM::~SURFMEM((SURFMEM *)&v243);
                        goto LABEL_487;
                      }
                      v170 = v254;
                      if ( v254 && HIBYTE(v256) )
                      {
                        v57 = *((_QWORD *)v254 + 6);
                        if ( (v249 & 0x20) != 0 )
                        {
                          *((_DWORD *)v254 + 9) &= ~0x4000u;
                          DC::pSurface(v254, *(struct SURFACE **)(v57 + 2528));
                        }
                        if ( v257 )
                        {
                          v172 = *(_QWORD *)(v257 + 72);
                          CurrentProcess = PsGetCurrentProcess(v170, v57, v58);
                          MmUnmapViewOfSection(CurrentProcess, v172);
                        }
                        if ( v254 )
                        {
                          if ( (v249 & 0x1000) != 0
                            && (!HIBYTE(v256)
                             || (v57 = (unsigned __int64)v251) == 0
                             || !HIBYTE(v253)
                             || *(_QWORD *)v254 != *(_QWORD *)v251) )
                          {
                            v174 = v254;
                            v175 = *((_DWORD *)v254 + 9);
                            if ( (v175 & 0x200) != 0 )
                            {
                              if ( (v175 & 0x4000) == 0 )
                              {
                                v176 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                                if ( v176 )
                                {
                                  v177 = *v176;
                                  if ( v177 )
                                    *(_DWORD *)(v177 + 328) &= ~1u;
                                }
                              }
                              v57 = (unsigned __int64)v251;
                              if ( v251
                                && HIBYTE(v253)
                                && (v174 = *(DC **)v251, *(_QWORD *)v254 == *(_QWORD *)v251)
                                && !(_QWORD)v258
                                || v254 && HIBYTE(v256) && !v260 )
                              {
                                v178 = Gre::Base::Globals(v174);
                                GreAcquireSemaphoreSharedInternal(*((_QWORD *)v178 + 11));
                                EtwTraceGreLockAcquireSemaphoreShared(
                                  L"GreBaseGlobals.hsemDCVisRgn",
                                  *((_QWORD *)v178 + 11));
                                DC::vClearRendering(v254);
                                v180 = Gre::Base::Globals(v179);
                                EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
                                GreReleaseSemaphoreInternal(*((_QWORD *)v180 + 11));
                              }
                            }
                          }
                        }
                        if ( v254 && (_BYTE)v256 )
                        {
                          *((_DWORD *)v254 + 10) &= ~2u;
                          LOBYTE(v256) = 0;
                        }
                        v170 = v254;
                        if ( v254 )
                        {
                          if ( (_DWORD)v255 && (*((_DWORD *)v254 + 11) & 2) != 0 )
                          {
                            XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v254);
                            *((_DWORD *)v254 + 11) &= ~2u;
                            LODWORD(v255) = 0;
                          }
                          v265 = 0;
                          v181 = *(_QWORD *)v254;
                          HmgDecrementExclusiveReferenceCountEx(v254, HIDWORD(v255), &v265);
                          if ( v265 )
                            GrepDeleteDC(v181, 0x2000000LL);
                        }
                        v254 = 0LL;
                      }
                      _InterlockedOr(v216, 0);
                      v171 = v251;
                      if ( !v251 || !HIBYTE(v253) )
                        goto LABEL_427;
                      v182 = v249;
                      v57 = *((_QWORD *)v251 + 6);
                      if ( (v249 & 0x10) != 0 )
                      {
                        *((_DWORD *)v251 + 9) &= ~0x4000u;
                        DC::pSurface(v251, *(struct SURFACE **)(v57 + 2528));
                        v171 = v251;
                        v182 = v249;
                      }
                      if ( v171 )
                      {
                        if ( (v182 & 0x1000) == 0
                          || (v57 = (unsigned __int64)v254) != 0
                          && HIBYTE(v256)
                          && DLODCOBJ::bValid((DLODCOBJ *)&v251)
                          && *(_QWORD *)v57 == *(_QWORD *)v171 )
                        {
LABEL_417:
                          if ( v171 )
                          {
                            if ( (_BYTE)v253 )
                            {
                              *((_DWORD *)v171 + 10) &= ~2u;
                              v171 = v251;
                              LOBYTE(v253) = 0;
                            }
                            if ( v171 )
                            {
                              if ( (_DWORD)v252 && (*((_DWORD *)v171 + 11) & 2) != 0 )
                              {
                                XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v251);
                                *((_DWORD *)v251 + 11) &= ~2u;
                                v171 = v251;
                                LODWORD(v252) = 0;
                              }
                              v266 = 0;
                              v188 = *(_QWORD *)v171;
                              HmgDecrementExclusiveReferenceCountEx(v171, HIDWORD(v252), &v266);
                              if ( v266 )
                                GrepDeleteDC(v188, 0x2000000LL);
                            }
                          }
                          goto LABEL_426;
                        }
                        if ( v171 )
                        {
                          v183 = *((_DWORD *)v171 + 9);
                          if ( (v183 & 0x200) != 0 )
                          {
                            if ( (v183 & 0x4000) == 0 )
                            {
                              v184 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                              if ( v184 )
                                *(_DWORD *)(v184 + 328) &= ~1u;
                              v171 = v251;
                            }
                            if ( v171 && HIBYTE(v253) && !(_QWORD)v258
                              || DLODCOBJ::bValid((DLODCOBJ *)&v254) && *(_QWORD *)v171 == *(_QWORD *)v57 && !v260 )
                            {
                              v185 = Gre::Base::Globals(v170);
                              GreAcquireSemaphoreSharedInternal(*((_QWORD *)v185 + 11));
                              EtwTraceGreLockAcquireSemaphoreShared(
                                L"GreBaseGlobals.hsemDCVisRgn",
                                *((_QWORD *)v185 + 11));
                              DC::vClearRendering(v251);
                              v187 = Gre::Base::Globals(v186);
                              EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
                              GreReleaseSemaphoreInternal(*((_QWORD *)v187 + 11));
                              v171 = v251;
                            }
                          }
                          goto LABEL_417;
                        }
                      }
LABEL_426:
                      v251 = 0LL;
                      goto LABEL_427;
                    }
                    v96 = *((_QWORD *)v69 + 11);
                    v229 = a10;
                    if ( a10 == -1 )
                      v229 = *(_DWORD *)(*((_QWORD *)v69 + 122) + 180LL);
                    v97 = *((_QWORD *)v60 + 122);
                    v98 = (Gre::Base *)*(unsigned int *)(v97 + 176);
                    v264 = *(_DWORD *)(v97 + 184);
                    v277 = *((_DWORD *)v60 + 30);
                    v263 = (int)v98;
                    if ( !v76 )
                    {
                      if ( v62 )
                      {
                        if ( (*(_DWORD *)(v62 + 24) & 0x800) == 0 )
                          goto LABEL_233;
                        v119 = *(_QWORD *)(v63 + 80);
                        if ( v119 )
                        {
                          if ( v119 != *(_QWORD *)(v63 + 72) )
                            goto LABEL_233;
                        }
                      }
                      goto LABEL_239;
                    }
                    if ( !v62 )
                    {
                      if ( (*(_DWORD *)(v76 + 24) & 0x800) == 0 )
                        goto LABEL_233;
                      v99 = *(_QWORD *)(v63 + 80);
                      if ( v99 )
                      {
                        if ( v99 != *(_QWORD *)(v63 + 72) )
                          goto LABEL_233;
                      }
                      goto LABEL_239;
                    }
                    v100 = *(_QWORD *)(v76 + 120);
                    if ( v100 == v76 )
                      v101 = *(_DWORD *)(v76 + 32);
                    else
                      v101 = *(_DWORD *)(v100 + 32);
                    v102 = *(_QWORD *)(v62 + 120);
                    if ( v102 == v62 )
                      v98 = (Gre::Base *)*(unsigned int *)(v62 + 32);
                    else
                      v98 = (Gre::Base *)*(unsigned int *)(v102 + 32);
                    if ( v101 == (_DWORD)v98 )
                    {
LABEL_239:
                      v94 = (XLATEOBJ *)((char *)Gre::Base::Globals(v98) + 6896);
                      v230 = v94;
                      goto LABEL_240;
                    }
                    v103 = *(_DWORD *)(v76 + 56);
                    v289 = v63;
                    v290 = v96;
                    v104 = Gre::Base::Globals(v98);
                    v105 = *((_QWORD *)v104 + 5);
                    v291 = v105;
                    GreAcquireSemaphore(v105);
                    v106 = *(_QWORD *)(v76 + 120);
                    v107 = 0;
                    for ( *(_QWORD *)&v298.left = v106; ; v106 = *(_QWORD *)&v298.left )
                    {
                      if ( v106 == v76 )
                        v108 = *(_DWORD *)(v76 + 32);
                      else
                        v108 = *(_DWORD *)(v106 + 32);
                      v109 = 32LL * v103;
                      if ( *(_DWORD *)((char *)v104 + v109 + 6648) != v108 )
                        goto LABEL_225;
                      v110 = *(_QWORD *)(v62 + 120);
                      v111 = v110 == v62 ? *(_DWORD *)(v62 + 32) : *(_DWORD *)(v110 + 32);
                      if ( *(_DWORD *)((char *)v104 + v109 + 6652) != v111 )
                        goto LABEL_225;
                      v112 = XEPALOBJ::ulTime((XEPALOBJ *)&v289);
                      if ( *(_DWORD *)((char *)v104 + v113 + 6660) != v112 )
                        goto LABEL_225;
                      v114 = *(XLATEOBJ **)((char *)v104 + v113 + 6640);
                      v230 = v114;
                      if ( (v114[3].flXlate & 0x6000) != 0 )
                        goto LABEL_225;
                      v115 = v114[3].flXlate & 0x100;
                      if ( (v114->flXlate & 4) == 0 )
                        break;
                      if ( v229 == v114[1].iUniq )
                      {
                        v117 = XEPALOBJ::ulTime((XEPALOBJ *)&v290);
                        if ( *((_DWORD *)v104 + 8 * v118 + 1664) == v117 )
                        {
LABEL_219:
                          _InterlockedIncrement((volatile signed __int32 *)((char *)v104 + v113 + 6632));
                          *(_DWORD *)(v76 + 56) = v103;
                          SEMOBJ::~SEMOBJ((SEMOBJ *)&v291);
                          v94 = v230;
                          goto LABEL_240;
                        }
                      }
                      if ( v115 )
                        goto LABEL_223;
LABEL_225:
                      ++v107;
                      v103 = ((_BYTE)v103 + 1) & 7;
                      if ( v107 >= 8 )
                      {
                        if ( v105 )
                        {
                          EtwTraceGreLockReleaseSemaphore(L"hsem");
                          GreReleaseSemaphoreInternal(v105);
                        }
LABEL_233:
                        LODWORD(v222) = 0;
                        LODWORD(v221) = v229;
                        LODWORD(v220) = v263;
                        LODWORD(v219) = v264;
                        XlateObject = CreateXlateObject(0LL, v277, v76, v62, v96, v63, v219, v220, v221, v222);
                        v230 = (XLATEOBJ *)XlateObject;
                        v94 = (XLATEOBJ *)XlateObject;
                        if ( XlateObject )
                        {
                          if ( v76 && v62 && !_bittest((const signed __int32 *)(XlateObject + 76), 9u) )
                            EXLATEOBJ::vAddToCache(&v230, v76, v62, v96, v63);
LABEL_240:
                          v19 = 1;
                        }
                        else
                        {
                          v19 = 0;
                        }
                        v60 = v224;
                        v95 = v94;
                        if ( (*((_DWORD *)v224 + 9) & 1) == 0 )
                        {
                          v296[1].x = v295.right - v278;
                          v296[1].y = v295.bottom - v235;
                        }
                        if ( v19 )
                        {
                          v69 = v226;
                          goto LABEL_245;
                        }
                        goto LABEL_318;
                      }
                    }
                    if ( !v115 )
                      goto LABEL_219;
LABEL_223:
                    if ( v264 == v114[1].flXlate && v263 == *(_DWORD *)&v114[1].iSrcType )
                      goto LABEL_219;
                    goto LABEL_225;
                  }
                  v91 = (struct _RECTL *)((char *)v60 + 1080);
                  v92 = *((_DWORD *)v60 + 270);
                  if ( v92 == *((_DWORD *)v60 + 272) || *((_DWORD *)v60 + 271) == *((_DWORD *)v60 + 273) )
                  {
                    *v91 = v297;
                  }
                  else
                  {
                    if ( v88 < v92 )
                    {
                      v91->left = v88;
                      v60 = v224;
                      v69 = v226;
                      v89 = v297.right;
                      v90 = v297.top;
                    }
                    if ( v90 < v91->top )
                    {
                      v91->top = v90;
                      v60 = v224;
                      v69 = v226;
                      v89 = v297.right;
                    }
                    if ( v89 > v91->right )
                    {
                      v91->right = v89;
                      v60 = v224;
                      v69 = v226;
                    }
                    if ( v297.bottom <= v91->bottom )
                      goto LABEL_183;
                    v91->bottom = v297.bottom;
                  }
                  v69 = v226;
                  v60 = v224;
LABEL_183:
                  v280 = *((_QWORD *)v60 + 148);
                  if ( v280 )
                  {
                    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v239);
                    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v239);
                    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v238);
                    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v238);
                    if ( v239[0] )
                    {
                      if ( v238 )
                      {
                        RGNOBJ::vSet((RGNOBJ *)&v238, &v297);
                        if ( RGNOBJ::bMerge((RGNOBJ *)v239, (struct RGNOBJ *)&v280, (struct RGNOBJ *)&v238, 0xEu) )
                        {
                          RGNOBJ::vSwap((RGNOBJ *)&v280, (struct RGNOBJ *)v239);
                          *((_QWORD *)v224 + 148) = v280;
                        }
                      }
                    }
                    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v238);
                    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v238);
                    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v239);
                    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v239);
                    v60 = v224;
                    v69 = v226;
                  }
                  goto LABEL_189;
                }
                v234 = (__int64)v60 + 1768;
                v85 = XDCOBJ::prgnEffRao((XDCOBJ *)&v224);
                XCLIPOBJ::vSetup((DC *)((char *)v60 + 1768), v85, (struct ERECTL *)&v295, 2);
                v295 = *(RECTL *)((char *)v60 + 1772);
                if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v295) )
                {
                  v60 = v224;
                  v69 = v226;
                  goto LABEL_160;
                }
              }
LABEL_325:
              v19 = 1;
              goto LABEL_173;
            }
            if ( *(_DWORD *)(v70 + 656) )
            {
              if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v70 + 656) )
                goto LABEL_172;
              v60 = v224;
              v69 = v226;
              v58 = (unsigned int)v295.top;
              v59 = (unsigned int)v295.left;
            }
            v71 = *(_DWORD *)(v70 + 112);
            if ( (v71 & 0x800) != 0 )
            {
              v72 = UserSurfaceAccessCheck(*(_QWORD *)(v70 + 648), v57, v58);
            }
            else
            {
              if ( (v71 & 0x10000000) == 0 )
              {
LABEL_129:
                if ( (*(_DWORD *)(v61 + 116) & 8) == 0 && !*(_QWORD *)(v61 + 224)
                  || !_bittest16((const signed __int16 *)(v61 + 102), 9u) )
                {
                  v73 = *(_DWORD *)(v61 + 112);
                  if ( (v73 & 0x800) != 0 )
                  {
                    v74 = UserSurfaceAccessCheck(*(_QWORD *)(v61 + 648), v57, v58);
                  }
                  else
                  {
                    if ( (v73 & 0x10000000) == 0 )
                      goto LABEL_138;
                    v74 = UserScreenAccessCheck(v68, v57, v58);
                  }
                  if ( v74 )
                  {
                    v60 = v224;
                    v69 = v226;
                    v58 = (unsigned int)v295.top;
                    v59 = (unsigned int)v295.left;
                    goto LABEL_138;
                  }
                }
LABEL_172:
                EngSetLastError(6u);
                goto LABEL_173;
              }
              v72 = UserScreenAccessCheck(v68, v57, v58);
            }
            if ( !v72 )
              goto LABEL_172;
            v60 = v224;
            v69 = v226;
            v58 = (unsigned int)v295.top;
            v59 = (unsigned int)v295.left;
            goto LABEL_129;
          }
          v19 = 1;
        }
        else
        {
          v19 = GreStretchBlt((_DWORD)v236, left, top, a4, v229, v234, a7, v40, a4, v229, v22, a10);
        }
LABEL_487:
        if ( v233 )
          DC::dwSetLayout(v224, -1, v267);
        v38 = v226;
        goto LABEL_490;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v36 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_53:
        _InterlockedDecrement((volatile signed __int32 *)v36 + 3);
        v38 = 0LL;
        v226 = 0LL;
        goto LABEL_490;
      }
      v37 = *((_DWORD *)v36 + 528);
      if ( v37 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v36 = v226;
        goto LABEL_53;
      }
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    v36 = v226;
    goto LABEL_60;
  }
LABEL_495:
  NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState(&v223);
  return v19;
}
