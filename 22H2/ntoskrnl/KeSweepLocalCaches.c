/*
 * XREFs of KeSweepLocalCaches @ 0x140381B30
 * Callers:
 *     HalpFlushAndWait @ 0x1403F9770 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x1409A83BC (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
