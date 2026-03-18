/*
 * XREFs of ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C00B5480
 * Callers:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00B3DC0 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00ECC20 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0086C6C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B56F4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C00B628C (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x1C027F8E8 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 */

__int64 __fastcall GdiDeleteSprite(HDEV a1, HWND a2, void *a3)
{
  HDEV v6; // rbp
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
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // r14
  int v22; // eax
  _DWORD *v23; // rax
  unsigned int v24; // r14d
  __int64 v25; // rcx
  __int64 i; // rax
  int v27; // eax
  HDEV v28; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+28h] [rbp-50h]
  W32PIDLOCK *v30; // [rsp+30h] [rbp-48h]
  _BYTE v31[64]; // [rsp+38h] [rbp-40h] BYREF
  int v34; // [rsp+98h] [rbp+20h]

  v28 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v31, (struct PDEVOBJ *)&v28);
  v6 = v28;
  v7 = 0;
  v8 = (struct _SPRITESTATE *)(v28 + 20);
  if ( !*((_DWORD *)v28 + 35) )
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
        v27 = *(_DWORD *)(v11 + 92);
        if ( (v27 & 2) == 0 )
        {
          *(_QWORD *)(v11 + 472) = a1;
          *(_DWORD *)(v11 + 92) = v27 | 2;
          *(_QWORD *)(v11 + 480) = a2;
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
LABEL_6:
    v7 = -2143354870;
    goto LABEL_5;
  }
  MetaSprite = pSpGetMetaSprite(v8, a2, a3, 0);
  if ( !MetaSprite )
    goto LABEL_6;
  v17 = v15 + 1;
  v18 = 0;
  v34 = v15 + 1;
  v19 = v15 + 1;
  if ( !v16 )
    goto LABEL_20;
  do
  {
    v29 = *((_QWORD *)MetaSprite + v18 + 3);
    v20 = *(_QWORD *)(v29 + 128);
    if ( v20 )
    {
      v21 = v20 - 24;
      if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v20 - 24)) )
      {
        v30 = (W32PIDLOCK *)(v21 + 272);
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v21 + 272));
        if ( *(_DWORD *)(v21 + 324) )
        {
          v22 = *(_DWORD *)(v21 + 116);
          if ( (v22 & 2) == 0 )
          {
            *(_DWORD *)(v21 + 116) = v22 | 2;
            v23 = (_DWORD *)v29;
            *(_QWORD *)(v21 + 496) = a1;
            *(_QWORD *)(v21 + 504) = a2;
            *(_QWORD *)(v21 + 512) = a3;
            *(_DWORD *)(v21 + 520) = v17;
            *v23 |= 0x400u;
            *((_DWORD *)MetaSprite + 4) |= 0x400u;
          }
          v19 = 0;
          v34 = 0;
        }
        else
        {
          v19 = v34;
        }
        W32PIDLOCK::vUnlockSingleThread(v30);
      }
      else
      {
        v19 = v34;
      }
    }
    v16 = *((_DWORD *)v6 + 35);
    v18 += v17;
  }
  while ( v18 < v16 );
  if ( v19 )
  {
LABEL_20:
    v24 = 0;
    if ( v16 )
    {
      do
      {
        vSpDeleteSprite(*((struct SPRITE **)MetaSprite + v24 + 3));
        v24 += v17;
      }
      while ( v24 < *((_DWORD *)v6 + 35) );
    }
    v25 = *((_QWORD *)v6 + 19);
    if ( (struct _METASPRITE *)v25 == MetaSprite )
    {
      *((_QWORD *)v6 + 19) = *((_QWORD *)MetaSprite + 1);
    }
    else
    {
      for ( i = *(_QWORD *)(v25 + 8); (struct _METASPRITE *)i != MetaSprite; i = *(_QWORD *)(i + 8) )
        v25 = i;
      *(_QWORD *)(v25 + 8) = *((_QWORD *)MetaSprite + 1);
    }
    Win32FreePool(MetaSprite);
  }
LABEL_5:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v31);
  return v7;
}
