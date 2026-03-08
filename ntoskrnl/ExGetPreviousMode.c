/*
 * XREFs of ExGetPreviousMode @ 0x1402449F0
 * Callers:
 *     VrpPostQueryKey @ 0x1406C14A4 (VrpPostQueryKey.c)
 *     NtApphelpCacheControl @ 0x1406C31C0 (NtApphelpCacheControl.c)
 *     VrpPostEnumerateKey @ 0x140736428 (VrpPostEnumerateKey.c)
 *     AhcCacheQueryHwId @ 0x140A6F0BC (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
