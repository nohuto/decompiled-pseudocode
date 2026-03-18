/*
 * XREFs of SendMsgCleanup @ 0x1C006C8D0
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C0069B30 (xxxRestoreCsrssThreadDesktop.c)
 *     zzzCancelJournalling @ 0x1C006EED0 (zzzCancelJournalling.c)
 * Callees:
 *     xxxReceiverDied @ 0x1C006C930 (xxxReceiverDied.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C00BC56C (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 */

__int64 SendMsgCleanup()
{
  return gsmsList;
}
