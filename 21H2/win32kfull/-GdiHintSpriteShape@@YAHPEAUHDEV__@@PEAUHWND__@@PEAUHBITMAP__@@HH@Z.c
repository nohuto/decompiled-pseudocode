/*
 * XREFs of ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00EE608
 * Callers:
 *     GreHintSpriteShape @ 0x1C00BDB88 (GreHintSpriteShape.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00EA5BC (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00EAF9C (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00EE6F4 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C00F03A0 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C0165C98 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0281D78 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GdiHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, int a4, int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r15d
  HDEV v9; // r13
  BOOL v10; // esi
  const struct _SPRITESTATE *v11; // rcx
  struct SPRITE *Sprite; // rax
  struct SPRITE *v13; // r14
  int v14; // ebx
  int v16; // r9d
  struct _METASPRITE *MetaSprite; // r14
  __int64 v18; // rbx
  __int128 *v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int128 *v22; // rcx
  int v23; // [rsp+20h] [rbp-60h]
  HDEV v24; // [rsp+28h] [rbp-58h] BYREF
  __int128 v25; // [rsp+30h] [rbp-50h]
  _BYTE v26[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v27; // [rsp+50h] [rbp-30h]
  __int128 v28; // [rsp+60h] [rbp-20h] BYREF
  __int128 v29; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v30; // [rsp+C0h] [rbp+40h]

  v24 = a1;
  v6 = 0;
  v7 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v26, (struct PDEVOBJ *)&v24);
  v9 = v24;
  v10 = 0;
  v11 = (const struct _SPRITESTATE *)(v24 + 22);
  if ( *((_DWORD *)v24 + 37) )
  {
    MetaSprite = pSpGetMetaSprite(v11, a2, 0LL);
    if ( MetaSprite )
    {
      LODWORD(v18) = 0;
      if ( v16 )
      {
        do
        {
          *(_QWORD *)&v25 = *((_QWORD *)MetaSprite + (unsigned int)v18 + 3);
          v23 = *(_DWORD *)v25 & 0x200;
          v30 = pSpHintSpriteShape((struct SPRITE *)v25, a3, a4);
          if ( !v30 )
          {
            while ( (_DWORD)v18 )
            {
              v18 = (unsigned int)(v18 - 1);
              pSpHintSpriteShape(*((struct SPRITE **)MetaSprite + v18 + 3), 0LL, a4);
            }
            SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v26);
            return v6;
          }
          if ( !v23 && (*(_DWORD *)v25 & 0x200) != 0 )
            v10 = 1;
          if ( a5 && !ERECTL::bEmpty((ERECTL *)(v25 + 80)) )
          {
            v27 = *v19;
            v28 = v27;
            vSpAddAndCompactDirtyRect(v20, &v28);
          }
          LODWORD(v18) = v18 + 1;
        }
        while ( (unsigned int)v18 < *((_DWORD *)v9 + 37) );
        v21 = *((_DWORD *)MetaSprite + 4) | 0x40;
        if ( !a3 )
          v21 = *((_DWORD *)MetaSprite + 4) & 0xFFFFFFBF;
        *((_DWORD *)MetaSprite + 4) = v21;
        goto LABEL_6;
      }
    }
  }
  else
  {
    Sprite = pSpGetSprite(v11, a2, 0LL);
    v13 = Sprite;
    if ( Sprite )
    {
      v14 = *(_DWORD *)Sprite;
      v30 = pSpHintSpriteShape(Sprite, a3, a4);
      if ( (v14 & 0x200) == 0 )
        v10 = (*(_DWORD *)v13 & 0x200) != 0;
      if ( a5 && !ERECTL::bEmpty((struct SPRITE *)((char *)v13 + 80)) )
      {
        v25 = *v22;
        v29 = v25;
        vSpAddAndCompactDirtyRect(v13, &v29);
      }
LABEL_6:
      if ( v10 )
        _InterlockedAdd(&glDelayedHintShape, 1u);
      v7 = v30;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v26);
  return v7;
}
