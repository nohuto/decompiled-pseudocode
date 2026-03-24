/*
 * XREFs of CitModerncoreShutdown @ 0x1C01FEDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0089E90 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitModerncoreShutdown()
{
  if ( xmmword_1C0255560 )
    CitpLogoff(xmmword_1C0255560);
}
