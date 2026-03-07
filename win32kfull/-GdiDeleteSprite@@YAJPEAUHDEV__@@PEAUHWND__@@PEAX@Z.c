__int64 __fastcall GdiDeleteSprite(Gre::Base *a1, HWND a2, void *a3)
{
  Gre::Base *v6; // rbp
  unsigned int v7; // ebx
  struct _SPRITESTATE *v8; // rcx
  struct SPRITE *Sprite; // rax
  struct SPRITE *v10; // rbp
  __int64 v11; // rdi
  int v12; // esi
  struct _METASPRITE *MetaSprite; // rdi
  int v15; // r9d
  unsigned int v16; // r10d
  int v17; // esi
  unsigned int v18; // r15d
  int v19; // r13d
  __int64 v20; // r14
  int v21; // eax
  unsigned int v22; // r14d
  __int64 v23; // rcx
  __int64 i; // rax
  int v25; // eax
  __int64 v26; // [rsp+20h] [rbp-58h]
  _BYTE v27[80]; // [rsp+28h] [rbp-50h] BYREF
  Gre::Base *v31; // [rsp+98h] [rbp+20h] BYREF

  v31 = a1;
  Gre::Base::Globals(a1);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v27, (struct PDEVOBJ *)&v31);
  v6 = v31;
  v7 = 0;
  v8 = (Gre::Base *)((char *)v31 + 80);
  if ( !*((_DWORD *)v31 + 35) )
  {
    Sprite = pSpGetSprite(v8, a2, a3);
    v10 = Sprite;
    if ( Sprite )
    {
      v11 = *((_QWORD *)Sprite + 16);
      v12 = 1;
      if ( !v11 || !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v11 - 24)) )
        goto LABEL_4;
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v11 + 248));
      if ( *(_DWORD *)(v11 + 300) )
      {
        v25 = *(_DWORD *)(v11 + 92);
        if ( (v25 & 2) == 0 )
        {
          *(_QWORD *)(v11 + 480) = a2;
          *(_DWORD *)(v11 + 92) = v25 | 2;
          *(_QWORD *)(v11 + 472) = a1;
          *(_QWORD *)(v11 + 488) = a3;
          *(_DWORD *)(v11 + 496) = 1;
          *(_DWORD *)v10 |= 0x400u;
        }
        v12 = 0;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v11 + 248));
      if ( v12 )
LABEL_4:
        vSpDeleteSprite(v10);
      goto LABEL_5;
    }
LABEL_8:
    v7 = -2143354870;
    goto LABEL_5;
  }
  MetaSprite = pSpGetMetaSprite(v8, a2, a3, 0);
  if ( !MetaSprite )
    goto LABEL_8;
  v17 = v15 + 1;
  v18 = 0;
  v19 = v15 + 1;
  if ( !v16 )
    goto LABEL_20;
  do
  {
    v26 = *((_QWORD *)MetaSprite + v18 + 3);
    v20 = *(_QWORD *)(v26 + 128);
    if ( v20 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v20 - 24)) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v20 + 248));
      if ( *(_DWORD *)(v20 + 300) )
      {
        v21 = *(_DWORD *)(v20 + 92);
        if ( (v21 & 2) == 0 )
        {
          *(_QWORD *)(v20 + 472) = a1;
          *(_DWORD *)(v20 + 92) = v21 | 2;
          *(_QWORD *)(v20 + 480) = a2;
          *(_QWORD *)(v20 + 488) = a3;
          *(_DWORD *)(v20 + 496) = v17;
          *(_DWORD *)v26 |= 0x400u;
          *((_DWORD *)MetaSprite + 4) |= 0x400u;
        }
        v19 = 0;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v20 + 248));
    }
    v16 = *((_DWORD *)v6 + 35);
    v18 += v17;
  }
  while ( v18 < v16 );
  if ( v19 )
  {
LABEL_20:
    v22 = 0;
    if ( v16 )
    {
      do
      {
        vSpDeleteSprite(*((struct SPRITE **)MetaSprite + v22 + 3));
        v22 += v17;
      }
      while ( v22 < *((_DWORD *)v6 + 35) );
    }
    v23 = *((_QWORD *)v6 + 19);
    if ( (struct _METASPRITE *)v23 == MetaSprite )
    {
      *((_QWORD *)v6 + 19) = *((_QWORD *)MetaSprite + 1);
    }
    else
    {
      for ( i = *(_QWORD *)(v23 + 8); (struct _METASPRITE *)i != MetaSprite; i = *(_QWORD *)(i + 8) )
        v23 = i;
      *(_QWORD *)(v23 + 8) = *((_QWORD *)MetaSprite + 1);
    }
    Win32FreePool(MetaSprite);
  }
LABEL_5:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v27);
  return v7;
}
