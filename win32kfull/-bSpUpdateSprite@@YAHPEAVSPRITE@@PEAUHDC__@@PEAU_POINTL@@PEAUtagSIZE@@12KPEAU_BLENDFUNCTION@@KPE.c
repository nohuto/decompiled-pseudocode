/*
 * XREFs of ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0056EF0
 * Callers:
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C010D484 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C012B478 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C02816BC (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C001867C (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0018908 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0018A84 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C001B784 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0050D28 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0051250 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0065AF0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065E34 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0083D50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C00F46B8 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C00F5BEC (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010C70C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C010E078 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C012A3C0 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C012AFAC (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C012B694 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C027C3EC (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027FDFC (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?bIsCursorSprite@@YAHPEAVSPRITE@@@Z @ 0x1C027FF2C (-bIsCursorSprite@@YAHPEAVSPRITE@@@Z.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C02813A8 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C0281FF4 (-pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C028278C (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C02827F0 (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C028290C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C02833FC (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z @ 0x1C0283E9C (-vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0285FA8 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall bSpUpdateSprite(
        struct SPRITE *a1,
        HDC a2,
        struct _POINTL *a3,
        struct tagSIZE *a4,
        HDC a5,
        struct _POINTL *a6,
        unsigned int a7,
        struct _BLENDFUNCTION *a8,
        unsigned int a9,
        struct _RECTL *a10)
{
  struct _SURFOBJ *v10; // r14
  struct _RECTL *v11; // r12
  struct _POINTL v14; // r13
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rsi
  DC *v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // rsi
  struct _BLENDFUNCTION *v22; // rdx
  unsigned int v23; // esi
  HDC v24; // r8
  struct _BLENDFUNCTION v25; // edi
  int v26; // ecx
  signed int v27; // r13d
  signed int v28; // ebx
  int v29; // ecx
  signed int v30; // esi
  int v31; // eax
  signed int v32; // r12d
  __int128 v33; // xmm6
  int v34; // edx
  struct _POINTL v35; // rdi
  __int64 v36; // rbx
  int v37; // r8d
  int v38; // r9d
  int v39; // r10d
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdi
  struct _SPRITESTATE *v43; // r15
  __int64 v44; // rax
  __int64 v45; // rcx
  signed int *v46; // rax
  int *v47; // rcx
  __int64 v48; // rbx
  int v49; // edi
  int v50; // eax
  __int64 v51; // rcx
  struct _POINTL *v52; // rbx
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // r13
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // r12
  __int64 v57; // r13
  char *v58; // rdi
  signed int ClearBits; // eax
  __int64 v60; // rbx
  struct _SURFOBJ *v61; // rcx
  __int64 v62; // rsi
  struct _SURFOBJ *v63; // r15
  struct _SPRITESTATE *v64; // r12
  __int64 v65; // rsi
  __int64 v66; // rcx
  int v67; // eax
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  unsigned __int64 v70; // rsi
  int v71; // ebx
  __int64 v72; // r12
  int v73; // edx
  struct _SPRITESTATE *v74; // r12
  struct _CLIPOBJ *v75; // r13
  struct REGION *v76; // rbx
  int v77; // eax
  PVOID *v78; // rbx
  __int64 v79; // rcx
  __int64 v80; // rsi
  int v81; // eax
  struct _SURFOBJ *v82; // rdx
  ULONG v83; // ebx
  struct _SPRITESTATE *v84; // rdi
  __int64 v85; // rbx
  int v86; // esi
  int v87; // r14d
  int v88; // r12d
  int v89; // r15d
  __int64 v90; // rbx
  __int64 v91; // rcx
  ULONG v92; // edx
  int v93; // eax
  struct _BLENDFUNCTION *v94; // rcx
  int v95; // edx
  unsigned int v96; // r8d
  struct _BLENDFUNCTION updated; // eax
  __int64 v99; // rcx
  unsigned int v100; // eax
  unsigned int v101; // ecx
  struct _POINTL *v102; // rax
  struct SPRITE *i; // rbx
  __int64 v104; // rcx
  _DWORD *v105; // rcx
  __int64 v106; // r10
  signed int v107; // r8d
  signed int v108; // r9d
  signed int v109; // edx
  int v110; // ecx
  struct _SURFOBJ *Surface; // rax
  unsigned __int64 v112; // rcx
  unsigned __int64 v113; // rcx
  int v114; // eax
  int v115; // r8d
  int v116; // r9d
  int v117; // r10d
  int v118; // r11d
  struct _BLENDFUNCTION v119[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct _SPRITESTATE *v120; // [rsp+60h] [rbp-A8h]
  struct _POINTL v121; // [rsp+68h] [rbp-A0h] BYREF
  ULONG StartingIndex[2]; // [rsp+70h] [rbp-98h]
  struct _POINTL *v123; // [rsp+78h] [rbp-90h] BYREF
  struct _POINTL *v124; // [rsp+80h] [rbp-88h]
  W32PIDLOCK *v125; // [rsp+88h] [rbp-80h] BYREF
  HDC v126; // [rsp+90h] [rbp-78h]
  __int64 v127; // [rsp+98h] [rbp-70h] BYREF
  struct _POINTL v128; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v129; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v130[5]; // [rsp+B8h] [rbp-50h] BYREF
  int v131; // [rsp+CCh] [rbp-3Ch]
  int v132; // [rsp+D0h] [rbp-38h]
  int v133; // [rsp+D4h] [rbp-34h]
  int v134; // [rsp+D8h] [rbp-30h]
  int v135; // [rsp+DCh] [rbp-2Ch]
  int v136; // [rsp+E0h] [rbp-28h]
  int *v137; // [rsp+E8h] [rbp-20h]
  int *v138; // [rsp+F0h] [rbp-18h]
  __int64 v139; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v140; // [rsp+100h] [rbp-8h]
  int v141; // [rsp+108h] [rbp+0h]
  struct _SPRITESTATE *v142; // [rsp+110h] [rbp+8h]
  _BYTE v143[192]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v144[24]; // [rsp+1D8h] [rbp+D0h] BYREF
  struct _RECTL v145; // [rsp+1F0h] [rbp+E8h] BYREF
  HDC v146[2]; // [rsp+208h] [rbp+100h]
  struct _RECTL v147; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v148[4]; // [rsp+228h] [rbp+120h] BYREF
  char v149[52]; // [rsp+22Ch] [rbp+124h] BYREF
  REGION *v150; // [rsp+260h] [rbp+158h]
  __int64 v151; // [rsp+278h] [rbp+170h]
  int v152; // [rsp+280h] [rbp+178h]
  int v153; // [rsp+2A8h] [rbp+1A0h]
  __int64 v154; // [rsp+2B8h] [rbp+1B0h]
  int v155; // [rsp+2C0h] [rbp+1B8h]

  v10 = 0LL;
  v11 = a10;
  v126 = a5;
  v124 = a6;
  v120 = (struct _SPRITESTATE *)a8;
  v123 = a3;
  v146[0] = a2;
  v119[0] = 0;
  if ( !a1 )
    return 0LL;
  v14 = (struct _POINTL)*((_QWORD *)a1 + 2);
  v128 = v14;
  v127 = **(_QWORD **)&v14;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v143, (struct PDEVOBJ *)&v127);
  v15 = a9;
  StartingIndex[0] = 0;
  if ( (a9 & 0x10000000) != 0 )
  {
    v15 = a9 & 0xEFFFFFFF;
    StartingIndex[0] = 1;
  }
  v121 = 0LL;
  v16 = v15 & 0xFFDFFFFF;
  v119[1] = (struct _BLENDFUNCTION)(v15 & 0x200000);
  v17 = *(_QWORD *)(*(_QWORD *)&v14 + 120LL);
  if ( (v15 & 0x200000) == 0 )
    v16 = v15;
  v147 = 0LL;
  GreAcquireSemaphoreSharedInternal(v17);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)(*(_QWORD *)&v14 + 120LL));
  v18 = *((_QWORD *)a1 + 16);
  if ( v18 && (*(_QWORD *)(v18 + 224) || (*(_DWORD *)(v18 + 92) & 1) != 0) )
  {
    v125 = (W32PIDLOCK *)(v18 + 248);
    W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v18 + 248));
    if ( (*(_DWORD *)a1 & 0x200) != 0 )
    {
      v100 = *(_DWORD *)(v18 + 32);
      v101 = *(_DWORD *)(v18 + 36);
      *((_QWORD *)&v129 + 1) = __PAIR64__(v101, v100);
      *(_QWORD *)&v129 = 0LL;
      if ( a10 )
      {
        v147 = *a10;
        ERECTL::operator*=(&v147, &v129);
      }
      else
      {
        *(_QWORD *)&v147.left = 0LL;
        *(_QWORD *)&v147.right = __PAIR64__(v101, v100);
      }
      v11 = &v147;
    }
    *(_QWORD *)&v145.left = 0LL;
    *(_QWORD *)&v145.right = 0LL;
    XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v145, v126);
    v19 = *(DC **)&v145.left;
    if ( !*(_QWORD *)&v145.left )
      goto LABEL_20;
    if ( (*(_DWORD *)(*(_QWORD *)&v145.left + 44LL) & 2) == 0 )
    {
      if ( !(unsigned int)XDCOBJ::SaveAttributesHelper((XDCOBJ *)&v145) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)&v145.left + 12LL));
        *(_QWORD *)&v145.left = 0LL;
LABEL_20:
        W32PIDLOCK::vUnlockSingleThread(v125);
        v20 = *(__int64 **)&v145.left;
        if ( *(_QWORD *)&v145.left )
        {
          if ( v145.right && (*(_DWORD *)(*(_QWORD *)&v145.left + 44LL) & 2) != 0 )
          {
            XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v145);
            *(_DWORD *)(*(_QWORD *)&v145.left + 44LL) &= ~2u;
            v20 = *(__int64 **)&v145.left;
            v145.right = 0;
          }
          LODWORD(v125) = 0;
          v21 = *v20;
          HmgDecrementExclusiveReferenceCountEx(v20, (unsigned int)v145.bottom, &v125);
          if ( (_DWORD)v125 )
            GrepDeleteDC(v21, 0x2000000LL);
        }
        goto LABEL_24;
      }
      *(_DWORD *)(*(_QWORD *)&v145.left + 44LL) |= 2u;
      v19 = *(DC **)&v145.left;
      v145.right = 1;
    }
    if ( (*((_DWORD *)v19 + 130) & 4) != 0 )
    {
      DC::vMarkTransformDirty(v19);
      v19 = *(DC **)&v145.left;
    }
    if ( v19 && a4 )
    {
      if ( a4->cx < *(_DWORD *)(v18 + 32) )
        v121.x = a4->cx;
      else
        v121.x = *(_DWORD *)(v18 + 32);
      if ( a4->cy < *(_DWORD *)(v18 + 36) )
        v121.y = a4->cy;
      else
        v121.y = *(_DWORD *)(v18 + 36);
      a4 = (struct tagSIZE *)&v121;
    }
    goto LABEL_20;
  }
LABEL_24:
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)&v14 + 120LL));
  if ( (v16 & 0x20000000) != 0 )
  {
    v92 = StartingIndex[0];
    v16 &= ~0x20000000u;
    v93 = 0;
    if ( StartingIndex[0] )
      v93 = 0x10000000;
    v94 = (struct _BLENDFUNCTION *)v120;
    *((_DWORD *)a1 + 56) = v16 | v93;
    if ( (v16 & 2) != 0 && v94 )
      *((struct _BLENDFUNCTION *)a1 + 57) = *v94;
    v23 = a7;
    *((_DWORD *)a1 + 58) = a7;
    if ( v92 )
    {
      vSpCreateExMirror(**((HDEV **)a1 + 2));
      *(_DWORD *)a1 |= 0x100u;
      v94 = (struct _BLENDFUNCTION *)v120;
    }
    v24 = v126;
    if ( !v126 )
    {
      v95 = *((_DWORD *)a1 + 56);
      v96 = *((_DWORD *)a1 + 51);
      v119[0] = *(struct _BLENDFUNCTION *)((char *)a1 + 200);
      if ( v95 == 3 && !v94->AlphaFormat )
      {
        v95 = 2;
        v119[0] = *v94;
        v96 = a7;
        v119[0].AlphaFormat = 1;
        v94 = v119;
      }
      *((_DWORD *)a1 + 1) = v95;
      *((_DWORD *)a1 + 51) = v96;
      *((struct _BLENDFUNCTION *)a1 + 50) = *v94;
      goto LABEL_153;
    }
    goto LABEL_165;
  }
  if ( v16 != 0x40000000 )
  {
    v23 = a7;
    v24 = v126;
LABEL_165:
    v22 = (struct _BLENDFUNCTION *)v120;
    goto LABEL_32;
  }
  v16 = *((_DWORD *)a1 + 56);
  if ( (v16 & 0x10000000) != 0 )
    v16 &= ~0x10000000u;
  if ( (*(_DWORD *)a1 & 0x40) != 0 && !v16 )
    v16 = *((_DWORD *)a1 + 1);
  v22 = v119;
  v23 = *((_DWORD *)a1 + 58);
  v24 = v126;
  v119[0] = *(struct _BLENDFUNCTION *)((char *)a1 + 228);
LABEL_32:
  if ( (*(_DWORD *)(v127 + 40) & 0x400) != 0 )
  {
LABEL_153:
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v143);
    return 1LL;
  }
  if ( !v146[0] && !a4 && !v24 && !v124 && !v23 )
  {
    if ( v16 - 2 > 1 || !v22 || v123 )
    {
      if ( (v16 & 0x7FFFFFFF) != 0 || v22 )
      {
        v119[0] = (struct _BLENDFUNCTION)1;
        goto LABEL_174;
      }
      updated = (struct _BLENDFUNCTION)bSpUpdatePosition(a1, v123, v16 & 0x80000000, 0);
    }
    else
    {
      updated = (struct _BLENDFUNCTION)bSpUpdateAlpha(a1, v22, 1);
    }
    v119[0] = updated;
LABEL_174:
    v25 = v119[1];
    goto LABEL_37;
  }
  v119[0] = (struct _BLENDFUNCTION)bSpUpdateShape(a1, v16, v146[0], v24, v23, v22, v124, a4, v11);
  if ( !*(_DWORD *)v119 )
    goto LABEL_174;
  v25 = v119[1];
  if ( !*(_DWORD *)&v119[1] )
  {
    v102 = v123;
    if ( !v123 )
      v102 = (struct _POINTL *)((char *)a1 + 112);
    v119[0] = (struct _BLENDFUNCTION)bSpUpdatePosition(a1, v102, 0, 0);
  }
LABEL_37:
  if ( !v11 )
  {
    memset(v144, 0, sizeof(v144));
    if ( v25 )
      PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v144, *(struct _SPRITESTATE **)&v14, (struct _RECTL *)a1 + 5);
    if ( !*(_QWORD *)v144 && *(_DWORD *)&v25 || (vSpRedrawSprite(a1), *(_DWORD *)&v25) )
      PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v144);
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v144);
    if ( (*(_DWORD *)(v127 + 40) & 0x400) == 0 )
    {
      v99 = *(_QWORD *)(v127 + 2528);
      if ( v99 )
        v10 = (struct _SURFOBJ *)(v99 + 24);
      PDEVOBJ::vSync((PDEVOBJ *)&v127, v10, 0LL, 0);
    }
    goto LABEL_163;
  }
  v26 = *((_DWORD *)a1 + 28);
  v27 = v26 + v11->left;
  v28 = v26 + v11->right;
  v29 = *((_DWORD *)a1 + 29);
  v30 = v29 + v11->top;
  v31 = *((_DWORD *)a1 + 20);
  v32 = v29 + v11->bottom;
  v146[0] = (HDC)__PAIR64__(v30, v27);
  v146[1] = (HDC)__PAIR64__(v32, v28);
  if ( v31 > v27 )
  {
    v27 = v31;
    LODWORD(v146[0]) = v31;
  }
  if ( *((_DWORD *)a1 + 21) > v30 )
  {
    v30 = *((_DWORD *)a1 + 21);
    HIDWORD(v146[0]) = v30;
  }
  if ( *((_DWORD *)a1 + 22) < v28 )
  {
    v28 = *((_DWORD *)a1 + 22);
    LODWORD(v146[1]) = v28;
  }
  if ( *((_DWORD *)a1 + 23) < v32 )
  {
    v32 = *((_DWORD *)a1 + 23);
    HIDWORD(v146[1]) = v32;
  }
  if ( v28 < v27 )
    goto LABEL_163;
  if ( v32 < v30 )
  {
    v30 = v32;
    HIDWORD(v146[0]) = v32;
  }
  if ( v27 == v28 || v30 == v32 )
    goto LABEL_163;
  v33 = *(_OWORD *)v146;
  v129 = *(_OWORD *)v146;
  vSpAddAndCompactDirtyRect(a1, &v129);
  v34 = 0;
  memset(v144, 0, sizeof(v144));
  if ( v25 )
  {
    if ( v27 == v28 || v30 == v32 )
    {
      v37 = *(_DWORD *)&v144[20];
      v38 = *(_DWORD *)&v144[12];
      v39 = *(_DWORD *)&v144[8];
      v42 = *(_QWORD *)v144;
LABEL_226:
      if ( v119[1] )
        goto LABEL_135;
      goto LABEL_70;
    }
    v35 = v128;
    *(struct _POINTL *)v144 = v128;
    *(_OWORD *)&v144[8] = v33;
    GreAcquireSemaphoreSharedInternal(*(_QWORD *)(*(_QWORD *)&v128 + 120LL));
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)(*(_QWORD *)&v35 + 120LL));
    v36 = *(_QWORD *)(*(_QWORD *)&v35 + 8LL);
    v37 = *(_DWORD *)&v144[20];
    v34 = *(_DWORD *)&v144[16];
    v38 = *(_DWORD *)&v144[12];
    v39 = *(_DWORD *)&v144[8];
    if ( v36 )
    {
      while ( 1 )
      {
        v40 = *(_QWORD *)(*(_QWORD *)(v36 + 16) + 1120LL);
        if ( v40 )
        {
          while ( v40 != v36 )
          {
            v40 = *(_QWORD *)(v40 + 24);
            if ( !v40 )
              goto LABEL_58;
          }
          goto LABEL_68;
        }
LABEL_58:
        if ( *(_QWORD *)(v36 + 128)
          && (*(_DWORD *)v36 & 0x400) == 0
          && *(_DWORD *)(v36 + 80) <= *(int *)&v144[16]
          && *(_DWORD *)(v36 + 84) <= *(int *)&v144[20]
          && *(_DWORD *)(v36 + 88) >= *(int *)&v144[8]
          && *(_DWORD *)(v36 + 92) >= *(int *)&v144[12] )
        {
          break;
        }
        v36 = *(_QWORD *)(v36 + 24);
        if ( !v36 )
          goto LABEL_68;
      }
LABEL_64:
      if ( (unsigned int)SURFACE::Map(*(_QWORD *)(v36 + 128) - 24LL, v144) == 2 )
      {
        for ( i = pSpReverseFindInZForPidLock(*(struct SPRITE **)(v36 + 32), (struct _RECTL *)&v144[8]);
              i;
              i = pSpReverseFindInZForPidLock(*((struct SPRITE **)i + 4), (struct _RECTL *)&v144[8]) )
        {
          SURFACE::bUnMap((SURFACE *)(*((_QWORD *)i + 16) - 24LL), v144, 0LL);
        }
        EtwTraceGreLockReleaseSemaphore(L"hsem");
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)&v35 + 120LL));
        v37 = *(_DWORD *)&v144[20];
        v42 = 0LL;
        v34 = *(_DWORD *)&v144[16];
        v38 = *(_DWORD *)&v144[12];
        v39 = *(_DWORD *)&v144[8];
        v28 = (signed int)v146[1];
        *(_QWORD *)v144 = 0LL;
        goto LABEL_226;
      }
      v36 = *(_QWORD *)(v36 + 24);
      v37 = *(_DWORD *)&v144[20];
      v34 = *(_DWORD *)&v144[16];
      v38 = *(_DWORD *)&v144[12];
      v39 = *(_DWORD *)&v144[8];
      if ( v36 )
      {
        while ( 1 )
        {
          v41 = *(_QWORD *)(*(_QWORD *)(v36 + 16) + 1120LL);
          if ( v41 )
            break;
LABEL_215:
          if ( *(_QWORD *)(v36 + 128)
            && (*(_DWORD *)v36 & 0x400) == 0
            && *(_DWORD *)(v36 + 80) <= *(int *)&v144[16]
            && *(_DWORD *)(v36 + 84) <= *(int *)&v144[20]
            && *(_DWORD *)(v36 + 88) >= *(int *)&v144[8]
            && *(_DWORD *)(v36 + 92) >= *(int *)&v144[12] )
          {
            goto LABEL_64;
          }
          v36 = *(_QWORD *)(v36 + 24);
          if ( !v36 )
            goto LABEL_68;
        }
        while ( v41 != v36 )
        {
          v41 = *(_QWORD *)(v41 + 24);
          if ( !v41 )
            goto LABEL_215;
        }
      }
    }
LABEL_68:
    v28 = (signed int)v146[1];
  }
  else
  {
    v37 = *(_DWORD *)&v144[20];
    v38 = *(_DWORD *)&v144[12];
    v39 = *(_DWORD *)&v144[8];
  }
  v42 = *(_QWORD *)v144;
  if ( !*(_QWORD *)v144 )
    goto LABEL_226;
LABEL_70:
  v43 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v145 = 0LL;
  v121 = 0LL;
  v120 = v43;
  v44 = *(_QWORD *)v43;
  v123 = 0LL;
  if ( (*(_DWORD *)(v44 + 40) & 0x400) != 0 )
    goto LABEL_134;
  v45 = *((_QWORD *)v43 + 15);
  v142 = v43;
  GreAcquireSemaphoreSharedInternal(v45);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *((_QWORD *)v43 + 15));
  v141 = *((_DWORD *)v43 + 29);
  v46 = (signed int *)*((_QWORD *)v43 + 17);
  v130[0] = 0;
  v131 = v27;
  v130[1] = v27;
  v133 = v28;
  v130[3] = v28;
  v132 = v30;
  v130[2] = v30;
  v134 = v32;
  for ( v130[4] = v32; v46[1] <= v30; v46 = (signed int *)((char *)v46 + *((_QWORD *)v46 + 1)) )
    ;
  v47 = v46 + 6;
  if ( v46[7] <= v27 )
  {
    do
      v47 += 4;
    while ( v47[1] <= v27 );
  }
  if ( *v46 > v30 )
    v135 = *v46;
  else
    v135 = v30;
  if ( v46[1] < v32 )
    v136 = v46[1];
  else
    v136 = v32;
  v48 = *((_QWORD *)v43 + 140);
  v137 = v46;
  v138 = v47;
  if ( v48 )
  {
    v49 = (int)v146[1];
    do
    {
      if ( *(_DWORD *)(v48 + 80) < v49
        && *(_DWORD *)(v48 + 84) < v32
        && *(_DWORD *)(v48 + 88) > v27
        && *(_DWORD *)(v48 + 92) > v30 )
      {
        SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v48 + 248));
      }
      v48 = *(_QWORD *)(v48 + 24);
    }
    while ( v48 );
  }
  do
  {
    v50 = ENUMAREAS::bEnum((ENUMAREAS *)v130, (struct SPRITE **)&v123, &v145);
    v52 = v123;
    LODWORD(v125) = v50;
    if ( !v123 )
      continue;
    v53 = 0LL;
    v54 = v140;
    v55 = v140;
    v56 = v139 - 16 + *(_QWORD *)(v139 + 8);
    if ( *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v51) + 32) + 23664LL) )
    {
      while ( 1 )
      {
        v104 = *(_QWORD *)(v55 + 8);
        if ( (*(_DWORD *)v104 & 8) != 0 )
        {
          v105 = *(_DWORD **)(v104 + 184);
          if ( !v105
            || v105[12] <= 0x38u
            && v105[14] <= *(_DWORD *)v55
            && v105[16] >= *(_DWORD *)(v55 + 4)
            && v105[15] <= v135
            && v105[17] >= v136 )
          {
            v53 = v55;
          }
        }
        if ( v55 >= v56 || *(_DWORD *)(v55 + 16) != *(_DWORD *)v55 )
          break;
        v55 += 16LL;
      }
      if ( v53 && v52 != *(struct _POINTL **)(v53 + 8) )
      {
        v123 = *(struct _POINTL **)(v53 + 8);
        v140 = v53;
        continue;
      }
    }
    v57 = *(_QWORD *)(v54 + 8);
    v58 = (char *)v43 + 688;
    StartingIndex[0] = -1;
    if ( v43 != (struct _SPRITESTATE *)-688LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v43 + 688, 0LL);
    }
    v124 = (struct _POINTL *)((char *)v43 + 664);
    ClearBits = RtlFindClearBits((PRTL_BITMAP)((char *)v43 + 664), 1u, 0);
    v60 = ClearBits;
    if ( ClearBits == -1 )
    {
      vSpDeleteSurface(0LL);
      v62 = -1LL;
    }
    else
    {
      v61 = (struct _SURFOBJ *)*((_QWORD *)v43 + ClearBits + 19);
      v62 = ClearBits;
      v63 = v61;
      if ( v61 && v61->sizlBitmap.cx >= v145.right - v145.left && v61->sizlBitmap.cy >= v145.bottom - v145.top )
      {
        v64 = v120;
LABEL_94:
        StartingIndex[0] = v60;
        RtlSetBits((PRTL_BITMAP)((char *)v64 + 664), v60, 1u);
        goto LABEL_95;
      }
      vSpDeleteSurface(v61);
      v43 = v120;
      *((_QWORD *)v120 + v60 + 19) = 0LL;
    }
    v106 = *((_QWORD *)v43 + 1);
    v107 = -1;
    v108 = -1;
    while ( v106 )
    {
      v109 = v108;
      v110 = *(_DWORD *)(v106 + 88) - *(_DWORD *)(v106 + 80);
      if ( v110 <= v107 )
        v110 = v107;
      v108 = *(_DWORD *)(v106 + 92) - *(_DWORD *)(v106 + 84);
      v106 = *(_QWORD *)(v106 + 24);
      v107 = v110;
      if ( v108 <= v109 )
        v108 = v109;
    }
    Surface = psoSpCreateSurface(v43, 0, v107, v108);
    v63 = Surface;
    if ( Surface )
    {
      v64 = v120;
      if ( (_DWORD)v60 != -1 )
        *((_QWORD *)v120 + v62 + 19) = Surface;
      Surface->fjBitmap |= 4u;
      if ( (_DWORD)v60 != -1 )
        goto LABEL_94;
    }
LABEL_95:
    if ( v58 )
    {
      ExReleasePushLockExclusiveEx(v58, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( !v63 )
    {
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v130);
      goto LABEL_133;
    }
    v65 = 0LL;
    v121.x = -v145.left;
    v121.y = -v145.top;
    v66 = *(_QWORD *)(v57 + 160);
    if ( v66 )
    {
      v67 = *(_DWORD *)(v66 + 88);
      if ( (v67 & 0x80004000) != 0 && (v67 & 0x200) == 0 )
      {
        v65 = v66 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v66 + 24));
      }
    }
    hsurf = (int)v63[1].hsurf;
    p_pvScan0 = 0LL;
    if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
    {
      p_pvScan0 = &v63[-1].pvScan0;
      GreLockDisplayDevice(v63->hdev);
    }
    INVOKEOFFCOPYBITS(
      &v121,
      v63,
      (struct _POINTL *)(v57 + 168),
      *(struct _SURFOBJ **)(v57 + 160),
      0LL,
      0LL,
      &v145,
      (struct _POINTL *)&v145);
    if ( p_pvScan0 )
      GreUnlockDisplayDevice(p_pvScan0[6]);
    if ( v65 )
      GreUnlockDisplayDevice(*(_QWORD *)(v65 + 48));
    v70 = v140;
    v71 = v130[0] & 1;
    v72 = v139;
    do
    {
      vSpComposite((struct SPRITE *)v57, &v121, v63, &v145);
      v73 = 0;
      if ( v71 )
      {
        while ( v70 > v72 + 24 )
        {
          v113 = v70 - 16;
          if ( *(_DWORD *)(v70 - 16) != *(_DWORD *)v70 )
            break;
          v70 -= 16LL;
          vSpComposite(*(struct SPRITE **)(v113 + 8), &v121, v63, &v145);
          v73 = 0;
        }
        v140 = v70;
      }
      else if ( v70 < v72 + *(_QWORD *)(v72 + 8) - 16LL )
      {
        v112 = v70 + 16;
        if ( *(_DWORD *)(v70 + 16) == *(_DWORD *)v70 )
        {
          v70 += 16LL;
          v140 = v112;
          v73 = 1;
        }
      }
      v57 = *(_QWORD *)(v70 + 8);
    }
    while ( v73 );
    v74 = v120;
    v123 = *(struct _POINTL **)(v70 + 8);
    v75 = 0LL;
    v151 = 0LL;
    v152 = 0;
    v76 = (struct REGION *)*((_QWORD *)v120 + 129);
    v153 = 1;
    v154 = 0LL;
    v150 = 0LL;
    v155 = 0;
    if ( !v76 )
      goto LABEL_110;
    v114 = bConcurrent(v120);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v148, v114, v76, (struct ERECTL *)&v145, 0);
    if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v149) )
    {
      v75 = (struct _CLIPOBJ *)v148;
LABEL_110:
      v77 = (int)v63[1].hsurf;
      v78 = 0LL;
      v63->iUniq = 0;
      if ( (v77 & 0x80004000) != 0 && (v77 & 0x200) == 0 )
      {
        v78 = &v63[-1].pvScan0;
        GreLockDisplayDevice(v63->hdev);
      }
      v79 = *((_QWORD *)v74 + 4);
      v80 = 0LL;
      if ( v79 )
      {
        v81 = *(_DWORD *)(v79 + 88);
        if ( (v81 & 0x80004000) != 0 && (v81 & 0x200) == 0 )
        {
          v80 = v79 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v79 + 24));
        }
      }
      v82 = (struct _SURFOBJ *)*((_QWORD *)v74 + 4);
      v128 = 0LL;
      INVOKEOFFCOPYBITS(&v128, v82, &v121, v63, v75, 0LL, &v145, (struct _POINTL *)&v145);
      if ( v80 )
        GreUnlockDisplayDevice(*(_QWORD *)(v80 + 48));
      if ( v78 )
        GreUnlockDisplayDevice(v78[6]);
      if ( v155 )
        REGION::vDeleteREGION(v150);
      goto LABEL_121;
    }
    ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v148);
LABEL_121:
    v83 = StartingIndex[0];
    if ( StartingIndex[0] == -1 )
    {
      vSpDeleteSurface(v63);
    }
    else if ( v58 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v58, 0LL);
      RtlClearBits((PRTL_BITMAP)v124, v83, 1u);
      ExReleasePushLockExclusiveEx(v58, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      RtlClearBits((PRTL_BITMAP)v124, StartingIndex[0], 1u);
    }
    v43 = v74;
  }
  while ( (_DWORD)v125 );
  v84 = v142;
  v85 = *((_QWORD *)v142 + 139);
  if ( v85 )
  {
    v86 = v134;
    v87 = v133;
    v88 = v132;
    v89 = v131;
    do
    {
      if ( *(_DWORD *)(v85 + 80) < v87
        && *(_DWORD *)(v85 + 84) < v86
        && *(_DWORD *)(v85 + 88) > v89
        && *(_DWORD *)(v85 + 92) > v88 )
      {
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v85 + 248));
      }
      if ( v85 == *((_QWORD *)v84 + 140) )
        break;
      v85 = *(_QWORD *)(v85 + 32);
    }
    while ( v85 );
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(*((_QWORD *)v84 + 15));
LABEL_133:
  v42 = *(_QWORD *)v144;
  v39 = *(_DWORD *)&v144[8];
  v38 = *(_DWORD *)&v144[12];
  v34 = *(_DWORD *)&v144[16];
  v37 = *(_DWORD *)&v144[20];
LABEL_134:
  if ( !*(_DWORD *)&v119[1] )
  {
    if ( v42 && v39 != v34 && v38 != v37 )
      vSpPIDUnlockSpriteArea((struct _SPRITESTATE *)v42, (struct _RECTL *)&v144[8], v144);
    goto LABEL_163;
  }
LABEL_135:
  if ( !v42 || v39 == v34 || v38 == v37 )
    goto LABEL_163;
  v90 = *(_QWORD *)(v42 + 16);
  if ( !v90 )
    goto LABEL_162;
  while ( 2 )
  {
    v91 = *(_QWORD *)(*(_QWORD *)(v90 + 16) + 1120LL);
    if ( v91 )
    {
      while ( v91 != v90 )
      {
        v91 = *(_QWORD *)(v91 + 24);
        if ( !v91 )
          goto LABEL_155;
      }
LABEL_141:
      v90 = *(_QWORD *)(v90 + 32);
      if ( !v90 )
        goto LABEL_162;
      continue;
    }
    break;
  }
LABEL_155:
  if ( !*(_QWORD *)(v90 + 128)
    || (*(_DWORD *)v90 & 0x400) != 0
    || *(_DWORD *)(v90 + 80) > v34
    || *(_DWORD *)(v90 + 84) > v37
    || *(_DWORD *)(v90 + 88) < v39
    || *(_DWORD *)(v90 + 92) < v38 )
  {
    goto LABEL_141;
  }
  while ( 1 )
  {
    SURFACE::bUnMap((SURFACE *)(*(_QWORD *)(v90 + 128) - 24LL), v144, 0LL);
    v90 = *(_QWORD *)(v90 + 32);
    if ( !v90 )
      break;
    while ( (unsigned int)bIsCursorSprite((struct SPRITE *)v90)
         || !*(_QWORD *)(v90 + 128)
         || (*(_DWORD *)v90 & 0x400) != 0
         || *(_DWORD *)(v90 + 80) > v116
         || *(_DWORD *)(v90 + 84) > v115
         || *(_DWORD *)(v90 + 88) < v118
         || *(_DWORD *)(v90 + 92) < v117 )
    {
      v90 = *(_QWORD *)(v90 + 32);
      if ( !v90 )
        goto LABEL_162;
    }
  }
LABEL_162:
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(*(_QWORD *)(v42 + 120));
LABEL_163:
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v143);
  return (unsigned int)v119[0];
}
