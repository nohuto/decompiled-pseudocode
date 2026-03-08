/*
 * XREFs of ?vSpRemoveShapeHint@@YAXPEAVSPRITE@@H@Z @ 0x1C010C39C
 * Callers:
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C010E114 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpRemoveShapeHint(struct SPRITE *a1, int a2)
{
  int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    EngUnlockSurface(*((SURFOBJ **)a1 + 16));
    v4 = *(_DWORD *)a1;
    *((_QWORD *)a1 + 16) = 0LL;
    v5 = v4 & 0xFFFFFFBF;
    *((_QWORD *)a1 + 30) = 0LL;
    *(_DWORD *)a1 = v5;
    if ( a2 )
      *(_DWORD *)a1 = v5 & 0xFFFFFF7F;
    REGION::vDeleteREGION(*((REGION **)a1 + 24));
    v6 = *((_QWORD *)a1 + 18);
    *((_QWORD *)a1 + 24) = 0LL;
    v7 = v6;
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v7);
    *((_QWORD *)a1 + 18) = 0LL;
  }
}
