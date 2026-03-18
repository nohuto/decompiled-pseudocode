/*
 * XREFs of ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027C8A0
 * Callers:
 *     EngSetPointerShape @ 0x1C0153BE0 (EngSetPointerShape.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0085FE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B56F4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C00B594C (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B6430 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027C278 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C027F188 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
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
  unsigned int v15; // ebp
  unsigned int v16; // esi
  HDEV hdev; // rbx
  struct _RECTL *v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rbx
  struct SPRITE *Sprite; // rax
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rdi
  __int64 v25; // rdi
  struct _RECTL *v26; // rsi
  int v27; // ecx
  struct _SPRITESTATE *v29[31]; // [rsp+30h] [rbp-F8h] BYREF
  HDEV v30; // [rsp+130h] [rbp+8h] BYREF
  __int64 v31; // [rsp+138h] [rbp+10h] BYREF

  v13 = ((a10 >> 8) & 0xF) + 1;
  v15 = 2;
  if ( (unsigned __int8)(a10 >> 12) )
    v16 = 0x3E8u / (unsigned __int8)(a10 >> 12);
  else
    v16 = 0;
  hdev = a1->hdev;
  v30 = hdev;
  v31 = ghsemSprite;
  GreAcquireSemaphore(ghsemSprite);
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
      v22 = *((_QWORD *)hdev + 150);
      *((_QWORD *)hdev + 150) = *(_QWORD *)(v22 + 24);
      vSpDeleteSprite((struct SPRITE *)v22);
      --*((_DWORD *)hdev + 291);
    }
    v23 = *((_QWORD *)hdev + 149) == 0LL;
    *((_DWORD *)hdev + 293) = v16;
    if ( !v23 )
    {
      v24 = *((_QWORD *)hdev + 150);
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v29, (struct PDEVOBJ *)&v30);
      while ( v24 )
      {
        bSpUpdatePosition((struct SPRITE *)v24, 0LL, 0, 0);
        vSpRedrawSprite((struct SPRITE *)v24);
        v24 = *(_QWORD *)(v24 + 24);
      }
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v29);
      v25 = *((_QWORD *)hdev + 150);
      v26 = a9;
      while ( v25 )
      {
        if ( !(unsigned int)bSpUpdateCursor((struct SPRITE *)v25, psoSrc, a3, a4, v26) )
        {
          v15 = 0;
          break;
        }
        v25 = *(_QWORD *)(v25 + 24);
      }
      v27 = a6;
      *((_DWORD *)hdev + 288) = a5 - v26->left;
      *((_DWORD *)hdev + 289) = v27 - v26->top;
    }
    GdiMovePointer(a1, a7, a8, v18, 1);
  }
  else
  {
    v19 = *((_QWORD *)hdev + 150);
    *((_QWORD *)hdev + 150) = 0LL;
    *((_QWORD *)hdev + 149) = 0LL;
    *((_DWORD *)hdev + 291) = 0;
    if ( v19 )
    {
      do
      {
        v20 = *(_QWORD *)(v19 + 24);
        vSpDeleteSprite((struct SPRITE *)v19);
        v19 = v20;
      }
      while ( v20 );
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v31);
  return v15;
}
