/*
 * XREFs of ?NotifyLogon@@YAHK@Z @ 0x1C00D7AF0
 * Callers:
 *     ?EndShutdown@@YAXJ@Z @ 0x1C00D7A30 (-EndShutdown@@YAXJ@Z.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C00D7B24 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NotifyLogon(unsigned int a1)
{
  unsigned int v1; // ebx

  if ( (a1 & 0x10000) != 0 )
  {
    return 0;
  }
  else
  {
    v1 = 1;
    PostWinlogonMessage(1LL, a1);
  }
  return v1;
}
