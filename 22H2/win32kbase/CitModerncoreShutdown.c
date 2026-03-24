/*
 * XREFs of CitModerncoreShutdown @ 0x1C01FED20
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008AD30 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitModerncoreShutdown()
{
  if ( xmmword_1C0254590 )
    CitpLogoff(xmmword_1C0254590);
}
