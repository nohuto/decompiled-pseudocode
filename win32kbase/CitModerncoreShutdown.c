/*
 * XREFs of CitModerncoreShutdown @ 0x1C0273930
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00B0358 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitModerncoreShutdown()
{
  if ( xmmword_1C02D4DA0 )
    CitpLogoff(xmmword_1C02D4DA0);
}
