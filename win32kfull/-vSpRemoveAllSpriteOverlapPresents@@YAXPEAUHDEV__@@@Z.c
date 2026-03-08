/*
 * XREFs of ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C010D944
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00E5A90 (vSpDynamicModeChange.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C010D79C (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C010D9A8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C028512C (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

void __fastcall vSpRemoveAllSpriteOverlapPresents(Gre::Base *a1)
{
  int v1; // ebp
  HDEV v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  struct _POINTL v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (HDEV)((char *)a1 + 80);
  v3 = (_QWORD *)*((_QWORD *)a1 + 20);
  v5 = 0LL;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)v3[1];
      if ( !v1 )
      {
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, &v5, (struct _RECTL *)(v2 + 10), 0LL, 1);
        v1 = 1;
      }
      Win32FreePool(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  *((_QWORD *)v2 + 10) = 0LL;
  Gre::Base::Globals(a1);
  vSpComputeNoPresentRegion((struct _SPRITESTATE *)v2, 0);
}
