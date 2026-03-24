/*
 * XREFs of ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C0164544
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00F0208 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0163E9C (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIgnoreMirrorUpdate(struct SPRITE *a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rax

  v1 = 0;
  v2 = **((_QWORD **)a1 + 2);
  if ( v2 && (*(_DWORD *)(v2 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v2 + 2128) & 0x800) != 0 )
    return (*(_DWORD *)a1 & 0x100) != 0;
  return v1;
}
