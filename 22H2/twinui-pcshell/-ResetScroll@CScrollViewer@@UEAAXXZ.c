/*
 * XREFs of ?ResetScroll@CScrollViewer@@UEAAXXZ @ 0x18042ABD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CScrollViewer::ResetScroll(CScrollViewer *this)
{
  CScrollViewer::_ApplyScroll((CScrollViewer *)((char *)this - 208), 0, 0);
}
