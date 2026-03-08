/*
 * XREFs of ObpParseComponentName @ 0x140870108
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x1407612D4 (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpParseComponentName(__int16 *a1, _OWORD *a2)
{
  __int16 v3; // dx
  _WORD *v4; // rax
  __int16 i; // dx
  _WORD *v6; // rax

  v3 = *a1;
  if ( *a1 )
  {
    v4 = (_WORD *)*((_QWORD *)a1 + 1);
    if ( *v4 == 92 )
    {
      *((_QWORD *)a1 + 1) = v4 + 1;
      a1[1] -= 2;
      *a1 = v3 - 2;
    }
  }
  *a2 = *(_OWORD *)a1;
  for ( i = *a1; i; *a1 = i )
  {
    v6 = (_WORD *)*((_QWORD *)a1 + 1);
    if ( *v6 == 92 )
      break;
    i -= 2;
    *((_QWORD *)a1 + 1) = v6 + 1;
  }
  *(_WORD *)a2 -= i;
  a1[1] -= *(_WORD *)a2;
  return *(_WORD *)a2 != 0;
}
