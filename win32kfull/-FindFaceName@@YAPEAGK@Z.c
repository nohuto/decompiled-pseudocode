/*
 * XREFs of ?FindFaceName@@YAPEAGK@Z @ 0x1C011CECC
 * Callers:
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C011CD5C (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall FindFaceName(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  v1 = a1;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v3 = *(_QWORD *)(v2 + 19512);
  v4 = *(_QWORD *)(v2 + 19520);
  while ( 1 )
  {
    if ( v3 >= v4 )
      return (unsigned __int16 *)&word_1C03142AC;
    if ( (unsigned __int16)*(_DWORD *)v3 == v1 )
      break;
    v3 += 4LL;
  }
  return (unsigned __int16 *)(v4 + 2LL * *(unsigned __int16 *)(v3 + 2));
}
