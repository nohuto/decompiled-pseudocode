/*
 * XREFs of ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C008B0D0
 * Callers:
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C008E868 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 * Callees:
 *     ?vDetermineSurfaceBounds@@YAXPEAU_SURFOBJ@@EJJPEAU_RECTL@@@Z @ 0x1C008B19C (-vDetermineSurfaceBounds@@YAXPEAU_SURFOBJ@@EJJPEAU_RECTL@@@Z.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C008E110 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C008E834 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 */

void __fastcall vCalculateCursorBounds(struct _SURFOBJ *a1, struct _SURFOBJ *a2, struct _RECTL *a3)
{
  LONG v4; // ebx
  __int64 v7; // r8
  struct _RECTL si128; // xmm0
  struct _RECTL v9; // [rsp+30h] [rbp-20h] BYREF
  struct _RECTL v10; // [rsp+40h] [rbp-10h] BYREF

  v4 = a1->sizlBitmap.cy >> 1;
  vDetermineSurfaceBounds(a1, 0xFFu, 0, v4, &v10);
  if ( a2 )
  {
    vDetermineSurfaceBounds(a2, 0, 0, v4, &v9);
  }
  else
  {
    vDetermineSurfaceBounds(a1, 0, v4, 2 * v4, &v9);
    if ( !(unsigned int)ERECTL::bWrapped((ERECTL *)&v9) )
    {
      v9.top -= v4;
      v9.bottom -= v4;
    }
  }
  ERECTL::operator|=(&v9, &v10, v7);
  if ( (unsigned int)ERECTL::bWrapped((ERECTL *)&v9) )
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  else
    si128 = (struct _RECTL)_mm_loadu_si128((const __m128i *)&v9);
  *a3 = si128;
}
