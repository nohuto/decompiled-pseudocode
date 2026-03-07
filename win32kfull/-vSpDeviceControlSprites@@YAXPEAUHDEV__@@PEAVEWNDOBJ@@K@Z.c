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
  struct _POINTL v14; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v15[24]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v16[96]; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v17[24]; // [rsp+D8h] [rbp-30h] BYREF
  struct _RECTL v18; // [rsp+198h] [rbp+90h] BYREF
  struct _RECTL v19; // [rsp+1A8h] [rbp+A0h] BYREF

  v12 = 0LL;
  v13 = a1;
  v18 = 0LL;
  v19 = 0LL;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v17, (struct PDEVOBJ *)&v13);
  v5 = v13 + 20;
  UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v15, a2, (struct _SPRITESTATE *)(v13 + 20));
  v14 = 0LL;
  v6 = *((_DWORD *)a2 + 46);
  if ( a3 == 1 )
  {
    v7 = v6 | 0x1000000;
    *((_DWORD *)a2 + 46) = v7;
    if ( (v7 & 0x2000000) != 0
      && bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)(v5 + 10), &v19) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v16, (struct _SPRITESTATE *)v5, &v19, 0, 0LL);
      do
      {
        v8 = ENUMAREAS::bEnum((ENUMAREAS *)v16, &v12, &v18);
        if ( v12 )
          INVOKEOFFCOPYBITS(
            &v14,
            *((struct _SURFOBJ **)v5 + 4),
            (struct _POINTL *)v12 + 21,
            *((struct _SURFOBJ **)v12 + 20),
            (struct _CLIPOBJ *)a2,
            0LL,
            &v18,
            (struct _POINTL *)&v18);
      }
      while ( v8 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v16);
    }
    vSpComputeUnlockedRegion((REGION **)v5);
  }
  else
  {
    *((_DWORD *)a2 + 46) = v6 & 0xFEFFFFFF;
    vSpComputeUnlockedRegion((REGION **)v5);
    if ( (*((_DWORD *)a2 + 46) & 0x2000000) != 0
      && bIntersect((const struct _RECTL *)((char *)a2 + 4), (const struct _RECTL *)(v5 + 10), &v19) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v16, (struct _SPRITESTATE *)v5, &v19, 0, 0LL);
      do
      {
        v9 = ENUMAREAS::bEnum((ENUMAREAS *)v16, &v12, &v18);
        v10 = v12;
        v11 = v9;
        if ( v12 )
        {
          while ( 1 )
          {
            INVOKEOFFCOPYBITS(
              (struct _POINTL *)v10 + 21,
              *((struct _SURFOBJ **)v10 + 20),
              &v14,
              *((struct _SURFOBJ **)v5 + 4),
              (struct _CLIPOBJ *)a2,
              0LL,
              &v18,
              (struct _POINTL *)&v18);
            if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v16, &v12) )
              break;
            v10 = v12;
          }
        }
      }
      while ( v11 );
      vSpRedrawArea((struct _SPRITESTATE *)v5, &v19, 1);
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v16);
    }
  }
  UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v15);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v17);
}
