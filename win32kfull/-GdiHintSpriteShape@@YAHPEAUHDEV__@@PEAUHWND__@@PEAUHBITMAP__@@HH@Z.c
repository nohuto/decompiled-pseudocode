__int64 __fastcall GdiHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, int a4, int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r15d
  HDEV v10; // r13
  int v11; // esi
  const struct _SPRITESTATE *v12; // rcx
  struct SPRITE *Sprite; // rax
  __int128 *v14; // rcx
  const signed __int32 *v15; // r14
  int v16; // ebx
  __int64 v17; // rax
  int v19; // r10d
  struct _METASPRITE *MetaSprite; // r14
  __int64 v21; // rbx
  __int64 v22; // r15
  int v23; // r12d
  __int128 *v24; // rcx
  HDEV v25; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v26[8]; // [rsp+28h] [rbp-60h] BYREF
  __int128 v27; // [rsp+30h] [rbp-58h]
  _OWORD v28[4]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+8h]

  v25 = a1;
  v6 = 0;
  v7 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v26, (struct PDEVOBJ *)&v25);
  v10 = v25;
  v11 = 0;
  v12 = (const struct _SPRITESTATE *)(v25 + 20);
  if ( *((_DWORD *)v25 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v12, a2, 0LL, 0);
    if ( MetaSprite )
    {
      LODWORD(v21) = 0;
      if ( v19 )
      {
        do
        {
          v22 = *((_QWORD *)MetaSprite + (unsigned int)v21 + 3);
          v23 = *(_DWORD *)v22 & 0x200;
          v29 = pSpHintSpriteShape((struct SPRITE *)v22, a3, a4);
          if ( !v29 )
          {
            while ( (_DWORD)v21 )
            {
              v21 = (unsigned int)(v21 - 1);
              pSpHintSpriteShape(*((struct SPRITE **)MetaSprite + v21 + 3), 0LL, a4);
            }
            goto LABEL_9;
          }
          if ( !v23 && (*(_DWORD *)v22 & 0x200) != 0 )
            v11 = 1;
          if ( a5 && !ERECTL::bEmpty((ERECTL *)(v22 + 80)) )
          {
            v27 = *v24;
            v28[0] = v27;
            vSpAddAndCompactDirtyRect(v22, v28);
          }
          LODWORD(v21) = v21 + 1;
        }
        while ( (unsigned int)v21 < *((_DWORD *)v10 + 35) );
        v7 = v29;
        v14 = (__int128 *)(*((_DWORD *)MetaSprite + 4) | 0x40u);
        if ( !a3 )
          v14 = (__int128 *)(*((_DWORD *)MetaSprite + 4) & 0xFFFFFFBF);
        *((_DWORD *)MetaSprite + 4) = (_DWORD)v14;
      }
    }
  }
  else
  {
    Sprite = pSpGetSprite(v12, a2, 0LL);
    v15 = (const signed __int32 *)Sprite;
    if ( Sprite )
    {
      v16 = *(_DWORD *)Sprite;
      v7 = pSpHintSpriteShape(Sprite, a3, a4);
      if ( (v16 & 0x200) == 0 )
        v11 = _bittest(v15, 9u);
      if ( a5 && !ERECTL::bEmpty((ERECTL *)(v15 + 20)) )
      {
        v27 = *v14;
        v28[0] = v27;
        vSpAddAndCompactDirtyRect(v15, v28);
      }
    }
  }
  v17 = SGDGetSessionState(v14);
  if ( v11 == 1 )
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v17 + 32) + 23656LL), 1u);
  v6 = v7;
LABEL_9:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v26);
  return v6;
}
