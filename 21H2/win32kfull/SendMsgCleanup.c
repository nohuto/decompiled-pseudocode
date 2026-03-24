/*
 * XREFs of SendMsgCleanup @ 0x1C00DA490
 * Callers:
 *     zzzCancelJournalling @ 0x1C0029398 (zzzCancelJournalling.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00D91B0 (xxxRestoreCsrssThreadDesktop.c)
 * Callees:
 *     SetWakeBit @ 0x1C0051920 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x1C006A330 (UnlinkSendListSms.c)
 *     xxxReceiverDied @ 0x1C00DADBC (xxxReceiverDied.c)
 */

__int64 SendMsgCleanup()
{
  return gsmsList;
}
