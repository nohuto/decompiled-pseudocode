/*
 * XREFs of ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C027FEF4
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C010E078 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIgnoreMirrorUpdate(struct SPRITE *a1)
{
  __int64 v1; // rax

  v1 = **((_QWORD **)a1 + 2);
  if ( v1 && (*(_DWORD *)(v1 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v1 + 2096) & 0x800) != 0 )
    return (*(_DWORD *)a1 >> 8) & 1;
  else
    return 0LL;
}
