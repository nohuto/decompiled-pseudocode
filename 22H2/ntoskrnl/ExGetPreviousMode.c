/*
 * XREFs of ExGetPreviousMode @ 0x1402F62C0
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405D37A4 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1405D551C (VrpPostQueryKey.c)
 *     NtApphelpCacheControl @ 0x1406660F0 (NtApphelpCacheControl.c)
 *     AhcCacheQueryHwId @ 0x14098011C (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
