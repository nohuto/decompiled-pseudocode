/*
 * XREFs of ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C00F3162
 * Callers:
 *     ?ApplyAppClip@CCursorClip@@AEAA_NUtagPOINT@@PEAU2@@Z @ 0x1C0015284 (-ApplyAppClip@CCursorClip@@AEAA_NUtagPOINT@@PEAU2@@Z.c)
 *     ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C0015590 (-ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N11PEAU2@@Z @ 0x1C0015640 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N11PEAU2@@Z.c)
 *     ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x1C020A744 (-ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCursorClip::ClipPointToRect(struct tagPOINT a1, const struct tagRECT *a2, struct tagPOINT *a3)
{
  LONG left; // eax
  LONG right; // eax
  LONG y; // ecx
  LONG top; // eax
  LONG bottom; // eax

  *a3 = a1;
  left = a2->left;
  if ( a1.x >= a2->left )
  {
    right = a2->right;
    if ( a1.x < right )
      goto LABEL_5;
    left = right - 1;
  }
  a3->x = left;
LABEL_5:
  y = a3->y;
  top = a2->top;
  if ( y >= top )
  {
    bottom = a2->bottom;
    if ( y < bottom )
      return;
    top = bottom - 1;
  }
  a3->y = top;
}
