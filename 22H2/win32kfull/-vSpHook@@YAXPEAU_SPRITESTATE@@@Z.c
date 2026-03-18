/*
 * XREFs of ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C001B69C
 * Callers:
 *     bSpEnableSprites @ 0x1C001BBF0 (bSpEnableSprites.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C00B9034 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C01137BC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001B7D4 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001B818 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C001E774 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpHook(struct _SPRITESTATE *a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rdx
  bool v4; // zf

  v1 = *(_QWORD **)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 2528LL);
  *((_DWORD *)a1 + 26) = 1;
  *((_DWORD *)a1 + 25) = *(_DWORD *)(v3 + 112) | 0x3A5EF;
  v1[349] = SpStrokeAndFillPath;
  v1[347] = SpStrokePath;
  v1[348] = SpFillPath;
  v1[351] = SpBitBlt;
  v1[352] = SpCopyBits;
  v1[353] = SpStretchBlt;
  v1[356] = SpTextOut;
  v1[364] = SpLineTo;
  v1[407] = SpTransparentBlt;
  v1[404] = SpAlphaBlend;
  v1[403] = SpPlgBlt;
  v1[401] = SpGradientFill;
  v1[423] = SpDrawStream;
  v1[402] = SpStretchBltROP;
  v1[373] = SpSaveScreenBits;
  v4 = *((_DWORD *)a1 + 29) == 0;
  *((_DWORD *)a1 + 270) = 1;
  if ( v4 )
  {
    SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)a1 + 120));
    vSpComputeSpriteRanges(a1);
    SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)a1 + 120));
  }
}
