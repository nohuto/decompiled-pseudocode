/*
 * XREFs of ?EndUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x1800E9040
 * Callers:
 *     <none>
 * Callees:
 *     ?SetNotificationMode@CCursorVisual@@QEAAXXZ @ 0x180225968 (-SetNotificationMode@CCursorVisual@@QEAAXXZ.c)
 */

void __fastcall CGlobalComposition::EndUpdateCursors(CGlobalComposition *this)
{
  CCursorVisual **v1; // rdi
  CCursorVisual **i; // rbx

  v1 = (CCursorVisual **)*((_QWORD *)this + 171);
  for ( i = (CCursorVisual **)*((_QWORD *)this + 170); i != v1; ++i )
    CCursorVisual::SetNotificationMode(*i);
}
