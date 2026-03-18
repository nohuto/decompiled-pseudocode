/*
 * XREFs of ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027EEA4
 * Callers:
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0273714 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027CCDC (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0085FE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0086B34 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00B68CC (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00FAE0C (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00FAE48 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C015638C (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall bSpTearDownSprites(HDEV a1, struct _RECTL *a2, int a3)
{
  unsigned int v3; // ebx
  HDEV v6; // rdi
  int v7; // esi
  int v8; // r14d
  struct SPRITE *v10; // [rsp+38h] [rbp-D0h] BYREF
  HDEV v11; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v12[96]; // [rsp+48h] [rbp-C0h] BYREF
  struct _SPRITESTATE *v13[24]; // [rsp+A8h] [rbp-60h] BYREF
  struct _RECTL v14; // [rsp+168h] [rbp+60h] BYREF
  struct _RECTL v15; // [rsp+178h] [rbp+70h] BYREF

  v11 = a1;
  v3 = 0;
  v15 = 0LL;
  v10 = 0LL;
  v14 = 0LL;
  if ( ((_DWORD)a1[10] & 1) != 0 )
  {
    v6 = a1 + 20;
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v13, (struct PDEVOBJ *)&v11);
    v7 = 0;
    if ( *((_DWORD *)v6 + 14) && bIntersect(a2, (const struct _RECTL *)(v6 + 10), &v14) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v12, (struct _SPRITESTATE *)v6, &v14, 0, 0LL);
      do
      {
        v8 = ENUMAREAS::bEnum((ENUMAREAS *)v12, &v10, &v15);
        if ( v10 )
        {
          v7 = 1;
          vSpWriteToScreen((struct _SPRITESTATE *)v6, (struct _POINTL *)v10 + 21, *((struct _SURFOBJ **)v10 + 20), &v15);
        }
      }
      while ( v8 );
      if ( a3 )
        vSpComputeUnlockedRegion((struct _SPRITESTATE *)v6);
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v12);
    }
    v3 = v7;
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v13);
  }
  return v3;
}
