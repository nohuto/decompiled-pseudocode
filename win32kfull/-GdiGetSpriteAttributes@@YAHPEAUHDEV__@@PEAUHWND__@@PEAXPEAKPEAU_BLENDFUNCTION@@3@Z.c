__int64 __fastcall GdiGetSpriteAttributes(
        HDEV a1,
        HWND a2,
        void *a3,
        unsigned int *a4,
        struct _BLENDFUNCTION *a5,
        unsigned int *a6)
{
  unsigned int v8; // ebx
  const struct _SPRITESTATE *v9; // rcx
  struct SPRITE *Sprite; // rax
  struct _METASPRITE *MetaSprite; // rax
  char v13; // [rsp+30h] [rbp+8h] BYREF
  HDEV v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = a1;
  v8 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v13, (struct PDEVOBJ *)&v14);
  v9 = (const struct _SPRITESTATE *)(v14 + 20);
  if ( *((_DWORD *)v14 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v9, a2, 0LL, 0);
    if ( !MetaSprite )
      goto LABEL_5;
    Sprite = (struct SPRITE *)*((_QWORD *)MetaSprite + 3);
  }
  else
  {
    Sprite = pSpGetSprite(v9, a2, 0LL);
  }
  if ( Sprite )
  {
    v8 = 1;
    *a4 = *((_DWORD *)Sprite + 58);
    *a5 = *(struct _BLENDFUNCTION *)((char *)Sprite + 228);
    *a6 = *((_DWORD *)Sprite + 56);
  }
LABEL_5:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v13);
  return v8;
}
