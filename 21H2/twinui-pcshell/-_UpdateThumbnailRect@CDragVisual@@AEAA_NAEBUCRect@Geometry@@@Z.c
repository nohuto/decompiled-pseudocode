/*
 * XREFs of ?_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z @ 0x18049856C
 * Callers:
 *     ?SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z @ 0x1804961B0 (-SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x1804985B0 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 * Callees:
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180201E14 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?_CheckDragStartBounds@CDragVisual@@AEAAXXZ @ 0x180496BE0 (-_CheckDragStartBounds@CDragVisual@@AEAAXXZ.c)
 */

char __fastcall CDragVisual::_UpdateThumbnailRect(const struct _GUID *this, const struct Geometry::CRect *a2)
{
  _OWORD *v2; // rdx
  _OWORD *v3; // r8
  CDragVisual *v4; // r9
  char v5; // bl

  v5 = 0;
  if ( !Platform::Guid::Equals(a2, this + 15) )
  {
    v5 = 1;
    *v2 = *v3;
    CDragVisual::_CheckDragStartBounds(v4);
  }
  return v5;
}
