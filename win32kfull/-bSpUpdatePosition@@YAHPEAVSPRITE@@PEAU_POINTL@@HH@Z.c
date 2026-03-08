/*
 * XREFs of ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00546FC (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0056EF0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C00F0FE4 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C010C4F0 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C010E114 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027CD08 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027D338 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C0281980 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C0281B48 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0282054 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C028246C (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C001867C (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0018714 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C001BE80 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     GreClientRgnUpdated @ 0x1C005464C (GreClientRgnUpdated.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007F50C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00834C0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00E5E20 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F1068 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010C70C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C010D944 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C010DBBC (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1C010E2C8 (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0282C68 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C0282E14 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C028445C (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0284A48 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0284E20 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     GreClientRgnUpdatedStable @ 0x1C028A920 (GreClientRgnUpdatedStable.c)
 */

__int64 __fastcall bSpUpdatePosition(struct SPRITE *a1, struct _POINTL *a2, int a3, int a4)
{
  struct _POINTL v4; // r14
  __int64 v5; // r12
  unsigned int v9; // r13d
  __int64 v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rsi
  int v12; // ecx
  LONG x; // edx
  LONG y; // r8d
  int v15; // ebx
  __int64 v16; // r8
  LONG v17; // eax
  int v18; // ecx
  struct REGION *v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  struct _XLATEOBJ *v25; // rsi
  __int64 v26; // r9
  int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rbx
  int v33; // ecx
  int v34; // esi
  int v35; // edi
  struct _SURFOBJ *v36; // r11
  int v37; // esi
  _DWORD *v38; // rcx
  int v39; // r8d
  int v40; // r9d
  int v41; // edi
  _DWORD *v42; // rdx
  unsigned int v43; // r9d
  unsigned int v44; // r8d
  struct _SURFOBJ *Surface; // rax
  struct _SURFOBJ *v46; // rbx
  struct _POINTL *v47; // rdi
  LONG left; // ecx
  LONG top; // edx
  struct _POINTL v50; // rax
  struct _RECTL v51; // xmm0
  int v52; // r9d
  int v53; // edx
  struct _POINTL v54; // rax
  int v55; // ecx
  bool v56; // dl
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rbx
  LONG v60; // r14d
  LONG v61; // eax
  bool v62; // zf
  __int64 v63; // rcx
  unsigned int v64; // r10d
  unsigned int v65; // r9d
  struct SPRITE **v66; // rdx
  LONG v67; // ecx
  struct Gre::Base::SESSION_GLOBALS *v68; // rax
  int v69; // eax
  bool v70; // [rsp+60h] [rbp-A0h]
  struct _POINTL v71; // [rsp+68h] [rbp-98h] BYREF
  struct _POINTL v72; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v73; // [rsp+78h] [rbp-88h] BYREF
  int v74; // [rsp+80h] [rbp-80h]
  int v75; // [rsp+84h] [rbp-7Ch]
  struct _CLIPOBJ *v76; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v77; // [rsp+90h] [rbp-70h]
  struct _POINTL v78[2]; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL *v79; // [rsp+A8h] [rbp-58h]
  struct Gre::Base::SESSION_GLOBALS *v80; // [rsp+B0h] [rbp-50h]
  __int64 v81; // [rsp+B8h] [rbp-48h]
  struct _RECTL si128; // [rsp+C0h] [rbp-40h] BYREF
  struct _RECTL v83; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v84[4]; // [rsp+E0h] [rbp-20h] BYREF
  char v85[52]; // [rsp+E4h] [rbp-1Ch] BYREF
  __int64 v86; // [rsp+118h] [rbp+18h]
  __int64 v87; // [rsp+130h] [rbp+30h]
  int v88; // [rsp+138h] [rbp+38h]
  int v89; // [rsp+160h] [rbp+60h]
  __int64 v90; // [rsp+170h] [rbp+70h]

  v4 = (struct _POINTL)*((_QWORD *)a1 + 14);
  v5 = *((_QWORD *)a1 + 2);
  v83 = 0LL;
  v77 = v4;
  v74 = a4;
  v79 = a2;
  v9 = 1;
  v80 = Gre::Base::Globals(a1);
  v11 = v80;
  if ( a2 )
  {
    v12 = *((_DWORD *)a1 + 26) - *((_DWORD *)a1 + 24);
    *((_DWORD *)a1 + 28) = a2->x;
    *((_DWORD *)a1 + 29) = a2->y;
    x = a2->x;
    y = a2->y;
    si128.right = a2->x + v12;
    v10 = (unsigned int)(y + *((_DWORD *)a1 + 27) - *((_DWORD *)a1 + 25));
    si128.left = x;
    si128.bottom = v10;
    si128.top = y;
  }
  else
  {
    si128.bottom = 0x80000000;
  }
  if ( (*(_DWORD *)a1 & 0x11) != 0 || !bIntersect((const struct _RECTL *)(v5 + 40), &si128, &si128) )
  {
    v15 = 0;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  }
  else
  {
    v15 = 32;
  }
  v16 = *(_QWORD *)(SGDGetSessionState(v10) + 32);
  v17 = *(_DWORD *)a1;
  v18 = *(_DWORD *)a1 & 0x20;
  v81 = v16;
  v72.x = v17;
  v75 = v18;
  if ( v15 == v18 )
  {
    if ( si128.left == *((_DWORD *)a1 + 20)
      && si128.top == *((_DWORD *)a1 + 21)
      && si128.right == *((_DWORD *)a1 + 22)
      && si128.bottom == *((_DWORD *)a1 + 23) )
    {
      if ( *((_DWORD *)a1 + 1) == 2 && *(_QWORD *)(v16 + 23664) )
        vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v5, (struct _RECTL *)a1 + 5, (struct _RECTL *)a1 + 5);
      goto LABEL_13;
    }
    v17 = v72.x;
  }
  if ( v18 )
  {
    *(_DWORD *)a1 = v17 & 0xFFFFFFDF;
    --*(_DWORD *)(v5 + 56);
  }
  if ( *((_QWORD *)a1 + 20) )
  {
    if ( !a3 )
    {
      vSpRedrawUncoveredArea(a1, &si128);
      goto LABEL_52;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_52;
  }
  v87 = 0LL;
  v88 = 0;
  v90 = 0LL;
  v86 = 0LL;
  v20 = (struct REGION *)*((_QWORD *)a1 + 23);
  v89 = 1;
  if ( v20 )
  {
    XCLIPOBJ::vSetup((XCLIPOBJ *)v84, v20, (struct SPRITE *)((char *)a1 + 80), 0);
    v76 = (struct _CLIPOBJ *)v84;
    if ( ERECTL::bEmpty((ERECTL *)v85) )
      goto LABEL_52;
  }
  else
  {
    v76 = 0LL;
  }
  if ( *((_QWORD *)a1 + 16) )
  {
    if ( *((_DWORD *)a1 + 56) == 3 && !*((_BYTE *)a1 + 231) || *((_DWORD *)a1 + 1) == 1 )
    {
      vSpRedrawArea((struct _SPRITESTATE *)v5, (struct _RECTL *)a1 + 5, 1);
      goto LABEL_51;
    }
    vSpDirectDriverAccess((struct _SPRITESTATE *)v5, 0);
    v21 = *(_QWORD *)(v5 + 32);
    v22 = 0LL;
    v23 = *((_QWORD *)a1 + 16);
    v24 = *((_QWORD *)v11 + 750);
    v25 = 0LL;
    v26 = *((_QWORD *)a1 + 18);
    v78[0] = 0LL;
    v27 = *(_DWORD *)(v23 + 72);
    v28 = *(_QWORD *)(v21 + 104);
    v71 = 0LL;
    if ( *(_DWORD *)(v21 + 72) != v27 || (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v71, 0LL, 0, v26, v28, v24, v24, 0, 0, 0, 0) )
      {
LABEL_50:
        vSpDirectDriverAccess((struct _SPRITESTATE *)v5, 1);
        EXLATEOBJ::vAltUnlock((Gre::Base **)&v71);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v78);
LABEL_51:
        GreClientRgnUpdated(0LL);
        GreClientRgnUpdatedStable();
        goto LABEL_52;
      }
      v25 = (struct _XLATEOBJ *)v71;
    }
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v78, *((struct _SURFOBJ **)a1 + 16)) )
    {
      v73.x = *((_DWORD *)a1 + 20) - v4.x;
      v73.y = *((_DWORD *)a1 + 21) - v77.y;
      v29 = *(_QWORD *)(v5 + 32);
      if ( v29 )
      {
        v30 = *(_DWORD *)(v29 + 88);
        if ( (v30 & 0x80004000) != 0 && (v30 & 0x200) == 0 )
        {
          v22 = v29 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v29 - 24 + 48));
        }
      }
      v31 = *((_QWORD *)a1 + 16);
      v32 = 0LL;
      if ( v31 )
      {
        v33 = *(_DWORD *)(v31 + 88);
        if ( (v33 & 0x80004000) != 0 && (v33 & 0x200) == 0 )
        {
          v32 = v31 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v31 - 24 + 48));
        }
      }
      SpBitBlt(
        *(struct _SURFOBJ **)(v5 + 32),
        *((struct _SURFOBJ **)a1 + 16),
        0LL,
        v76,
        v25,
        (struct _RECTL *)a1 + 5,
        &v73,
        0LL,
        0LL,
        0LL,
        0xCCCCu);
      if ( v32 )
        GreUnlockDisplayDevice(*(_QWORD *)(v32 + 48));
      if ( v22 )
        GreUnlockDisplayDevice(*(_QWORD *)(v22 + 48));
    }
    goto LABEL_50;
  }
LABEL_52:
  v34 = si128.bottom - si128.top;
  v35 = si128.right - si128.left;
  if ( si128.right == si128.left )
  {
    if ( v74 == 1 && *(_DWORD *)(v5 + 56) == v35 && *(_DWORD *)(v5 + 1080) != v35 )
      vSpUnhook((struct _SPRITESTATE *)v5);
  }
  else
  {
    *(_DWORD *)a1 |= 0x20u;
    ++*(_DWORD *)(v5 + 56);
    if ( v74 == 1 && !*(_DWORD *)(v5 + 1080) )
      vSpHook((struct _SPRITESTATE *)v5);
    v36 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
    if ( v36 && v35 <= v36->sizlBitmap.cx && v34 <= v36->sizlBitmap.cy )
    {
      if ( si128.left < *((_DWORD *)a1 + 20)
        || si128.top < *((_DWORD *)a1 + 21)
        || si128.right > *((_DWORD *)a1 + 22)
        || si128.bottom > *((_DWORD *)a1 + 23) )
      {
        v37 = *((_DWORD *)a1 + 52);
        v38 = (_DWORD *)((char *)a1 + 216);
        v39 = 0;
        v40 = 0;
        if ( si128.left >= v37 )
        {
          if ( si128.right > *v38 )
            v39 = si128.right - *v38;
        }
        else
        {
          v39 = si128.left - v37;
        }
        v41 = *((_DWORD *)a1 + 53);
        v42 = (_DWORD *)((char *)a1 + 220);
        if ( si128.top >= v41 )
        {
          if ( si128.bottom > *v42 )
            v40 = si128.bottom - *v42;
        }
        else
        {
          v40 = si128.top - v41;
        }
        *v38 += v39;
        *v42 += v40;
        *((_DWORD *)a1 + 52) = v37 + v39;
        *((_DWORD *)a1 + 53) = v41 + v40;
        *((_DWORD *)a1 + 42) = -(v37 + v39);
        *((_DWORD *)a1 + 43) = -(v41 + v40);
        vSpSmallUnderlayCopy(
          a1,
          (struct _POINTL *)a1 + 21,
          v36,
          (struct _POINTL *)a1 + 21,
          v36,
          v39,
          v40,
          &si128,
          (struct _RECTL *)a1 + 5);
      }
    }
    else
    {
      v43 = v34;
      v44 = v35;
      if ( v34 <= *((_DWORD *)a1 + 45) )
        v43 = *((_DWORD *)a1 + 45);
      if ( v35 <= *((_DWORD *)a1 + 44) )
        v44 = *((_DWORD *)a1 + 44);
      Surface = psoSpCreateSurface((struct _SPRITESTATE *)v5, 0, v44, v43);
      v46 = Surface;
      if ( !Surface )
      {
        v9 = 0;
        bSpUpdatePosition(a1, 0LL, 0, 0);
        goto LABEL_13;
      }
      Surface->fjBitmap |= 4u;
      v71.x = -si128.left;
      v71.y = -si128.top;
      if ( v35 > 128 || v34 > 128 )
      {
        vSpBigUnderlayCopy((struct _SPRITESTATE *)v5, &v71, Surface, &si128);
        v47 = (struct _POINTL *)((char *)a1 + 168);
      }
      else
      {
        v47 = (struct _POINTL *)((char *)a1 + 168);
        vSpSmallUnderlayCopy(
          a1,
          &v71,
          Surface,
          (struct _POINTL *)a1 + 21,
          *((struct _SURFOBJ **)a1 + 20),
          0,
          0,
          &si128,
          (struct _RECTL *)a1 + 5);
      }
      vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 20));
      left = si128.left;
      top = si128.top;
      v50 = v71;
      *((_DWORD *)a1 + 52) = si128.left;
      *v47 = v50;
      *((_QWORD *)a1 + 20) = v46;
      *((_DWORD *)a1 + 53) = top;
      *((_DWORD *)a1 + 54) = v46->sizlBitmap.cx + left;
      *((_DWORD *)a1 + 55) = top + v46->sizlBitmap.cy;
    }
  }
  v73 = 0LL;
  v51 = (struct _RECTL)*((_OWORD *)a1 + 5);
  v52 = *(_DWORD *)a1;
  v53 = v75 != 0;
  v54 = (struct _POINTL)*((_QWORD *)a1 + 24);
  v55 = (*(_DWORD *)a1 >> 5) & 1;
  v71 = v54;
  v83 = v51;
  *((struct _RECTL *)a1 + 5) = si128;
  if ( v55 == v53 )
  {
    if ( !*(_QWORD *)&v54 || (v72.x & (unsigned __int8)v52 & 0x20) == 0 )
      goto LABEL_122;
    v63 = *((_QWORD *)a1 + 1);
    if ( v63 )
    {
      v64 = *(_DWORD *)(v63 + 20);
      v65 = 0;
      if ( v64 )
      {
        v66 = (struct SPRITE **)(v63 + 24);
        while ( *v66 == a1 || (*(_DWORD *)*v66 & 0x20) == 0 )
        {
          ++v65;
          ++v66;
          if ( v65 >= v64 )
            goto LABEL_117;
        }
        v78[0] = v4;
        RGNOBJ::vSet((RGNOBJ *)&v71, (const struct _RECTL *const)a1 + 6);
        RGNOBJ::bOffset((RGNOBJ *)&v71, v78);
        v54 = v71;
      }
    }
LABEL_117:
    if ( !*(_QWORD *)&v54 )
      goto LABEL_122;
    v67 = v79->y - v77.y;
    v73.x = v79->x - v4.x;
    v73.y = v67;
    if ( v73.x )
      goto LABEL_121;
    v62 = v67 == 0;
  }
  else
  {
    v56 = (v72.x & 0x20) == 0 && (v52 & 0x20) != 0;
    v70 = v56;
    if ( !*(_QWORD *)&v54 )
    {
      v57 = *((_QWORD *)a1 + 1);
      if ( v57 )
      {
        if ( v56 )
        {
          v58 = 0LL;
          if ( *(_DWORD *)(v57 + 20) )
          {
            do
            {
              v59 = *(_QWORD *)(v57 + 8 * v58 + 24);
              if ( (struct SPRITE *)v59 != a1 )
              {
                v78[0] = *(struct _POINTL *)(v59 + 192);
                if ( v78[0] )
                {
                  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v72);
                  if ( *(_QWORD *)&v72 && RGNOBJ::bCopy((RGNOBJ *)&v72, (struct RGNOBJ *)v78) )
                  {
                    LODWORD(v76) = -*(_DWORD *)(v59 + 112);
                    HIDWORD(v76) = -*(_DWORD *)(v59 + 116);
                    RGNOBJ::bOffset((RGNOBJ *)&v72, (struct _POINTL *)&v76);
                    v54 = v72;
                    *((struct _POINTL *)a1 + 24) = v72;
                    v71 = v54;
                    goto LABEL_101;
                  }
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v72);
                }
              }
              v58 = (unsigned int)(v58 + 1);
            }
            while ( (unsigned int)v58 < *(_DWORD *)(v57 + 20) );
            v54 = v71;
LABEL_101:
            v56 = v70;
          }
        }
      }
      if ( !*(_QWORD *)&v54 )
        goto LABEL_122;
    }
    if ( v56 )
    {
      v60 = v79->x;
      v61 = v79->y;
    }
    else
    {
      v60 = -v4.x;
      v61 = -v77.y;
    }
    v73.y = v61;
    v73.x = v60;
    if ( v60 )
      goto LABEL_121;
    v62 = v61 == 0;
  }
  if ( !v62 )
LABEL_121:
    RGNOBJ::bOffset((RGNOBJ *)&v71, &v73);
LABEL_122:
  v68 = v80;
  *(_DWORD *)(v5 + 116) = 0;
  ++*((_DWORD *)v68 + 1620);
  vSpOrderInY(a1);
  if ( *(_QWORD *)(v81 + 23664) )
    vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v5, &si128, &v83);
  if ( !*(_DWORD *)(v5 + 116) )
    vSpComputeSpriteRanges((struct _SPRITESTATE *)v5);
  vSpRemoveAllSpriteOverlapPresents(*(Gre::Base **)v5);
LABEL_13:
  if ( v74 == 1 )
  {
    v69 = *(_DWORD *)(v5 + 1080);
    if ( *(_DWORD *)(v5 + 56) )
    {
      if ( !v69 )
        vSpHook((struct _SPRITESTATE *)v5);
    }
    else if ( v69 )
    {
      vSpUnhook((struct _SPRITESTATE *)v5);
    }
  }
  return v9;
}
