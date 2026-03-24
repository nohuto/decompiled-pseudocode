/*
 * XREFs of ?AddRef@CD3DSurface@@$4PPPPPPPM@PI@EAAKXZ @ 0x1800F6F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DSurface::AddRef(__int64 a1)
{
  return CManipulationFrame::AddRef((CManipulationFrame *)(a1 - *(int *)(a1 - 4) - 248));
}
