struct CMeshCacheManager *GetMeshCacheManager(void)
{
  struct CMeshCacheManager *result; // rax

  result = 0LL;
  if ( g_pComposition )
    return (struct CMeshCacheManager *)*((_QWORD *)g_pComposition + 35);
  return result;
}
