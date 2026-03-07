__int64 __fastcall bSpUpdateSpriteDevLockEnd(_DWORD *a1, HDC **a2, struct _RECTL *a3)
{
  unsigned int v3; // ebx
  HDC *v7; // r9
  HDEV v8; // rdi
  int v9; // r10d
  const struct _SPRITESTATE *v10; // rcx
  HWND v11; // rdx
  int v12; // r9d
  int v13; // r10d
  struct _METASPRITE *MetaSprite; // r15
  __int64 v15; // rsi
  struct SPRITE *Sprite; // rcx
  HDC *v17; // r9
  struct _POINTL v18; // [rsp+80h] [rbp+8h] BYREF
  struct tagSIZE v19; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  if ( (a1[10] & 0x400) != 0 )
    return 0LL;
  v7 = *a2;
  v8 = (HDEV)(a1 + 20);
  v18 = 0LL;
  v9 = a1[35];
  v10 = (const struct _SPRITESTATE *)(a1 + 20);
  v11 = (HWND)v7[59];
  v19 = (struct tagSIZE)v7[64];
  if ( v9 )
  {
    MetaSprite = pSpGetMetaSprite(v10, v11, 0LL, 0);
    if ( MetaSprite )
    {
      v15 = 0LL;
      v3 = v12 + 1;
      if ( v13 )
      {
        do
        {
          v3 &= bSpUpdateSprite(
                  *((struct SPRITE **)MetaSprite + v15 + 3),
                  0LL,
                  0LL,
                  &v19,
                  **a2,
                  &v18,
                  0,
                  0LL,
                  0x40200000u,
                  a3);
          v15 = (unsigned int)(v15 + 1);
        }
        while ( (unsigned int)v15 < *((_DWORD *)v8 + 15) );
      }
    }
  }
  else
  {
    Sprite = pSpGetSprite(v10, v11, 0LL);
    if ( Sprite )
      return (unsigned int)bSpUpdateSprite(Sprite, 0LL, 0LL, &v19, *v17, &v18, 0, 0LL, 0x40200000u, a3);
  }
  return v3;
}
