/*
 * XREFs of ?vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x1C00ED478
 * Callers:
 *     vSpDisableSpritesWrap @ 0x1C00ED460 (vSpDisableSpritesWrap.c)
 * Callees:
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C00ED5D8 (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00ED604 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C00ED794 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

void *__fastcall vSpDisableSprites(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  REGION *v7; // rcx
  REGION *v8; // rcx
  REGION *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rbx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  v2 = a1 + 88;
  v4 = *(_QWORD *)(a1 + 1208);
  *(_QWORD *)(v2 + 1120) = 0LL;
  *(_QWORD *)(v2 + 1112) = 0LL;
  *(_DWORD *)(v2 + 1084) = 0;
  if ( v4 )
  {
    do
    {
      v13 = *(_QWORD *)(v4 + 24);
      vSpDeleteSprite((struct SPRITE *)v4);
      v4 = v13;
    }
    while ( v13 );
  }
  vSpDeleteExMirror(*(HDEV *)v2);
  if ( a2 != 2 )
    vSpDeleteSurface(*(struct _SURFOBJ **)(v2 + 1024));
  v14 = *(_QWORD *)(v2 + 696);
  v15 = *(_QWORD *)(v2 + 704);
  v16 = *(_QWORD *)(v2 + 864);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
  GreDeleteObject(*(_QWORD *)(v2 + 1056));
  v5 = *(void **)(v2 + 136);
  if ( v5 )
    Win32FreePool(v5);
  v6 = *(void **)(v2 + 64);
  if ( v6 )
    EngFreeMem(v6);
  v7 = *(REGION **)(v2 + 1032);
  if ( v7 )
    REGION::vDeleteREGION(v7);
  v8 = *(REGION **)(v2 + 1040);
  if ( v8 )
    REGION::vDeleteREGION(v8);
  v9 = *(REGION **)(v2 + 1048);
  if ( v9 )
    REGION::vDeleteREGION(v9);
  v10 = *(_QWORD *)(v2 + 120);
  if ( v10 )
    GreDeleteSemaphore(v10);
  v11 = *(_QWORD *)(v2 + 128);
  if ( v11 )
    GreDeleteSemaphore(v11);
  return memset((void *)v2, 0, 0x540uLL);
}
