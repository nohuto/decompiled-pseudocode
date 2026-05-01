/*
 * XREFs of ?GetHeight@CRect@Geometry@@QEBAJXZ @ 0x18008D370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Geometry::CRect::GetHeight(Geometry::CRect *this)
{
  return (unsigned int)(*((_DWORD *)this + 3) - *((_DWORD *)this + 1));
}
