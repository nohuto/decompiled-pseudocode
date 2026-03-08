/*
 * XREFs of PopFxPluginWork @ 0x14077DAF0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxProcessWorkPool @ 0x140351514 (PopFxProcessWorkPool.c)
 */

NTSTATUS __fastcall PopFxPluginWork(char **a1)
{
  __int64 v1; // r8

  v1 = 0LL;
  do
  {
    if ( &(*a1)[32 * v1 + 104 + 8 * v1] == (char *)a1 )
      break;
    v1 = (unsigned int)(v1 + 1);
  }
  while ( (unsigned int)v1 < 4 );
  return PopFxProcessWorkPool(*a1, v1 + 1);
}
