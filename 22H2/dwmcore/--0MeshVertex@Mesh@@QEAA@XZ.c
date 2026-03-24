/*
 * XREFs of ??0MeshVertex@Mesh@@QEAA@XZ @ 0x1800E25BC
 * Callers:
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x180063720 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 * Callees:
 *     <none>
 */

Mesh::MeshVertex *__fastcall Mesh::MeshVertex::MeshVertex(Mesh::MeshVertex *this)
{
  *((_QWORD *)this + 2) = &Mesh::RadialEdgeList::`vftable';
  return this;
}
