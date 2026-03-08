/*
 * XREFs of ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065E34
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

void __fastcall SPRITEDDIACCESS::~SPRITEDDIACCESS(__int64 **this)
{
  __int64 *v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  int v6; // ebp
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ebp
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // ebp
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // ebp
  __int64 *v25; // rax
  __int64 v26; // rbx
  __int64 *v27; // rax
  Gre::Base *v28; // rcx
  _OWORD *v29; // rcx
  __int128 v30; // [rsp+20h] [rbp-B8h]
  __int128 v31; // [rsp+30h] [rbp-A8h]
  __int128 v32; // [rsp+40h] [rbp-98h]
  __int128 v33; // [rsp+50h] [rbp-88h]
  __int128 v34; // [rsp+60h] [rbp-78h]
  __int128 v35; // [rsp+70h] [rbp-68h]
  __int128 v36; // [rsp+80h] [rbp-58h]
  __int128 v37; // [rsp+90h] [rbp-48h]
  __int128 v38; // [rsp+A0h] [rbp-38h]
  __int128 v39; // [rsp+B0h] [rbp-28h]
  __int64 *v40; // [rsp+C0h] [rbp-18h]
  __int64 v41; // [rsp+E0h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 2) )
  {
    v2 = *this;
    v41 = **this;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread
      && (v4 = *ThreadWin32Thread) != 0
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v41)
      && (*(_DWORD *)(v4 + 104) || *(_DWORD *)(v4 + 108)) )
    {
      v5 = 0LL;
      v6 = *((_DWORD *)v2 + 25);
      v7 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v7 )
        v5 = *v7;
      v8 = *(_QWORD *)(v5 + 280);
      v9 = 0LL;
      *(_DWORD *)(v8 + 12) = v6;
      v10 = *((_DWORD *)v2 + 26);
      v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v11 )
        v9 = *v11;
      v12 = *(_QWORD *)(v9 + 280);
      v13 = 0LL;
      *(_DWORD *)(v12 + 16) = v10;
      v14 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v14 )
        v13 = *v14;
      v15 = *(_QWORD *)(v13 + 280);
      v16 = 0LL;
      v17 = *(_DWORD *)(v15 + 12);
      v18 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v18 )
        v16 = *v18;
      v19 = *(_QWORD *)(v16 + 280);
      v20 = 0LL;
      *(_DWORD *)(v19 + 20) = v17;
      v21 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v21 )
        v20 = *v21;
      v22 = *(_QWORD *)(v20 + 280);
      v23 = 0LL;
      v24 = *(_DWORD *)(v22 + 16);
      v25 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v25 )
        v23 = *v25;
      *(_DWORD *)(*(_QWORD *)(v23 + 280) + 24LL) = v24;
      vSpTlSpriteStateDirectDriverAccess((struct _SPRITESTATE *)v2, 0);
      v26 = 0LL;
      v27 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v27 )
        v26 = *v27;
      **(_DWORD **)(v26 + 280) = 0;
    }
    else
    {
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v41) )
        Gre::Base::Globals(v28);
      *(_DWORD *)(v2[4] + 88) = *((_DWORD *)v2 + 25);
      *(_WORD *)(v2[4] + 76) = *((_WORD *)v2 + 52);
      *((_DWORD *)v2 + 22) = 0;
    }
  }
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v30 = *((_OWORD *)this + 1);
    v31 = *((_OWORD *)this + 2);
    v32 = *((_OWORD *)this + 3);
    v33 = *((_OWORD *)this + 4);
    v34 = *((_OWORD *)this + 5);
    v35 = *((_OWORD *)this + 6);
    v36 = *((_OWORD *)this + 7);
    v37 = *((_OWORD *)this + 8);
    v38 = *((_OWORD *)this + 9);
    v39 = *((_OWORD *)this + 10);
    v40 = this[22];
    v29 = *(_OWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280);
    *v29 = v30;
    v29[1] = v31;
    v29[2] = v32;
    v29[3] = v33;
    v29[4] = v34;
    v29[5] = v35;
    v29[6] = v36;
    v29 += 8;
    *(v29 - 1) = v37;
    *v29 = v38;
    v29[1] = v39;
    *((_QWORD *)v29 + 4) = v40;
  }
}
