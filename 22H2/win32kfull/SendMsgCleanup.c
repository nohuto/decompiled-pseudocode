/*
 * XREFs of SendMsgCleanup @ 0x1C00DA140
 * Callers:
 *     zzzCancelJournalling @ 0x1C00292F8 (zzzCancelJournalling.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00D8E60 (xxxRestoreCsrssThreadDesktop.c)
 * Callees:
 *     SetWakeBit @ 0x1C0051880 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x1C006A290 (UnlinkSendListSms.c)
 *     xxxReceiverDied @ 0x1C00DAA6C (xxxReceiverDied.c)
 */

__int64 SendMsgCleanup()
{
  return gsmsList;
}
