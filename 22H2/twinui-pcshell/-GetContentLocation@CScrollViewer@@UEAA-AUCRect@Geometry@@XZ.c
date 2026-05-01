/*
 * XREFs of ?GetContentLocation@CScrollViewer@@UEAA?AUCRect@Geometry@@XZ @ 0x18042A890
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetVisibleRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x18042B710 (-_GetVisibleRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 */

__int64 __fastcall CScrollViewer::GetContentLocation(__int64 a1, __int64 a2)
{
  CScrollViewer::_GetVisibleRect(a1 - 208);
  return a2;
}
