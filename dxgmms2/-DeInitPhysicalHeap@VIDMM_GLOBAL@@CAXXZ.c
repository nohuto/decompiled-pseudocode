void VIDMM_GLOBAL::DeInitPhysicalHeap(void)
{
  if ( VIDMM_GLOBAL::m_pPhysicalPool )
  {
    VIDMM_LINEAR_POOL::`scalar deleting destructor'((VIDMM_LINEAR_POOL *)VIDMM_GLOBAL::m_pPhysicalPool);
    VIDMM_GLOBAL::m_pPhysicalPool = 0LL;
  }
  if ( VIDMM_GLOBAL::m_PhysicalBlock )
  {
    MmFreeContiguousMemorySpecifyCache(VIDMM_GLOBAL::m_PhysicalBlock, VIDMM_GLOBAL::m_PhysicalBlockSize, MmCached);
    VIDMM_GLOBAL::m_PhysicalBlock = 0LL;
  }
}
