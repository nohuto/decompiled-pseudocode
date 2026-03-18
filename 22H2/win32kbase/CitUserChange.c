/*
 * XREFs of CitUserChange @ 0x1C00A3B00
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A3B38 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( xmmword_1C0293D30 && *((_QWORD *)xmmword_1C0293D30 + 12) && *((_QWORD *)xmmword_1C0293D30 + 13) != a1 )
    CitpLogoff(xmmword_1C0293D30);
}
