/*
 * XREFs of EditionzzzUpdateCursorSizes @ 0x1C00F59C0
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C001D944 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 */

void EditionzzzUpdateCursorSizes()
{
  if ( gpCursorSizes )
    CCursorSizes::zzzRefreshSizes(gpCursorSizes);
}
