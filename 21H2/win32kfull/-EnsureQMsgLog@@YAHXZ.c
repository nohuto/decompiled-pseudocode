/*
 * XREFs of ?EnsureQMsgLog@@YAHXZ @ 0x1C01D2BE4
 * Callers:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C01342E4 (-InitLogQMsg@@YAXXZ.c)
 *     LogQMsg @ 0x1C01D30BC (LogQMsg.c)
 * Callees:
 *     <none>
 */

__int64 EnsureQMsgLog(void)
{
  if ( !unk_1C0336670 )
  {
    if ( (_DWORD)gMsgQLog )
    {
      unk_1C0336670 = Win32AllocPool(688LL * (unsigned int)xmmword_1C0336660, 1819374421LL);
      if ( !unk_1C0336670 )
      {
        unk_1C0336670 = 0LL;
        gMsgQLog = 0LL;
        xmmword_1C0336660 = 0LL;
      }
    }
  }
  return (unsigned int)gMsgQLog;
}
