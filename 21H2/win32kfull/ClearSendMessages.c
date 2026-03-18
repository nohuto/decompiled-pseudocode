/*
 * XREFs of ClearSendMessages @ 0x1C0060BF8
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 * Callees:
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 */

__int64 ClearSendMessages()
{
  return gsmsList;
}
