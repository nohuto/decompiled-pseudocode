/*
 * XREFs of ?EnsureQMsgLog@@YAHXZ @ 0x1C01D2624
 * Callers:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C0133F34 (-InitLogQMsg@@YAXXZ.c)
 *     LogQMsg @ 0x1C01D2AFC (LogQMsg.c)
 * Callees:
 *     <none>
 */

__int64 EnsureQMsgLog(void)
{
  if ( !unk_1C0335670 )
  {
    if ( (_DWORD)gMsgQLog )
    {
      unk_1C0335670 = Win32AllocPool(688LL * (unsigned int)xmmword_1C0335660, 1819374421LL);
      if ( !unk_1C0335670 )
      {
        unk_1C0335670 = 0LL;
        gMsgQLog = 0LL;
        xmmword_1C0335660 = 0LL;
      }
    }
  }
  return (unsigned int)gMsgQLog;
}
