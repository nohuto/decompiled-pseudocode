/*
 * XREFs of ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00B5F68
 * Callers:
 *     GreHintSpriteShape @ 0x1C002198C (GreHintSpriteShape.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C0097BB8 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00ECC20 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00B604C (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C00B628C (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C0157AA8 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x1C027F8E8 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 */

__int64 __fastcall GdiHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, int a4, int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r14d
  HDEV v9; // r13
  unsigned int v10; // esi
  const struct _SPRITESTATE *v11; // rcx
  struct SPRITE *Sprite; // rax
  const signed __int32 *v13; // r15
  int v14; // ebx
  unsigned int v15; // r14d
  int v17; // r9d
  int v18; // r10d
  struct _METASPRITE *MetaSprite; // r15
  __int64 v20; // rbx
  __int128 *v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // ecx
  __int128 *v24; // rcx
  int v25; // [rsp+20h] [rbp-40h]
  HDEV v26; // [rsp+28h] [rbp-38h] BYREF
  struct SPRITE *v27; // [rsp+30h] [rbp-30h]
  _BYTE v28[8]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v29; // [rsp+40h] [rbp-20h]
  __int128 v30; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v31; // [rsp+A0h] [rbp+40h]

  v26 = a1;
  v6 = 0;
  v7 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v28, (struct PDEVOBJ *)&v26);
  v9 = v26;
  v10 = 0;
  v11 = (const struct _SPRITESTATE *)(v26 + 20);
  if ( *((_DWORD *)v26 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v11, a2, 0LL, 0);
    if ( MetaSprite )
    {
      LODWORD(v20) = 0;
      if ( v18 )
      {
        v15 = v17 + 1;
        do
        {
          v27 = (struct SPRITE *)*((_QWORD *)MetaSprite + (unsigned int)v20 + 3);
          v25 = *(_DWORD *)v27 & 0x200;
          v31 = pSpHintSpriteShape(v27, a3, a4);
          if ( !v31 )
          {
            while ( (_DWORD)v20 )
            {
              v20 = (unsigned int)(v20 - 1);
              pSpHintSpriteShape(*((struct SPRITE **)MetaSprite + v20 + 3), 0LL, a4);
            }
            SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v28);
            return v6;
          }
          if ( !v25 && (*(_DWORD *)v27 & 0x200) != 0 )
            v10 = v15;
          if ( a5 && !ERECTL::bEmpty((struct SPRITE *)((char *)v27 + 80)) )
          {
            v29 = *v21;
            v30 = v29;
            vSpAddAndCompactDirtyRect(v22, &v30);
          }
          LODWORD(v20) = v15 + v20;
        }
        while ( (unsigned int)v20 < *((_DWORD *)v9 + 35) );
        v23 = *((_DWORD *)MetaSprite + 4) | 0x40;
        if ( !a3 )
          v23 = *((_DWORD *)MetaSprite + 4) & 0xFFFFFFBF;
        *((_DWORD *)MetaSprite + 4) = v23;
        goto LABEL_6;
      }
    }
  }
  else
  {
    Sprite = pSpGetSprite(v11, a2, 0LL);
    v13 = (const signed __int32 *)Sprite;
    if ( Sprite )
    {
      v14 = *(_DWORD *)Sprite;
      v31 = pSpHintSpriteShape(Sprite, a3, a4);
      v15 = 1;
      if ( (v14 & 0x200) == 0 )
        v10 = _bittest(v13, 9u);
      if ( a5 && !ERECTL::bEmpty((ERECTL *)(v13 + 20)) )
      {
        v29 = *v24;
        v30 = v29;
        vSpAddAndCompactDirtyRect(v13, &v30);
      }
LABEL_6:
      if ( v10 == v15 )
        _InterlockedAdd(&glDelayedHintShape, v15);
      v7 = v31;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v28);
  return v7;
}
