struct Mesh::VertexAAOffsetsResource *__fastcall CMeshCacheManager::TryGetMeshAAOffsets(
        CMeshCacheManager *this,
        const struct Mesh::MeshDesc *a2,
        const struct CShape *a3,
        const struct D2D1::Matrix3x2F *a4,
        bool a5)
{
  if ( (*(unsigned int (__fastcall **)(const struct CShape *))(*(_QWORD *)a3 + 8LL))(a3) )
    return 0LL;
  else
    return CMeshCacheManager::TryGetMeshAAOffsetsForRoundedRectangle(this, a2, a3, a4, a5);
}
