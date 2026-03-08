/*
 * XREFs of ?NotifyLogon@@YAHK@Z @ 0x1C0095BD0
 * Callers:
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C00958A8 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C0095B2C (-EndShutdown@@YAXJ@Z.c)
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
