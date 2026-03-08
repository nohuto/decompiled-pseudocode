/*
 * XREFs of DbgParseArgs @ 0x1C0059E48
 * Callers:
 *     DbgExecuteCmd @ 0x1C004E878 (DbgExecuteCmd.c)
 * Callees:
 *     DbgParseOneArg @ 0x1C0059EC4 (DbgParseOneArg.c)
 */

__int64 __fastcall DbgParseArgs(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4, char **Context)
{
  unsigned int v5; // ebx
  char *v9; // rax

  v5 = 0;
  *a2 = 0;
  *a3 = 0;
  do
  {
    v9 = strtok_s(0LL, " \t\n", Context);
    if ( !v9 )
      break;
    v5 = DbgParseOneArg(a1, v9, (unsigned int)++*a2, a3);
  }
  while ( !v5 );
  return v5;
}
