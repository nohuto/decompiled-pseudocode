/*
 * XREFs of ?OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z @ 0x18009B77C
 * Callers:
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18009BCE0 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B1E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18003B580 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 */

void __fastcall CAnimatedGlassSheet::OnRectUpdated(struct tagPOINT *this, const struct tagRECT *a2)
{
  LONG v4; // eax
  LONG v5; // eax
  struct tagPOINT v6; // [rsp+38h] [rbp+10h] BYREF

  v6.x = a2->left;
  v6.y = a2->top;
  CVisual::SetOffset(this, &v6);
  v4 = a2->right - a2->left;
  if ( v4 < 0 )
    v4 = 0;
  v6.x = v4;
  v5 = a2->bottom - a2->top;
  if ( v5 < 0 )
    v5 = 0;
  v6.y = v5;
  CVisual::SetSize((CVisual *)this, (const struct tagSIZE *)&v6);
}
