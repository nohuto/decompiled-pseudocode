void __fastcall GdiMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, int a5)
{
  HDEV v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 i; // rax
  struct SPRITE *v15; // r8
  struct Gre::Base::SESSION_GLOBALS *v16; // rax
  int v17; // ebx
  struct Gre::Base::SESSION_GLOBALS *v18; // r14
  int v19; // eax
  __int64 v20; // rcx
  __int64 j; // rsi
  __int64 v22; // r15
  HDEV v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // ecx
  HDEV hdev; // [rsp+20h] [rbp-E0h] BYREF
  struct _POINTL v31; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v33[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v34[24]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v35; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v36; // [rsp+1D0h] [rbp+D0h]
  struct _RECTL v37; // [rsp+1D8h] [rbp+D8h] BYREF

  hdev = a1->hdev;
  v8 = hdev + 20;
  v9 = *((_QWORD *)hdev + 149);
  if ( v9 )
  {
    if ( *((_QWORD *)hdev + 150) != v9 )
    {
      v32 = *((_QWORD *)Gre::Base::Globals((Gre::Base *)a1) + 14);
      GreAcquireSemaphore(v32);
      v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)(v10 - *((_DWORD *)hdev + 292)) >= *((_DWORD *)hdev + 293) )
      {
        SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v34, (struct PDEVOBJ *)&hdev);
        v11 = *((_QWORD *)v8 + 140);
        v12 = *((_QWORD *)v8 + 139);
        v13 = v11;
        for ( i = *(_QWORD *)(v11 + 24); i != v12; i = *(_QWORD *)(i + 24) )
          v13 = i;
        if ( *(_DWORD *)(v13 + 80) == *(_DWORD *)(v12 + 80) && *(_DWORD *)(v13 + 84) == *(_DWORD *)(v12 + 84) )
        {
          while ( v11 != v12 )
          {
            if ( (*(_DWORD *)v11 & 0x20) != 0 )
            {
              bSpUpdatePosition((struct SPRITE *)v11, 0LL, 0, 0);
              break;
            }
            v11 = *(_QWORD *)(v11 + 24);
          }
        }
        else
        {
          bSpUpdatePosition(*((struct SPRITE **)v8 + 140), 0LL, 0, 0);
          v15 = (struct SPRITE *)*((_QWORD *)v8 + 139);
          *((_QWORD *)v8 + 140) = *(_QWORD *)(v11 + 24);
          vSpZorderSprite(a1->hdev, (struct SPRITE *)v11, v15);
          *((_QWORD *)v8 + 139) = v11;
        }
        *((_DWORD *)v8 + 272) = v10;
        SPRITEDDIACCESS::~SPRITEDDIACCESS(v34);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v32);
    }
    v16 = Gre::Base::Globals((Gre::Base *)a1);
    v17 = a5;
    v18 = v16;
    if ( !a5 )
      v17 = GreIsSemaphoreOwnedByCurrentThread(*((_QWORD *)v16 + 14)) != 0;
    v19 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
    v20 = *((_QWORD *)v18 + 14);
    if ( v19 )
    {
      GreAcquireSemaphoreSharedStarveExclusiveInternal(v20);
      EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v18 + 14));
    }
    else
    {
      GreAcquireSemaphore(v20);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v18 + 14), 5LL);
    }
    if ( !v17 )
      GreIncNonRBLockCount(*((_QWORD *)v18 + 14));
    v35 = 0LL;
    v36 = 0LL;
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v33, (struct PDEVOBJ *)&hdev);
    if ( a2 == -1 )
    {
      v31.x = 0x7FFFFFFF;
      v31.y = 0x7FFFFFFF;
      for ( j = *((_QWORD *)v8 + 140); j; j = *(_QWORD *)(j + 24) )
      {
        if ( !v17 )
        {
          SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 30));
          PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v35, (struct _SPRITESTATE *)v8, (struct _RECTL *)(j + 80));
          SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(j + 248));
          *((_QWORD *)v8 + 167) = j;
        }
        if ( (_QWORD)v35 || v17 )
        {
          bSpUpdatePosition((struct SPRITE *)j, &v31, 0, 0);
          if ( v17 )
            continue;
        }
        *((_QWORD *)v8 + 167) = 0LL;
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(j + 248));
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v35);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 30));
      }
    }
    else
    {
      v31.x = a2 - *((_DWORD *)v8 + 268);
      v31.y = a3 - *((_DWORD *)v8 + 269);
      v22 = *((_QWORD *)v8 + 139);
      if ( !v17 )
      {
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 30));
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v35, (struct _SPRITESTATE *)v8, (struct _RECTL *)(v22 + 80));
        SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v22 + 248));
        *((_QWORD *)v8 + 167) = v22;
      }
      bSpUpdatePosition((struct SPRITE *)v22, &v31, 0, 0);
      if ( !v17 )
      {
        *((_QWORD *)v8 + 167) = 0LL;
        SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v22 + 248));
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v35);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 30));
      }
      v37 = *(struct _RECTL *)(v22 + 80);
      if ( !v17 )
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v35, (struct _SPRITESTATE *)v8, &v37);
      if ( !(_QWORD)v35 && !v17 || (vSpRedrawSprite((struct SPRITE *)v22), !v17) )
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v35);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v33);
    if ( !v17 )
      GreDecNonRBLockCount(*((_QWORD *)v18 + 14));
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
    GreReleaseSemaphoreInternal(*((_QWORD *)v18 + 14));
    v23 = hdev;
    if ( (*((_DWORD *)hdev + 524) & 0x80u) != 0 )
    {
      v24 = *((_QWORD *)hdev + 316);
      v25 = 0LL;
      v26 = v24 + 24;
      v27 = -v24;
      v28 = v26 & -(__int64)(v27 != 0);
      if ( v28 )
      {
        v29 = *(_DWORD *)((v26 & -(__int64)(v27 != 0)) + 0x58);
        if ( (v29 & 0x80004000) != 0 && (v29 & 0x200) == 0 )
        {
          v25 = v28 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v28 - 24 + 48));
          v23 = hdev;
        }
      }
      PDEVOBJ::vSync(
        (PDEVOBJ *)&hdev,
        (struct _SURFOBJ *)((*((_QWORD *)v23 + 316) + 24LL) & -(__int64)(*((_QWORD *)v23 + 316) != 0LL)),
        0LL,
        1u);
      if ( v25 )
        GreUnlockDisplayDevice(*(_QWORD *)(v25 + 48));
    }
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v35);
  }
}
