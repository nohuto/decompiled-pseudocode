/*
 * XREFs of vSpUnTearDownSprites @ 0x1C0286E00
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0271484 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     ?GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027D80C (-GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0018908 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0018A84 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0018B14 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0065AF0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065E34 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C010DA60 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C027FE68 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0283F18 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C028445C (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 */

void __fastcall vSpUnTearDownSprites(__int64 a1, const struct _RECTL *a2, int a3)
{
  REGION **v3; // rbx
  int v5; // eax
  struct SPRITE *v6; // r8
  int v7; // edi
  struct SPRITE *v8; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v10[96]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v11[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v12; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v13; // [rsp+170h] [rbp+70h] BYREF

  v8 = 0LL;
  v3 = (REGION **)(a1 + 80);
  v9 = a1;
  v13 = 0LL;
  v12 = 0LL;
  if ( *(_DWORD *)(a1 + 136) && bIntersect(a2, (const struct _RECTL *)(a1 + 120), &v12) )
  {
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v11, (struct PDEVOBJ *)&v9);
    if ( a3 )
      vSpComputeUnlockedRegion(v3);
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v10, (struct _SPRITESTATE *)v3, &v12, 0, 0LL);
    do
    {
      v5 = ENUMAREAS::bEnum((ENUMAREAS *)v10, &v8, &v13);
      v6 = v8;
      v7 = v5;
      if ( v8 )
      {
        while ( 1 )
        {
          vSpReadFromScreen((struct _SPRITESTATE *)v3, (struct _POINTL *)v6 + 21, *((struct _SURFOBJ **)v6 + 20), &v13);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v10, &v8) )
            break;
          v6 = v8;
        }
      }
    }
    while ( v7 );
    vSpRedrawArea((struct _SPRITESTATE *)v3, &v12, 1);
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v10);
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v11);
  }
}
