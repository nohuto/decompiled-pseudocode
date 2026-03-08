/*
 * XREFs of ??9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z @ 0x1800D3D0C
 * Callers:
 *     ?IsEmpty@CPathSegmentsShape@@UEBA_NXZ @ 0x1800D3C70 (-IsEmpty@CPathSegmentsShape@@UEBA_NXZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x1802ABE0C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Path::ControlPointCollection::const_iterator::operator!=(__int64 a1, _QWORD *a2)
{
  return *(_QWORD *)a1 != *a2 || *(_DWORD *)(a1 + 16) != (unsigned int)a2[2];
}
