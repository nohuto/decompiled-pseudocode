/*
 * XREFs of SendMsgCleanup @ 0x1C00F7EF0
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00A64D0 (xxxRestoreCsrssThreadDesktop.c)
 *     zzzCancelJournalling @ 0x1C011886C (zzzCancelJournalling.c)
 * Callees:
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x1C00AC18C (UnlinkSendListSms.c)
 *     xxxReceiverDied @ 0x1C00F7FC0 (xxxReceiverDied.c)
 */

__int64 SendMsgCleanup()
{
  return gsmsList;
}
