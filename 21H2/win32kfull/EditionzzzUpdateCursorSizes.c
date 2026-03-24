/*
 * XREFs of EditionzzzUpdateCursorSizes @ 0x1C01674A0
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C01670A8 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 */

void EditionzzzUpdateCursorSizes()
{
  if ( gpCursorSizes )
    CCursorSizes::zzzRefreshSizes(gpCursorSizes);
}
