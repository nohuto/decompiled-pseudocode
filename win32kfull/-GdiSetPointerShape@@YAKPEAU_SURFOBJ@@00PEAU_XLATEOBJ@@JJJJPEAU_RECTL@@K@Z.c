/*
 * XREFs of ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027D338
 * Callers:
 *     EngSetPointerShape @ 0x1C0127EE0 (EngSetPointerShape.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0065AF0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065E34 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C010C4F0 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C010D1FC (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C010E078 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027CD08 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C0281428 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 */

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
