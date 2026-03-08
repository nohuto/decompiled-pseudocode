/*
 * XREFs of ?CheckExteriorFilterCondition@Mesh@@CA_NAEBUMeshDesc@1@I@Z @ 0x1800DA834
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005D950 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z @ 0x1800DA74C (-CalcGeometryCounts@Mesh@@SAXAEBUMeshDesc@1@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Mesh::CheckExteriorFilterCondition(const struct Mesh::MeshDesc *a1, unsigned int a2)
{
  if ( *(_DWORD *)(*((_QWORD *)a1 + 3) + 4LL * a2) != 3 )
    return 0;
  if ( *((_DWORD *)a1 + 12) == 1 )
    return 1;
  if ( *((_DWORD *)a1 + 12) != 2 )
  {
    if ( *((_DWORD *)a1 + 12) == 3 )
      return *(_BYTE *)(a2 + *((_QWORD *)a1 + 5)) == 0;
    return 0;
  }
  return *(_BYTE *)(a2 + *((_QWORD *)a1 + 5));
}
