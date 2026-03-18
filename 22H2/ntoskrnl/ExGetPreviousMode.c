/*
 * XREFs of ExGetPreviousMode @ 0x140208C20
 * Callers:
 *     VrpPostQueryKey @ 0x14068CA48 (VrpPostQueryKey.c)
 *     NtApphelpCacheControl @ 0x14068E760 (NtApphelpCacheControl.c)
 *     VrpPostEnumerateKey @ 0x14077AEC8 (VrpPostEnumerateKey.c)
 *     AhcCacheQueryHwId @ 0x140A71DBC (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
