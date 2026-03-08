/*
 * XREFs of ?bIntersect@@YA_NPEAU_RECTFX@@0@Z @ 0x1C018A15C
 * Callers:
 *     ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0189EA0 (-bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C018A3B0 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall bIntersect(struct _RECTFX *a1, struct _RECTFX *a2)
{
  return a1->yTop <= a2->yBottom && a1->yBottom >= a2->yTop && a1->xLeft <= a2->xRight && a1->xRight >= a2->xLeft;
}
