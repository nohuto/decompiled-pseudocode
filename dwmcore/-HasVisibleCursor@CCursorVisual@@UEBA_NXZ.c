/*
 * XREFs of ?HasVisibleCursor@CCursorVisual@@UEBA_NXZ @ 0x180225590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall CCursorVisual::HasVisibleCursor(CCursorVisual *this)
{
  return CCursorVisual::IsVisible(this);
}
