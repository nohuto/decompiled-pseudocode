__int64 __fastcall GdiHintSpriteShapeDelayDelete(HDEV a1, HWND a2, HBITMAP a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // r15d
  HDEV v7; // r13
  int v8; // r14d
  const struct _SPRITESTATE *v9; // rcx
  __int64 v10; // rcx
  struct _METASPRITE *MetaSprite; // rsi
  int v12; // r10d
  __int64 v13; // rdi
  struct SPRITE *v14; // rcx
  int v15; // r12d
  __int64 v16; // rax
  struct SPRITE *v18; // rdi
  int v19; // ebx
  _BYTE v20[72]; // [rsp+20h] [rbp-48h] BYREF
  HDEV v21; // [rsp+70h] [rbp+8h] BYREF
  HBITMAP hsurf; // [rsp+80h] [rbp+18h]

  hsurf = a3;
  v21 = a1;
  v4 = 0;
  v5 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v20, (struct PDEVOBJ *)&v21);
  v7 = v21;
  v8 = 0;
  v9 = (const struct _SPRITESTATE *)(v21 + 20);
  if ( *((_DWORD *)v21 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v9, a2, 0LL, 1);
    if ( MetaSprite )
    {
      LODWORD(v13) = 0;
      if ( v12 )
      {
        do
        {
          v14 = (struct SPRITE *)*((_QWORD *)MetaSprite + (unsigned int)v13 + 3);
          v15 = *(_DWORD *)v14 & 0x200;
          v5 = pSpHintSpriteShape(v14, (HSURF)hsurf, 0);
          if ( !v5 )
          {
            while ( (_DWORD)v13 )
            {
              v13 = (unsigned int)(v13 - 1);
              pSpHintSpriteShape(*((struct SPRITE **)MetaSprite + v13 + 3), 0LL, 0);
            }
            goto LABEL_15;
          }
          if ( !v15 && (**((_DWORD **)MetaSprite + (unsigned int)v13 + 3) & 0x200) != 0 )
            v8 = 1;
          LODWORD(v13) = v13 + 1;
        }
        while ( (unsigned int)v13 < *((_DWORD *)v7 + 35) );
        v10 = *((_DWORD *)MetaSprite + 4) | 0x40u;
        if ( !hsurf )
          v10 = *((_DWORD *)MetaSprite + 4) & 0xFFFFFFBF;
        *((_DWORD *)MetaSprite + 4) = v10;
      }
    }
  }
  else
  {
    v18 = pSpGetSpriteDelayDelete(v9, a2, 0LL);
    v19 = *(_DWORD *)v18;
    v5 = pSpHintSpriteShape(v18, (HSURF)a3, 0);
    if ( (v19 & 0x200) == 0 && _bittest((const signed __int32 *)v18, 9u) )
    {
      v16 = SGDGetSessionState(v10);
      goto LABEL_13;
    }
  }
  v16 = SGDGetSessionState(v10);
  if ( v8 == 1 )
LABEL_13:
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v16 + 32) + 23656LL), 1u);
  v4 = v5;
LABEL_15:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v20);
  return v4;
}
