/*
 * XREFs of GreFlush @ 0x1C00278A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vSynchronizeDriver@@YAXK@Z @ 0x1C00278BC (-vSynchronizeDriver@@YAXK@Z.c)
 */

void GreFlush()
{
  vSynchronizeDriver(0x40u);
}
