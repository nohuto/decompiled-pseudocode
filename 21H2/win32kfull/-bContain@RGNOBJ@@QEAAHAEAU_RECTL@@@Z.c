/*
 * XREFs of ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1C00FC5FC
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C003D428 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C0157AA8 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RGNOBJ::bContain(RGNOBJ *this, struct _RECTL *a2)
{
  _DWORD *v2; // r8

  v2 = *(_DWORD **)this;
  return *(_DWORD *)(*(_QWORD *)this + 96LL) <= a2->left
      && v2[26] >= a2->right
      && v2[25] <= a2->top
      && v2[27] >= a2->bottom;
}
