/*
 * XREFs of OkayToCloseWindowStation @ 0x1C00FE120
 * Callers:
 *     <none>
 * Callees:
 *     CheckHandleFlag @ 0x1C005DFC4 (CheckHandleFlag.c)
 */

__int64 __fastcall OkayToCloseWindowStation(__int64 a1)
{
  unsigned int *v2; // rdi

  v2 = *(unsigned int **)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 24) )
    return 0LL;
  if ( (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)a1) == -1 )
    return 3221225506LL;
  if ( !(unsigned int)CheckHandleFlag(*(PRKPROCESS *)a1, *v2, *(_QWORD *)(a1 + 16), 2LL)
    && !(unsigned int)CheckHandleFlag(*(PRKPROCESS *)a1, *v2, *(_QWORD *)(a1 + 16), 1LL) )
  {
    return 0LL;
  }
  return 2147483665LL;
}
