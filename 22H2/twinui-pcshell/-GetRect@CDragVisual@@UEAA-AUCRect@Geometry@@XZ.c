/*
 * XREFs of ?GetRect@CDragVisual@@UEAA?AUCRect@Geometry@@XZ @ 0x180494CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct tagPOINT *__fastcall CDragVisual::GetRect(__int64 a1, struct tagPOINT *a2)
{
  *(_OWORD *)&a2->x = *(_OWORD *)(a1 + 216);
  MapWindowPoints(*(HWND *)(a1 + 128), 0LL, a2, 2u);
  return a2;
}
