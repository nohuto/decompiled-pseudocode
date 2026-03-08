/*
 * XREFs of SendMsgCleanup @ 0x1C0094980
 * Callers:
 *     zzzCancelJournalling @ 0x1C001D3F4 (zzzCancelJournalling.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C0093CF0 (xxxRestoreCsrssThreadDesktop.c)
 * Callees:
 *     xxxReceiverDied @ 0x1C00949E0 (xxxReceiverDied.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C0095A8C (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 */

__int64 SendMsgCleanup()
{
  return gsmsList;
}
