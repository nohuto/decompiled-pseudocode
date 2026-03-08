/*
 * XREFs of ?GetProperties@CD2DBitmap@@UEBAXPEAUD2D1_BITMAP_PROPERTIES1@@@Z @ 0x180107AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD2DBitmap::GetProperties(CD2DBitmap *this, struct D2D1_BITMAP_PROPERTIES1 *a2)
{
  *a2 = *(struct D2D1_BITMAP_PROPERTIES1 *)((char *)this + 120);
}
