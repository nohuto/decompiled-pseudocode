/*
 * XREFs of ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0096648
 * Callers:
 *     ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0096330 (-SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0096EF0 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C010EDC0 (-SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C010F140 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0142310 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0143880 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C01514D0 (-SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0154930 (-SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@.c)
 *     ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C0157660 (-SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0157AC0 (-SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POIN.c)
 *     ?SpDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C027F400 (-SpDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027F5E0 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C027FA80 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00172B0 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C008DB9C (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C00F01FC (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C010DE10 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0164404 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ??1UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ @ 0x1C0165924 (--1UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ.c)
 *     ??0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ @ 0x1C0165A18 (--0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0165A5C (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C02855AC (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall ENUMUNDERLAYS::bEnum(__int64 **this, struct _SURFOBJ **a2, struct _POINTL *a3, struct _CLIPOBJ **a4)
{
  __int64 *v8; // rcx
  __int64 *v9; // rax
  struct _RECTL *v11; // rbx
  __int64 ThreadWin32Thread; // rbx
  __int64 *v13; // rax
  __int64 *v14; // rbx
  __int64 *v15; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v17; // rdi
  struct _KTHREAD *v18; // rbx
  __int64 v19; // rdi
  struct _RECTL *v20; // rbx
  __int64 *v21; // rcx
  struct SPRITE *v22; // rax
  __int64 *v23; // rax
  struct _RECTL v24; // xmm0
  __int64 *v25; // rcx
  __int64 *v26; // rdx
  __int64 v27; // r10
  struct REGION *v28; // rdx
  __int128 v29; // xmm1
  __int64 *v30; // rax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  _OWORD *v38; // rcx
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 *v48; // rax
  struct REGION *v49; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v50; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v52; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v53; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v54; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v55; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v56[16]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v57; // [rsp+68h] [rbp-98h]
  __int128 v58; // [rsp+78h] [rbp-88h]
  __int128 v59; // [rsp+88h] [rbp-78h]
  __int128 v60; // [rsp+98h] [rbp-68h]
  __int128 v61; // [rsp+A8h] [rbp-58h]
  __int128 v62; // [rsp+B8h] [rbp-48h]
  __int128 v63; // [rsp+C8h] [rbp-38h]
  __int128 v64; // [rsp+D8h] [rbp-28h]
  __int128 v65; // [rsp+E8h] [rbp-18h]
  __int128 v66; // [rsp+F8h] [rbp-8h]
  __int64 *v67; // [rsp+108h] [rbp+8h]
  struct _RECTL v68; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v69[3]; // [rsp+120h] [rbp+20h] BYREF

  v68 = 0LL;
  if ( this[3] )
  {
    v20 = (struct _RECTL *)(this + 4);
    while ( 1 )
    {
      v21 = this[112];
      if ( v21 )
      {
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v21 + 31));
        this[112] = 0LL;
      }
      if ( bIntersect((const struct _RECTL *)this[3] + 5, v20, &v68) )
        break;
      SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(this[3] + 31));
      v22 = pSpFindInZ((struct SPRITE *)this[3][3], v20);
      this[3] = (__int64 *)v22;
      if ( !v22 )
        goto LABEL_2;
    }
    v23 = this[8];
    v24 = v68;
    *((_DWORD *)this + 18) = 1;
    *(struct _RECTL *)((char *)v23 + 4) = v24;
    *a4 = (struct _CLIPOBJ *)this[8];
    *a2 = (struct _SURFOBJ *)this[3][20];
    *a3 = (struct _POINTL)this[3][21];
    v25 = this[3];
    this[112] = v25;
    this[3] = (__int64 *)pSpFindInZ((struct SPRITE *)v25[3], v20);
    return 1LL;
  }
LABEL_2:
  v8 = this[112];
  if ( v8 )
  {
    SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v8 + 31));
    this[112] = 0LL;
  }
  if ( *((_DWORD *)this + 19) )
  {
    v11 = (struct _RECTL *)(this + 4);
    goto LABEL_9;
  }
  v9 = this[8];
  if ( !*((_DWORD *)this + 18) )
  {
    *((_DWORD *)this + 19) = 1;
    *a4 = (struct _CLIPOBJ *)v9;
    *a2 = (struct _SURFOBJ *)this[2];
    *a3 = 0LL;
    return 1LL;
  }
  *(_OWORD *)((char *)v9 + 4) = *((_OWORD *)this + 3);
  if ( this[32] && this[33] )
  {
    v26 = this[8];
    v27 = (*this)[87];
    if ( *((_BYTE *)v26 + 20) == 3 )
    {
      v49 = (struct REGION *)this[32];
      v51 = v27;
      if ( !RGNOBJ::bMerge((RGNOBJ *)&v49, (struct RGNOBJ *)(v26 + 7), (struct RGNOBJ *)&v51, 8u) )
        RGNOBJ::vSet((RGNOBJ *)&v49);
      v28 = v49;
      this[32] = (__int64 *)v49;
    }
    else
    {
      v28 = (struct REGION *)(*this)[87];
    }
    v11 = (struct _RECTL *)(this + 4);
    XCLIPOBJ::vSetup((XCLIPOBJ *)(this + 36), v28, (struct ERECTL *)(this + 4), 1);
    if ( (unsigned int)bIntersect((char *)this + 292, this + 4) )
    {
      *((_DWORD *)this + 19) = 1;
      *a4 = (struct _CLIPOBJ *)(this + 36);
      *a2 = (struct _SURFOBJ *)this[2];
      a3->x = 0;
      a3->y = 0;
      return 1LL;
    }
LABEL_9:
    if ( !*((_DWORD *)this + 20) )
    {
LABEL_10:
      v52 = this[33];
      v53 = this[32];
      v54 = this[34];
      v55 = this[35];
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v52);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v53);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v54);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v55);
      return 0LL;
    }
    if ( *((_DWORD *)this + 18) )
    {
      PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v69, (struct _SPRITESTATE *)*this, v11);
      if ( v69[0] )
      {
        UNDOENGUPDATEDEVICESURFACE::UNDOENGUPDATEDEVICESURFACE((UNDOENGUPDATEDEVICESURFACE *)v56);
        vSpRedrawArea((struct _SPRITESTATE *)*this, v11, 0);
        UNDOENGUPDATEDEVICESURFACE::~UNDOENGUPDATEDEVICESURFACE((UNDOENGUPDATEDEVICESURFACE *)v56);
      }
      PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v69);
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v50 = **this;
    if ( ThreadWin32Thread
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v50)
      && (*(_DWORD *)(ThreadWin32Thread + 104) || *(_DWORD *)(ThreadWin32Thread + 108)) )
    {
      v14 = *this;
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 12LL) = *((_DWORD *)v14 + 25);
      v15 = *this;
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 16LL) = *((_DWORD *)v15 + 26);
      CurrentThread = KeGetCurrentThread();
      v17 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)CurrentThread) + 280);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)CurrentThread) + 280) + 20LL) = *(_DWORD *)(v17 + 12);
      v18 = KeGetCurrentThread();
      v19 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)v18) + 280);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)v18) + 280) + 24LL) = *(_DWORD *)(v19 + 16);
      vSpTlSpriteStateDirectDriverAccess((struct _SPRITESTATE *)*this, 0);
      **(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) = 0;
      if ( *((_DWORD *)this + 21) == 1 )
      {
        v29 = *(_OWORD *)(this + 13);
        v57 = *(_OWORD *)(this + 11);
        v30 = this[31];
        v31 = *(_OWORD *)(this + 15);
        v58 = v29;
        v32 = *(_OWORD *)(this + 17);
        v59 = v31;
        v33 = *(_OWORD *)(this + 19);
        v60 = v32;
        v34 = *(_OWORD *)(this + 21);
        v61 = v33;
        v35 = *(_OWORD *)(this + 23);
        v62 = v34;
        v36 = *(_OWORD *)(this + 27);
        v63 = v35;
        v64 = *(_OWORD *)(this + 25);
        v37 = *(_OWORD *)(this + 29);
        v65 = v36;
        v66 = v37;
        v67 = v30;
        v38 = *(_OWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280);
        v39 = v58;
        *v38 = v57;
        v40 = v59;
        v38[1] = v39;
        v41 = v60;
        v38[2] = v40;
        v42 = v61;
        v38[3] = v41;
        v43 = v62;
        v38[4] = v42;
        v44 = v63;
        v38[5] = v43;
        v45 = v64;
        v38[6] = v44;
        v38 += 8;
        v46 = v65;
        *(v38 - 1) = v45;
        v47 = v66;
        v48 = v67;
        *v38 = v46;
        v38[1] = v47;
        *((_QWORD *)v38 + 4) = v48;
      }
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(*this + 15));
    }
    else
    {
      *((_DWORD *)this[2] + 22) = *((_DWORD *)*this + 25);
      *((_WORD *)this[2] + 38) = *((_WORD *)*this + 52);
      *((_DWORD *)*this + 22) = 0;
      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v50) )
        goto LABEL_17;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
LABEL_17:
    v13 = this[8];
    if ( v13 )
      *(_OWORD *)((char *)v13 + 4) = *((_OWORD *)this + 3);
    goto LABEL_10;
  }
  return 0LL;
}
