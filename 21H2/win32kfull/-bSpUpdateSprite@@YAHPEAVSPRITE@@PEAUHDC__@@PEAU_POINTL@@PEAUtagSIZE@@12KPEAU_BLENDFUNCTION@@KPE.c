/*
 * XREFs of ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00857A4
 * Callers:
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C00B5D20 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C0157970 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001F4EC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0085FE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0086C30 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0086C6C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0086C90 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B6430 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0155D28 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0156B64 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C015740C (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0157480 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C0157AA8 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0280798 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
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
  struct _POINTL *v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // r8d
  int v34; // edx
  LONG v35; // ecx
  int v36; // edx
  struct _BLENDFUNCTION v37; // [rsp+50h] [rbp-B0h] BYREF
  HDC v38; // [rsp+58h] [rbp-A8h]
  struct _POINTL *v39; // [rsp+60h] [rbp-A0h]
  struct _POINTL *v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  struct tagSIZE *v44; // [rsp+88h] [rbp-78h]
  struct _SPRITESTATE *v45; // [rsp+90h] [rbp-70h]
  _QWORD v46[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v47[40]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v48[192]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL v49; // [rsp+190h] [rbp+90h] BYREF
  struct _RECTL v50; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v51; // [rsp+1B0h] [rbp+B0h]
  struct _RECTL v52; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v53; // [rsp+1D0h] [rbp+D0h]

  v37 = 0;
  v12 = a8;
  v13 = a10;
  v38 = a5;
  v39 = a6;
  v44 = a4;
  v40 = a3;
  *(_QWORD *)&v49.left = a2;
  if ( !a1 )
    return 0LL;
  v15 = (__int64 *)*((_QWORD *)a1 + 2);
  v45 = (struct _SPRITESTATE *)v15;
  v41 = *v15;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v48, (struct PDEVOBJ *)&v41);
  v16 = a9 & 0xEFFFFFFF;
  v42 = a9 & 0x10000000;
  v52 = 0LL;
  if ( (a9 & 0x10000000) == 0 )
    v16 = a9;
  v17 = v16 & 0xFFDFFFFF;
  v18 = v16 & 0x200000;
  if ( (v16 & 0x200000) == 0 )
    v17 = v16;
  v43 = 0LL;
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v15 + 15));
  v19 = (_DWORD *)*((_QWORD *)a1 + 16);
  if ( v19 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v19 - 6)) )
  {
    W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v19 + 62));
    if ( (*(_DWORD *)a1 & 0x200) != 0 )
    {
      *(_QWORD *)&v50.left = 0LL;
      v20 = v19[8];
      v21 = v19[9];
      *(_QWORD *)&v50.right = __PAIR64__(v21, v20);
      if ( a10 )
      {
        v52 = *a10;
        ERECTL::operator*=(&v52.left, &v50.left);
      }
      else
      {
        *(_QWORD *)&v52.right = __PAIR64__(v21, v20);
      }
      v13 = &v52;
    }
    DCOBJ::DCOBJ((DCOBJ *)v46, v38);
    if ( v46[0] && a4 )
    {
      cx = v19[8];
      cy = a4->cy;
      if ( a4->cx < cx )
        cx = a4->cx;
      LODWORD(v43) = cx;
      v24 = v19[9];
      if ( cy < v24 )
        v24 = cy;
      HIDWORD(v43) = v24;
      v44 = (struct tagSIZE *)&v43;
    }
    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v19 + 62));
    MDCOBJ::~MDCOBJ((MDCOBJ *)v46);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v47);
  }
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v45 + 120));
  updated = 1;
  if ( (v17 & 0x20000000) != 0 )
  {
    v26 = v42;
    v17 &= ~0x20000000u;
    *((_DWORD *)a1 + 56) = v17 | (v42 != 0 ? 0x10000000 : 0);
    if ( (v17 & 2) != 0 && a8 )
      *((struct _BLENDFUNCTION *)a1 + 57) = *a8;
    v27 = a7;
    *((_DWORD *)a1 + 58) = a7;
    if ( v26 )
    {
      vSpCreateExMirror(**((HDEV **)a1 + 2));
      *(_DWORD *)a1 |= 0x100u;
    }
    v28 = v38;
    if ( !v38 )
    {
      v29 = *((_DWORD *)a1 + 56);
      v30 = *((_DWORD *)a1 + 51);
      v37 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 50);
      if ( v29 == 3 && !a8->AlphaFormat )
      {
        v29 = 2;
        v37 = *a8;
        v12 = &v37;
        v37.AlphaFormat = 1;
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
      v12 = &v37;
      v27 = *((_DWORD *)a1 + 58);
      v37 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 57);
    }
    else
    {
      v27 = a7;
    }
    v28 = v38;
  }
  if ( (*(_DWORD *)(v41 + 40) & 0x400) == 0 )
  {
    if ( *(_QWORD *)&v49.left || v44 || v28 || v39 || v27 )
    {
      updated = bSpUpdateShape(a1, v17, *(HDC *)&v49.left, v28, v27, v12, v39, v44, v13);
      if ( updated && !v18 )
      {
        v31 = v40;
        if ( !v40 )
          v31 = (struct _POINTL *)((char *)a1 + 112);
        v33 = 0;
        goto LABEL_60;
      }
    }
    else
    {
      v31 = v40;
      if ( v17 - 2 <= 1 && v12 && !v40 )
      {
        v32 = bSpUpdateAlpha(a1, v12, 1);
LABEL_61:
        updated = v32;
        goto LABEL_62;
      }
      if ( (v17 & 0x7FFFFFFF) == 0 && !v12 )
      {
        v33 = v17 & 0x80000000;
LABEL_60:
        v32 = bSpUpdatePosition(a1, v31, v33, 0);
        goto LABEL_61;
      }
    }
LABEL_62:
    if ( v13 )
    {
      v34 = *((_DWORD *)a1 + 28);
      v49.left = v34 + v13->left;
      v35 = v34 + v13->right;
      v36 = *((_DWORD *)a1 + 29);
      v49.right = v35;
      v49.top = v36 + v13->top;
      v49.bottom = v36 + v13->bottom;
      ERECTL::operator*=(&v49.left, (int *)a1 + 20);
      if ( !ERECTL::bEmpty((ERECTL *)&v49) )
      {
        v50 = v49;
        vSpAddAndCompactDirtyRect(a1, &v50);
        v53 = 0LL;
        v52 = 0LL;
        if ( v18 )
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v52, v45, &v49);
        if ( !*(_QWORD *)&v52.left && v18 || (vSpRedrawArea(*((struct _SPRITESTATE **)a1 + 2), &v49, 0), v18) )
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v52);
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v52);
      }
    }
    else
    {
      v51 = 0LL;
      v50 = 0LL;
      if ( v18 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v50, v45, (struct _RECTL *)a1 + 5);
      if ( !*(_QWORD *)&v50.left && v18 || (vSpRedrawSprite(a1), v18) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v50);
      PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v50);
      if ( (*(_DWORD *)(v41 + 40) & 0x400) == 0 )
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v41,
          (struct _SURFOBJ *)((*(_QWORD *)(v41 + 2528) + 24LL) & -(__int64)(*(_QWORD *)(v41 + 2528) != 0LL)),
          0LL,
          0);
    }
  }
LABEL_79:
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v48);
  return updated;
}
