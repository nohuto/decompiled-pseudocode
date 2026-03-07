ENUMUNDERLAYS *__fastcall ENUMUNDERLAYS::ENUMUNDERLAYS(
        ENUMUNDERLAYS *this,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4)
{
  char *v8; // r14
  int v9; // esi
  char *v10; // r12
  HDEV hdev; // rdx
  HDEV v12; // rdx
  struct REGION *v14; // rdx
  struct ERECTL *v15; // r8
  Gre::Base *v16; // rcx
  struct REGION *v17; // rax
  __int64 v18; // rax
  XDCOBJ *v19; // rbx
  struct REGION *v20; // rdx
  __int128 *v21; // rcx
  __int128 v22; // xmm0
  struct _RECTL *v23; // rbx
  struct _RECTL v24; // xmm0
  struct Gre::Base::SESSION_GLOBALS *v25; // rbx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  __int64 v30; // rax
  _DWORD *v31; // rcx
  const struct _RECTL *v32; // rdx
  struct _RECTL v33; // xmm0
  struct REGION *v34; // [rsp+20h] [rbp-49h] BYREF
  struct REGION *v35; // [rsp+28h] [rbp-41h] BYREF
  struct REGION *v36; // [rsp+30h] [rbp-39h] BYREF
  HDEV v37; // [rsp+38h] [rbp-31h] BYREF
  __int64 ThreadWin32Thread; // [rsp+40h] [rbp-29h]
  struct Gre::Base::SESSION_GLOBALS *v39; // [rsp+48h] [rbp-21h]
  struct REGION *v40; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v41[3]; // [rsp+58h] [rbp-11h] BYREF
  struct _RECTL v42; // [rsp+70h] [rbp+7h] BYREF

  *((_QWORD *)this + 46) = 0LL;
  v8 = (char *)this + 64;
  *((_DWORD *)this + 94) = 0;
  v9 = 1;
  *((_DWORD *)this + 104) = 1;
  v10 = (char *)this + 440;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 132) = 0;
  *((_DWORD *)this + 142) = 1;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 180) = 1;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_DWORD *)this + 208) = 0;
  *((_DWORD *)this + 218) = 1;
  *((_QWORD *)this + 111) = 0LL;
  hdev = a2->hdev;
  v37 = hdev;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 8) = a3;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  if ( !hdev )
    return this;
  v12 = hdev + 20;
  *(_QWORD *)this = v12;
  if ( a2 == *((struct _SURFOBJ **)v12 + 4) )
  {
    v42 = *a4;
    ERECTL::operator*=(&v42, v12 + 10);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v42) )
      goto LABEL_38;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v34);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v36);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
    if ( !v34 || !v36 || !v35 )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v34);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
      goto LABEL_38;
    }
    RGNOBJ::vSet((RGNOBJ *)&v36, (const struct _RECTL *const)(*(_QWORD *)this + 40LL));
    v14 = v36;
    v15 = (struct ERECTL *)(*(_QWORD *)this + 40LL);
    *((_QWORD *)this + 32) = v34;
    *((_QWORD *)this + 34) = v35;
    *((_QWORD *)this + 33) = v14;
    XCLIPOBJ::vSetup((ENUMUNDERLAYS *)((char *)this + 440), v14, v15, 1);
  }
  if ( a2 != *(struct _SURFOBJ **)(*(_QWORD *)this + 32LL)
    || (unsigned int)bInsideDriverCall(*(struct _SPRITESTATE **)this) )
  {
    return this;
  }
  *((_DWORD *)this + 21) = bCurrentTlDriverCall((struct PDEVOBJ *)&v37);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v39 = Gre::Base::Globals(v16);
  if ( ThreadWin32Thread
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v37)
    && (*(_DWORD *)(ThreadWin32Thread + 104) || *(_DWORD *)(ThreadWin32Thread + 108)) )
  {
    memset(v41, 0, sizeof(v41));
    UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v41);
    v25 = v39;
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v39 + 14));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v25 + 14));
    SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(*(_QWORD *)this + 120LL));
    if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo(v41) )
      goto LABEL_38;
    if ( *((_DWORD *)this + 21) == 1 )
    {
      v30 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
      *(_OWORD *)((char *)this + 88) = *(_OWORD *)v30;
      *(_OWORD *)((char *)this + 104) = *(_OWORD *)(v30 + 16);
      *(_OWORD *)((char *)this + 120) = *(_OWORD *)(v30 + 32);
      *(_OWORD *)((char *)this + 136) = *(_OWORD *)(v30 + 48);
      *(_OWORD *)((char *)this + 152) = *(_OWORD *)(v30 + 64);
      *(_OWORD *)((char *)this + 168) = *(_OWORD *)(v30 + 80);
      *(_OWORD *)((char *)this + 184) = *(_OWORD *)(v30 + 96);
      *(_OWORD *)((char *)this + 200) = *(_OWORD *)(v30 + 112);
      *(_OWORD *)((char *)this + 216) = *(_OWORD *)(v30 + 128);
      *(_OWORD *)((char *)this + 232) = *(_OWORD *)(v30 + 144);
      *((_QWORD *)this + 31) = *(_QWORD *)(v30 + 160);
    }
    v26 = *(_DWORD *)(*(_QWORD *)this + 92LL);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 4LL) = v26;
    v27 = *(_DWORD *)(*(_QWORD *)this + 96LL);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 8LL) = v27;
    v28 = *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 4LL);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) = v28;
    v29 = *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 8LL);
    *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 24LL) = v29;
    vSpTlSpriteStateDirectDriverAccess(*(struct _SPRITESTATE **)this, 1);
    **(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) = 1;
  }
  else
  {
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v37) )
      GreAcquireSemaphore(*((_QWORD *)v39 + 14));
    LODWORD(a2[1].hsurf) = *(_DWORD *)(*(_QWORD *)this + 92LL);
    a2->iType = *(_WORD *)(*(_QWORD *)this + 96LL);
    *(_DWORD *)(*(_QWORD *)this + 88LL) = 1;
  }
  v17 = (struct REGION *)*((_QWORD *)this + 34);
  *((_DWORD *)this + 20) = 1;
  v36 = v17;
  if ( !a3 || !a3->iDComplexity )
  {
    v18 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( a3 || !v18 || (v19 = *(XDCOBJ **)(v18 + 312)) == 0LL )
    {
      v24 = *a4;
      v23 = (struct _RECTL *)((char *)this + 32);
      *(_QWORD *)v8 = v10;
      *((struct _RECTL *)this + 2) = v24;
      *(struct _RECTL *)((char *)this + 444) = v24;
      goto LABEL_26;
    }
    v34 = (struct REGION *)*((_QWORD *)this + 33);
    v40 = XDCOBJ::prgnEffRao(v19);
    if ( RGNOBJ::bCopy((RGNOBJ *)&v34, (struct RGNOBJ *)&v40) )
    {
      v20 = v34;
      *((_QWORD *)this + 33) = v34;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v19 + 48LL) + 40LL) & 0x20000) != 0 )
      {
        LODWORD(v35) = -*((_DWORD *)v37 + 640);
        HIDWORD(v35) = -*((_DWORD *)v37 + 641);
        RGNOBJ::bOffset((RGNOBJ *)&v34, (struct _POINTL *)&v35);
        v20 = v34;
      }
      XCLIPOBJ::vSetup((ENUMUNDERLAYS *)((char *)this + 440), v20, (struct ERECTL *)&v42, 1);
      if ( !(unsigned int)ERECTL::bEmpty((ENUMUNDERLAYS *)((char *)this + 444)) )
      {
        v22 = *v21;
        v23 = (struct _RECTL *)((char *)this + 32);
        *(_QWORD *)v8 = v10;
        *((_OWORD *)this + 2) = v22;
LABEL_26:
        if ( (unsigned int)bSpUpdateDeviceSurface(
                             *((struct _SURFOBJ **)this + 2),
                             (struct _CLIPOBJ **)this + 8,
                             (struct RGNOBJ *)&v36,
                             (ENUMUNDERLAYS *)((char *)this + 592))
          && *(char **)v8 != v10 )
        {
          v33 = *(struct _RECTL *)(*(_QWORD *)v8 + 4LL);
          *((_QWORD *)this + 34) = v36;
          *v23 = v33;
          *((struct _RECTL *)this + 3) = v33;
          goto LABEL_29;
        }
        goto LABEL_28;
      }
    }
LABEL_38:
    *((_DWORD *)this + 19) = 1;
    return this;
  }
  v31 = *(_DWORD **)this;
  *(_QWORD *)v8 = a3;
  if ( a3->rclBounds.left < v31[10]
    || a3->rclBounds.right > v31[12]
    || a3->rclBounds.top < v31[11]
    || a3->rclBounds.bottom > v31[13] )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v34);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v34);
    if ( !v35
      || !v34
      || (RGNOBJ::vSet((RGNOBJ *)&v34, (const struct _RECTL *const)(*(_QWORD *)this + 40LL)),
          !RGNOBJ::bMerge((RGNOBJ *)&v35, (struct RGNOBJ *)(*(_QWORD *)v8 + 56LL), (struct RGNOBJ *)&v34, 8u))
      || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v35) == 1 )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
      *((_DWORD *)this + 19) = 1;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v34);
      return this;
    }
    XCLIPOBJ::vSetup((ENUMUNDERLAYS *)((char *)this + 744), v35, (struct ERECTL *)a4, 1);
    *((_QWORD *)this + 35) = v35;
    *(_QWORD *)v8 = (char *)this + 744;
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v34);
  }
  v23 = (struct _RECTL *)((char *)this + 32);
  if ( !(unsigned int)bSpUpdateDeviceSurface(
                        *((struct _SURFOBJ **)this + 2),
                        (struct _CLIPOBJ **)this + 8,
                        (struct RGNOBJ *)&v36,
                        (ENUMUNDERLAYS *)((char *)this + 592)) )
  {
    *((_QWORD *)this + 34) = v36;
    *v23 = (struct _RECTL)xmmword_1C0329ED0;
    return this;
  }
  v32 = (const struct _RECTL *)(*(_QWORD *)v8 + 4LL);
  *((struct _RECTL *)this + 3) = *v32;
  v9 = bIntersect(a4, v32, (struct _RECTL *)this + 2);
LABEL_28:
  *((_QWORD *)this + 34) = v36;
  if ( v9 )
LABEL_29:
    *((_QWORD *)this + 3) = pSpFindInZ(*(struct SPRITE **)(*(_QWORD *)this + 8LL), v23);
  return this;
}
