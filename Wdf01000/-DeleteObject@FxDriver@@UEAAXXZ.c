/*
 * XREFs of ?DeleteObject@FxDriver@@UEAAXXZ @ 0x1C0040020
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C00032C0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 */

void __fastcall FxDriver::DeleteObject(FxDriver *this)
{
  FxObject::DeleteObject(this);
}
