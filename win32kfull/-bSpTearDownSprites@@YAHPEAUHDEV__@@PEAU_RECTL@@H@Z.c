/*
 * XREFs of ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C02810C0
 * Callers:
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0271100 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027D798 (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0018908 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0018A84 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0018B14 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0065AF0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065E34 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C010DA60 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0285CF0 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

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
