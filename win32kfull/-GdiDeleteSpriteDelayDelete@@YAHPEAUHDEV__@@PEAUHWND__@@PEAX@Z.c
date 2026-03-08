/*
 * XREFs of ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C027C92C
 * Callers:
 *     GreDeleteSpriteDelayDelete @ 0x1C0269FC0 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C010C43C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C010C4F0 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x1C0281E68 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 *     ?pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0281EE4 (-pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GdiDeleteSpriteDelayDelete(HDEV a1, HWND a2, void *a3)
{
  unsigned int v5; // edi
  HDEV v6; // rbp
  const struct _SPRITESTATE *v7; // rcx
  struct _METASPRITE *MetaSprite; // rsi
  int v9; // r10d
  unsigned int v10; // r14d
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  W32PIDLOCK *v14; // rbx
  unsigned int v15; // r10d
  __int64 v16; // rcx
  __int64 i; // rax
  struct SPRITE *v18; // rax
  struct SPRITE *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  W32PIDLOCK *v22; // rbx
  HDEV v24; // [rsp+50h] [rbp+8h] BYREF
  char v25; // [rsp+68h] [rbp+20h] BYREF

  v24 = a1;
  v5 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v25, (struct PDEVOBJ *)&v24);
  v6 = v24;
  v7 = (const struct _SPRITESTATE *)(v24 + 20);
  if ( *((_DWORD *)v24 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v7, a2, a3, 1);
    if ( MetaSprite )
    {
      v10 = 0;
      if ( v9 )
      {
        do
        {
          v11 = *((_QWORD *)MetaSprite + v10 + 3);
          v12 = *(_QWORD *)(v11 + 128);
          if ( v12 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v12 - 24)) )
          {
            v14 = (W32PIDLOCK *)(v13 + 272);
            W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v13 + 272));
            *(_DWORD *)v11 &= ~0x400u;
            *((_DWORD *)MetaSprite + 4) &= ~0x400u;
            W32PIDLOCK::vUnlockSingleThread(v14);
          }
          v15 = *((_DWORD *)v6 + 35);
          ++v10;
        }
        while ( v10 < v15 );
        if ( v15 )
        {
          do
            vSpDeleteSprite(*((struct SPRITE **)MetaSprite + v5++ + 3));
          while ( v5 < *((_DWORD *)v6 + 35) );
        }
      }
      v16 = *((_QWORD *)v6 + 19);
      if ( (struct _METASPRITE *)v16 == MetaSprite )
      {
        *((_QWORD *)v6 + 19) = *((_QWORD *)MetaSprite + 1);
      }
      else
      {
        for ( i = *(_QWORD *)(v16 + 8); (struct _METASPRITE *)i != MetaSprite; i = *(_QWORD *)(i + 8) )
          v16 = i;
        *(_QWORD *)(v16 + 8) = *((_QWORD *)MetaSprite + 1);
      }
      Win32FreePool(MetaSprite);
LABEL_22:
      v5 = 1;
    }
  }
  else
  {
    v18 = pSpGetSpriteDelayDelete(v7, a2, a3);
    v19 = v18;
    if ( v18 )
    {
      v20 = *((_QWORD *)v18 + 16);
      if ( v20 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v20 - 24)) )
      {
        v22 = (W32PIDLOCK *)(v21 + 272);
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v21 + 272));
        *(_DWORD *)v19 &= ~0x400u;
        W32PIDLOCK::vUnlockSingleThread(v22);
      }
      vSpDeleteSprite(v19);
      goto LABEL_22;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v25);
  return v5;
}
