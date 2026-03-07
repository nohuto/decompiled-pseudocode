__int64 __fastcall bSpTearDownSprites(HDEV a1, struct _RECTL *a2, int a3)
{
  HDEV v6; // rbx
  unsigned int v7; // edi
  int v8; // esi
  struct SPRITE *v9; // [rsp+30h] [rbp-D0h] BYREF
  HDEV v10; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v11[96]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v12[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v13; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v14; // [rsp+170h] [rbp+70h] BYREF

  v9 = 0LL;
  v14 = 0LL;
  v10 = a1;
  v13 = 0LL;
  if ( ((_DWORD)a1[10] & 1) == 0 )
    return 0LL;
  v6 = a1 + 20;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v12, (struct PDEVOBJ *)&v10);
  v7 = 0;
  if ( *((_DWORD *)v6 + 14) && bIntersect(a2, (const struct _RECTL *)(v6 + 10), &v13) )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v11, (struct _SPRITESTATE *)v6, &v13, 0, 0LL);
    do
    {
      v8 = ENUMAREAS::bEnum((ENUMAREAS *)v11, &v9, &v14);
      if ( v9 )
      {
        v7 = 1;
        vSpWriteToScreen((struct _SPRITESTATE *)v6, (struct _POINTL *)v9 + 21, *((struct _SURFOBJ **)v9 + 20), &v14);
      }
    }
    while ( v8 );
    if ( a3 )
      vSpComputeUnlockedRegion((REGION **)v6);
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v11);
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v12);
  return v7;
}
