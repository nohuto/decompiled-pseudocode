/*
 * XREFs of ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x1801300C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CMeshGeometry2D::GetVertexCount(CMeshGeometry2D *this)
{
  unsigned __int64 result; // rax

  result = (__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 4;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 2) < result )
    return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 2);
  return result;
}
