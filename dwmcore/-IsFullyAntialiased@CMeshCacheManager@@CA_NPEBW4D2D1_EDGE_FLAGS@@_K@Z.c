/*
 * XREFs of ?IsFullyAntialiased@CMeshCacheManager@@CA_NPEBW4D2D1_EDGE_FLAGS@@_K@Z @ 0x1800EBB24
 * Callers:
 *     ?TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCRoundedRectangleShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x18007F5A8 (-TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEAVVertexAAOffsetsResource@Mesh@.c)
 * Callees:
 *     <none>
 */

char __fastcall CMeshCacheManager::IsFullyAntialiased(const enum D2D1_EDGE_FLAGS *a1, unsigned __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // r8

  v2 = 0;
  if ( !a2 )
    return 1;
  v3 = 0LL;
  while ( *((_DWORD *)a1 + v3) == 3 )
  {
    v3 = ++v2;
    if ( v2 >= a2 )
      return 1;
  }
  return 0;
}
