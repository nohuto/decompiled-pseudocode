/*
 * XREFs of ClearSendMessages @ 0x1C003421C
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 *     xxxInterSendMsgEx @ 0x1C004A280 (xxxInterSendMsgEx.c)
 */

__int64 ClearSendMessages()
{
  return gsmsList;
}
