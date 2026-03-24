/*
 * XREFs of CitUserChange @ 0x1C008AC20
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008AD30 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( xmmword_1C0254590 && *((_QWORD *)xmmword_1C0254590 + 12) && *((_QWORD *)xmmword_1C0254590 + 13) != a1 )
    CitpLogoff(xmmword_1C0254590);
}
