/*
 * XREFs of DpiDriverUnload @ 0x1C02C8170
 * Callers:
 *     <none>
 * Callees:
 *     DpiCleanup @ 0x1C02C7E20 (DpiCleanup.c)
 */

void __fastcall DpiDriverUnload(struct _DRIVER_OBJECT *a1, __int64 a2, __int64 a3)
{
  DpiCleanup(a1, 1, a3);
}
