/*
 * XREFs of ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C028099C
 * Callers:
 *     EngControlSprites @ 0x1C02820F0 (EngControlSprites.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0031174 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0085FE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0086B34 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00B68CC (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00FAE0C (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00FAE48 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0155D28 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C015667C (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027BAD4 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C027BC24 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 */

void __fastcall vSpDeviceControlSprites(HDEV a1, struct EWNDOBJ *a2, int a3)
{
  HDEV v5; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  struct SPRITE *v10; // rdx
  int v11; // ebx
  struct SPRITE *v12; // [rsp+48h] [rbp-C0h] BYREF
  HDEV v13; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v14[16]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v15[96]; // [rsp+68h] [rbp-A0h] BYREF
  struct _SPRITESTATE *v16[24]; // [rsp+C8h] [rbp-40h] BYREF
  struct _RECTL v17; // [rsp+188h] [rbp+80h] BYREF
  struct _RECTL v18; // [rsp+198h] [rbp+90h] BYREF

  v12 = 0LL;
  v13 = a1;
  v17 = 0LL;
  v18 = 0LL;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v16, (struct PDEVOBJ *)&v13);
  v5 = v13 + 20;
  UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v14, a2, (struct _SPRITESTATE *)(v13 + 20));
  v6 = *((_DWORD *)a2 + 46);
  if ( a3 == 1 )
  {
    v7 = v6 | 0x1000000;
    *((_DWORD *)a2 + 46) = v7;
    if ( (v7 & 0x2000000) != 0
      && bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)(v5 + 10), &v18) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v15, (struct _SPRITESTATE *)v5, &v18, 0, 0LL);
      do
      {
        v8 = ENUMAREAS::bEnum((ENUMAREAS *)v15, &v12, &v17);
        if ( v12 )
          INVOKEOFFCOPYBITS(
            &gptlZero,
            *((struct _SURFOBJ **)v5 + 4),
            (struct _POINTL *)v12 + 21,
            *((struct _SURFOBJ **)v12 + 20),
            (struct _CLIPOBJ *)a2,
            0LL,
            &v17,
            (struct _POINTL *)&v17);
      }
      while ( v8 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v15);
    }
    vSpComputeUnlockedRegion((struct _SPRITESTATE *)v5);
  }
  else
  {
    *((_DWORD *)a2 + 46) = v6 & 0xFEFFFFFF;
    vSpComputeUnlockedRegion((struct _SPRITESTATE *)v5);
    if ( (*((_DWORD *)a2 + 46) & 0x2000000) != 0
      && bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)(v5 + 10), &v18) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v15, (struct _SPRITESTATE *)v5, &v18, 0, 0LL);
      do
      {
        v9 = ENUMAREAS::bEnum((ENUMAREAS *)v15, &v12, &v17);
        v10 = v12;
        v11 = v9;
        if ( v12 )
        {
          while ( 1 )
          {
            INVOKEOFFCOPYBITS(
              (struct _POINTL *)v10 + 21,
              *((struct _SURFOBJ **)v10 + 20),
              &gptlZero,
              *((struct _SURFOBJ **)v5 + 4),
              (struct _CLIPOBJ *)a2,
              0LL,
              &v17,
              (struct _POINTL *)&v17);
            if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v15, &v12) )
              break;
            v10 = v12;
          }
        }
      }
      while ( v11 );
      vSpRedrawArea((struct _SPRITESTATE *)v5, &v18, 1);
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v15);
    }
  }
  UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v14);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v16);
}
