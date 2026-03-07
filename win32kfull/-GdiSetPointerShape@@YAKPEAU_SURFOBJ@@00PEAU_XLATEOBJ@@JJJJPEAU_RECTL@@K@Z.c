__int64 __fastcall GdiSetPointerShape(
        struct _SURFOBJ *a1,
        SURFOBJ *psoSrc,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct _RECTL *a9,
        unsigned int a10)
{
  unsigned int v13; // edi
  Gre::Base *v14; // rcx
  unsigned int v16; // ebp
  unsigned int v17; // esi
  HDEV hdev; // rbx
  struct _RECTL *v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rbx
  struct SPRITE *Sprite; // rax
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rdi
  __int64 v26; // rdi
  struct _RECTL *v27; // rsi
  int v28; // ecx
  __int64 *v30[31]; // [rsp+30h] [rbp-F8h] BYREF
  HDEV v31; // [rsp+130h] [rbp+8h] BYREF
  __int64 v32; // [rsp+138h] [rbp+10h] BYREF

  v13 = ((a10 >> 8) & 0xF) + 1;
  v14 = (Gre::Base *)(unsigned __int8)(a10 >> 12);
  v16 = 2;
  if ( (unsigned __int8)(a10 >> 12) )
    v17 = 0x3E8 / (unsigned int)v14;
  else
    v17 = 0;
  hdev = a1->hdev;
  v31 = hdev;
  v32 = *((_QWORD *)Gre::Base::Globals(v14) + 14);
  GreAcquireSemaphore(v32);
  if ( psoSrc || a3 )
  {
    while ( *((_DWORD *)hdev + 291) < v13 )
    {
      Sprite = pSpCreateSprite(hdev, 0LL, 0LL, 0LL);
      if ( !Sprite )
        break;
      if ( !*((_QWORD *)hdev + 149) )
        *((_QWORD *)hdev + 149) = Sprite;
      ++*((_DWORD *)hdev + 291);
      *((_QWORD *)hdev + 150) = Sprite;
    }
    while ( *((_DWORD *)hdev + 291) > v13 )
    {
      v23 = *((_QWORD *)hdev + 150);
      *((_QWORD *)hdev + 150) = *(_QWORD *)(v23 + 24);
      vSpDeleteSprite((struct SPRITE *)v23);
      --*((_DWORD *)hdev + 291);
    }
    v24 = *((_QWORD *)hdev + 149) == 0LL;
    *((_DWORD *)hdev + 293) = v17;
    if ( !v24 )
    {
      v25 = *((_QWORD *)hdev + 150);
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v30, (struct PDEVOBJ *)&v31);
      while ( v25 )
      {
        bSpUpdatePosition((struct SPRITE *)v25, 0LL, 0, 0);
        vSpRedrawSprite((struct SPRITE *)v25);
        v25 = *(_QWORD *)(v25 + 24);
      }
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v30);
      v26 = *((_QWORD *)hdev + 150);
      v27 = a9;
      while ( v26 )
      {
        if ( !(unsigned int)bSpUpdateCursor((struct SPRITE *)v26, psoSrc, a3, a4, v27) )
        {
          v16 = 0;
          break;
        }
        v26 = *(_QWORD *)(v26 + 24);
      }
      v28 = a6;
      *((_DWORD *)hdev + 288) = a5 - v27->left;
      *((_DWORD *)hdev + 289) = v28 - v27->top;
    }
    GdiMovePointer(a1, a7, a8, v19, 1);
  }
  else
  {
    v20 = *((_QWORD *)hdev + 150);
    *((_QWORD *)hdev + 150) = 0LL;
    *((_QWORD *)hdev + 149) = 0LL;
    *((_DWORD *)hdev + 291) = 0;
    if ( v20 )
    {
      do
      {
        v21 = *(_QWORD *)(v20 + 24);
        vSpDeleteSprite((struct SPRITE *)v20);
        v20 = v21;
      }
      while ( v21 );
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v32);
  return v16;
}
