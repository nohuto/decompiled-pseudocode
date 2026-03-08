/*
 * XREFs of ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0065AF0
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0018CB0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00546FC (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0056EF0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C00659EC (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C00F0FE4 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C010C4F0 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C010D1FC (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C010D79C (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C010E114 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027CD08 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027D338 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02803E0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C0280F14 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C02810C0 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C0281B48 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0282054 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0283608 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C028512C (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0286E00 (vSpUnTearDownSprites.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0066060 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

SPRITEDDIACCESS *__fastcall SPRITEDDIACCESS::SPRITEDDIACCESS(SPRITEDDIACCESS *this, struct PDEVOBJ *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rsi
  __int64 *v8; // rax
  int v9; // eax
  __int64 *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 *v14; // rax
  int v15; // eax
  __int64 *v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rbp
  int v20; // r14d
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbp
  int v24; // r14d
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbp
  int v31; // r14d
  __int64 *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbp
  int v38; // r14d
  __int64 *v39; // rax
  __int64 *v40; // rax
  Gre::Base *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  *(_QWORD *)this = *(_QWORD *)a2 + 80LL;
  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  *((_DWORD *)this + 3) = 0;
  if ( v5 && PDEVOBJ::bAllowShareAccess(a2) && (*(_DWORD *)(v5 + 104) || *(_DWORD *)(v5 + 108)) )
  {
    v7 = 0LL;
    v8 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v8 )
      v7 = *v8;
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 280) + 32LL) == *(_QWORD *)this )
      v9 = **(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280);
    else
      v9 = 0;
    *((_DWORD *)this + 2) = v9;
    v10 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !v10 )
      goto LABEL_19;
    v11 = *v10;
    if ( !*v10 || !PDEVOBJ::bAllowShareAccess(a2) || !*(_DWORD *)(v11 + 104) && !*(_DWORD *)(v11 + 108) )
      goto LABEL_19;
    v12 = 0LL;
    v13 = *(_QWORD *)a2 + 80LL;
    v14 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v14 )
      v12 = *v14;
    if ( *(_QWORD *)(*(_QWORD *)(v12 + 280) + 32LL) == v13 )
      v15 = **(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280);
    else
LABEL_19:
      v15 = 0;
    *((_DWORD *)this + 3) = v15;
  }
  else
  {
    *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)this + 88LL);
  }
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v43 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280);
    *((_OWORD *)this + 1) = *(_OWORD *)v43;
    *((_OWORD *)this + 2) = *(_OWORD *)(v43 + 16);
    *((_OWORD *)this + 3) = *(_OWORD *)(v43 + 32);
    *((_OWORD *)this + 4) = *(_OWORD *)(v43 + 48);
    *((_OWORD *)this + 5) = *(_OWORD *)(v43 + 64);
    *((_OWORD *)this + 6) = *(_OWORD *)(v43 + 80);
    *((_OWORD *)this + 7) = *(_OWORD *)(v43 + 96);
    *((_OWORD *)this + 8) = *(_OWORD *)(v43 + 112);
    *((_OWORD *)this + 9) = *(_OWORD *)(v43 + 128);
    *((_OWORD *)this + 10) = *(_OWORD *)(v43 + 144);
    *((_QWORD *)this + 22) = *(_QWORD *)(v43 + 160);
  }
  if ( !*((_DWORD *)this + 2) )
  {
    v16 = *(__int64 **)this;
    v44 = **(_QWORD **)this;
    v17 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v17
      && (v18 = *v17) != 0
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v44)
      && (*(_DWORD *)(v18 + 104) || *(_DWORD *)(v18 + 108)) )
    {
      v19 = 0LL;
      v20 = *((_DWORD *)v16 + 23);
      v21 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v21 )
        v19 = *v21;
      v22 = *(_QWORD *)(v19 + 280);
      v23 = 0LL;
      *(_DWORD *)(v22 + 4) = v20;
      v24 = *((_DWORD *)v16 + 24);
      v25 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v25 )
        v23 = *v25;
      v26 = *(_QWORD *)(v23 + 280);
      v27 = 0LL;
      *(_DWORD *)(v26 + 8) = v24;
      v28 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v28 )
        v27 = *v28;
      v29 = *(_QWORD *)(v27 + 280);
      v30 = 0LL;
      v31 = *(_DWORD *)(v29 + 4);
      v32 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v32 )
        v30 = *v32;
      v33 = *(_QWORD *)(v30 + 280);
      v34 = 0LL;
      *(_DWORD *)(v33 + 20) = v31;
      v35 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v35 )
        v34 = *v35;
      v36 = *(_QWORD *)(v34 + 280);
      v37 = 0LL;
      v38 = *(_DWORD *)(v36 + 8);
      v39 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v39 )
        v37 = *v39;
      *(_DWORD *)(*(_QWORD *)(v37 + 280) + 24LL) = v38;
      vSpTlSpriteStateDirectDriverAccess((struct _SPRITESTATE *)v16, 1);
      v40 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v40 )
        v3 = *v40;
      **(_DWORD **)(v3 + 280) = 1;
    }
    else
    {
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v44) )
        Gre::Base::Globals(v42);
      *(_DWORD *)(v16[4] + 88) = *((_DWORD *)v16 + 23);
      *(_WORD *)(v16[4] + 76) = *((_WORD *)v16 + 48);
      *((_DWORD *)v16 + 22) = 1;
    }
  }
  return this;
}
