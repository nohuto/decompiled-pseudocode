/*
 * XREFs of NextOwnedWindow @ 0x1C00370AC
 * Callers:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0036760 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0036B5C (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0036CF0 (zzzSetWindowCompositionCloak.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C00391D8 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NextOwnedWindow(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // rdx
  bool i; // zf
  _QWORD *v7; // rax

  if ( a1 )
    goto LABEL_8;
  a1 = *(_QWORD **)(a3 + 112);
  if ( !a1 )
    return 0LL;
  do
  {
    v5 = (_QWORD *)a1[15];
    v7 = a1;
    for ( i = a1 == v5; !i; i = v5 == (_QWORD *)a1[13] )
    {
      v7 = v5;
      if ( !v5 )
        break;
      v5 = (_QWORD *)v5[13];
    }
    if ( a2 == v7 )
      break;
LABEL_8:
    a1 = (_QWORD *)a1[11];
  }
  while ( a1 );
  return a1;
}
