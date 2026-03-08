/*
 * XREFs of MdlInvariantFindMdlInfo @ 0x1405CCF0C
 * Callers:
 *     MdlInvariantPostDriverCompletion @ 0x1405CCFE4 (MdlInvariantPostDriverCompletion.c)
 *     MdlInvariantPostProcessing1 @ 0x1405CD074 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405CD258 (MdlInvariantPreProcessing1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MdlInvariantFindMdlInfo(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  __int64 v5; // r9
  _QWORD *result; // rax

  v2 = *(unsigned int **)(a1 + 224);
  if ( !v2 )
    return 0LL;
  v3 = *v2;
  v4 = 0;
  if ( !*v2 )
    return 0LL;
  v5 = *((_QWORD *)v2 + 1);
  while ( 1 )
  {
    result = (_QWORD *)(v5 + 32LL * v4);
    if ( *result )
    {
      if ( *result == a2 )
        break;
    }
    if ( ++v4 >= v3 )
      return 0LL;
  }
  return result;
}
