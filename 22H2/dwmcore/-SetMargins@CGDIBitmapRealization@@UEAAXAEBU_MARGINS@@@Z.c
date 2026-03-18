/*
 * XREFs of ?SetMargins@CGDIBitmapRealization@@UEAAXAEBU_MARGINS@@@Z @ 0x180108C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGDIBitmapRealization::SetMargins(struct _MARGINS *this, const struct _MARGINS *a2)
{
  this[1] = *a2;
}
