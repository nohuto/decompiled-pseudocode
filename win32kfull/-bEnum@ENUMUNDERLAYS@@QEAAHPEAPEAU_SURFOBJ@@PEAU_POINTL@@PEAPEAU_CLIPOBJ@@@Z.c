__int64 __fastcall ENUMUNDERLAYS::bEnum(
        ENUMUNDERLAYS *this,
        struct _SURFOBJ **a2,
        struct _POINTL *a3,
        struct _CLIPOBJ **a4)
{
  struct _RECTL *v5; // rbx
  char *v6; // r14
  __int64 v10; // rax
  __int64 ThreadWin32Thread; // rbx
  Gre::Base *v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v14; // r14
  __int64 v15; // rax
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  struct SPRITE *v20; // rax
  __int64 v21; // rax
  struct _RECTL v22; // xmm0
  __int64 v23; // rcx
  struct REGION *v24; // r8
  __int64 v25; // rdx
  struct REGION *v26; // rdx
  __int128 v27; // xmm1
  __int64 v28; // rax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  _OWORD *v36; // rcx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int64 v46; // rax
  struct REGION *v47; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v48[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v49; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v53; // [rsp+58h] [rbp-A8h]
  __int128 v54; // [rsp+68h] [rbp-98h]
  __int128 v55; // [rsp+78h] [rbp-88h]
  __int128 v56; // [rsp+88h] [rbp-78h]
  __int128 v57; // [rsp+98h] [rbp-68h]
  __int128 v58; // [rsp+A8h] [rbp-58h]
  __int128 v59; // [rsp+B8h] [rbp-48h]
  __int128 v60; // [rsp+C8h] [rbp-38h]
  __int128 v61; // [rsp+D8h] [rbp-28h]
  __int128 v62; // [rsp+E8h] [rbp-18h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  struct _RECTL v64; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v65[3]; // [rsp+110h] [rbp+10h] BYREF

  v5 = (struct _RECTL *)((char *)this + 32);
  v6 = (char *)this + 896;
  v64 = 0LL;
  if ( *((_QWORD *)this + 3) )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)v6 )
      {
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(*(_QWORD *)v6 + 248LL));
        *(_QWORD *)v6 = 0LL;
      }
      if ( bIntersect((const struct _RECTL *)(*((_QWORD *)this + 3) + 80LL), v5, &v64) )
        break;
      SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(*((_QWORD *)this + 3) + 248LL));
      v20 = pSpFindInZ(*(struct SPRITE **)(*((_QWORD *)this + 3) + 24LL), v5);
      *((_QWORD *)this + 3) = v20;
      if ( !v20 )
        goto LABEL_2;
    }
    v21 = *((_QWORD *)this + 8);
    v22 = v64;
    *((_DWORD *)this + 18) = 1;
    *(struct _RECTL *)(v21 + 4) = v22;
    *a4 = (struct _CLIPOBJ *)*((_QWORD *)this + 8);
    *a2 = *(struct _SURFOBJ **)(*((_QWORD *)this + 3) + 160LL);
    *a3 = *(struct _POINTL *)(*((_QWORD *)this + 3) + 168LL);
    v23 = *((_QWORD *)this + 3);
    *(_QWORD *)v6 = v23;
    *((_QWORD *)this + 3) = pSpFindInZ(*(struct SPRITE **)(v23 + 24), v5);
    return 1LL;
  }
LABEL_2:
  if ( *(_QWORD *)v6 )
  {
    SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(*(_QWORD *)v6 + 248LL));
    *(_QWORD *)v6 = 0LL;
  }
  if ( *((_DWORD *)this + 19) )
    goto LABEL_8;
  v10 = *((_QWORD *)this + 8);
  if ( !*((_DWORD *)this + 18) )
  {
    *((_DWORD *)this + 19) = 1;
    *a4 = (struct _CLIPOBJ *)v10;
    *a2 = (struct _SURFOBJ *)*((_QWORD *)this + 2);
    *a3 = 0LL;
    return 1LL;
  }
  *(_OWORD *)(v10 + 4) = *((_OWORD *)this + 3);
  v24 = (struct REGION *)*((_QWORD *)this + 32);
  if ( v24 && *((_QWORD *)this + 33) )
  {
    v25 = *((_QWORD *)this + 8);
    if ( *(_BYTE *)(v25 + 20) == 3 )
    {
      v48[0] = *(_QWORD *)(*(_QWORD *)this + 696LL);
      v47 = v24;
      if ( !RGNOBJ::bMerge((RGNOBJ *)&v47, (struct RGNOBJ *)(v25 + 56), (struct RGNOBJ *)v48, 8u) )
        RGNOBJ::vSet((RGNOBJ *)&v47);
      v26 = v47;
      *((_QWORD *)this + 32) = v47;
    }
    else
    {
      v26 = *(struct REGION **)(*(_QWORD *)this + 696LL);
    }
    XCLIPOBJ::vSetup((ENUMUNDERLAYS *)((char *)this + 288), v26, (struct ERECTL *)v5, 1);
    if ( (unsigned int)bIntersect((char *)this + 292, v5) )
    {
      *((_DWORD *)this + 19) = 1;
      *a4 = (struct _CLIPOBJ *)((char *)this + 288);
      *a2 = (struct _SURFOBJ *)*((_QWORD *)this + 2);
      *a3 = 0LL;
      return 1LL;
    }
LABEL_8:
    if ( !*((_DWORD *)this + 20) )
    {
LABEL_9:
      v49 = *((_QWORD *)this + 33);
      v50 = *((_QWORD *)this + 32);
      v51 = *((_QWORD *)this + 34);
      v52 = *((_QWORD *)this + 35);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v49);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v50);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v51);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v52);
      return 0LL;
    }
    if ( *((_DWORD *)this + 18) )
    {
      PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v65, *(struct _SPRITESTATE **)this, v5);
      if ( v65[0] )
      {
        UNDOENGUPDATEDEVICESURFACE::UNDOENGUPDATEDEVICESURFACE((UNDOENGUPDATEDEVICESURFACE *)v48);
        vSpRedrawArea(*(struct _SPRITESTATE **)this, v5, 0);
        UNDOENGUPDATEDEVICESURFACE::~UNDOENGUPDATEDEVICESURFACE((UNDOENGUPDATEDEVICESURFACE *)v48);
      }
      PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v65);
    }
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v14 = Gre::Base::Globals(v13);
    v47 = **(struct REGION ***)this;
    if ( ThreadWin32Thread
      && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v47)
      && (*(_DWORD *)(ThreadWin32Thread + 104) || *(_DWORD *)(ThreadWin32Thread + 108)) )
    {
      v16 = *(_DWORD *)(*(_QWORD *)this + 100LL);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 12LL) = v16;
      v17 = *(_DWORD *)(*(_QWORD *)this + 104LL);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 16LL) = v17;
      v18 = *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 12LL);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) = v18;
      v19 = *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 16LL);
      *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 24LL) = v19;
      vSpTlSpriteStateDirectDriverAccess(*(struct _SPRITESTATE **)this, 0);
      **(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) = 0;
      if ( *((_DWORD *)this + 21) == 1 )
      {
        v27 = *(_OWORD *)((char *)this + 104);
        v53 = *(_OWORD *)((char *)this + 88);
        v28 = *((_QWORD *)this + 31);
        v29 = *(_OWORD *)((char *)this + 120);
        v54 = v27;
        v30 = *(_OWORD *)((char *)this + 136);
        v55 = v29;
        v31 = *(_OWORD *)((char *)this + 152);
        v56 = v30;
        v32 = *(_OWORD *)((char *)this + 168);
        v57 = v31;
        v33 = *(_OWORD *)((char *)this + 184);
        v58 = v32;
        v34 = *(_OWORD *)((char *)this + 216);
        v59 = v33;
        v60 = *(_OWORD *)((char *)this + 200);
        v35 = *(_OWORD *)((char *)this + 232);
        v61 = v34;
        v62 = v35;
        v63 = v28;
        v36 = *(_OWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
        v37 = v54;
        *v36 = v53;
        v38 = v55;
        v36[1] = v37;
        v39 = v56;
        v36[2] = v38;
        v40 = v57;
        v36[3] = v39;
        v41 = v58;
        v36[4] = v40;
        v42 = v59;
        v36[5] = v41;
        v43 = v60;
        v36[6] = v42;
        v36 += 8;
        v44 = v61;
        *(v36 - 1) = v43;
        v45 = v62;
        v46 = v63;
        *v36 = v44;
        v36[1] = v45;
        *((_QWORD *)v36 + 4) = v46;
      }
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(*(_QWORD *)this + 120LL));
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)this + 2) + 88LL) = *(_DWORD *)(*(_QWORD *)this + 100LL);
      *(_WORD *)(*((_QWORD *)this + 2) + 76LL) = *(_WORD *)(*(_QWORD *)this + 104LL);
      *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v47) )
        goto LABEL_16;
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
    GreReleaseSemaphoreInternal(*((_QWORD *)v14 + 14));
LABEL_16:
    v15 = *((_QWORD *)this + 8);
    if ( v15 )
      *(_OWORD *)(v15 + 4) = *((_OWORD *)this + 3);
    goto LABEL_9;
  }
  return 0LL;
}
