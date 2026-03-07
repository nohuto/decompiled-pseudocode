__int64 __fastcall GdiAdjustSpriteDirtyAccum(
        Gre::Base *a1,
        HWND a2,
        struct _RECTL *a3,
        struct _RECTL *a4,
        struct _POINTL *a5,
        struct _RECTL *a6)
{
  struct Gre::Base::SESSION_GLOBALS *v8; // rsi
  Gre::Base *v9; // rdi
  unsigned int v10; // ebx
  const struct _SPRITESTATE *v11; // rcx
  struct _METASPRITE *MetaSprite; // rbp
  int v13; // r10d
  struct _RECTL *v14; // r14
  __int64 v15; // rax
  struct SPRITE *v16; // rcx
  LONG v17; // r8d
  struct _RECTL *v18; // rdx
  struct SPRITE *Sprite; // rax
  _BYTE v21[56]; // [rsp+30h] [rbp-38h] BYREF
  struct _POINTL v22; // [rsp+70h] [rbp+8h] BYREF
  Gre::Base *v23; // [rsp+88h] [rbp+20h] BYREF

  v23 = a1;
  v8 = Gre::Base::Globals(a1);
  GreAcquireSemaphore(*((_QWORD *)v8 + 15));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v8 + 15), 2LL);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v21, (struct PDEVOBJ *)&v23);
  v9 = v23;
  v10 = 0;
  v11 = (Gre::Base *)((char *)v23 + 80);
  if ( *((_DWORD *)v23 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v11, a2, 0LL, 0);
    if ( MetaSprite && v13 )
    {
      v14 = a6;
      do
      {
        v15 = *(_QWORD *)(*((_QWORD *)v9 + 18) + 8LL * v10);
        v16 = (struct SPRITE *)*((_QWORD *)MetaSprite + v10 + 3);
        v17 = v14->left - *(_DWORD *)(v15 + 2560);
        v18 = (struct _RECTL *)*(unsigned int *)(v15 + 2564);
        LODWORD(v15) = v14->top - (_DWORD)v18;
        v22.x = v17;
        v22.y = v15;
        vSpAdjustSpriteDirtyAccum(v16, v18, a3, a5, &v22);
        ++v10;
      }
      while ( v10 < *((_DWORD *)v9 + 35) );
    }
  }
  else
  {
    Sprite = pSpGetSprite(v11, a2, 0LL);
    if ( Sprite )
      vSpAdjustSpriteDirtyAccum(Sprite, a6, a3, a5, (struct _POINTL *)a6);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v21);
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
  GreReleaseSemaphoreInternal(*((_QWORD *)v8 + 15));
  return 1LL;
}
