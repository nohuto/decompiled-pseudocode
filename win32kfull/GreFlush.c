/*
 * XREFs of GreFlush @ 0x1C002A740
 * Callers:
 *     <none>
 * Callees:
 *     ?vSynchronizeDriver@@YAXK@Z @ 0x1C002A75C (-vSynchronizeDriver@@YAXK@Z.c)
 */

void GreFlush()
{
  vSynchronizeDriver(0x40u);
}
