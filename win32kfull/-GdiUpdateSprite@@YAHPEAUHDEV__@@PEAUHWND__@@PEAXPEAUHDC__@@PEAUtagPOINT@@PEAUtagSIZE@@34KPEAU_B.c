__int64 __fastcall GdiUpdateSprite(
        Gre::Base *a1,
        HWND a2,
        void *a3,
        HDC a4,
        struct _POINTL *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct _POINTL *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct _RECTL *a12)
{
  unsigned int updated; // edi
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  struct Gre::Base::SESSION_GLOBALS *v16; // r15
  _QWORD *v17; // rbx
  struct _RECTL *v18; // r12
  Gre::Base *v19; // r14
  const struct _SPRITESTATE *v20; // rcx
  struct SPRITE *Sprite; // rcx
  struct _METASPRITE *MetaSprite; // rax
  int v24; // r9d
  int v25; // r10d
  __int64 v26; // rsi
  struct _METASPRITE *v27; // r15
  struct _POINTL *v28; // rbx
  struct _POINTL *v29; // r8
  __int64 v30; // rax
  int v31; // [rsp+50h] [rbp-79h]
  Gre::Base *v33; // [rsp+60h] [rbp-69h] BYREF
  struct _POINTL v34; // [rsp+68h] [rbp-61h] BYREF
  _QWORD *v35; // [rsp+70h] [rbp-59h]
  struct _BLENDFUNCTION *v36; // [rsp+78h] [rbp-51h]
  struct _POINTL *v37; // [rsp+80h] [rbp-49h]
  HDC v38; // [rsp+88h] [rbp-41h]
  struct tagSIZE *v39; // [rsp+90h] [rbp-39h]
  struct _POINTL *v40; // [rsp+98h] [rbp-31h]
  HDC v41; // [rsp+A0h] [rbp-29h]
  struct Gre::Base::SESSION_GLOBALS *v42; // [rsp+A8h] [rbp-21h]
  _BYTE v43[8]; // [rsp+B0h] [rbp-19h] BYREF
  struct _RECTL v44; // [rsp+B8h] [rbp-11h] BYREF

  updated = 0;
  v34 = 0LL;
  v31 = 0;
  v40 = a5;
  v39 = a6;
  v38 = a7;
  v37 = a8;
  v36 = a10;
  v41 = a4;
  v15 = Gre::Base::Globals(a1);
  v16 = v15;
  v42 = v15;
  v17 = (_QWORD *)((char *)v15 + 120);
  v35 = (_QWORD *)((char *)v15 + 120);
  if ( (a11 & 0x200000) != 0 )
  {
    v35 = (_QWORD *)((char *)v15 + 120);
  }
  else
  {
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v15 + 10));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v16 + 10));
    GreAcquireSemaphore(*v17);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *v17, 2LL);
    v31 = 1;
  }
  if ( a12 )
    v44 = *a12;
  v33 = a1;
  v18 = &v44;
  if ( !a12 )
    v18 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v43, (struct PDEVOBJ *)&v33);
  PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v33);
  v19 = v33;
  v20 = (Gre::Base *)((char *)v33 + 80);
  if ( *((_DWORD *)v33 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v20, a2, a3, 0);
    if ( MetaSprite )
    {
      v26 = 0LL;
      updated = v24 + 1;
      if ( v25 )
      {
        v27 = MetaSprite;
        v28 = v40;
        do
        {
          v29 = 0LL;
          v30 = *(_QWORD *)(*((_QWORD *)v19 + 18) + 8 * v26);
          if ( v28 )
          {
            v29 = &v34;
            v34.x = v28->x - *(_DWORD *)(v30 + 2560);
            v34.y = v28->y - *(_DWORD *)(v30 + 2564);
          }
          updated &= bSpUpdateSprite(*((struct SPRITE **)v27 + v26 + 3), v41, v29, v39, v38, v37, a9, v36, a11, v18);
          v26 = (unsigned int)(v26 + 1);
        }
        while ( (unsigned int)v26 < *((_DWORD *)v19 + 35) );
        v17 = v35;
        v16 = v42;
      }
    }
  }
  else
  {
    Sprite = pSpGetSprite(v20, a2, a3);
    if ( Sprite )
      updated = bSpUpdateSprite(Sprite, v41, v40, v39, v38, v37, a9, v36, a11, v18);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v43);
  if ( v31 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
    GreReleaseSemaphoreInternal(*v17);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    GreReleaseSemaphoreInternal(*((_QWORD *)v16 + 10));
  }
  return updated;
}
