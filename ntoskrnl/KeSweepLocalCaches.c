/*
 * XREFs of KeSweepLocalCaches @ 0x14036DE80
 * Callers:
 *     HalpFlushAndWait @ 0x140412070 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140A94318 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
