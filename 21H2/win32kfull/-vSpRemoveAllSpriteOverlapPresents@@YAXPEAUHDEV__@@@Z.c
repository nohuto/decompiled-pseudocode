/*
 * XREFs of ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00B67C4
 * Callers:
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C00B62C0 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     vSpDynamicModeChange @ 0x1C00B7500 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00B6818 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0281544 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

void __fastcall vSpRemoveAllSpriteOverlapPresents(_QWORD *a1, struct _POINTL *a2)
{
  HDEV v2; // rbx
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rsi

  v2 = (HDEV)(a1 + 10);
  v3 = 0;
  v4 = a1[20];
  if ( v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 8);
      if ( !v3 )
      {
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, a2, (struct _RECTL *)(v2 + 10), 0LL, 1);
        v3 = 1;
      }
      Win32FreePool(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  *((_QWORD *)v2 + 10) = 0LL;
  vSpComputeNoPresentRegion((struct _SPRITESTATE *)v2, 0);
}
