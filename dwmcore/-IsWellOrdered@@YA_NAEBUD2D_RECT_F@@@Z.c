/*
 * XREFs of ?IsWellOrdered@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800B2BB8
 * Callers:
 *     ?Area@@YAMAEBUD2D_RECT_F@@@Z @ 0x1800B2B80 (-Area@@YAMAEBUD2D_RECT_F@@@Z.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180227368 (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsWellOrdered(const struct D2D_RECT_F *a1)
{
  return a1->right >= a1->left && a1->bottom >= a1->top;
}
