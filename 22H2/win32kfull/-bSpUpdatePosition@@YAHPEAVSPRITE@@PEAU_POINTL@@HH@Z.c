/*
 * XREFs of ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00F09BC
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0074C9C (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00ED604 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00EE3A4 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00EF73C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00F09BC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C012C3F4 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027E280 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027E8B0 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C02812D8 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C02814A0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C02818E8 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C0281CD0 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     GreClientRgnUpdatedStable @ 0x1C0071524 (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x1C0075010 (GreClientRgnUpdated.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084E50 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0096E60 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B565C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00ED260 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C00ED794 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1C00EDC7C (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00EDFC0 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00F02A4 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F04E0 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00F09BC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00F0CD0 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C012C478 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0163C34 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0282240 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C02823F0 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0283BD4 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0283FA0 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
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
  struct REGION *v17; // rdx
  struct _XLATEOBJ *v18; // rsi
  _QWORD *v19; // r10
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // r8d
  _QWORD *v23; // rdi
  _QWORD *v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rbx
  struct _SURFOBJ *v28; // rdx
  int v29; // ecx
  __int64 v30; // rdx
  int v31; // esi
  int v32; // edi
  struct _SURFOBJ *v33; // r11
  int v34; // ebx
  int v35; // r10d
  int v36; // r8d
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // r9d
  int v42; // r8d
  struct _SURFOBJ *Surface; // rax
  struct _SURFOBJ *v44; // rbx
  LONG left; // ecx
  LONG top; // edx
  struct _POINTL v47; // rax
  struct _RECTL v48; // xmm0
  int v49; // edx
  int v50; // ecx
  struct _POINTL v51; // r8
  int v52; // eax
  bool v53; // bl
  __int64 v54; // rsi
  __int64 v55; // r13
  __int64 v56; // rdi
  struct _POINTL v57; // rax
  LONG v58; // r14d
  LONG v59; // eax
  bool v60; // zf
  __int64 v61; // rax
  unsigned int v62; // r8d
  unsigned int v63; // edx
  struct SPRITE **v64; // rcx
  LONG v65; // ecx
  struct _POINTL *v66; // rdx
  int v67; // eax
  int v68; // [rsp+20h] [rbp-E0h]
  struct _POINTL v69; // [rsp+60h] [rbp-A0h] BYREF
  int v70; // [rsp+68h] [rbp-98h]
  struct _POINTL v71; // [rsp+70h] [rbp-90h] BYREF
  int v72; // [rsp+78h] [rbp-88h]
  struct _CLIPOBJ *v73; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v74; // [rsp+88h] [rbp-78h] BYREF
  int v75; // [rsp+90h] [rbp-70h]
  struct _POINTL *v76; // [rsp+98h] [rbp-68h]
  __int64 v77; // [rsp+A0h] [rbp-60h] BYREF
  int v78; // [rsp+A8h] [rbp-58h]
  struct _CLIPOBJ *v79; // [rsp+B0h] [rbp-50h]
  struct _RECTL si128; // [rsp+B8h] [rbp-48h] BYREF
  struct _RECTL v81; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v82[4]; // [rsp+E0h] [rbp-20h] BYREF
  char v83[52]; // [rsp+E4h] [rbp-1Ch] BYREF
  __int64 v84; // [rsp+118h] [rbp+18h]
  __int64 v85; // [rsp+130h] [rbp+30h]
  int v86; // [rsp+138h] [rbp+38h]
  int v87; // [rsp+160h] [rbp+60h]
  __int64 v88; // [rsp+170h] [rbp+70h]

  v4 = (struct _CLIPOBJ *)*((_QWORD *)a1 + 14);
  v5 = 1;
  v6 = (_QWORD **)*((_QWORD *)a1 + 2);
  v78 = 1;
  v79 = v4;
  v8 = a2;
  v72 = a4;
  v76 = a2;
  v81 = 0LL;
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
  v70 = *(_DWORD *)a1;
  LODWORD(v77) = v15;
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
    v14 = v70;
  }
  if ( v15 )
  {
    *(_DWORD *)a1 = v14 & 0xFFFFFFDF;
    --*((_DWORD *)v6 + 14);
  }
  if ( !*((_QWORD *)a1 + 20) )
  {
    if ( !a3 )
      goto LABEL_53;
LABEL_25:
    v85 = 0LL;
    v86 = 0;
    v88 = 0LL;
    v84 = 0LL;
    v17 = (struct REGION *)*((_QWORD *)a1 + 23);
    v87 = 1;
    if ( v17 )
    {
      XCLIPOBJ::vSetup((XCLIPOBJ *)v82, v17, (struct SPRITE *)((char *)a1 + 80), 0);
      v73 = (struct _CLIPOBJ *)v82;
      if ( ERECTL::bEmpty((ERECTL *)v83) )
        goto LABEL_53;
    }
    else
    {
      v73 = 0LL;
    }
    if ( !*((_QWORD *)a1 + 16) )
      goto LABEL_53;
    if ( *((_DWORD *)a1 + 56) == 3 && !*((_BYTE *)a1 + 231) || *((_DWORD *)a1 + 1) == 1 )
    {
      vSpRedrawArea((struct _SPRITESTATE *)v6, (struct _RECTL *)a1 + 5, 1);
      goto LABEL_52;
    }
    vSpDirectDriverAccess((struct _SPRITESTATE *)v6, 0);
    v74 = 0LL;
    v18 = 0LL;
    v19 = v6[4];
    v20 = *((_QWORD *)a1 + 18);
    v21 = v19[13];
    v22 = *(_DWORD *)(*((_QWORD *)a1 + 16) + 72LL);
    v69 = 0LL;
    if ( *((_DWORD *)v19 + 18) != v22 || (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (__int64 *)&v69,
                            0LL,
                            0,
                            v20,
                            v21,
                            (__int64)ppalDefault,
                            (__int64)ppalDefault,
                            0,
                            0,
                            0,
                            0) )
      {
LABEL_51:
        vSpDirectDriverAccess((struct _SPRITESTATE *)v6, 1);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v69, v30);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)&v74);
LABEL_52:
        GreClientRgnUpdated(0);
        GreClientRgnUpdatedStable();
        goto LABEL_53;
      }
      v18 = (struct _XLATEOBJ *)v69;
    }
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)&v74, *((struct _SURFOBJ **)a1 + 16)) )
    {
      v23 = 0LL;
      v71.x = *((_DWORD *)a1 + 20) - (_DWORD)v4;
      v71.y = *((_DWORD *)a1 + 21) - HIDWORD(v79);
      v24 = v6[4];
      if ( v24 )
      {
        v25 = *((_DWORD *)v24 + 22);
        if ( (v25 & 0x80004000) != 0 && (v25 & 0x200) == 0 )
        {
          v23 = v24 - 3;
          GreLockDisplayDevice(v24[3]);
        }
      }
      v26 = *((_QWORD *)a1 + 16);
      v27 = 0LL;
      v28 = (struct _SURFOBJ *)v26;
      if ( v26 )
      {
        v29 = *(_DWORD *)(v26 + 88);
        if ( (v29 & 0x80004000) != 0 && (v29 & 0x200) == 0 )
        {
          v27 = v26 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v26 - 24 + 48));
          v28 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        }
      }
      SpBitBlt((struct _SURFOBJ *)v6[4], v28, 0LL, v73, v18, (struct _RECTL *)a1 + 5, &v71, 0LL, 0LL, 0LL, 0xCCCCu);
      if ( v27 )
        GreUnlockDisplayDevice(*(_QWORD *)(v27 + 48));
      if ( v23 )
        GreUnlockDisplayDevice(v23[6]);
      v8 = v76;
    }
    goto LABEL_51;
  }
  if ( a3 )
    goto LABEL_25;
  vSpRedrawUncoveredArea(a1, &si128);
LABEL_53:
  v31 = si128.bottom - si128.top;
  v32 = si128.right - si128.left;
  if ( si128.right == si128.left )
  {
    if ( v72 == 1 && *((_DWORD *)v6 + 14) == v32 && *((_DWORD *)v6 + 270) != v32 )
      vSpUnhook((struct _SPRITESTATE *)v6);
  }
  else
  {
    *(_DWORD *)a1 |= 0x20u;
    ++*((_DWORD *)v6 + 14);
    if ( v72 == 1 && !*((_DWORD *)v6 + 270) )
      vSpHook((struct _SPRITESTATE *)v6);
    v33 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
    if ( v33 && v32 <= v33->sizlBitmap.cx && v31 <= v33->sizlBitmap.cy )
    {
      if ( si128.left < *((_DWORD *)a1 + 20)
        || si128.top < *((_DWORD *)a1 + 21)
        || si128.right > *((_DWORD *)a1 + 22)
        || si128.bottom > *((_DWORD *)a1 + 23) )
      {
        v34 = *((_DWORD *)a1 + 52);
        v35 = 0;
        v36 = 0;
        if ( si128.left >= v34 )
        {
          v37 = *((_DWORD *)a1 + 54);
          if ( si128.right > v37 )
            v35 = si128.right - v37;
        }
        else
        {
          v35 = si128.left - v34;
        }
        v38 = *((_DWORD *)a1 + 53);
        v39 = *((_DWORD *)a1 + 55);
        if ( si128.top >= v38 )
        {
          if ( si128.bottom > v39 )
            v36 = si128.bottom - v39;
        }
        else
        {
          v36 = si128.top - v38;
        }
        *((_DWORD *)a1 + 54) += v35;
        v40 = v36 + v38;
        *((_DWORD *)a1 + 52) = v34 + v35;
        *((_DWORD *)a1 + 53) = v40;
        *((_DWORD *)a1 + 55) = v36 + v39;
        *((_DWORD *)a1 + 42) = -(v34 + v35);
        *((_DWORD *)a1 + 43) = -v40;
        vSpSmallUnderlayCopy(
          a1,
          (struct _POINTL *)a1 + 21,
          v33,
          (struct _POINTL *)a1 + 21,
          v33,
          v35,
          v36,
          &si128,
          (struct _RECTL *)a1 + 5);
      }
    }
    else
    {
      v41 = v31;
      v42 = v32;
      if ( v31 <= *((_DWORD *)a1 + 45) )
        v41 = *((_DWORD *)a1 + 45);
      if ( v32 <= *((_DWORD *)a1 + 44) )
        v42 = *((_DWORD *)a1 + 44);
      Surface = psoSpCreateSurface((struct _SPRITESTATE *)v6, 0, v42, v41, v68);
      v44 = Surface;
      if ( !Surface )
      {
        v5 = 0;
        bSpUpdatePosition(a1, 0LL, 0, 0);
        goto LABEL_11;
      }
      Surface->fjBitmap |= 4u;
      v69.x = -si128.left;
      v69.y = -si128.top;
      if ( v32 > 128 || v31 > 128 )
        vSpBigUnderlayCopy((struct _SPRITESTATE *)v6, &v69, Surface, &si128);
      else
        vSpSmallUnderlayCopy(
          a1,
          &v69,
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
      v47 = v69;
      *((_DWORD *)a1 + 52) = si128.left;
      *((struct _POINTL *)a1 + 21) = v47;
      *((_QWORD *)a1 + 20) = v44;
      *((_DWORD *)a1 + 53) = top;
      *((_DWORD *)a1 + 54) = v44->sizlBitmap.cx + left;
      *((_DWORD *)a1 + 55) = top + v44->sizlBitmap.cy;
    }
  }
  v71 = 0LL;
  v48 = (struct _RECTL)*((_OWORD *)a1 + 5);
  v49 = *(_DWORD *)a1;
  v50 = v77 != 0;
  v51 = (struct _POINTL)*((_QWORD *)a1 + 24);
  v52 = (*(_DWORD *)a1 >> 5) & 1;
  v69 = v51;
  v81 = v48;
  *((struct _RECTL *)a1 + 5) = si128;
  if ( v52 != v50 )
  {
    v53 = (v70 & 0x20) == 0 && (v49 & 0x20) != 0;
    if ( v51 )
      goto LABEL_103;
    v54 = *((_QWORD *)a1 + 1);
    if ( !v54 )
      goto LABEL_126;
    if ( !v53 )
      goto LABEL_126;
    v55 = 0LL;
    if ( !*(_DWORD *)(v54 + 20) )
      goto LABEL_126;
    while ( 1 )
    {
      v56 = *(_QWORD *)(v54 + 8 * v55 + 24);
      if ( (struct SPRITE *)v56 != a1 )
      {
        v77 = *(_QWORD *)(v56 + 192);
        if ( v77 )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v74);
          if ( *(_QWORD *)&v74 && RGNOBJ::bCopy((RGNOBJ *)&v74, (struct RGNOBJ *)&v77) )
          {
            LODWORD(v73) = -*(_DWORD *)(v56 + 112);
            HIDWORD(v73) = -*(_DWORD *)(v56 + 116);
            RGNOBJ::bOffset((RGNOBJ *)&v74, (struct _POINTL *)&v73);
            v60 = v75 == 1;
            v57 = v74;
            *((struct _POINTL *)a1 + 24) = v74;
            v69 = v57;
            if ( v60 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v74);
LABEL_103:
            if ( v69 )
            {
              if ( v53 )
                v58 = v76->x;
              else
                v58 = -(int)v4;
              v71.x = v58;
              if ( v53 )
                v59 = v76->y;
              else
                v59 = -HIDWORD(v79);
              v71.y = v59;
              if ( !v58 )
              {
                v60 = v59 == 0;
                goto LABEL_124;
              }
              goto LABEL_125;
            }
            goto LABEL_126;
          }
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v74);
          if ( v75 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v74);
        }
      }
      v55 = (unsigned int)(v55 + 1);
      if ( (unsigned int)v55 >= *(_DWORD *)(v54 + 20) )
        goto LABEL_103;
    }
  }
  if ( !*(_QWORD *)&v51 || ((unsigned __int8)v70 & (unsigned __int8)v49 & 0x20) == 0 )
    goto LABEL_126;
  v61 = *((_QWORD *)a1 + 1);
  if ( v61 )
  {
    v62 = *(_DWORD *)(v61 + 20);
    v63 = 0;
    if ( v62 )
    {
      v64 = (struct SPRITE **)(v61 + 24);
      while ( *v64 == a1 || (*(_DWORD *)*v64 & 0x20) == 0 )
      {
        ++v63;
        ++v64;
        if ( v63 >= v62 )
          goto LABEL_121;
      }
      v73 = v4;
      RGNOBJ::vSet((RGNOBJ *)&v69, (struct _RECTL *)a1 + 6);
      RGNOBJ::bOffset((RGNOBJ *)&v69, (struct _POINTL *)&v73);
    }
  }
LABEL_121:
  if ( v69 )
  {
    v65 = v8->y - HIDWORD(v79);
    v71.x = v8->x - (_DWORD)v4;
    v71.y = v65;
    if ( v71.x )
      goto LABEL_125;
    v60 = v65 == 0;
LABEL_124:
    if ( !v60 )
LABEL_125:
      RGNOBJ::bOffset((RGNOBJ *)&v69, &v71);
  }
LABEL_126:
  *((_DWORD *)v6 + 29) = 0;
  ++giSpriteUniqueness;
  vSpOrderInY(a1);
  if ( gpto )
    vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v6, &si128, &v81);
  if ( !*((_DWORD *)v6 + 29) )
    vSpComputeSpriteRanges((struct _SPRITESTATE *)v6);
  vSpRemoveAllSpriteOverlapPresents(*v6, v66);
  v5 = v78;
LABEL_11:
  if ( v72 == 1 )
  {
    v67 = *((_DWORD *)v6 + 270);
    if ( *((_DWORD *)v6 + 14) )
    {
      if ( !v67 )
        vSpHook((struct _SPRITESTATE *)v6);
    }
    else if ( v67 )
    {
      vSpUnhook((struct _SPRITESTATE *)v6);
    }
  }
  return v5;
}
