/*
 * XREFs of ??8CBackdropVisualImageKey@@QEBA_NAEBV0@@Z @ 0x1800E8DF8
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBackdropVisualImageKey::operator==(_QWORD *a1, _QWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1];
}
