/*
 * XREFs of StringListElementSubstringMatch @ 0x140A6C1B4
 * Callers:
 *     PropertyEval @ 0x1407622B0 (PropertyEval.c)
 * Callees:
 *     SubstringMatch @ 0x140A6C2AC (SubstringMatch.c)
 */

__int64 __fastcall StringListElementSubstringMatch(_WORD *a1, int a2, _WORD *a3)
{
  _WORD *v3; // rdi
  unsigned int i; // ebp
  _WORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx

  v3 = a3;
  for ( i = 0; *v3; v3 += v9 + 1 )
  {
    v7 = a1;
    if ( *a1 )
    {
      while ( !(unsigned int)SubstringMatch(v7, v3) )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( v7[v8] );
        v7 += v8 + 1;
        if ( !*v7 )
          goto LABEL_9;
      }
      i = 1;
    }
LABEL_9:
    if ( a2 == 18 || a2 == 8210 && i )
      break;
    v9 = -1LL;
    do
      ++v9;
    while ( v3[v9] );
  }
  return i;
}
