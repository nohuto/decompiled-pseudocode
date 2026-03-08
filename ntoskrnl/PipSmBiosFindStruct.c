/*
 * XREFs of PipSmBiosFindStruct @ 0x140B56CD0
 * Callers:
 *     PipInitComputerIds @ 0x140B552F0 (PipInitComputerIds.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall PipSmBiosFindStruct(char a1, char a2, _BYTE *a3, int a4)
{
  unsigned __int64 v4; // r9
  _BYTE *v5; // r10
  _WORD *i; // r8

  v4 = (unsigned __int64)&a3[a4 - 2];
  v5 = 0LL;
  while ( (unsigned __int64)a3 < v4 )
  {
    if ( *a3 == a1 )
    {
      v5 = a3;
      if ( *a3 != 2 || a3 + 14 <= &a3[(unsigned __int8)a3[1]] && a3[13] == a2 )
        break;
    }
    v5 = 0LL;
    for ( i = &a3[(unsigned __int8)a3[1]]; (unsigned __int64)i < v4 && *i; i = (_WORD *)((char *)i + 1) )
      ;
    a3 = i + 1;
  }
  return v5;
}
