/*
 * XREFs of ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0049AEC (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00857A4 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B56F4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00B604C (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C0119AE4 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027C278 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027C8A0 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C027F464 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C027F62C (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027FA4C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C027FE40 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0031540 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreClientRgnUpdatedStable @ 0x1C0049624 (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x1C00496B4 (GreClientRgnUpdated.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0086018 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C00B589C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1C00B5AD4 (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00B67C4 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00B69FC (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00B793C (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00B7E14 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0119B68 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0155234 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0155444 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0155668 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0155D28 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C028021C (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall bSpUpdatePosition(struct SPRITE *a1, struct _POINTL *a2, int a3, int a4)
{
  struct _CLIPOBJ *v4; // r14
  unsigned int v5; // edi
  _QWORD **v6; // r12
  struct _POINTL *v8; // r13
  LONG x; // edx
  LONG y; // r8d
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v17; // esi
  int v18; // edi
  struct _SURFOBJ *v19; // r11
  int v20; // r9d
  int v21; // r8d
  struct _SURFOBJ *Surface; // rax
  struct _SURFOBJ *v23; // rbx
  LONG left; // ecx
  LONG top; // edx
  struct _POINTL v26; // rax
  struct _RECTL v27; // xmm0
  int v28; // edx
  int v29; // ecx
  struct _POINTL v30; // r8
  int v31; // eax
  bool v32; // r13
  LONG v33; // r14d
  LONG v34; // eax
  bool v35; // zf
  __int64 v36; // rax
  LONG v37; // ecx
  struct _POINTL *v38; // rdx
  int v39; // ebx
  int v40; // r8d
  int v41; // r10d
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  __int64 v45; // rdi
  struct REGION *v46; // rdx
  struct _XLATEOBJ *v47; // rsi
  _QWORD *v48; // r10
  __int64 v49; // r9
  __int64 v50; // rcx
  int v51; // r8d
  _QWORD *v52; // rdi
  _QWORD *v53; // rax
  int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rbx
  struct _SURFOBJ *v57; // rdx
  int v58; // ecx
  int v59; // eax
  __int64 v60; // rsi
  __int64 v61; // rbx
  struct _POINTL v62; // rax
  unsigned int v63; // r8d
  unsigned int v64; // edx
  struct SPRITE **v65; // rcx
  int v66; // eax
  int v67; // [rsp+20h] [rbp-E0h]
  struct _POINTL v68; // [rsp+60h] [rbp-A0h] BYREF
  int v69; // [rsp+68h] [rbp-98h]
  struct _POINTL v70; // [rsp+70h] [rbp-90h] BYREF
  int v71; // [rsp+78h] [rbp-88h]
  struct _CLIPOBJ *v72; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v73; // [rsp+88h] [rbp-78h] BYREF
  int v74; // [rsp+90h] [rbp-70h]
  __int64 v75; // [rsp+98h] [rbp-68h] BYREF
  int v76; // [rsp+A0h] [rbp-60h]
  struct _POINTL *v77; // [rsp+A8h] [rbp-58h]
  struct _CLIPOBJ *v78; // [rsp+B0h] [rbp-50h]
  struct _RECTL si128; // [rsp+B8h] [rbp-48h] BYREF
  struct _RECTL v80; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v81[4]; // [rsp+E0h] [rbp-20h] BYREF
  char v82[52]; // [rsp+E4h] [rbp-1Ch] BYREF
  __int64 v83; // [rsp+118h] [rbp+18h]
  __int64 v84; // [rsp+130h] [rbp+30h]
  int v85; // [rsp+138h] [rbp+38h]
  int v86; // [rsp+160h] [rbp+60h]
  __int64 v87; // [rsp+170h] [rbp+70h]

  v4 = (struct _CLIPOBJ *)*((_QWORD *)a1 + 14);
  v5 = 1;
  v6 = (_QWORD **)*((_QWORD *)a1 + 2);
  v76 = 1;
  v78 = v4;
  v8 = a2;
  v71 = a4;
  v77 = a2;
  v80 = 0LL;
  if ( a2 )
  {
    *((struct _POINTL *)a1 + 14) = *a2;
    x = a2->x;
    y = v8->y;
    si128.right = x + *((_DWORD *)a1 + 26) - *((_DWORD *)a1 + 24);
    v12 = *((_DWORD *)a1 + 27) - *((_DWORD *)a1 + 25);
    si128.left = x;
    si128.bottom = y + v12;
    si128.top = y;
  }
  else
  {
    si128.bottom = 0x80000000;
  }
  if ( (*(_DWORD *)a1 & 0x11) != 0 || !bIntersect((const struct _RECTL *)(v6 + 5), &si128, &si128) )
  {
    v13 = 0;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  }
  else
  {
    v13 = 32;
  }
  v14 = *(_DWORD *)a1;
  v15 = *(_DWORD *)a1 & 0x20;
  v69 = *(_DWORD *)a1;
  LODWORD(v75) = v15;
  if ( v13 == v15 )
  {
    if ( si128.left == *((_DWORD *)a1 + 20)
      && si128.top == *((_DWORD *)a1 + 21)
      && si128.right == *((_DWORD *)a1 + 22)
      && si128.bottom == *((_DWORD *)a1 + 23) )
    {
      if ( gpto && *((_DWORD *)a1 + 1) == 2 )
        vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v6, (struct _RECTL *)a1 + 5, (struct _RECTL *)a1 + 5);
      goto LABEL_11;
    }
    v14 = v69;
  }
  if ( v15 )
  {
    *(_DWORD *)a1 = v14 & 0xFFFFFFDF;
    --*((_DWORD *)v6 + 14);
  }
  if ( *((_QWORD *)a1 + 20) )
  {
    if ( !a3 )
    {
      vSpRedrawUncoveredArea(a1, &si128);
      goto LABEL_24;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_24;
  }
  v84 = 0LL;
  v85 = 0;
  v87 = 0LL;
  v83 = 0LL;
  v46 = (struct REGION *)*((_QWORD *)a1 + 23);
  v86 = 1;
  if ( v46 )
  {
    XCLIPOBJ::vSetup((XCLIPOBJ *)v81, v46, (struct SPRITE *)((char *)a1 + 80), 0);
    v72 = (struct _CLIPOBJ *)v81;
    if ( ERECTL::bEmpty((ERECTL *)v82) )
      goto LABEL_24;
  }
  else
  {
    v72 = 0LL;
  }
  if ( *((_QWORD *)a1 + 16) )
  {
    if ( *((_DWORD *)a1 + 56) == 3 && !*((_BYTE *)a1 + 231) || *((_DWORD *)a1 + 1) == 1 )
    {
      vSpRedrawArea((struct _SPRITESTATE *)v6, (struct _RECTL *)a1 + 5, 1);
      goto LABEL_94;
    }
    vSpDirectDriverAccess((struct _SPRITESTATE *)v6, 0);
    v73 = 0LL;
    v47 = 0LL;
    v48 = v6[4];
    v49 = *((_QWORD *)a1 + 18);
    v50 = v48[13];
    v51 = *(_DWORD *)(*((_QWORD *)a1 + 16) + 72LL);
    v68 = 0LL;
    if ( *((_DWORD *)v48 + 18) != v51 || (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (__int64 *)&v68,
                            0LL,
                            0,
                            v49,
                            v50,
                            (__int64)ppalDefault,
                            (__int64)ppalDefault,
                            0,
                            0,
                            0,
                            0) )
      {
LABEL_93:
        vSpDirectDriverAccess((struct _SPRITESTATE *)v6, 1);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v68);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)&v73);
LABEL_94:
        GreClientRgnUpdated(0);
        GreClientRgnUpdatedStable();
        goto LABEL_24;
      }
      v47 = (struct _XLATEOBJ *)v68;
    }
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)&v73, *((struct _SURFOBJ **)a1 + 16)) )
    {
      v52 = 0LL;
      v70.x = *((_DWORD *)a1 + 20) - (_DWORD)v4;
      v70.y = *((_DWORD *)a1 + 21) - HIDWORD(v78);
      v53 = v6[4];
      if ( v53 )
      {
        v54 = *((_DWORD *)v53 + 22);
        if ( (v54 & 0x80004000) != 0 && (v54 & 0x200) == 0 )
        {
          v52 = v53 - 3;
          GreLockDisplayDevice(v53[3]);
        }
      }
      v55 = *((_QWORD *)a1 + 16);
      v56 = 0LL;
      v57 = (struct _SURFOBJ *)v55;
      if ( v55 )
      {
        v58 = *(_DWORD *)(v55 + 88);
        if ( (v58 & 0x80004000) != 0 && (v58 & 0x200) == 0 )
        {
          v56 = v55 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v55 - 24 + 48));
          v57 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        }
      }
      SpBitBlt((struct _SURFOBJ *)v6[4], v57, 0LL, v72, v47, (struct _RECTL *)a1 + 5, &v70, 0LL, 0LL, 0LL, 0xCCCCu);
      if ( v56 )
        GreUnlockDisplayDevice(*(_QWORD *)(v56 + 48));
      if ( v52 )
        GreUnlockDisplayDevice(v52[6]);
      v8 = v77;
    }
    goto LABEL_93;
  }
LABEL_24:
  v17 = si128.bottom - si128.top;
  v18 = si128.right - si128.left;
  if ( si128.right == si128.left )
  {
    if ( v71 == 1 && !*((_DWORD *)v6 + 14) && *((_DWORD *)v6 + 270) )
      vSpUnhook((struct _SPRITESTATE *)v6);
  }
  else
  {
    *(_DWORD *)a1 |= 0x20u;
    ++*((_DWORD *)v6 + 14);
    if ( v71 == 1 && !*((_DWORD *)v6 + 270) )
      vSpHook((struct _SPRITESTATE *)v6);
    v19 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
    if ( v19 && v18 <= v19->sizlBitmap.cx && v17 <= v19->sizlBitmap.cy )
    {
      if ( si128.left < *((_DWORD *)a1 + 20)
        || si128.top < *((_DWORD *)a1 + 21)
        || si128.right > *((_DWORD *)a1 + 22)
        || si128.bottom > *((_DWORD *)a1 + 23) )
      {
        v39 = *((_DWORD *)a1 + 52);
        v40 = 0;
        v41 = 0;
        if ( si128.left >= v39 )
        {
          v59 = *((_DWORD *)a1 + 54);
          if ( si128.right > v59 )
            v40 = si128.right - v59;
        }
        else
        {
          v40 = si128.left - v39;
        }
        v42 = *((_DWORD *)a1 + 53);
        v43 = *((_DWORD *)a1 + 55);
        if ( si128.top >= v42 )
        {
          if ( si128.bottom > v43 )
            v41 = si128.bottom - v43;
        }
        else
        {
          v41 = si128.top - v42;
        }
        *((_DWORD *)a1 + 54) += v40;
        v44 = v41 + v42;
        *((_DWORD *)a1 + 52) = v39 + v40;
        *((_DWORD *)a1 + 53) = v44;
        *((_DWORD *)a1 + 55) = v41 + v43;
        *((_DWORD *)a1 + 42) = -(v39 + v40);
        *((_DWORD *)a1 + 43) = -v44;
        vSpSmallUnderlayCopy(
          a1,
          (struct _POINTL *)a1 + 21,
          v19,
          (struct _POINTL *)a1 + 21,
          v19,
          v40,
          v41,
          &si128,
          (struct _RECTL *)a1 + 5);
      }
    }
    else
    {
      v20 = v17;
      v21 = v18;
      if ( v17 <= *((_DWORD *)a1 + 45) )
        v20 = *((_DWORD *)a1 + 45);
      if ( v18 <= *((_DWORD *)a1 + 44) )
        v21 = *((_DWORD *)a1 + 44);
      Surface = psoSpCreateSurface((struct _SPRITESTATE *)v6, 0, v21, v20, v67);
      v23 = Surface;
      if ( !Surface )
      {
        v5 = 0;
        bSpUpdatePosition(a1, 0LL, 0, 0);
        goto LABEL_11;
      }
      Surface->fjBitmap |= 4u;
      v68.x = -si128.left;
      v68.y = -si128.top;
      if ( v18 > 128 || v17 > 128 )
        vSpBigUnderlayCopy((struct _SPRITESTATE *)v6, &v68, Surface, &si128);
      else
        vSpSmallUnderlayCopy(
          a1,
          &v68,
          Surface,
          (struct _POINTL *)a1 + 21,
          *((struct _SURFOBJ **)a1 + 20),
          0,
          0,
          &si128,
          (struct _RECTL *)a1 + 5);
      vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 20));
      left = si128.left;
      top = si128.top;
      v26 = v68;
      *((_DWORD *)a1 + 52) = si128.left;
      *((struct _POINTL *)a1 + 21) = v26;
      *((_QWORD *)a1 + 20) = v23;
      *((_DWORD *)a1 + 53) = top;
      *((_DWORD *)a1 + 54) = v23->sizlBitmap.cx + left;
      *((_DWORD *)a1 + 55) = top + v23->sizlBitmap.cy;
    }
  }
  v70 = 0LL;
  v27 = (struct _RECTL)*((_OWORD *)a1 + 5);
  v28 = *(_DWORD *)a1;
  v29 = v75 != 0;
  v30 = (struct _POINTL)*((_QWORD *)a1 + 24);
  v31 = (*(_DWORD *)a1 >> 5) & 1;
  v68 = v30;
  v80 = v27;
  *((struct _RECTL *)a1 + 5) = si128;
  if ( v31 != v29 )
  {
    v32 = (v69 & 0x20) == 0 && (v28 & 0x20) != 0;
    if ( v30 )
      goto LABEL_39;
    v45 = *((_QWORD *)a1 + 1);
    if ( !v45 )
      goto LABEL_50;
    if ( !v32 )
      goto LABEL_50;
    v60 = 0LL;
    if ( !*(_DWORD *)(v45 + 20) )
      goto LABEL_50;
    while ( 1 )
    {
      v61 = *(_QWORD *)(v45 + 8 * v60 + 24);
      if ( (struct SPRITE *)v61 != a1 )
      {
        v75 = *(_QWORD *)(v61 + 192);
        if ( v75 )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v73);
          if ( *(_QWORD *)&v73 && RGNOBJ::bCopy((RGNOBJ *)&v73, (struct RGNOBJ *)&v75) )
          {
            LODWORD(v72) = -*(_DWORD *)(v61 + 112);
            HIDWORD(v72) = -*(_DWORD *)(v61 + 116);
            RGNOBJ::bOffset((RGNOBJ *)&v73, (struct _POINTL *)&v72);
            v35 = v74 == 1;
            v62 = v73;
            *((struct _POINTL *)a1 + 24) = v73;
            v68 = v62;
            if ( v35 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v73);
LABEL_39:
            if ( v68 )
            {
              if ( v32 )
              {
                v33 = v77->x;
                v34 = v77->y;
              }
              else
              {
                v33 = -(int)v4;
                v34 = -HIDWORD(v78);
              }
              v70.y = v34;
              v70.x = v33;
              if ( !v33 )
              {
                v35 = v34 == 0;
                goto LABEL_133;
              }
              goto LABEL_49;
            }
            goto LABEL_50;
          }
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v73);
          if ( v74 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v73);
        }
      }
      v60 = (unsigned int)(v60 + 1);
      if ( (unsigned int)v60 >= *(_DWORD *)(v45 + 20) )
        goto LABEL_39;
    }
  }
  if ( !*(_QWORD *)&v30 || ((unsigned __int8)v69 & (unsigned __int8)v28 & 0x20) == 0 )
    goto LABEL_50;
  v36 = *((_QWORD *)a1 + 1);
  if ( v36 )
  {
    v63 = *(_DWORD *)(v36 + 20);
    v64 = 0;
    if ( v63 )
    {
      v65 = (struct SPRITE **)(v36 + 24);
      while ( *v65 == a1 || (*(_DWORD *)*v65 & 0x20) == 0 )
      {
        ++v64;
        ++v65;
        if ( v64 >= v63 )
          goto LABEL_47;
      }
      v72 = v4;
      RGNOBJ::vSet((RGNOBJ *)&v68, (struct _RECTL *)a1 + 6);
      RGNOBJ::bOffset((RGNOBJ *)&v68, (struct _POINTL *)&v72);
    }
  }
LABEL_47:
  if ( v68 )
  {
    v37 = v8->y - HIDWORD(v78);
    v70.x = v8->x - (_DWORD)v4;
    v70.y = v37;
    if ( v70.x )
      goto LABEL_49;
    v35 = v37 == 0;
LABEL_133:
    if ( !v35 )
LABEL_49:
      RGNOBJ::bOffset((RGNOBJ *)&v68, &v70);
  }
LABEL_50:
  *((_DWORD *)v6 + 29) = 0;
  ++giSpriteUniqueness;
  vSpOrderInY(a1);
  if ( gpto )
    vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v6, &si128, &v80);
  if ( !*((_DWORD *)v6 + 29) )
    vSpComputeSpriteRanges((struct _SPRITESTATE *)v6);
  vSpRemoveAllSpriteOverlapPresents(*v6, v38);
  v5 = v76;
LABEL_11:
  if ( v71 == 1 )
  {
    v66 = *((_DWORD *)v6 + 270);
    if ( *((_DWORD *)v6 + 14) )
    {
      if ( !v66 )
        vSpHook((struct _SPRITESTATE *)v6);
    }
    else if ( v66 )
    {
      vSpUnhook((struct _SPRITESTATE *)v6);
    }
  }
  return v5;
}
