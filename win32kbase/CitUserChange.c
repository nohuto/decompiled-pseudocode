/*
 * XREFs of CitUserChange @ 0x1C00B0320
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00B0358 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( xmmword_1C02D4DA0 && *((_QWORD *)xmmword_1C02D4DA0 + 12) && *((_QWORD *)xmmword_1C02D4DA0 + 13) != a1 )
    CitpLogoff(xmmword_1C02D4DA0);
}
