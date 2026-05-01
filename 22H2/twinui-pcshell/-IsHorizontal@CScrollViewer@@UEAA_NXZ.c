/*
 * XREFs of ?IsHorizontal@CScrollViewer@@UEAA_NXZ @ 0x18042AB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CScrollViewer::IsHorizontal(CScrollViewer *this)
{
  return *((_BYTE *)this + 80) & 1;
}
