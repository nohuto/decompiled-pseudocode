/*
 * XREFs of ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00EFA8C
 * Callers:
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C00EE8B4 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C0165948 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00172B0 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C008BED0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008C4D8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B157C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00F019C (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00F01D8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C00F01FC (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00F0558 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00F0D0C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0164404 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0164ED8 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C0165770 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0165A5C (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C0165C98 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0282F9C (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
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
  struct _BLENDFUNCTION *v12; // r14
  struct _RECTL *v13; // r13
  __int64 *v15; // rsi
  unsigned int v16; // ecx
  unsigned int v17; // edi
  int v18; // r15d
  _DWORD *v19; // rsi
  unsigned int v20; // eax
  unsigned int v21; // ecx
  LONG cx; // eax
  LONG cy; // edx
  LONG v24; // eax
  unsigned int updated; // esi
  unsigned int v26; // edx
  unsigned int v27; // r12d
  HDC v28; // rdx
  int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // eax
  struct _POINTL *v32; // rdx
  unsigned int v33; // r8d
  struct _POINTL *v34; // rcx
  int v35; // edx
  LONG v36; // ecx
  int v37; // edx
  struct _BLENDFUNCTION v38; // [rsp+50h] [rbp-B0h] BYREF
  HDC v39; // [rsp+58h] [rbp-A8h]
  struct _POINTL *v40; // [rsp+60h] [rbp-A0h]
  struct _POINTL *v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v43; // [rsp+78h] [rbp-88h]
  __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  struct tagSIZE *v45; // [rsp+88h] [rbp-78h]
  struct _SPRITESTATE *v46; // [rsp+90h] [rbp-70h]
  _QWORD v47[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v48[40]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v49[24]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL v50; // [rsp+190h] [rbp+90h] BYREF
  struct _RECTL v51; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v52; // [rsp+1B0h] [rbp+B0h]
  struct _RECTL v53; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v54; // [rsp+1D0h] [rbp+D0h]

  v38 = 0;
  v12 = a8;
  v13 = a10;
  v39 = a5;
  v40 = a6;
  v45 = a4;
  v41 = a3;
  *(_QWORD *)&v50.left = a2;
  if ( !a1 )
    return 0LL;
  v15 = (__int64 *)*((_QWORD *)a1 + 2);
  v46 = (struct _SPRITESTATE *)v15;
  v42 = *v15;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v49, (struct PDEVOBJ *)&v42);
  v16 = a9 & 0xEFFFFFFF;
  v43 = a9 & 0x10000000;
  v53 = 0LL;
  if ( (a9 & 0x10000000) == 0 )
    v16 = a9;
  v17 = v16 & 0xFFDFFFFF;
  v18 = v16 & 0x200000;
  if ( (v16 & 0x200000) == 0 )
    v17 = v16;
  v44 = 0LL;
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v15 + 15));
  v19 = (_DWORD *)*((_QWORD *)a1 + 16);
  if ( v19 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v19 - 6)) )
  {
    W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v19 + 62));
    if ( (*(_DWORD *)a1 & 0x200) != 0 )
    {
      *(_QWORD *)&v51.left = 0LL;
      v20 = v19[8];
      v21 = v19[9];
      *(_QWORD *)&v51.right = __PAIR64__(v21, v20);
      if ( a10 )
      {
        v53 = *a10;
        ERECTL::operator*=(&v53.left, &v51.left);
      }
      else
      {
        *(_QWORD *)&v53.right = __PAIR64__(v21, v20);
      }
      v13 = &v53;
    }
    DCOBJ::DCOBJ((DCOBJ *)v47, v39);
    if ( v47[0] && a4 )
    {
      cx = v19[8];
      cy = a4->cy;
      if ( a4->cx < cx )
        cx = a4->cx;
      LODWORD(v44) = cx;
      v24 = v19[9];
      if ( cy < v24 )
        v24 = cy;
      HIDWORD(v44) = v24;
      v45 = (struct tagSIZE *)&v44;
    }
    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v19 + 62));
    MDCOBJ::~MDCOBJ((MDCOBJ *)v47);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v48);
  }
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v46 + 120));
  updated = 1;
  if ( (v17 & 0x20000000) != 0 )
  {
    v26 = v43;
    v17 &= ~0x20000000u;
    *((_DWORD *)a1 + 56) = v17 | (v43 != 0 ? 0x10000000 : 0);
    if ( (v17 & 2) != 0 && a8 )
      *((struct _BLENDFUNCTION *)a1 + 57) = *a8;
    v27 = a7;
    *((_DWORD *)a1 + 58) = a7;
    if ( v26 )
    {
      vSpCreateExMirror(**((HDEV **)a1 + 2));
      *(_DWORD *)a1 |= 0x100u;
    }
    v28 = v39;
    if ( !v39 )
    {
      v29 = *((_DWORD *)a1 + 56);
      v30 = *((_DWORD *)a1 + 51);
      v38 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 50);
      if ( v29 == 3 && !a8->AlphaFormat )
      {
        v29 = 2;
        v38 = *a8;
        v12 = &v38;
        v38.AlphaFormat = 1;
        v30 = a7;
      }
      *((_DWORD *)a1 + 1) = v29;
      *((_DWORD *)a1 + 51) = v30;
      *((struct _BLENDFUNCTION *)a1 + 50) = *v12;
      goto LABEL_79;
    }
  }
  else
  {
    if ( v17 == 0x40000000 )
    {
      v17 = *((_DWORD *)a1 + 56) & 0xEFFFFFFF;
      if ( (*((_DWORD *)a1 + 56) & 0x10000000) == 0 )
        v17 = *((_DWORD *)a1 + 56);
      if ( (*(_DWORD *)a1 & 0x40) != 0 && !v17 )
        v17 = *((_DWORD *)a1 + 1);
      v12 = &v38;
      v27 = *((_DWORD *)a1 + 58);
      v38 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 57);
    }
    else
    {
      v27 = a7;
    }
    v28 = v39;
  }
  if ( (*(_DWORD *)(v42 + 40) & 0x400) == 0 )
  {
    if ( *(_QWORD *)&v50.left || v45 || v28 || v40 || v27 )
    {
      updated = bSpUpdateShape(a1, v17, *(HDC *)&v50.left, v28, v27, v12, v40, v45, v13);
      if ( updated && !v18 )
      {
        v34 = v41;
        if ( !v41 )
          v34 = (struct _POINTL *)((char *)a1 + 112);
        v33 = 0;
        v32 = v34;
        goto LABEL_60;
      }
    }
    else
    {
      if ( v17 - 2 <= 1 && v12 && !v41 )
      {
        v31 = bSpUpdateAlpha(a1, v12, 1);
LABEL_61:
        updated = v31;
        goto LABEL_62;
      }
      if ( (v17 & 0x7FFFFFFF) == 0 && !v12 )
      {
        v32 = v41;
        v33 = v17 & 0x80000000;
LABEL_60:
        v31 = bSpUpdatePosition(a1, v32, v33, 0);
        goto LABEL_61;
      }
    }
LABEL_62:
    if ( v13 )
    {
      v35 = *((_DWORD *)a1 + 28);
      v50.left = v35 + v13->left;
      v36 = v35 + v13->right;
      v37 = *((_DWORD *)a1 + 29);
      v50.right = v36;
      v50.top = v37 + v13->top;
      v50.bottom = v37 + v13->bottom;
      ERECTL::operator*=(&v50.left, (int *)a1 + 20);
      if ( !ERECTL::bEmpty((ERECTL *)&v50) )
      {
        v51 = v50;
        vSpAddAndCompactDirtyRect(a1, &v51);
        v54 = 0LL;
        v53 = 0LL;
        if ( v18 )
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v53, v46, &v50);
        if ( !*(_QWORD *)&v53.left && v18 || (vSpRedrawArea(*((struct _SPRITESTATE **)a1 + 2), &v50, 0), v18) )
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v53);
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v53);
      }
    }
    else
    {
      v52 = 0LL;
      v51 = 0LL;
      if ( v18 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v51, v46, (struct _RECTL *)a1 + 5);
      if ( !*(_QWORD *)&v51.left && v18 || (vSpRedrawSprite(a1), v18) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v51);
      PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v51);
      if ( (*(_DWORD *)(v42 + 40) & 0x400) == 0 )
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v42,
          (struct _SURFOBJ *)((*(_QWORD *)(v42 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v42 + 2552) != 0LL)),
          0LL,
          0);
    }
  }
LABEL_79:
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v49);
  return updated;
}
