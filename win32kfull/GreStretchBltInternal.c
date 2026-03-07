__int64 __fastcall GreStretchBltInternal(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  unsigned int v14; // r13d
  int v15; // edi
  unsigned int v16; // edi
  int v17; // ebx
  unsigned __int64 v19; // rdx
  char v20; // al
  int v21; // eax
  unsigned int v22; // ebx
  __int64 *ThreadWin32Thread; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  bool v27; // zf
  struct UMPDOBJ *v28; // rax
  DC *v29; // rdx
  int v30; // ebx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v32; // rdx
  int v33; // edi
  __int64 *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  struct UMPDOBJ *v37; // rax
  DC *v38; // rdx
  int v39; // ebx
  struct _DC_ATTR *v40; // rax
  DC *v41; // rcx
  __int64 v42; // rdx
  int v43; // ebx
  __int64 v44; // rdx
  __int64 v45; // rcx
  ULONG v46; // ecx
  DC *v47; // r8
  DC *v48; // r9
  struct SURFACE *v49; // rbx
  int v50; // eax
  int v51; // eax
  struct SURFACE *v52; // rcx
  int v53; // eax
  int v54; // eax
  __int64 v55; // rbx
  unsigned int v56; // eax
  struct SURFACE *v57; // rdi
  __int64 v58; // r12
  __int64 v59; // r15
  __int64 v60; // rcx
  int v61; // r14d
  SURFACE *v62; // rcx
  int v63; // ebx
  DC *v64; // r8
  __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  struct SURFACE *v67; // rax
  struct SURFACE *v68; // rbx
  __int64 v69; // rbx
  DC *v70; // rcx
  __int64 v71; // r9
  __int64 v72; // rax
  int v73; // r8d
  __int64 v74; // r14
  __int64 v75; // rdi
  int v76; // edx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // edx
  __int64 v81; // rax
  int v82; // esi
  __int64 v83; // rsi
  unsigned int v84; // edx
  __int64 v85; // rax
  int v86; // ecx
  unsigned int v87; // eax
  __int64 v88; // r10
  unsigned int v89; // eax
  __int64 v90; // r10
  Gre::Base *v91; // r9
  int v92; // r8d
  unsigned int v93; // eax
  __int64 v94; // r11
  Gre::Base *XlateObject; // rax
  __int64 v96; // r8
  int v97; // ecx
  int v98; // ebx
  int v99; // r11d
  int v100; // r8d
  int v101; // esi
  unsigned int v102; // r14d
  unsigned int v103; // eax
  int v104; // edi
  int v105; // r14d
  int v106; // r10d
  int v107; // r9d
  __int64 v108; // rcx
  unsigned int v109; // eax
  unsigned int v110; // eax
  int v111; // ebx
  SURFACE *v112; // rax
  DC *v113; // rcx
  DC *v114; // r8
  __int64 v115; // rcx
  __int64 v116; // r8
  DC *v117; // rcx
  DC *v118; // r9
  SURFACE *v119; // rcx
  DC *v120; // rcx
  int v121; // eax
  __int64 *v122; // rax
  __int64 v123; // rax
  struct Gre::Base::SESSION_GLOBALS *v124; // rbx
  Gre::Base *v125; // rcx
  struct Gre::Base::SESSION_GLOBALS *v126; // rbx
  __int64 v127; // rbx
  __int64 v128; // rbx
  __int64 CurrentProcess; // rax
  int v130; // eax
  __int64 *v131; // rax
  __int64 v132; // rax
  struct Gre::Base::SESSION_GLOBALS *v133; // rbx
  Gre::Base *v134; // rcx
  struct Gre::Base::SESSION_GLOBALS *v135; // rbx
  __int64 v136; // rbx
  SURFACE *v137; // rcx
  __int64 v138; // rbx
  __int64 v139; // rax
  int v140; // eax
  __int64 *v141; // rax
  __int64 v142; // rax
  struct Gre::Base::SESSION_GLOBALS *v143; // rbx
  Gre::Base *v144; // rcx
  struct Gre::Base::SESSION_GLOBALS *v145; // rbx
  __int64 v146; // rbx
  __int16 v147; // ax
  int v148; // eax
  __int64 *v149; // rax
  __int64 v150; // rax
  struct Gre::Base::SESSION_GLOBALS *v151; // rbx
  Gre::Base *v152; // rcx
  struct Gre::Base::SESSION_GLOBALS *v153; // rbx
  __int64 v154; // rbx
  __int64 *v155; // rax
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rax
  __int64 v159; // rdx
  __int64 *v160; // rdi
  struct SURFACE *v161; // rax
  __int64 v162; // rsi
  struct SURFACE *v163; // rbx
  Gre::Base *v164; // rcx
  struct Gre::Base::SESSION_GLOBALS *v165; // rbx
  char v166; // di
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rax
  __int64 v171; // rdx
  __int64 *v172; // rdi
  struct SURFACE *v173; // rax
  __int64 v174; // rsi
  struct SURFACE *v175; // rbx
  Gre::Base *v176; // rcx
  struct Gre::Base::SESSION_GLOBALS *v177; // rbx
  char v178; // di
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rbx
  __int64 v182; // rbx
  DC *v183; // rcx
  struct _DC_ATTR *v184; // rax
  __int64 v185; // rbx
  DC *v186; // rcx
  struct _DC_ATTR *v187; // rax
  __int64 v188; // rbx
  char v189; // al
  int v190; // edx
  struct Gre::Base::SESSION_GLOBALS *v191; // rax
  signed __int32 v192[8]; // [rsp+0h] [rbp-100h] BYREF
  char v193[8]; // [rsp+20h] [rbp-E0h]
  __int64 v194; // [rsp+30h] [rbp-D0h]
  __int64 v195; // [rsp+38h] [rbp-C8h]
  __int64 v196; // [rsp+40h] [rbp-C0h]
  __int64 v197; // [rsp+48h] [rbp-B8h]
  DC *v198; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v199; // [rsp+58h] [rbp-A8h]
  DC *v200; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v201; // [rsp+68h] [rbp-98h]
  int v202; // [rsp+70h] [rbp-90h] BYREF
  int v203; // [rsp+74h] [rbp-8Ch]
  int v204; // [rsp+78h] [rbp-88h] BYREF
  int v205; // [rsp+7Ch] [rbp-84h] BYREF
  char v206; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v207[3]; // [rsp+81h] [rbp-7Fh] BYREF
  unsigned int v208; // [rsp+84h] [rbp-7Ch] BYREF
  int v209; // [rsp+88h] [rbp-78h] BYREF
  __int128 v210; // [rsp+90h] [rbp-70h] BYREF
  __int128 v211; // [rsp+A0h] [rbp-60h]
  __int64 v212; // [rsp+B0h] [rbp-50h]
  __int64 v213; // [rsp+B8h] [rbp-48h] BYREF
  char v214; // [rsp+C0h] [rbp-40h]
  int v215; // [rsp+C4h] [rbp-3Ch]
  _BYTE v216[32]; // [rsp+C8h] [rbp-38h] BYREF
  int v217; // [rsp+E8h] [rbp-18h]
  __int128 v218; // [rsp+F0h] [rbp-10h]
  unsigned int v219; // [rsp+100h] [rbp+0h]
  int v220; // [rsp+104h] [rbp+4h]
  DC *v221; // [rsp+108h] [rbp+8h] BYREF
  __int64 v222; // [rsp+110h] [rbp+10h]
  __int16 v223; // [rsp+118h] [rbp+18h]
  DC *v224; // [rsp+120h] [rbp+20h] BYREF
  __int64 v225; // [rsp+128h] [rbp+28h]
  __int16 v226; // [rsp+130h] [rbp+30h]
  __int64 v227; // [rsp+138h] [rbp+38h]
  __int128 v228; // [rsp+140h] [rbp+40h]
  HDC v229; // [rsp+150h] [rbp+50h]
  __int64 v230; // [rsp+158h] [rbp+58h]
  __int64 v231; // [rsp+160h] [rbp+60h]
  HDC v232; // [rsp+168h] [rbp+68h]
  unsigned int v233; // [rsp+170h] [rbp+70h]
  int v234; // [rsp+174h] [rbp+74h] BYREF
  int v235; // [rsp+178h] [rbp+78h] BYREF
  int v236; // [rsp+17Ch] [rbp+7Ch]
  struct SURFACE *v237; // [rsp+180h] [rbp+80h]
  int v238; // [rsp+188h] [rbp+88h]
  int v239; // [rsp+18Ch] [rbp+8Ch]
  int v240; // [rsp+190h] [rbp+90h]
  int v241; // [rsp+194h] [rbp+94h]
  unsigned int v242; // [rsp+198h] [rbp+98h]
  unsigned int v243; // [rsp+19Ch] [rbp+9Ch]
  int v244; // [rsp+1A0h] [rbp+A0h] BYREF
  DC *v245[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  int v246; // [rsp+1B8h] [rbp+B8h]
  DC *v247[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v248; // [rsp+1D0h] [rbp+D0h]
  struct Gre::Base::SESSION_GLOBALS *v249; // [rsp+1D8h] [rbp+D8h]
  __int64 v250; // [rsp+1E0h] [rbp+E0h]
  __int64 v251; // [rsp+1E8h] [rbp+E8h]
  __int64 v252; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v253; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v254; // [rsp+200h] [rbp+100h] BYREF
  __int64 v255; // [rsp+208h] [rbp+108h] BYREF
  _BYTE v256[16]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v257[16]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v258[16]; // [rsp+230h] [rbp+130h] BYREF
  _DWORD v259[4]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v260[2]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v261; // [rsp+260h] [rbp+160h] BYREF
  __int64 v262; // [rsp+270h] [rbp+170h]
  __int64 v263; // [rsp+278h] [rbp+178h]
  __int64 v264; // [rsp+280h] [rbp+180h]
  __int64 v265; // [rsp+288h] [rbp+188h]
  struct SURFACE *v266; // [rsp+290h] [rbp+190h]
  struct SURFACE *v267; // [rsp+298h] [rbp+198h]
  __int64 v268; // [rsp+2A0h] [rbp+1A0h]
  Gre::Base *v269; // [rsp+2A8h] [rbp+1A8h] BYREF
  char *v270; // [rsp+2B0h] [rbp+1B0h]
  _BYTE v271[40]; // [rsp+2B8h] [rbp+1B8h] BYREF
  int v272; // [rsp+2E0h] [rbp+1E0h] BYREF
  int v273; // [rsp+2E4h] [rbp+1E4h]
  int v274; // [rsp+2E8h] [rbp+1E8h]
  int v275; // [rsp+2ECh] [rbp+1ECh]
  int v276; // [rsp+2F8h] [rbp+1F8h] BYREF
  int v277; // [rsp+2FCh] [rbp+1FCh]
  int v278; // [rsp+300h] [rbp+200h]
  unsigned int v279; // [rsp+304h] [rbp+204h]
  __int64 v280; // [rsp+318h] [rbp+218h]
  unsigned int v281; // [rsp+320h] [rbp+220h]
  int v282; // [rsp+324h] [rbp+224h]

  v14 = 0;
  v236 = a2;
  v204 = a4;
  v268 = 0LL;
  v235 = a11 & 0x40000000;
  v15 = 0x3FFFFFFF;
  v282 = 0;
  if ( (a11 & 0x40000000) == 0 )
    v15 = 0x7FFFFFFF;
  v243 = 0;
  v16 = a11 & v15;
  v17 = a3;
  v205 = a3;
  v203 = (a11 & 0x40000000) != 0;
  v209 = a5;
  v19 = ((v16 >> 8) | v16 & 0xFF0000) >> 8;
  v281 = ((v16 >> 8) | v16 & 0xFF0000) >> 8;
  v20 = gajRop3[v19 >> 8] | gajRop3[(unsigned __int16)(v16 >> 8) >> 8];
  v208 = (unsigned __int8)gajRop3[v19 >> 8] | (unsigned __int8)gajRop3[(unsigned __int16)(v16 >> 8) >> 8];
  v202 = v20 & 0xD4;
  if ( (v20 & 0xD4) == 0 )
  {
    v21 = (unsigned __int8)v19;
    v19 = (unsigned int)v19 >> 8;
    if ( v21 == (_DWORD)v19 )
    {
      v22 = NtGdiPatBlt(a1, a2, a3, a4, a5, v16);
      BLTRECORD::~BLTRECORD((BLTRECORD *)v260);
      return v22;
    }
  }
  LOBYTE(v19) = 1;
  v199 = 0LL;
  v198 = (DC *)HmgLockEx(a1, v19, 0LL);
  if ( v198 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread
      || (v25 = *ThreadWin32Thread) == 0
      || (v26 = *(_QWORD *)(v25 + 40), v27 = v26 == v25 + 40, v28 = (struct UMPDOBJ *)(v26 - 40), v27) )
    {
      v28 = 0LL;
    }
    v29 = v198;
    if ( *((_WORD *)v198 + 6) == 1 )
    {
      *((_QWORD *)v198 + 271) = v28;
      *((_DWORD *)v198 + 544) = 0xFFFF;
      v29 = v198;
    }
    else if ( *((struct UMPDOBJ **)v198 + 271) != v28 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v198, v28);
      _InterlockedDecrement((volatile signed __int32 *)v198 + 3);
      v198 = 0LL;
      goto LABEL_34;
    }
    if ( !HIDWORD(v199) )
      goto LABEL_24;
    if ( (*(_DWORD *)(*((_QWORD *)v29 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_17:
      _InterlockedDecrement((volatile signed __int32 *)v29 + 3);
      v198 = 0LL;
      goto LABEL_34;
    }
    v30 = *((_DWORD *)v29 + 528);
    v27 = v30 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
    v17 = v205;
    if ( !v27 )
    {
      v29 = v198;
      goto LABEL_17;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v29 = v198;
LABEL_24:
  if ( v29 )
  {
    if ( (*((_DWORD *)v29 + 11) & 2) == 0 )
    {
      if ( !HIDWORD(v199) )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v198);
        if ( UserAttr && !DC::SaveAttributes(v198, UserAttr) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v198 + 3);
          v198 = 0LL;
          goto LABEL_34;
        }
        v29 = v198;
      }
      *((_DWORD *)v29 + 11) |= 2u;
      v29 = v198;
      LODWORD(v199) = 1;
    }
    if ( (*((_DWORD *)v29 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v29);
  }
LABEL_34:
  v32 = BYTE1(v16);
  if ( ((gajRop3[(unsigned __int8)v16] | gajRop3[BYTE1(v16)]) & 2) == 0 || v16 == 16711778 )
  {
    v33 = v204;
  }
  else
  {
    v27 = v16 == 66;
    v33 = v204;
    if ( !v27 )
      bSpDwmValidateSurface((struct XDCOBJ *)&v198, a2, v17, v204, v209);
  }
  v200 = 0LL;
  LOBYTE(v32) = 1;
  v201 = 0LL;
  v200 = (DC *)HmgLockEx(a6, v32, 0LL);
  if ( v200 )
  {
    v34 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !v34
      || (v35 = *v34) == 0
      || (v36 = *(_QWORD *)(v35 + 40), v27 = v36 == v35 + 40, v37 = (struct UMPDOBJ *)(v36 - 40), v27) )
    {
      v37 = 0LL;
    }
    v38 = v200;
    if ( *((_WORD *)v200 + 6) == 1 )
    {
      *((_QWORD *)v200 + 271) = v37;
      *((_DWORD *)v200 + 544) = 0xFFFF;
      v38 = v200;
    }
    else if ( *((struct UMPDOBJ **)v200 + 271) != v37 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v200, v37);
      _InterlockedDecrement((volatile signed __int32 *)v200 + 3);
      v200 = 0LL;
      goto LABEL_67;
    }
    if ( !HIDWORD(v201) )
      goto LABEL_57;
    if ( (*(_DWORD *)(*((_QWORD *)v38 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_50:
      _InterlockedDecrement((volatile signed __int32 *)v38 + 3);
      v200 = 0LL;
      goto LABEL_67;
    }
    v39 = *((_DWORD *)v38 + 528);
    if ( v39 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v38 = v200;
      goto LABEL_50;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v38 = v200;
LABEL_57:
  if ( v38 )
  {
    if ( (*((_DWORD *)v38 + 11) & 2) == 0 )
    {
      if ( !HIDWORD(v201) )
      {
        v40 = XDCOBJ::GetUserAttr((XDCOBJ *)&v200);
        if ( v40 && !DC::SaveAttributes(v200, v40) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v200 + 3);
          v200 = 0LL;
          goto LABEL_67;
        }
        v38 = v200;
      }
      *((_DWORD *)v38 + 11) |= 2u;
      v38 = v200;
      LODWORD(v201) = 1;
    }
    if ( (*((_DWORD *)v38 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v38);
  }
LABEL_67:
  bSpDwmValidateSurface((struct XDCOBJ *)&v200, a7, a8, a9, a10);
  v41 = v198;
  if ( !v198 )
    goto LABEL_569;
  if ( (*((_DWORD *)v198 + 9) & 0x10000) == 0 )
  {
    v42 = *((_QWORD *)v198 + 122);
    if ( (*(_DWORD *)(v42 + 152) & 0x1000) != 0 )
    {
      GreDCSelectBrush(v198, *(_QWORD *)(v42 + 160));
      v41 = v198;
    }
  }
  if ( v41 )
  {
    v43 = v202;
    if ( (*((_DWORD *)v41 + 9) & 0x10000) == 0 && (v200 || !v202) )
    {
      v213 = 0LL;
      v210 = 0LL;
      v211 = 0LL;
      v218 = 0LL;
      v228 = 0LL;
      v214 = 0;
      v215 = 0;
      v217 = 0;
      v222 = 0LL;
      v223 = 256;
      v225 = 0LL;
      v226 = 256;
      v212 = 0LL;
      v219 = 0;
      v227 = 0LL;
      v229 = 0LL;
      v232 = 0LL;
      v230 = 0LL;
      v231 = 0LL;
      v221 = 0LL;
      v224 = 0LL;
      if ( v202 )
        DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)&v210, (struct XDCOBJ *)&v198, (struct XDCOBJ *)&v200, v203);
      else
        DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)&v210, (struct XDCOBJ *)&v198);
      if ( (v219 & 1) == 0 )
      {
        v46 = 8;
LABEL_80:
        EngSetLastError(v46);
LABEL_81:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)&v210, v44, v47);
        DCOBJ::~DCOBJ((DCOBJ *)&v200);
        DCOBJ::~DCOBJ((DCOBJ *)&v198);
        BLTRECORD::~BLTRECORD((BLTRECORD *)v260);
        return 0LL;
      }
      v48 = v198;
      v47 = v200;
      if ( v198 )
      {
        if ( *((_QWORD *)v198 + 62) )
        {
          if ( (*((_DWORD *)v198 + 9) & 0x5000) != 0x1000
            && v200
            && *((_QWORD *)v200 + 62)
            && (*((_DWORD *)v200 + 9) & 0x5000) != 0x1000
            && (*(_DWORD *)(*((_QWORD *)v200 + 62) + 112LL) & 0x10000000) == 0 )
          {
            goto LABEL_93;
          }
LABEL_91:
          if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)&v200) )
          {
            if ( (*((_DWORD *)v47 + 9) & 1) == 0 )
              goto LABEL_81;
LABEL_93:
            if ( v43 )
            {
              v49 = (struct SURFACE *)*((_QWORD *)v47 + 62);
              if ( !v49 )
                v49 = SURFACE::pdibDefault;
              if ( *((_DWORD *)v49 + 164) )
              {
                if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v49 + 164) )
                  goto LABEL_564;
                v48 = v198;
                v47 = v200;
              }
              v50 = *((_DWORD *)v49 + 28);
              if ( (v50 & 0x800) != 0 )
              {
                v51 = UserSurfaceAccessCheck(*((_QWORD *)v49 + 81), v44, v47);
LABEL_103:
                if ( !v51 )
                  goto LABEL_564;
                v48 = v198;
                v47 = v200;
                goto LABEL_105;
              }
              if ( (v50 & 0x10000000) != 0 )
              {
                v51 = UserScreenAccessCheck(v45, v44, v47);
                goto LABEL_103;
              }
            }
LABEL_105:
            v52 = (struct SURFACE *)*((_QWORD *)v48 + 62);
            if ( !v52 )
              v52 = SURFACE::pdibDefault;
            if ( (*((_DWORD *)v52 + 29) & 8) == 0 && !*((_QWORD *)v52 + 28)
              || !_bittest16((const signed __int16 *)v52 + 51, 9u) )
            {
              v53 = *((_DWORD *)v52 + 28);
              if ( (v53 & 0x800) != 0 )
              {
                v54 = UserSurfaceAccessCheck(*((_QWORD *)v52 + 81), v44, v47);
              }
              else
              {
                if ( (v53 & 0x10000000) == 0 )
                  goto LABEL_116;
                v54 = UserScreenAccessCheck(v52, v44, v47);
              }
              if ( v54 )
              {
                v48 = v198;
                v47 = v200;
LABEL_116:
                if ( (unsigned __int8)v281 != BYTE1(v281) )
                {
                  v46 = 87;
                  goto LABEL_80;
                }
                if ( (a11 < 0 && (*(_DWORD *)(*((_QWORD *)v48 + 122) + 108LL) & 1) != 0
                   || (*(_BYTE *)(*((_QWORD *)v48 + 122) + 108LL) & 9) == 9)
                  && a6 != a1 )
                {
                  v55 = *(_QWORD *)(*((_QWORD *)v48 + 122) + 308LL);
                  v56 = DC::dwSetLayout(v48, -1, 0);
                  v48 = v198;
                  v47 = v200;
                  v236 = v55 - a2 - v33;
                  v243 = v56;
                  v242 = 0x80000000;
                }
                else
                {
                  v242 = 0;
                }
                v57 = (struct SURFACE *)*((_QWORD *)v47 + 62);
                v250 = 0LL;
                v237 = v57;
                if ( !v57 )
                {
                  v57 = SURFACE::pdibDefault;
                  v237 = SURFACE::pdibDefault;
                }
                LODWORD(v58) = 0;
                v59 = *((_QWORD *)v57 + 6);
                v251 = 0LL;
                if ( !v235 )
                  goto LABEL_155;
                if ( (*((_DWORD *)v47 + 9) & 1) == 0
                  || (v60 = *((_QWORD *)v47 + 6), (*(_DWORD *)(v60 + 40) & 0x80u) != 0)
                  || v60 != *((_QWORD *)v48 + 6)
                  && (!(unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v198)
                   || (v48 = v198, v47 = v200, *((_QWORD *)v200 + 6) != *(_QWORD *)(*((_QWORD *)v198 + 6) + 3496LL)))
                  || !v59 )
                {
                  v203 = 0;
                  goto LABEL_155;
                }
                v61 = v202;
                if ( v202 )
                {
                  if ( (*((_DWORD *)v47 + 9) & 0x4000) != 0 )
                  {
                    v62 = (SURFACE *)*((_QWORD *)v47 + 62);
                    if ( v62 != *((SURFACE **)v48 + 62) )
                    {
                      SURFACE::bUnMap(v62, 0LL, 0LL);
                      v48 = v198;
                    }
                  }
                }
                if ( (*((_DWORD *)v48 + 9) & 0x4000) != 0 )
                  SURFACE::bUnMap(*((SURFACE **)v48 + 62), 0LL, v48);
                GreAcquireSemaphore(*(_QWORD *)(v59 + 56));
                EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoSrc.hsemPointer()", *(_QWORD *)(v59 + 56), 4LL);
                v58 = *(_QWORD *)(v59 + 64);
                v251 = v58;
                UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v256);
                if ( (a13 & 2) == 0 || !LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
                  GreMovePointer(*((_DWORD **)v57 + 6), -1, -1, 0);
                SURFACE::vSetIncludeSprites();
                v63 = 0;
                if ( v61 && (*((_DWORD *)v200 + 9) & 0x4000) != 0 )
                {
                  v64 = v198;
                  v65 = *((_QWORD *)v200 + 62);
                  if ( v65 == *((_QWORD *)v198 + 62) )
                    goto LABEL_148;
                  if ( (unsigned int)SURFACE::Map(v65, 0LL) == 2 )
                  {
                    v63 = 1;
                    *((_DWORD *)v200 + 11) |= 1u;
                  }
                }
                v64 = v198;
LABEL_148:
                if ( (*((_DWORD *)v64 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v64 + 62), 0LL) == 2 )
                {
                  *((_DWORD *)v198 + 11) |= 1u;
                  UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v256);
LABEL_241:
                  v101 = v202;
                  v102 = 0;
                  goto LABEL_242;
                }
                if ( v63 )
                {
                  UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v256);
                  goto LABEL_241;
                }
                UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v256);
LABEL_155:
                EXFORMOBJ::vInit((EXFORMOBJ *)v260, (struct XDCOBJ *)&v198, 0x204u, 0);
                v67 = (struct SURFACE *)*((_QWORD *)v198 + 62);
                if ( !v67 )
                  v67 = SURFACE::pdibDefault;
                v266 = v67;
                v262 = *((_QWORD *)v67 + 16);
                v263 = *((_QWORD *)v198 + 11);
                EXFORMOBJ::vInit((EXFORMOBJ *)&v261, (struct XDCOBJ *)&v200, 0x204u, 0);
                v68 = (struct SURFACE *)*((_QWORD *)v200 + 62);
                if ( !v68 )
                  v68 = SURFACE::pdibDefault;
                v267 = v68;
                v69 = *((_QWORD *)v68 + 16);
                v264 = v69;
                v248 = *((_QWORD *)v200 + 11);
                v265 = v248;
                if ( a12 == -1 )
                  a12 = *(_DWORD *)(*((_QWORD *)v200 + 122) + 180LL);
                v70 = v198;
                if ( (a13 & 1) != 0 )
                {
                  v71 = *(_QWORD *)(*((_QWORD *)v198 + 122) + 248LL);
                  v250 = v71;
                }
                else
                {
                  v71 = 0LL;
                }
                v72 = *((_QWORD *)v198 + 122);
                v73 = *((_DWORD *)v198 + 30);
                v74 = v263;
                v75 = v262;
                v76 = *(_DWORD *)(v72 + 176);
                v241 = *(_DWORD *)(v72 + 184);
                v240 = v76;
                v246 = v73;
                if ( !v69
                  && (!v262
                   || (*(_DWORD *)(v262 + 24) & 0x800) != 0
                   && ((v77 = *(_QWORD *)(v263 + 80)) == 0 || v77 == *(_QWORD *)(v263 + 72)))
                  || !v262
                  && (*(_DWORD *)(v69 + 24) & 0x800) != 0
                  && ((v78 = *(_QWORD *)(v263 + 80)) == 0 || v78 == *(_QWORD *)(v263 + 72))
                  || v69
                  && v262
                  && ((v79 = *(_QWORD *)(v69 + 120), v79 == v69)
                    ? (v80 = *(_DWORD *)(v69 + 32))
                    : (v80 = *(_DWORD *)(v79 + 32)),
                      (v81 = *(_QWORD *)(v262 + 120), v81 == v262)
                    ? (v70 = (DC *)*(unsigned int *)(v262 + 32))
                    : (v70 = (DC *)*(unsigned int *)(v81 + 32)),
                      v80 == (_DWORD)v70) )
                {
                  v269 = (struct Gre::Base::SESSION_GLOBALS *)((char *)Gre::Base::Globals(v70) + 6896);
                }
                else
                {
                  v82 = 1;
                  v239 = 1;
                  if ( (v73 & 7) != 0 && v71 )
                  {
                    v82 = 0;
                    goto LABEL_209;
                  }
                  if ( v69 && v262 )
                  {
                    v252 = v248;
                    v233 = *(_DWORD *)(v69 + 56);
                    v255 = v263;
                    v254 = v262;
                    v249 = Gre::Base::Globals(v70);
                    v83 = *((_QWORD *)v249 + 5);
                    v253 = v83;
                    GreAcquireSemaphore(v83);
                    v84 = v233;
                    v238 = 0;
                    while ( 1 )
                    {
                      v85 = *(_QWORD *)(v69 + 120);
                      if ( v85 == v69 )
                        v86 = *(_DWORD *)(v69 + 32);
                      else
                        v86 = *(_DWORD *)(v85 + 32);
                      if ( *((_DWORD *)v249 + 8 * v84 + 1662) == v86 )
                      {
                        v87 = XEPALOBJ::ulTime((XEPALOBJ *)&v254);
                        if ( *(_DWORD *)(v88 + 6652) == v87 )
                        {
                          v89 = XEPALOBJ::ulTime((XEPALOBJ *)&v255);
                          if ( *(_DWORD *)(v90 + 6660) == v89 )
                          {
                            v91 = *(Gre::Base **)(v90 + 6640);
                            v269 = v91;
                            if ( (*((_DWORD *)v91 + 19) & 0x6000) == 0 )
                            {
                              v92 = *((_DWORD *)v91 + 19) & 0x100;
                              if ( (*((_DWORD *)v91 + 1) & 4) != 0 )
                              {
                                if ( a12 == *((_DWORD *)v91 + 6) )
                                {
                                  v93 = XEPALOBJ::ulTime((XEPALOBJ *)&v252);
                                  if ( *((_DWORD *)v249 + 8 * v94 + 1664) == v93 )
                                    goto LABEL_198;
                                  LOBYTE(v84) = v233;
                                }
                                if ( !v92 )
                                  goto LABEL_205;
                              }
                              else if ( !v92 )
                              {
                                goto LABEL_198;
                              }
                              if ( v241 == *((_DWORD *)v91 + 7) && v240 == *((_DWORD *)v91 + 8) )
                              {
LABEL_198:
                                _InterlockedIncrement((volatile signed __int32 *)(v90 + 6632));
                                *(_DWORD *)(v69 + 56) = v233;
                                SEMOBJ::~SEMOBJ((SEMOBJ *)&v253);
                                goto LABEL_215;
                              }
                            }
                          }
                        }
                      }
LABEL_205:
                      v84 = ((_BYTE)v84 + 1) & 7;
                      v233 = v84;
                      if ( (unsigned int)++v238 >= 8 )
                      {
                        v269 = 0LL;
                        if ( v83 )
                        {
                          EtwTraceGreLockReleaseSemaphore(L"hsem");
                          GreReleaseSemaphoreInternal(v83);
                        }
                        v82 = v239;
                        break;
                      }
                    }
                  }
LABEL_209:
                  LODWORD(v197) = 0;
                  LODWORD(v196) = a12;
                  LODWORD(v195) = v240;
                  LODWORD(v194) = v241;
                  XlateObject = (Gre::Base *)CreateXlateObject(v250, v246, v69, v75, v248, v74, v194, v195, v196, v197);
                  v269 = XlateObject;
                  if ( !XlateObject )
                  {
LABEL_240:
                    v57 = v237;
                    goto LABEL_241;
                  }
                  if ( v82 && v69 && v75 && (*((_DWORD *)XlateObject + 19) & 0x200) == 0 )
                    EXLATEOBJ::vAddToCache(&v269, v69, v75, v248, v74);
                }
LABEL_215:
                v282 |= 2u;
                if ( (v208 & 0xE8) != 0 )
                {
                  v270 = (char *)v198 + 1200;
                  v96 = *((_QWORD *)v198 + 122);
                  v97 = *(_DWORD *)(v96 + 152);
                  if ( (v97 & 1) != 0 || (*((_DWORD *)v198 + 79) & 1) != 0 )
                  {
                    LODWORD(v194) = 1;
                    *(_DWORD *)(v96 + 152) = v97 & 0xFFFFFFFE;
                    *((_DWORD *)v198 + 79) &= ~1u;
                    EBRUSHOBJ::vInitBrush(v270, v198, *((_QWORD *)v198 + 17), v263, v262, v266, v194);
                  }
                  v280 = *((_QWORD *)v198 + 149);
                }
                else
                {
                  v270 = 0LL;
                }
                v268 = 0LL;
                if ( (*(_DWORD *)(v261 + 32) & 1) != 0 )
                {
                  v98 = a7;
                  v99 = a8;
                  v100 = a7 + a9;
                  v66 = (unsigned int)(a8 + a10);
                  v278 = a7 + a9;
                  v279 = a8 + a10;
                  v276 = a7;
                  v277 = a8;
                  if ( (*(_BYTE *)(v261 + 32) & 0x43) == 0x43 )
                    goto LABEL_225;
                  if ( (unsigned int)bCvtPts1(v261, &v276, 2LL) )
                  {
                    v66 = v279;
                    v100 = v278;
                    v99 = v277;
                    v98 = v276;
LABEL_225:
                    v101 = v202;
                    if ( v202 && (v98 == v100 || v99 == (_DWORD)v66) )
                    {
                      v57 = v237;
                      v102 = 1;
                      goto LABEL_242;
                    }
                    if ( (*(_DWORD *)(v260[0] + 32LL) & 1) == 0 )
                    {
                      BLTRECORD::TrgPlg((BLTRECORD *)v260, v236, v205, v204, v209);
                      v103 = BLTRECORD::bRotate(
                               (BLTRECORD *)v260,
                               (struct DCOBJ *)&v198,
                               (struct DCOBJ *)&v200,
                               v208,
                               *(_BYTE *)(*((_QWORD *)v198 + 122) + 215LL));
                      v57 = v237;
                      v102 = v103;
                      goto LABEL_242;
                    }
                    v104 = v236;
                    v105 = v205;
                    v106 = v236 + v204;
                    v107 = v205 + v209;
                    v274 = v236 + v204;
                    v275 = v205 + v209;
                    v272 = v236;
                    v273 = v205;
                    if ( (*(_BYTE *)(v260[0] + 32LL) & 0x43) == 0x43 )
                      goto LABEL_234;
                    if ( (unsigned int)bCvtPts1(v260[0], &v272, 2LL) )
                    {
                      LODWORD(v66) = v279;
                      v100 = v278;
                      v99 = v277;
                      v98 = v276;
                      v107 = v275;
                      v106 = v274;
                      v105 = v273;
                      v104 = v272;
LABEL_234:
                      v108 = *((_QWORD *)v198 + 122);
                      if ( *(_BYTE *)(v108 + 215) != 4 && v100 - v98 == v106 - v104 && (_DWORD)v66 - v99 == v107 - v105 )
                      {
                        v109 = BLTRECORD::bBitBlt((BLTRECORD *)v260, &v198, (struct DCOBJ *)&v200, v208);
                        v57 = v237;
                        v102 = v109;
                      }
                      else
                      {
                        v110 = BLTRECORD::bStretch(
                                 (BLTRECORD *)v260,
                                 (struct DCOBJ *)&v198,
                                 (struct DCOBJ *)&v200,
                                 v208,
                                 *(_BYTE *)(v108 + 215));
                        v57 = v237;
                        v102 = v110;
                      }
LABEL_242:
                      v111 = v203;
                      if ( v242 )
                        DC::dwSetLayout(v198, -1, v243);
                      if ( !v111 )
                      {
LABEL_265:
                        v116 = v219;
                        if ( (v219 & 0x1000) == 0 )
                          goto LABEL_295;
                        if ( (v219 & 0x8000) != 0 )
                        {
                          v117 = v221;
                          if ( v221 && HIBYTE(v223) )
                          {
                            if ( (v219 & 0x400) != 0 )
                            {
                              bUnHookRedir((struct XDCOBJ *)&v221);
                              v117 = v221;
                              LOWORD(v116) = v219 & 0xFBFF;
                              v219 &= ~0x400u;
                            }
                            if ( (v116 & 0x2000) != 0 )
                            {
                              bUnHookBmpDrv((struct XDCOBJ *)&v221);
                              v117 = v221;
                              LOWORD(v116) = v219 & 0xDFFF;
                              v219 &= ~0x2000u;
                            }
                            if ( (v116 & 0x1000) != 0 )
                            {
                              if ( (*((_DWORD *)v117 + 11) & 1) == 0 && *((_QWORD *)v117 + 62) )
                              {
                                SURFACE::bUnMap(*((SURFACE **)v117 + 62), &v210, v117);
                                v117 = v221;
                              }
                              *((_DWORD *)v117 + 11) &= ~1u;
                            }
                          }
                          _InterlockedOr(v192, 0);
                          v118 = v224;
                          if ( !v224 || !HIBYTE(v226) )
                          {
                            v120 = v221;
                            goto LABEL_287;
                          }
                          v116 = v219;
                          if ( (v219 & 0x1000) != 0 )
                          {
                            if ( (*((_DWORD *)v224 + 11) & 1) == 0 )
                            {
                              v119 = (SURFACE *)*((_QWORD *)v224 + 62);
                              if ( v119 )
                              {
                                SURFACE::bUnMap(v119, &v210, 0LL);
                                v118 = v224;
                              }
                            }
                            *((_DWORD *)v118 + 11) &= ~1u;
LABEL_285:
                            v120 = v221;
LABEL_286:
                            v118 = v224;
LABEL_287:
                            v116 = v219;
                            goto LABEL_288;
                          }
                          v120 = v221;
                        }
                        else
                        {
                          v66 = (unsigned __int64)v224;
                          if ( v224 && HIBYTE(v226) )
                          {
                            if ( (*((_DWORD *)v224 + 11) & 1) == 0 )
                            {
                              v137 = (SURFACE *)*((_QWORD *)v224 + 62);
                              if ( v137 )
                              {
                                SURFACE::bUnMap(v137, &v210, 0LL);
                                v66 = (unsigned __int64)v224;
                              }
                            }
                            *(_DWORD *)(v66 + 44) &= ~1u;
                          }
                          _InterlockedOr(v192, 0);
                          v120 = v221;
                          if ( !v221 || !HIBYTE(v223) )
                            goto LABEL_286;
                          v116 = v219;
                          if ( (v219 & 0x400) != 0 )
                          {
                            bUnHookRedir((struct XDCOBJ *)&v221);
                            v116 = v219;
                            v120 = v221;
                            LODWORD(v116) = v219 & 0xFFFFFBFF;
                            v219 &= ~0x400u;
                          }
                          if ( (v116 & 0x2000) != 0 )
                          {
                            bUnHookBmpDrv((struct XDCOBJ *)&v221);
                            v116 = v219;
                            v120 = v221;
                            LODWORD(v116) = v219 & 0xFFFFDFFF;
                            v219 &= ~0x2000u;
                          }
                          if ( (v116 & 0x1000) != 0 )
                          {
                            if ( (*((_DWORD *)v120 + 11) & 1) == 0 && *((_QWORD *)v120 + 62) )
                            {
                              SURFACE::bUnMap(*((SURFACE **)v120 + 62), &v210, v120);
                              v120 = v221;
                            }
                            *((_DWORD *)v120 + 11) &= ~1u;
                            goto LABEL_285;
                          }
                          v118 = v224;
                        }
LABEL_288:
                        if ( !v120
                          || !HIBYTE(v223)
                          || (v116 & 0x1000) == 0
                          || (*((_DWORD *)v120 + 9) & 0x4000) == 0
                          || !*((_QWORD *)v120 + 59)
                          || !*((_DWORD *)v120 + 122) )
                        {
LABEL_296:
                          if ( v213 )
                          {
                            if ( v217 )
                            {
                              PopThreadGuardedObject(v216);
                              v217 = 0;
                            }
                            DEVLOCKBLTOBJ::TmpSrcCleanup((DEVLOCKBLTOBJ *)&v210);
                            v118 = v224;
                            v120 = v221;
                            v116 = v219;
                          }
                          if ( (v116 & 0x1000) == 0 )
                          {
                            if ( (v116 & 0x800000) == 0 )
                              goto LABEL_470;
                            GreDecLockCount(v120, v66, v116, v118);
                            LODWORD(v116) = v219 & 0xFF7FFFFF;
                            v219 &= ~0x800000u;
LABEL_469:
                            v118 = v224;
                            v120 = v221;
LABEL_470:
                            if ( (_QWORD)v210 )
                            {
                              EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
                              GreReleaseSemaphoreInternal(v210);
                              v118 = v224;
                              v120 = v221;
                              LODWORD(v116) = v219;
                            }
                            if ( *((_QWORD *)&v210 + 1) )
                            {
                              EtwTraceGreLockReleaseSemaphore(L"hsemSrc");
                              GreReleaseSemaphoreInternal(*((_QWORD *)&v210 + 1));
                              v118 = v224;
                              v120 = v221;
                              LODWORD(v116) = v219;
                            }
                            if ( (v116 & 8) != 0 )
                              v219 = v116 & 0xFFFFFFF7;
                            if ( (_QWORD)v211 )
                            {
                              EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
                              GreReleaseSemaphoreInternal(v211);
                              v118 = v224;
                              v120 = v221;
                            }
                            if ( *((_QWORD *)&v228 + 1) )
                            {
                              DCOBJ::DCOBJ((DCOBJ *)v245, v229);
                              LOBYTE(v157) = 5;
                              v158 = HmgShareLock(v228, v157);
                              LOBYTE(v159) = 5;
                              v160 = (__int64 *)v158;
                              v161 = (struct SURFACE *)HmgShareLock(*((_QWORD *)&v228 + 1), v159);
                              v162 = *v160;
                              v163 = v161;
                              DC::pSurface(v245[0], v161);
                              DEC_SHARE_REF_CNT(v160);
                              DEC_SHARE_REF_CNT(v163);
                              GreDereferenceObject(v162, 1LL);
                              v164 = v245[0];
                              v229 = 0LL;
                              *(_QWORD *)&v228 = 0LL;
                              *((_DWORD *)v245[0] + 9) |= v220;
                              v165 = Gre::Base::Globals(v164);
                              if ( (*((_DWORD *)v245[0] + 9) & 0x200) != 0 )
                              {
                                v166 = 0;
                                if ( !(unsigned int)GreGetLockCount()
                                  && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v165 + 15)) )
                                {
                                  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v165 + 15));
                                  EtwTraceGreLockAcquireSemaphoreShared(
                                    L"GreBaseGlobals.hsemGreLock",
                                    *((_QWORD *)v165 + 15));
                                  v166 = 1;
                                }
                                DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v206);
                                v193[0] = 5;
                                v167 = HmgShareUnlockRemoveObject(
                                         *((_QWORD *)&v228 + 1),
                                         0LL,
                                         0LL,
                                         0LL,
                                         *(_DWORD *)v193);
                                if ( v167 )
                                  SURFACE::bDeleteSurface(v167, 0LL, 1LL);
                                *((_QWORD *)v245[0] + 63) = 0LL;
                                DC::vClearRendering(v245[0]);
                                *((_QWORD *)&v228 + 1) = 0LL;
                                DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v206);
                                if ( v166 )
                                {
                                  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
                                  GreReleaseSemaphoreInternal(*((_QWORD *)v165 + 15));
                                }
                              }
                              else
                              {
                                v193[0] = 5;
                                v168 = HmgShareUnlockRemoveObject(
                                         *((_QWORD *)&v228 + 1),
                                         0LL,
                                         0LL,
                                         0LL,
                                         *(_DWORD *)v193);
                                if ( v168 )
                                  SURFACE::bDeleteSurface(v168, 0LL, 1LL);
                                *((_QWORD *)v245[0] + 63) = 0LL;
                                *((_QWORD *)&v228 + 1) = 0LL;
                              }
                              EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
                              GreReleaseSemaphoreInternal(*((_QWORD *)v165 + 10));
                              if ( v245[0] )
                                XDCOBJ::vUnlockFast((XDCOBJ *)v245);
                              v120 = v221;
                              v118 = v224;
                            }
                            if ( v231 )
                            {
                              DCOBJ::DCOBJ((DCOBJ *)v247, v232);
                              LOBYTE(v169) = 5;
                              v170 = HmgShareLock(v230, v169);
                              LOBYTE(v171) = 5;
                              v172 = (__int64 *)v170;
                              v173 = (struct SURFACE *)HmgShareLock(v231, v171);
                              v174 = *v172;
                              v175 = v173;
                              DC::pSurface(v247[0], v173);
                              DEC_SHARE_REF_CNT(v172);
                              DEC_SHARE_REF_CNT(v175);
                              GreDereferenceObject(v174, 1LL);
                              v232 = 0LL;
                              v230 = 0LL;
                              v177 = Gre::Base::Globals(v176);
                              if ( (*((_DWORD *)v247[0] + 9) & 0x200) != 0 )
                              {
                                v178 = 0;
                                if ( !(unsigned int)GreGetLockCount()
                                  && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v177 + 15)) )
                                {
                                  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v177 + 15));
                                  EtwTraceGreLockAcquireSemaphoreShared(
                                    L"GreBaseGlobals.hsemGreLock",
                                    *((_QWORD *)v177 + 15));
                                  v178 = 1;
                                }
                                DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v207);
                                v193[0] = 5;
                                v179 = HmgShareUnlockRemoveObject(v231, 0LL, 0LL, 0LL, *(_DWORD *)v193);
                                if ( v179 )
                                  SURFACE::bDeleteSurface(v179, 0LL, 1LL);
                                *((_QWORD *)v247[0] + 63) = 0LL;
                                DC::vClearRendering(v247[0]);
                                v231 = 0LL;
                                DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v207);
                                if ( v178 )
                                {
                                  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
                                  GreReleaseSemaphoreInternal(*((_QWORD *)v177 + 15));
                                }
                              }
                              else
                              {
                                v193[0] = 5;
                                v180 = HmgShareUnlockRemoveObject(v231, 0LL, 0LL, 0LL, *(_DWORD *)v193);
                                if ( v180 )
                                  SURFACE::bDeleteSurface(v180, 0LL, 1LL);
                                *((_QWORD *)v247[0] + 63) = 0LL;
                                v231 = 0LL;
                              }
                              EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
                              GreReleaseSemaphoreInternal(*((_QWORD *)v177 + 10));
                              if ( v247[0] )
                                XDCOBJ::vUnlockFast((XDCOBJ *)v247);
                              v120 = v221;
                              v118 = v224;
                            }
                            if ( v118 )
                            {
                              if ( (_BYTE)v226 )
                              {
                                *((_DWORD *)v118 + 10) &= ~2u;
                                v118 = v224;
                                v120 = v221;
                                LOBYTE(v226) = 0;
                              }
                              if ( v118 )
                              {
                                if ( (_DWORD)v225 && (*((_DWORD *)v118 + 11) & 2) != 0 )
                                {
                                  XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v224);
                                  *((_DWORD *)v224 + 11) &= ~2u;
                                  v118 = v224;
                                  LODWORD(v225) = 0;
                                }
                                v202 = 0;
                                v181 = *(_QWORD *)v118;
                                HmgDecrementExclusiveReferenceCountEx(v118, HIDWORD(v225), &v202);
                                if ( v202 )
                                  GrepDeleteDC(v181, 0x2000000LL);
                                v120 = v221;
                              }
                              v224 = 0LL;
                            }
                            if ( v120 )
                            {
                              if ( (_BYTE)v223 )
                              {
                                *((_DWORD *)v120 + 10) &= ~2u;
                                v120 = v221;
                                LOBYTE(v223) = 0;
                              }
                              if ( v120 )
                              {
                                if ( (_DWORD)v222 && (*((_DWORD *)v120 + 11) & 2) != 0 )
                                {
                                  XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v221);
                                  *((_DWORD *)v221 + 11) &= ~2u;
                                  v120 = v221;
                                  LODWORD(v222) = 0;
                                }
                                v244 = 0;
                                v182 = *(_QWORD *)v120;
                                HmgDecrementExclusiveReferenceCountEx(v120, HIDWORD(v222), &v244);
                                if ( v244 )
                                  GrepDeleteDC(v182, 0x2000000LL);
                              }
                              v221 = 0LL;
                            }
                            if ( v217 )
                            {
                              PopThreadGuardedObject(v216);
                              v217 = 0;
                            }
                            SURFMEM::~SURFMEM((SURFMEM *)&v213);
                            v183 = v200;
                            if ( v200 )
                            {
                              if ( (_DWORD)v201 && (*((_DWORD *)v200 + 11) & 2) != 0 )
                              {
                                if ( !HIDWORD(v201) )
                                {
                                  v184 = XDCOBJ::GetUserAttr((XDCOBJ *)&v200);
                                  v183 = v200;
                                  if ( v184 )
                                  {
                                    DC::RestoreAttributes(v200, v184);
                                    v183 = v200;
                                  }
                                }
                                *((_DWORD *)v183 + 11) &= ~2u;
                                v183 = v200;
                                LODWORD(v201) = 0;
                              }
                              v234 = 0;
                              v185 = *(_QWORD *)v183;
                              HmgDecrementExclusiveReferenceCountEx(v183, HIDWORD(v201), &v234);
                              if ( v234 )
                                GrepDeleteDC(v185, 0x2000000LL);
                            }
                            v186 = v198;
                            if ( v198 )
                            {
                              if ( (_DWORD)v199 && (*((_DWORD *)v198 + 11) & 2) != 0 )
                              {
                                if ( !HIDWORD(v199) )
                                {
                                  v187 = XDCOBJ::GetUserAttr((XDCOBJ *)&v198);
                                  v186 = v198;
                                  if ( v187 )
                                  {
                                    DC::RestoreAttributes(v198, v187);
                                    v186 = v198;
                                  }
                                }
                                *((_DWORD *)v186 + 11) &= ~2u;
                                v186 = v198;
                                LODWORD(v199) = 0;
                              }
                              v235 = 0;
                              v188 = *(_QWORD *)v186;
                              HmgDecrementExclusiveReferenceCountEx(v186, HIDWORD(v199), &v235);
                              if ( v235 )
                                GrepDeleteDC(v188, 0x2000000LL);
                            }
                            v189 = v282;
                            if ( (v282 & 0x20007) == 0 )
                              return v102;
                            if ( (v282 & 0x20000) != 0 )
                            {
                              if ( v268 )
                              {
                                DEC_SHARE_REF_CNT(v268);
                                v189 = v282;
                              }
                              v268 = 0LL;
                            }
                            if ( (v189 & 2) != 0 && v269 )
                            {
                              v190 = *((_DWORD *)v269 + 9);
                              if ( v190 < 0 )
                              {
                                if ( v190 != -1 )
                                  goto LABEL_561;
                                FreeThreadBufferWithTag(v269);
                              }
                              else
                              {
                                v191 = Gre::Base::Globals(v269);
                                _InterlockedDecrement((volatile signed __int32 *)v191 + 8 * *((int *)v269 + 9) + 1658);
                              }
                              v189 = v282;
                            }
LABEL_561:
                            if ( (v189 & 4) != 0 )
                              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v271);
                            return v102;
                          }
                          if ( (v116 & 0x8000) != 0 )
                          {
                            if ( v120 && HIBYTE(v223) )
                            {
                              v66 = *((_QWORD *)v120 + 6);
                              if ( (v116 & 0x10) != 0 )
                              {
                                *((_DWORD *)v120 + 9) &= ~0x4000u;
                                DC::pSurface(v221, *(struct SURFACE **)(v66 + 2528));
                                v118 = v224;
                                v120 = v221;
                                v116 = v219;
                              }
                              if ( v120 )
                              {
                                if ( (v116 & 0x1000) != 0
                                  && (!v118 || !HIBYTE(v226) || !HIBYTE(v223) || *(_QWORD *)v118 != *(_QWORD *)v120) )
                                {
                                  v121 = *((_DWORD *)v120 + 9);
                                  if ( (v121 & 0x200) != 0 )
                                  {
                                    if ( (v121 & 0x4000) == 0 )
                                    {
                                      v122 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                                      if ( v122 )
                                      {
                                        v123 = *v122;
                                        if ( v123 )
                                          *(_DWORD *)(v123 + 328) &= ~1u;
                                      }
                                      v120 = v221;
                                      v118 = v224;
                                    }
                                    if ( v120 && HIBYTE(v223) && !(_QWORD)v228
                                      || v118 && HIBYTE(v226) && *(_QWORD *)v120 == *(_QWORD *)v118 && !v230 )
                                    {
                                      v124 = Gre::Base::Globals(v120);
                                      GreAcquireSemaphoreSharedInternal(*((_QWORD *)v124 + 11));
                                      EtwTraceGreLockAcquireSemaphoreShared(
                                        L"GreBaseGlobals.hsemDCVisRgn",
                                        *((_QWORD *)v124 + 11));
                                      DC::vClearRendering(v221);
                                      v126 = Gre::Base::Globals(v125);
                                      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
                                      GreReleaseSemaphoreInternal(*((_QWORD *)v126 + 11));
                                      v120 = v221;
                                    }
                                  }
                                }
                                if ( v120 )
                                {
                                  if ( (_BYTE)v223 )
                                  {
                                    *((_DWORD *)v120 + 10) &= ~2u;
                                    v120 = v221;
                                    LOBYTE(v223) = 0;
                                  }
                                  if ( v120 )
                                  {
                                    if ( (_DWORD)v222 && (*((_DWORD *)v120 + 11) & 2) != 0 )
                                    {
                                      XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v221);
                                      *((_DWORD *)v221 + 11) &= ~2u;
                                      v120 = v221;
                                      LODWORD(v222) = 0;
                                    }
                                    v209 = 0;
                                    v127 = *(_QWORD *)v120;
                                    HmgDecrementExclusiveReferenceCountEx(v120, HIDWORD(v222), &v209);
                                    if ( v209 )
                                      GrepDeleteDC(v127, 0x2000000LL);
                                  }
                                }
                              }
                              v221 = 0LL;
                            }
                            _InterlockedOr(v192, 0);
                            v120 = v224;
                            if ( !v224 || !HIBYTE(v226) )
                              goto LABEL_372;
                            v66 = *((_QWORD *)v224 + 6);
                            if ( (v219 & 0x20) != 0 )
                            {
                              *((_DWORD *)v224 + 9) &= ~0x4000u;
                              DC::pSurface(v224, *(struct SURFACE **)(v66 + 2528));
                              v120 = v224;
                            }
                            if ( v227 )
                            {
                              v128 = *(_QWORD *)(v227 + 72);
                              CurrentProcess = PsGetCurrentProcess(v120, v66, v116);
                              MmUnmapViewOfSection(CurrentProcess, v128);
                              v120 = v224;
                            }
                            if ( v120 )
                            {
                              if ( (v219 & 0x1000) == 0 )
                                goto LABEL_362;
                              v66 = (unsigned __int64)v221;
                              if ( HIBYTE(v226) )
                              {
                                if ( v221 && HIBYTE(v223) && *(_QWORD *)v120 == *(_QWORD *)v221 )
                                  goto LABEL_362;
                              }
                              v130 = *((_DWORD *)v120 + 9);
                              if ( (v130 & 0x200) == 0 )
                                goto LABEL_362;
                              if ( (v130 & 0x4000) == 0 )
                              {
                                v131 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                                if ( v131 )
                                {
                                  v132 = *v131;
                                  if ( v132 )
                                    *(_DWORD *)(v132 + 328) &= ~1u;
                                }
                                v66 = (unsigned __int64)v221;
                                v120 = v224;
                              }
                              if ( v66 && HIBYTE(v223) && *(_QWORD *)v120 == *(_QWORD *)v66 && !(_QWORD)v228 )
                                goto LABEL_361;
                              if ( v120 )
                              {
                                if ( HIBYTE(v226) && !v230 )
                                {
LABEL_361:
                                  v133 = Gre::Base::Globals(v120);
                                  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v133 + 11));
                                  EtwTraceGreLockAcquireSemaphoreShared(
                                    L"GreBaseGlobals.hsemDCVisRgn",
                                    *((_QWORD *)v133 + 11));
                                  DC::vClearRendering(v224);
                                  v135 = Gre::Base::Globals(v134);
                                  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
                                  GreReleaseSemaphoreInternal(*((_QWORD *)v135 + 11));
                                  v120 = v224;
                                }
LABEL_362:
                                if ( v120 )
                                {
                                  if ( (_BYTE)v226 )
                                  {
                                    *((_DWORD *)v120 + 10) &= ~2u;
                                    v120 = v224;
                                    LOBYTE(v226) = 0;
                                  }
                                  if ( v120 )
                                  {
                                    if ( (_DWORD)v225 && (*((_DWORD *)v120 + 11) & 2) != 0 )
                                    {
                                      XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v224);
                                      *((_DWORD *)v224 + 11) &= ~2u;
                                      v120 = v224;
                                      LODWORD(v225) = 0;
                                    }
                                    v208 = 0;
                                    v136 = *(_QWORD *)v120;
                                    HmgDecrementExclusiveReferenceCountEx(v120, HIDWORD(v225), &v208);
                                    if ( v208 )
                                      GrepDeleteDC(v136, 0x2000000LL);
                                  }
                                }
                              }
                            }
                            v224 = 0LL;
LABEL_372:
                            v219 &= ~0x8000u;
                            goto LABEL_463;
                          }
                          if ( !v118 || !HIBYTE(v226) )
                          {
LABEL_429:
                            _InterlockedOr(v192, 0);
                            v118 = v221;
                            if ( !v221 || !HIBYTE(v223) )
                              goto LABEL_463;
                            v147 = v219;
                            v66 = *((_QWORD *)v221 + 6);
                            if ( (v219 & 0x10) != 0 )
                            {
                              *((_DWORD *)v221 + 9) &= ~0x4000u;
                              DC::pSurface(v221, *(struct SURFACE **)(v66 + 2528));
                              v118 = v221;
                              v147 = v219;
                            }
                            if ( !v118 )
                              goto LABEL_462;
                            if ( (v147 & 0x1000) != 0 )
                            {
                              v66 = (unsigned __int64)v224;
                              if ( !v224
                                || !HIBYTE(v226)
                                || !DLODCOBJ::bValid((DLODCOBJ *)&v221)
                                || *(_QWORD *)v66 != *(_QWORD *)v118 )
                              {
                                if ( !v118 )
                                {
LABEL_462:
                                  v221 = 0LL;
LABEL_463:
                                  GreDecLockCount(v120, v66, v116, v118);
                                  v219 &= ~0x1000u;
                                  v155 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                                  if ( v155 )
                                  {
                                    v156 = *v155;
                                    if ( v156 )
                                    {
                                      *(_QWORD *)(v156 + 320) = 0LL;
                                      *(_QWORD *)(v156 + 312) = 0LL;
                                    }
                                  }
                                  LODWORD(v116) = v219;
                                  goto LABEL_469;
                                }
                                v148 = *((_DWORD *)v118 + 9);
                                if ( (v148 & 0x200) != 0 )
                                {
                                  if ( (v148 & 0x4000) == 0 )
                                  {
                                    v149 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                                    if ( v149 )
                                    {
                                      v150 = *v149;
                                      if ( v150 )
                                        *(_DWORD *)(v150 + 328) &= ~1u;
                                    }
                                    v118 = v221;
                                  }
                                  if ( v118 && HIBYTE(v223) && !(_QWORD)v228
                                    || DLODCOBJ::bValid((DLODCOBJ *)&v224) && *(_QWORD *)v118 == *(_QWORD *)v66 && !v230 )
                                  {
                                    v151 = Gre::Base::Globals(v120);
                                    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v151 + 11));
                                    EtwTraceGreLockAcquireSemaphoreShared(
                                      L"GreBaseGlobals.hsemDCVisRgn",
                                      *((_QWORD *)v151 + 11));
                                    DC::vClearRendering(v221);
                                    v153 = Gre::Base::Globals(v152);
                                    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
                                    GreReleaseSemaphoreInternal(*((_QWORD *)v153 + 11));
                                    v118 = v221;
                                  }
                                }
                              }
                            }
                            if ( v118 )
                            {
                              if ( (_BYTE)v223 )
                              {
                                *((_DWORD *)v118 + 10) &= ~2u;
                                v118 = v221;
                                LOBYTE(v223) = 0;
                              }
                              if ( v118 )
                              {
                                if ( (_DWORD)v222 && (*((_DWORD *)v118 + 11) & 2) != 0 )
                                {
                                  XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v221);
                                  *((_DWORD *)v221 + 11) &= ~2u;
                                  v118 = v221;
                                  LODWORD(v222) = 0;
                                }
                                v204 = 0;
                                v154 = *(_QWORD *)v118;
                                HmgDecrementExclusiveReferenceCountEx(v118, HIDWORD(v222), &v204);
                                if ( v204 )
                                  GrepDeleteDC(v154, 0x2000000LL);
                              }
                            }
                            goto LABEL_462;
                          }
                          v66 = *((_QWORD *)v118 + 6);
                          if ( (v116 & 0x20) != 0 )
                          {
                            *((_DWORD *)v118 + 9) &= ~0x4000u;
                            DC::pSurface(v224, *(struct SURFACE **)(v66 + 2528));
                            v118 = v224;
                            v120 = v221;
                            v116 = v219;
                          }
                          if ( v227 )
                          {
                            v138 = *(_QWORD *)(v227 + 72);
                            v139 = PsGetCurrentProcess(v120, v66, v116);
                            MmUnmapViewOfSection(v139, v138);
                            v118 = v224;
                            v120 = v221;
                            v116 = v219;
                          }
                          if ( v118 )
                          {
                            if ( (v116 & 0x1000) == 0
                              || HIBYTE(v226) && v120 && HIBYTE(v223) && *(_QWORD *)v118 == *(_QWORD *)v120 )
                            {
                              goto LABEL_419;
                            }
                            v140 = *((_DWORD *)v118 + 9);
                            if ( (v140 & 0x200) == 0 )
                              goto LABEL_419;
                            if ( (v140 & 0x4000) == 0 )
                            {
                              v141 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                              if ( v141 )
                              {
                                v142 = *v141;
                                if ( v142 )
                                  *(_DWORD *)(v142 + 328) &= ~1u;
                              }
                              v120 = v221;
                              v118 = v224;
                            }
                            if ( v120 && HIBYTE(v223) && *(_QWORD *)v118 == *(_QWORD *)v120 && !(_QWORD)v228 )
                              goto LABEL_418;
                            if ( v118 )
                            {
                              if ( HIBYTE(v226) && !v230 )
                              {
LABEL_418:
                                v143 = Gre::Base::Globals(v120);
                                GreAcquireSemaphoreSharedInternal(*((_QWORD *)v143 + 11));
                                EtwTraceGreLockAcquireSemaphoreShared(
                                  L"GreBaseGlobals.hsemDCVisRgn",
                                  *((_QWORD *)v143 + 11));
                                DC::vClearRendering(v224);
                                v145 = Gre::Base::Globals(v144);
                                EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
                                GreReleaseSemaphoreInternal(*((_QWORD *)v145 + 11));
                                v118 = v224;
                              }
LABEL_419:
                              if ( v118 )
                              {
                                if ( (_BYTE)v226 )
                                {
                                  *((_DWORD *)v118 + 10) &= ~2u;
                                  v118 = v224;
                                  LOBYTE(v226) = 0;
                                }
                                if ( v118 )
                                {
                                  if ( (_DWORD)v225 && (*((_DWORD *)v118 + 11) & 2) != 0 )
                                  {
                                    XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v224);
                                    *((_DWORD *)v224 + 11) &= ~2u;
                                    v118 = v224;
                                    LODWORD(v225) = 0;
                                  }
                                  v205 = 0;
                                  v146 = *(_QWORD *)v118;
                                  HmgDecrementExclusiveReferenceCountEx(v118, HIDWORD(v225), &v205);
                                  if ( v205 )
                                    GrepDeleteDC(v146, 0x2000000LL);
                                }
                              }
                            }
                          }
                          v224 = 0LL;
                          goto LABEL_429;
                        }
                        GreUpdateSpriteDevLockEnd((struct tagSIZE **)&v221, v116 & 0x400000);
                        v116 = v219;
LABEL_295:
                        v120 = v221;
                        v118 = v224;
                        goto LABEL_296;
                      }
                      SURFACE::vClearIncludeSprites();
                      if ( v101 && (*((_DWORD *)v200 + 9) & 0x4000) != 0 )
                      {
                        v112 = (SURFACE *)*((_QWORD *)v200 + 62);
                        v113 = v198;
                        if ( v112 == *((SURFACE **)v198 + 62) )
                          goto LABEL_250;
                        SURFACE::bUnMap(v112, 0LL, 0LL);
                      }
                      v113 = v198;
LABEL_250:
                      if ( (*((_DWORD *)v113 + 9) & 0x4000) != 0 )
                        SURFACE::bUnMap(*((SURFACE **)v113 + 62), 0LL, v113);
                      UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v257);
                      if ( (a13 & 2) == 0 || !LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
                        GreMovePointer(*((_DWORD **)v57 + 6), v58, SHIDWORD(v251), 0);
                      EtwTraceGreLockReleaseSemaphore(L"pdoSrc.hsemPointer()");
                      GreReleaseSemaphoreInternal(*(_QWORD *)(v59 + 56));
                      if ( v101 && (*((_DWORD *)v200 + 9) & 0x4000) != 0 )
                      {
                        v114 = v198;
                        v115 = *((_QWORD *)v200 + 62);
                        if ( v115 == *((_QWORD *)v198 + 62) )
                          goto LABEL_261;
                        if ( (unsigned int)SURFACE::Map(v115, 0LL) == 2 )
                          *((_DWORD *)v200 + 11) |= 1u;
                      }
                      v114 = v198;
LABEL_261:
                      if ( (*((_DWORD *)v114 + 9) & 0x4000) != 0
                        && (unsigned int)SURFACE::Map(*((_QWORD *)v114 + 62), 0LL) == 2 )
                      {
                        *((_DWORD *)v198 + 11) |= 1u;
                      }
                      UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v257);
                      goto LABEL_265;
                    }
                  }
                }
                EngSetLastError(0x57u);
                goto LABEL_240;
              }
            }
LABEL_564:
            v46 = 5;
            goto LABEL_80;
          }
        }
      }
      else if ( MEMORY[0x1F0] )
      {
        goto LABEL_91;
      }
      if ( (*((_DWORD *)v48 + 9) & 0xE0) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v258, (struct XDCOBJ *)&v198, 0x204u);
        v259[2] = v33 + a2;
        v259[0] = a2;
        v259[3] = v205 + v209;
        v259[1] = v205;
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v258, (struct ERECTL *)v259) )
        {
          ERECTL::vOrder((ERECTL *)v259);
          XDCOBJ::vAccumulate((XDCOBJ *)&v198, (struct ERECTL *)v259);
        }
      }
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)&v210, v44, v47);
      DCOBJ::~DCOBJ((DCOBJ *)&v200);
      DCOBJ::~DCOBJ((DCOBJ *)&v198);
      BLTRECORD::~BLTRECORD((BLTRECORD *)v260);
      return 1LL;
    }
  }
  else
  {
LABEL_569:
    v43 = v202;
  }
  EngSetLastError(6u);
  if ( !v43 || v200 )
    v14 = 1;
  DCOBJ::~DCOBJ((DCOBJ *)&v200);
  DCOBJ::~DCOBJ((DCOBJ *)&v198);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v260);
  return v14;
}
