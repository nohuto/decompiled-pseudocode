/*
 * XREFs of CitUserChange @ 0x1C0089D80
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0089E90 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( xmmword_1C0255560 && *((_QWORD *)xmmword_1C0255560 + 12) && *((_QWORD *)xmmword_1C0255560 + 13) != a1 )
    CitpLogoff(xmmword_1C0255560);
}
