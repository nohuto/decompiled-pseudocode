/*
 * XREFs of InbvPortTerminate @ 0x140677218
 * Callers:
 *     HdlspEnableTerminal @ 0x140AE75C4 (HdlspEnableTerminal.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvPortTerminate(unsigned int a1)
{
  __int64 v1; // rcx
  char result; // al

  if ( a1 >= 4 )
    return 0;
  v1 = 5LL * a1;
  if ( !*((_QWORD *)&Ports + v1) )
    return 0;
  result = 1;
  *(_OWORD *)((char *)&Ports + 8 * v1) = 0LL;
  *(_OWORD *)((char *)&Ports + 8 * v1 + 16) = 0LL;
  *((_QWORD *)&Ports + v1 + 4) = 0LL;
  return result;
}
