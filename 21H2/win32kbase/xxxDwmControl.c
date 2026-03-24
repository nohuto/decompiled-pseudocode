/*
 * XREFs of xxxDwmControl @ 0x1C0074C60
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0074AD8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007503C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     VideoPortCalloutThread @ 0x1C011ADB4 (VideoPortCalloutThread.c)
 * Callees:
 *     PostWinlogonMessage @ 0x1C0074CD0 (PostWinlogonMessage.c)
 */

__int64 __fastcall xxxDwmControl(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  __int64 result; // rax
  bool v4; // zf

  v2 = a1;
  result = 3221225473LL;
  if ( (_DWORD)a1 == 1034 )
  {
LABEL_5:
    v4 = g_pepDwm == 0LL;
    goto LABEL_6;
  }
  if ( (unsigned int)a1 <= 0x40A )
    return result;
  if ( (unsigned int)a1 > 0x40C )
  {
    if ( (_DWORD)a1 != 1037 )
      return result;
    goto LABEL_5;
  }
  if ( g_pepDwm )
  {
    v4 = g_bDwmIsShuttingDown == 0;
LABEL_6:
    if ( v4 )
      return result;
  }
  result = PostWinlogonMessage(a1, a2);
  if ( (int)result >= 0 && v2 == 1034 )
    g_bDwmIsShuttingDown = 1;
  return result;
}
