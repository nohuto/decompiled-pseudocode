/*
 * XREFs of ZwApphelpCacheControl @ 0x1403FA3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwApphelpCacheControl(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
