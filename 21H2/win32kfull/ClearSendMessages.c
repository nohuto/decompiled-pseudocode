/*
 * XREFs of ClearSendMessages @ 0x1C007C38C
 * Callers:
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 * Callees:
 *     SetWakeBit @ 0x1C0051920 (SetWakeBit.c)
 *     xxxInterSendMsgEx @ 0x1C005A2F0 (xxxInterSendMsgEx.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 ClearSendMessages()
{
  return gsmsList;
}
