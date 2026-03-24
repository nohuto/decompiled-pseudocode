/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0164ED8
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00EFA8C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00172B0 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACD0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C00ACD38 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B157C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B59BC (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     XLATEOBJ_iXlate @ 0x1C00C8500 (XLATEOBJ_iXlate.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C00EDB20 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00EE310 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00F019C (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00F01D8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C010A0D0 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C015FC4C (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C0165548 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C0165770 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0284D14 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02BB110 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall bSpUpdateShape(
        struct SPRITE *a1,
        int a2,
        HDC a3,
        HDC a4,
        unsigned int a5,
        struct _BLENDFUNCTION *a6,
        struct _POINTL *a7,
        struct tagSIZE *a8,
        struct _RECTL *a9)
{
  struct _SPRITESTATE *v11; // rcx
  int v13; // r15d
  unsigned int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  __int64 v19; // rcx
  struct _SPRITESTATE *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // edx
  LONG x; // ecx
  int y; // edx
  LONG v26; // r8d
  __int64 v27; // r13
  LONG v28; // r9d
  LONG v29; // ecx
  LONG v30; // eax
  SPRITERANGELOCK *v31; // r14
  _DWORD *v32; // rbx
  XLATEOBJ *v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdi
  struct _BLENDFUNCTION v36; // eax
  int v37; // ebx
  struct PALETTE *v38; // rcx
  struct PALETTE *v39; // rax
  int v40; // ebx
  ULONG v41; // eax
  char v42; // r8
  int v43; // eax
  HSURF v44; // rcx
  bool v45; // zf
  struct _RECTL *v46; // rbx
  struct _SURFOBJ *v47; // rcx
  __int64 v48; // rdx
  unsigned int v49; // ebx
  ULONG NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  struct _BLENDFUNCTION v52; // [rsp+64h] [rbp-9Ch] BYREF
  int v53; // [rsp+68h] [rbp-98h]
  __int64 v54; // [rsp+70h] [rbp-90h] BYREF
  struct PALETTE *v55; // [rsp+78h] [rbp-88h] BYREF
  LONG v56; // [rsp+80h] [rbp-80h]
  LONG v57; // [rsp+84h] [rbp-7Ch]
  int v58; // [rsp+88h] [rbp-78h]
  int v59; // [rsp+8Ch] [rbp-74h]
  unsigned int v60; // [rsp+90h] [rbp-70h]
  unsigned int v61; // [rsp+94h] [rbp-6Ch]
  int v62; // [rsp+98h] [rbp-68h]
  struct _SPRITESTATE *v63; // [rsp+A0h] [rbp-60h]
  XLATEOBJ *pxlo; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-50h] BYREF
  struct PALETTE *v66; // [rsp+B8h] [rbp-48h]
  struct _RECTL *v67; // [rsp+C0h] [rbp-40h]
  _QWORD v68[2]; // [rsp+C8h] [rbp-38h] BYREF
  char v69[32]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v70[2]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v71[32]; // [rsp+108h] [rbp+8h] BYREF
  struct _RECTL v72; // [rsp+128h] [rbp+28h] BYREF

  v11 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v13 = a2;
  v67 = a9;
  v54 = *(_QWORD *)v11;
  v53 = 0;
  v72.bottom = 0;
  NearestIndexFromColorref = 0;
  v52 = 0;
  v63 = v11;
  if ( a2 == 0x2000000 )
  {
    *((_DWORD *)a1 + 1) = 0x2000000;
    v14 = 1;
    *((_DWORD *)a1 + 24) = 0;
    *((_DWORD *)a1 + 26) = a8->cx;
    *((_DWORD *)a1 + 25) = 0;
    *((_DWORD *)a1 + 27) = a8->cy;
    *((_DWORD *)a1 + 38) = *((_DWORD *)v11 + 27);
    *((_DWORD *)a1 + 39) = *((_DWORD *)v11 + 28);
    return v14;
  }
  if ( !a2 )
  {
    v13 = *((_DWORD *)a1 + 1);
    a6 = (struct _BLENDFUNCTION *)((char *)a1 + 200);
  }
  if ( !a7 || !a8 || !a6 && (v13 & 2) != 0 )
    return 0;
  DCOBJ::DCOBJ((DCOBJ *)v68, a4);
  if ( !v68[0] )
    goto LABEL_78;
  if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v68) )
    goto LABEL_78;
  if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v16 + 496), v15, v16, v17) )
    goto LABEL_78;
  v18 = v68[0];
  v19 = *(_QWORD *)(v68[0] + 48LL);
  if ( v19 != *(_QWORD *)v63 && v19 != *(_QWORD *)(v54 + 24) )
    goto LABEL_78;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v70, a3);
    if ( v70[0] )
    {
      v21 = *(_QWORD *)(v70[0] + 48LL);
      if ( v21 == *(_QWORD *)(v68[0] + 48LL) )
      {
        v20 = v63;
        if ( v21 == *(_QWORD *)v63 || v21 == *(_QWORD *)(v54 + 24) )
        {
          v22 = *(_QWORD *)(v70[0] + 976LL);
          v66 = *(struct PALETTE **)(v70[0] + 88LL);
          v23 = *(_DWORD *)(v22 + 184);
          v58 = *(_DWORD *)(v22 + 176);
          LODWORD(v22) = *(_DWORD *)(v70[0] + 120LL);
          v59 = v23;
          v60 = v22;
          MDCOBJ::~MDCOBJ((MDCOBJ *)v70);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v71);
          v18 = v68[0];
          goto LABEL_21;
        }
      }
    }
    MDCOBJ::~MDCOBJ((MDCOBJ *)v70);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v71);
LABEL_78:
    v49 = 0;
    goto LABEL_79;
  }
  v20 = v63;
  v59 = 0xFFFFFF;
  v58 = 0;
  v66 = ppalDefault;
  v60 = 0;
LABEL_21:
  x = a7->x;
  y = a7->y;
  v26 = a7->x + a8->cx;
  v27 = *(_QWORD *)(v18 + 496);
  v28 = y + a8->cy;
  v72.left = a7->x;
  v72.right = v26;
  v72.top = y;
  v72.bottom = v28;
  if ( !v27 )
    goto LABEL_76;
  if ( x < 0 )
    goto LABEL_76;
  if ( y < 0 )
    goto LABEL_76;
  if ( x >= v26 )
    goto LABEL_76;
  if ( y >= v28 )
    goto LABEL_76;
  v29 = *(_DWORD *)(v27 + 56);
  if ( v26 > v29 )
    goto LABEL_76;
  v30 = *(_DWORD *)(v27 + 60);
  if ( v28 > v30 )
    goto LABEL_76;
  if ( v67 )
  {
    v55 = 0LL;
    v56 = v29;
    v57 = v30;
    ERECTL::operator*=(&v67->left, (int *)&v55);
  }
  v31 = (struct _SPRITESTATE *)((char *)v20 + 120);
  SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v20 + 120));
  v32 = (_DWORD *)*((_QWORD *)a1 + 16);
  v33 = 0LL;
  if ( v32 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v32 - 6)) )
  {
    W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v32 + 62));
    if ( (*(_DWORD *)a1 & 0x200) != 0 )
    {
      v55 = 0LL;
      v56 = v32[8];
      v57 = v32[9];
      ERECTL::operator*=(&v72.left, (int *)&v55);
    }
    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v32 + 62));
    v33 = 0LL;
  }
  v34 = *(_QWORD *)(v27 + 128);
  pxlo = v33;
  v35 = *(_QWORD *)(v68[0] + 88LL);
  v65 = v34;
  if ( v34 )
    INC_SHARE_REF_CNT(v34);
  SPRITERANGELOCK::vUnlock(v31);
  if ( v13 != 3 || a6->AlphaFormat )
  {
    v37 = 0;
    v62 = 0;
  }
  else
  {
    v36 = *a6;
    v13 = 2;
    a6 = &v52;
    v52 = v36;
    v52.AlphaFormat = 1;
    v62 = 1;
    NearestIndexFromColorref = rgbFromColorref(gppalRGB, v35);
    v37 = 1;
  }
  if ( v13 == 2 && (a6->AlphaFormat & 1) != 0 )
  {
    v61 = 6;
    v38 = gppalRGB;
    v39 = ppalDefault;
  }
  else
  {
    v61 = 0;
    v38 = *(struct PALETTE **)(v54 + 1808);
    v39 = v66;
  }
  v55 = v38;
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                       (__int64 *)&pxlo,
                       0LL,
                       v60,
                       v65,
                       (__int64)v38,
                       v35,
                       (__int64)v39,
                       v59,
                       v58,
                       0,
                       0) )
  {
    v53 = 1;
    *((_DWORD *)a1 + 1) = v13;
    *((struct _RECTL *)a1 + 6) = v72;
    if ( v13 == 4 )
    {
      *(_DWORD *)a1 |= 8u;
      v40 = 1;
      goto LABEL_69;
    }
    if ( v13 == 1 )
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v65, v35, a5, 1LL);
      v41 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
      *(_DWORD *)a1 &= ~8u;
      *((_DWORD *)a1 + 51) = v41;
      v40 = *(_DWORD *)(v54 + 44) & 4;
      goto LABEL_61;
    }
    if ( v13 == 2 && (unsigned int)bSpUpdateAlpha(a1, a6, 0) )
    {
      v42 = a6->AlphaFormat & 1;
      if ( !v42 || (unsigned int)bIsSourceBGRA((struct SURFACE *)v27) )
      {
        if ( !v37 )
        {
          if ( v42 )
            v40 = *(_DWORD *)(v54 + 44) & 2;
          else
            v40 = *(_DWORD *)(v54 + 44) & 1;
LABEL_61:
          if ( v40 )
            goto LABEL_69;
          goto LABEL_62;
        }
      }
      else if ( !v37 )
      {
        goto LABEL_74;
      }
      v40 = 0;
LABEL_62:
      if ( *(_WORD *)(v27 + 100) || (*(_BYTE *)(v27 + 102) & 0x20) != 0 )
      {
        if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v54) )
        {
          v43 = *(_DWORD *)(v27 + 116);
          if ( (v43 & 0x20) == 0 )
          {
            v44 = *(HSURF *)(v27 + 32);
            *(_DWORD *)(v27 + 116) = v43 | 0x20;
            pConvertDfbSurfaceToDibPostNKAPC(v44);
          }
        }
        else
        {
          bConvertDfbDcToDib((struct XDCOBJ *)v68);
        }
        v27 = *(_QWORD *)(v68[0] + 496LL);
      }
LABEL_69:
      vSpDirectDriverAccess(v63, 0);
      v45 = v40 == 0;
      v46 = v67;
      bSpCreateShape(
        a1,
        &gptlZero,
        (struct _SURFOBJ *)((v27 + 24) & -(__int64)(v27 != 0)),
        pxlo,
        &v72,
        v55,
        v61,
        v45,
        v67);
      vSpDirectDriverAccess(v63, 1);
      v47 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
      if ( v47 )
      {
        if ( v62 )
        {
          if ( (*(_DWORD *)a1 & 0x40) != 0 )
            *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
          else
            vSpUpdatePerPixelAlphaFromColorKey(v47, NearestIndexFromColorref, v46, 0LL);
        }
        goto LABEL_75;
      }
    }
LABEL_74:
    vSpDeleteShape(a1);
    *((_DWORD *)a1 + 1) = 4;
    v53 = 0;
  }
LABEL_75:
  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v65);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo, v48);
LABEL_76:
  v49 = v53;
LABEL_79:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v68);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v69);
  return v49;
}
