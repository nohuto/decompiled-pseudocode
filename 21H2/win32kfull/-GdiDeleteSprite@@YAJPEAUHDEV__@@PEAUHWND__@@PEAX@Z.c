/*
 * XREFs of ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C00ED6E8
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C00EA5BC (GreTransferSpriteStateToDwmState.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00EF4A0 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00ED954 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00F01D8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C00F03A0 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0281D78 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
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
  unsigned int v15; // r9d
  unsigned int v16; // r15d
  int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // r14
  int v20; // eax
  _DWORD *v21; // rax
  unsigned int v22; // r14d
  __int64 v23; // rcx
  __int64 i; // rax
  int v25; // eax
  HDEV v26; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+28h] [rbp-50h]
  W32PIDLOCK *v28; // [rsp+30h] [rbp-48h]
  _BYTE v29[64]; // [rsp+38h] [rbp-40h] BYREF
  int v32; // [rsp+98h] [rbp+20h]

  v26 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v29, (struct PDEVOBJ *)&v26);
  v6 = v26;
  v7 = 0;
  v8 = (struct _SPRITESTATE *)(v26 + 22);
  if ( !*((_DWORD *)v26 + 37) )
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
          *(_QWORD *)(v11 + 472) = a1;
          *(_DWORD *)(v11 + 92) = v25 | 2;
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
  MetaSprite = pSpGetMetaSprite(v8, a2, a3);
  if ( !MetaSprite )
    goto LABEL_6;
  v16 = 0;
  v32 = 1;
  v17 = 1;
  if ( !v15 )
    goto LABEL_20;
  do
  {
    v27 = *((_QWORD *)MetaSprite + v16 + 3);
    v18 = *(_QWORD *)(v27 + 128);
    if ( v18 )
    {
      v19 = v18 - 24;
      if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v18 - 24)) )
      {
        v28 = (W32PIDLOCK *)(v19 + 272);
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v19 + 272));
        if ( *(_DWORD *)(v19 + 324) )
        {
          v20 = *(_DWORD *)(v19 + 116);
          if ( (v20 & 2) == 0 )
          {
            *(_DWORD *)(v19 + 116) = v20 | 2;
            v21 = (_DWORD *)v27;
            *(_QWORD *)(v19 + 496) = a1;
            *(_QWORD *)(v19 + 504) = a2;
            *(_QWORD *)(v19 + 512) = a3;
            *(_DWORD *)(v19 + 520) = 1;
            *v21 |= 0x400u;
            *((_DWORD *)MetaSprite + 4) |= 0x400u;
          }
          v17 = 0;
          v32 = 0;
        }
        else
        {
          v17 = v32;
        }
        W32PIDLOCK::vUnlockSingleThread(v28);
      }
      else
      {
        v17 = v32;
      }
    }
    v15 = *((_DWORD *)v6 + 37);
    ++v16;
  }
  while ( v16 < v15 );
  if ( v17 )
  {
LABEL_20:
    v22 = 0;
    if ( v15 )
    {
      do
        vSpDeleteSprite(*((struct SPRITE **)MetaSprite + v22++ + 3));
      while ( v22 < *((_DWORD *)v6 + 37) );
    }
    v23 = *((_QWORD *)v6 + 20);
    if ( (struct _METASPRITE *)v23 == MetaSprite )
    {
      *((_QWORD *)v6 + 20) = *((_QWORD *)MetaSprite + 1);
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
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v29);
  return v7;
}
