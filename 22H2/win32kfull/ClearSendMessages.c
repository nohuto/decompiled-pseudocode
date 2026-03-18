/*
 * XREFs of ClearSendMessages @ 0x1C00EAFAC
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     xxxInterSendMsgEx @ 0x1C004D920 (xxxInterSendMsgEx.c)
 *     SetWakeBit @ 0x1C0118350 (SetWakeBit.c)
 */

__int64 ClearSendMessages()
{
  return gsmsList;
}
